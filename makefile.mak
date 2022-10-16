a:
	gcc -c -Wall Power.c -lm
	gcc -c -Wall reverse.c -lm
	gcc -c -Wall palindrome.c -lm
	gcc -c -Wall major1.c -lm
	gcc -o binops Power.o reverse.o palindrome.o major1.o -lm

clean:
	rm -f *.o binops

run:
	./binops