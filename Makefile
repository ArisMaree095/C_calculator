all: main.c calculator.c
	gcc -o calculator main.c calculator.c

clean:
	rm -f calculator