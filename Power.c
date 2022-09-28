#include<stdio.h>
#include<math.h>


int power()
{
	limitp:
	printf("Enter a positive integer less than 2 billion: ");
	int n;
	scanf_s("%d", &n);

	while (!((n<2000000000) && (n>0))){
		printf("[ERROR] The number you entered is out of range\n\n");
        //input another number
		goto limitp;
	}

	powerOfTwo(n);

}