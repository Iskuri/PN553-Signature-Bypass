all:
	arm-none-eabi-gcc -O2 -mthumb -c functions.c
	arm-none-eabi-objdump -d functions.o
	arm-none-eabi-objcopy --only-section=.text --image-base=0x2000 --section-alignment=0x2000 -O binary functions.o functions.bin
	
	gcc -o run main.c  -lssl -lcrypto
