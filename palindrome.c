//Program checks for binary representation of positive integer less than 2 billion and if it is a palindrome or not.

#include <stdio.h>
#define SIZE 32
int palindrome()

{

    unsigned int n;
    printf("Enter a number in the range of 2 billion: ");
    scanf("%d",&n);
    int a[SIZE]={0};
    int i=SIZE-1;
    while(n!=0){
        a[i--]=n&1;
        n=n>>1;

    }

    printf("Binary representation: ");
    for(int x=0;x<SIZE;x++)
        printf("%d",a[x]);
    printf("\n");
    for(int x=0,n=SIZE-1;x<n;x++,n--){
        if(a[x]!=a[n]){
            printf("This is not a palindrome\n");
            return 0;

        }
    }

    printf("This is a palindrome\n");
    return 0;

}