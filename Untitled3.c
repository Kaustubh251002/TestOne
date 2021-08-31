/* Moubani Ghosh
20070122081*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,a,b;
	printf("enter number of rows:");
	scanf("%d",&i);
	printf("enter number of columns:");
	scanf("%d",&j);
	int A[i][j],B[i][j],C[i][j],D[i][j], E[i][i];
    printf("enter values for matrix 1 row wise:\n");
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			scanf("%d",&A[a][b]);
		}
	}	
	printf("enter values for matrix 2 row wise:\n");
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			scanf("%d",&B[a][b]);
		}
	}
	for(a=0;a<i;a++)
	{
		for(b=0;b<i;b++)
		{
			C[a][b]=0;
		}
	}
	printf("The addition matrix is:\n");
    for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			C[a][b]+=A[a][b]+B[a][b];
		}
	}	
    for(a=0;a<i;a++)
    {
    	for(b=0;b<j;b++)
    	{
    		printf("%d\t",C[a][b]);
		}
	    printf("\n");
	}
	for(a=0;a<i;a++)
	{
		for(b=0;b<i;b++)
		{
			D[a][b]=0;
		}
	}
	
	printf("The subtraction of the matrices is:\n");
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			D[a][b] += A[a][b] - B[a][b];
		}
	}	
    for(a=0;a<i;a++)
    {
    	for(b=0;b<j;b++)
    	{
    		printf("%d\t",D[a][b]);
		}
	    printf("\n");
	}

/*
	if(i==j)
	{
			printf("\n Multiplication is:  \n");
			int a,b,c;
			for(a=0;a<i;a++)
			{
				for(b=0;b<j;b++)
				{
					for(c=0;c<j;c++)
					{
						E[a][b]+=(A[a][b]) * (B[c][b]);
					}
				}
			}
		    for(a=0;a<i;a++)
			{
				for(b=0;b<j;b++)
				{
					printf("%d\t",E[a][b]);
				}
			    printf("\n");
			}	
	}
	else
	{
		printf("Multiplication not possible!");
	}
*/
return 0;
}


