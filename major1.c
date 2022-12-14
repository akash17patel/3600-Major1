#include "major1.h"
#include "reverse.c"
#include "Power.c"
#include <stdio.h>
#include "palindrome.c"
#include "replace.c"

int main()
{
    FILE *pw = fopen("Power.c", "r");
    FILE *rev = fopen("reverse.c", "r");
    FILE *pal = fopen("palindrome.c", "r");
    FILE *rep = fopen("replace.c", "r");
    //loop pointer
    xyz:
    //option list
    printf("\n\nEnter the menu option for the operation to perform:\n");
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
        one();
        goto xyz;
    }
    else if(choice == 2){
        printf("Reverse bits SELECTED\n\n");
        two();
        goto xyz;
    }
    else if(choice == 3){
        printf("Replace bit position from mask SELECTED\n\n");
        three();
        goto xyz;
    }
    else if(choice == 4){
        printf("Palindrome SELECTED\n\n");
        four();
        goto xyz;
    }
    else if(choice == 5){
        printf("\nProgram will now terminate. GOODBYE!!!\n");
        return 0;
    }
    fclose(pw);
    fclose(rev);
    fclose(pal);
    fclose(rep);
}
