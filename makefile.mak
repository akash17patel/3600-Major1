a: Power.c reverse.c palindrome.c replace.c major1.c
	gcc -c -Wall major1.c -lm
	gcc -c -Wall reverse.c -lm
	gcc -c -Wall Power.c -lm
	gcc -c -Wall palindrome.c -lm
	gcc -c -Wall replace.c -lm
	gcc Power.o reverse.o palindrome.o replace.o major1.o -o binops -lm

clean:
	rm -f *.o binops