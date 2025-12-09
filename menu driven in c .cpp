#include <stdio.h>
int main()
{ 
  int c,num,rows,sum=0,div=0;
  do 
  {
    printf("\nMenu:\n");
    printf("1. Check if a number is perfect\n");
    printf("2. Print prime numbers given by user\n");
    printf("3. Print shapes\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c)
   { 
     case 1:
     	printf("enter a number: ");
     	scanf("%d",& num);
     	for (int i = 1; i < num; i++) {
        if (num % i == 0)
		 {
            sum += i;
        }}if(sum==num)
        { printf("number is perfect\n");
		}else{
			printf("number is not perfect\n");
		}break;
		
	case 2:
		printf("enter a number: ");
		scanf("%d",&num);
		for(int i=1;i<=num;i++)
        { 
        if (num % i == 0)
        {div++;}
        }
        if (div == 2)
        {
        printf("The number is Prime\n");
        }
        else
        {
        printf("The number is not prime\n");
        } break;
    
    case 3:
    	printf("Enter the number of rows: ");
        scanf("%d", & rows);
        for(int i=1;i<=rows;i++)
    { 
        for(int j=1;j<=i;j++)
    {
        printf("* ");
    }
	    printf("\n");
    }
    for (int i = 1; i <= rows; i++) 
    {
    for (int j = 1; j <= rows; j++) 
	{
    
    printf("* ");
    
    }
    }
    printf("\n");
    }
    for(int i=1; i<=rows;i++)
	{
	for(int k=1; k<= rows - i; k++)
	{
	printf(" ");
	}
	printf("*");
	if(i>1){
	for(int j=1; j<=2*(i-1)-1; j++){
	printf(" ");
	}
	printf("*");
    }
	printf("\n");
    }
    for(int i=rows-1; i>=1; i--)
	{
    for(int k=1; k<=rows-i; k++)
 	{
 	printf(" ");
	}
	printf("*");
	if(i>1)
	{
	for(int j=1; j<=2*(i-1)-1; j++){
	printf(" ");
	}
	printf("*");
	}
	printf("\n");
    } break;
    
    case 4:
    printf("Exiting the program.\n");
    break;

    default:
    printf("Invalid choice. Please enter a valid option.\n");
    }
    } while (c != 4);

    return 0;
}
 

        
	
        
   