#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,x,y;
	int res;
	char choice;
	float result;
	printf("\nMenu:");
	printf("\npress A for arithmetic operations");
	printf("\npress R for relational operations");
	printf("\nenter your choice: ");
	scanf("%c",& choice);
	switch(choice)
	{
		case 'A':
			printf("\nMenu:");
			printf("\npress 1 for sum");
			printf("\npress 2 for subtraction");
			printf("\npress 3 for multiplication");
			printf("\npress 4 for division");
			printf("\npress 5 for mode");
			printf("\nenter your choice: ");
			scanf("%d",&x);
			switch(x)
			{
				case 1:
					printf("\nenter two numbers: ");
					scanf("%d %d",&n1,&n2);
					res=n1+n2;
					printf("result=%d",res);
					break;
				case 2:
					printf("\nenter two numbers: ");
					scanf("%d %d",&n1,&n2);
					res=n1-n2;
					printf("result=%d",res);
					break;
				case 3:
					printf("\nenter two numbers: ");
					scanf("%d%d",&n1,&n2);
					res=n1*n2;
					printf("result=%d",res);
					break;
				case 4:
					printf("\nenter two numbers: ");
					scanf("%d%d",&n1,&n2);
					if(n2!=0)
					{
					result=n1/n2;
					printf("result=%f",result);}
					else
                    printf("Error: Division by zero\n");
					break;	
				case 5:
					printf("\nenter two numbers: ");
					scanf("%d%d",&n1,&n2);
					if(n2!=0)
					{
					res=n1%n2;
					printf("result=%d",res);}
					else
                	printf("Error: Modulus by zero\n");
					break;		
					break;
				}
		case 'R':	
			printf("\nMenu:");
			printf("\npress 1 for greater");
			printf("\npress 2 for smaller");
			printf("\npress 3 for less or equals to");
			printf("\npress 4 for greater or equals to");
			printf("\npress 5 for not equals to");
			printf("\npress 6 for equals to");
			printf("\nenter your choice: ");
			scanf("%d",&y);
		    switch (y)
		    {
		    	case 1:	
		    		printf("\nenter two numbers: ");
					scanf("%d%d",&n1,&n2);
					printf("Result: %d\n", n1 > n2);
					break;
				case 2:	
		    		printf("\nenter two numbers: ");
					scanf("%d%d",&n1,&n2);
					printf("Result: %d\n", n1 < n2);
					break;		
				case 3:	
		    		printf("\nenter two numbers: ");
					scanf("%d%d",&n1,&n2);
					printf("Result: %d\n", n1 <= n2);
					break;		
				case 4:	
		    		printf("\nenter two numbers: ");
					scanf("%d%d",&n1,&n2);
					printf("Result: %d\n", n1 >= n2);
					break;		
				case 5:	
		    		printf("\nenter two numbers: ");
					scanf("%d%d",&n1,&n2);
					printf("Result: %d\n", n1 != n2);
					break;		
				case 6:	
		    		printf("\nenter two numbers: ");
					scanf("%d%d",&n1,&n2);
					printf("Result: %d\n", n1 == n2);
					break;
					break;
				}
	default:
		printf("invalid choice");
	}
	return 0;				
}
