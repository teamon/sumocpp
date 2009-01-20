PROGNAME=paz
CC=avr-g++
MMCU=atmega32
OPT= -O2
ARGS=$(OPT) -mmcu=$(MMCU)
HEX=$(PROGNAME).hex

all: $(HEX)

$(HEX): $(PROGNAME).elf
	avr-objcopy -O ihex $^ $@
	
$(PROGNAME).elf: $(PROGNAME).o lib/led.o lib/wait.o lib/motor.o lib/switch.o lib/ground.o lib/dist.o lib/queue.o
	$(CC) $(ARGS) $^ -o $@	
	
$(PROGNAME).o: $(PROGNAME).cpp
	$(CC) $(ARGS) -c $(PROGNAME).cpp -o $@
	
lib/led.o: lib/led.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/led.cpp -o $@
	
lib/switch.o: lib/switch.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/switch.cpp -o $@
	
lib/wait.o: lib/wait.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/wait.cpp -o $@
	
lib/dist.o: lib/dist.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/dist.cpp -o $@
	
lib/ground.o: lib/ground.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/ground.cpp -o $@
	
lib/motor.o: lib/motor.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/motor.cpp -o $@
	
lib/queue.o: lib/queue.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/queue.cpp -o $@
	
clean:
	rm -f *.o
	rm -f sumolib/*.o
	rm -f $(PROGNAME).elf
	

	
	
	
	
	

