PROGNAME=main
CC=avr-g++
MMCU=atmega32
OPT= -O2
ARGS=$(OPT) -mmcu=$(MMCU)
HEX=$(PROGNAME).hex

all: $(HEX)

$(HEX): $(PROGNAME).elf
	avr-objcopy -O ihex $^ $@
	
$(PROGNAME).elf: $(PROGNAME).o lib/led.o lib/wait.o lib/motor.o lib/switch.o lib/ground.o
	$(CC) $(ARGS) $^ -o $@	
	
$(PROGNAME).o: $(PROGNAME).cpp
	$(CC) $(ARGS) -c $(PROGNAME).cpp -o $@
	
lib/led.o: lib/led.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/led.cpp -o $@
	
lib/switch.o: lib/switch.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/switch.cpp -o $@
	
lib/wait.o: lib/wait.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/wait.cpp -o $@
	
lib/ground.o: lib/ground.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/ground.cpp -o $@
	
lib/motor.o: lib/motor.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/motor.cpp -o $@
	
clean:
	rm -f *.o
	rm -f sumolib/*.o
	rm -f $(PROGNAME).elf
	

	
	
	
	
	

