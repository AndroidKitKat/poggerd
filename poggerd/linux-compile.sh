clang -target x86_64-pc-linux-elf \
	-v \
	-I/Users/skg/Downloads/glibc-2.33/ \
	-I/Users/skg/Downloads/glibc-2.33/bits \
	-I/Users/skg/Downloads/glibc-2.33/misc/ \
	-I/Users/skg/Downloads/glibc-2.33/include \
	-lobjc \
	main.m -o /tmp/pog_linux 
