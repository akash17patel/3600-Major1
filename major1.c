#include <stdio.h>
#include "major1.h"
#include "reverse.c"
#include "Power.c"
//include "palindrome.c"MISSING FILE
//#include "replace.c"MISSING FILE

int main()
{
    //loop pointer
    xyz:
    //option list
    printf("Enter the menu option for the operation to perform:\n");
    printf("(1) POWER OF 2\n");
    printf("(2) REVERSE BITS\n");
    printf("(3) REPLACE BIT POSITION FROM MASK\n");
    printf("(4) PALINDROME\n");
    printf("(5) EXIT\n\n");

    //input option
    int choice;
    scanf("%d", &choice);

    //make sure input is valid
    if(choice<1 || choice>5){
        printf("[ERROR] The number you entered is out of range\n\n");
        //loops back
        main();
    }

    //option selection
    else if(choice == 1){
        printf("Power of 2 SELECTED\n\n");
        power();
        goto xyz;
    }
    else if(choice == 2){
        printf("Reverse bits SELECTED\n\n");
        reverse();
        goto xyz;
    }
    else if(choice == 3){
        printf("Replace bit position from mask SELECTED\n\n");
        printf("MISSING FILE\n\n");
        //replace();
        goto xyz;
    }
    else if(choice == 4){
        printf("Palindrome SELECTED\n\n");
        printf("MISSING FILE\n\n");
        //palindrome();
        goto xyz;
    }
    else if(choice == 5){
        printf("\nProgram will now terminate. GOODBYE!!!\n");
        return 0;
    }
}
