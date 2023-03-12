 #include<stdio.h>
 int main()
 {
 	int a,b,c,d;
 	printf("...Finding the largest value among random 4 values A,B,C,D...");
 	printf("\n\nEnter value of A : ");
 	scanf("%d",&a);
 	printf("\nEnter value of B : ");
 	scanf("%d",&b);
 	printf("\nEnter value of C : ");
 	scanf("%d",&c);
 	printf("\nEnter value of D : ");
 	scanf("%d",&d);
 	
 	if (a!=b and a!=c and a!=d and b!=c and b!=d and c!=d)
 		{
		printf("\nAll values are distinct");
			if(a>b and a>c and a>d)
 			printf("\n>%d is the largest number.",a);
 			else 
 				{
 					if(b>c and b>d)
 					printf("\n>%d is the largest number.",b);
 					else
 					{
 						if (c>d)
 							printf("\n>%d is the latgest number",c);
 						else
 							printf("\n>%d is the latgest number",d);
					}
				}
		}
	else 
		printf("\nPlease enter distinct values");
 	return 0;
 }
