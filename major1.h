#include <stdio.h>
#include<math.h>
#include <stdbool.h>

//Header file: REVERSE.C

// Function to reverse bits of num
unsigned int reverseBits(unsigned int num)
{
	unsigned int NO_OF_BITS = sizeof(num) * 8;
	unsigned int reverse_num = 0;
	int i;
	for (i = 0; i < NO_OF_BITS; i++) {
		if ((num & (1 << i)))
			reverse_num |= 1 << ((NO_OF_BITS - 1) - i);
	}
	return reverse_num;
}

//Header file: POWER.C

void powerOfTwo(int n)
{
	int flag;
	flag = (n && (!(n & (n - 1))));
	if (flag == 1)
	{
		printf("%d is a power of 2\n", n);
	}
	else
	{
		int next = pow(2, ceil(log(n) / log(2)));
		printf("%d is not a power of 2\n", n);
		printf("Next higher integer that is power of 2 is %d\n", next);
	}
}