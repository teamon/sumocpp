PROGNAME=main
CC=avr-gcc
MMCU=atmega32
OPT= -O2
ARGS=$(OPT) -mmcu=$(MMCU)
HEX=$(PROGNAME).hex

all: $(HEX)

$(HEX): $(PROGNAME).elf
	avr-objcopy -O ihex $^ $@
	
$(PROGNAME).elf: $(PROGNAME).o lib/led.o lib/wait.o
	$(CC) $(ARGS) $^ -o $@	
	
$(PROGNAME).o: $(PROGNAME).cpp
	$(CC) $(ARGS) -c $(PROGNAME).cpp -o $@
	
lib/led.o: lib/led.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/led.cpp -o $@
	
lib/wait.o: lib/wait.cpp lib/sumo.h
	$(CC) $(ARGS) -c lib/wait.cpp -o $@
	
clean:
	rm -f *.o
	rm -f sumolib/*.o
	rm -f $(PROGNAME).elf
	

	
	
	
	
	

