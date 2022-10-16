// Driver code

#include <stdio.h>


void reverse()
{
	limit:
	printf("Enter a positive integer less than 2 billion: ");
	int x;
	scanf("%d", &x);
	
	while (!((x<2000000000) && (x>0))){
		printf("[ERROR] The number you entered is out of range\n\n");
        //input another number
		goto limit;
	}
	
	printf("%d", reverseBits(x));
}
