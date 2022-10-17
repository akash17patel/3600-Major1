#include<stdio.h>
int three()
{
	FILE *rep = fopen("major1.c", "r");
	int number=0,mask,index;
    while(1)
    {   
	    printf("enter number: ");
	    scanf("%d",&number);
        if(number<0 || number>2000000000){
            continue;
          }
        else{break;}
    }
    
    while(1)
    {
	    printf("enter mask: ");
	    scanf("%d",&mask);
        if(mask<0 || mask>3000000000){
            continue;
        }
        else{break;}
    }
    
    while(1)
    {
	    printf("enter position(0-indexed): ");
	    scanf("%d",&index);
	    if(index>31 || index<0){
	        continue;
          }
        else{break;}
    }

	
	int temp=(mask>>index)&1;

	
	if(temp==1){
		temp=temp<<index;
		number|=temp;
	}
	else{ 
		int flag=4294967295;
		temp=1<<index;
		
		flag=flag^temp;
		number&=flag;
	}

	printf("Converted No: %d\n",number);
	return 0;
	fclose(rep);
}