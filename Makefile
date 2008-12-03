PROGNAME=main
CC=avr-g++
MMCU=atmega32
OPT= -O2
ARGS=$(OPT) -mmcu=$(MMCU)
HEX=$(PROGNAME).hex

all: $(HEX)

$(HEX): $(PROGNAME).elf
	avr-objcopy -O ihex $^ $@
	
$(PROGNAME).elf: $(PROGNAME).o
	$(CC) $(ARGS) $^ -o $@	
	
$(PROGNAME).o: $(PROGNAME).cpp lib/config.h
	$(CC) $(ARGS) -c $(PROGNAME).cpp -o $@
	
clean:
	rm -f *.o
	rm -f sumolib/*.o
	rm -f $(PROGNAME).elf
	

	
	
	
	
	

