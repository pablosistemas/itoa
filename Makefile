all: itoa

itoa: itoa.c
	gcc itoa.c -o itoa -std=gnu99

clean:
	rm itoa
