#@copyright : Hossam
CC=arm-none-eabi
CFLAGS=-mcpu=cortex-m3 -mthumb -gdwarf-2
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
ASSRC= $(wildcard *.s)
ASOBJ= $(ASSRC:.s=.o)
Project_name=learn-in-depth-Cortex-m3
all: $(Project_name).bin
	@echo "	Building is done	"

%.o: %.s
	$(CC)-as.exe $(CFLAGS)  $< -o $@
%.o: %.c
	$(CC)-gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)-ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map

$(Project_name).bin: $(Project_name).elf
	$(CC)-objcopy.exe -O binary $< $@


clean:
	rm *.elf *.bin
	@echo "	Executable files is removed	"
clean_all:
	rm *.o *.elf *.bin
	@echo "	Everything is removed	"