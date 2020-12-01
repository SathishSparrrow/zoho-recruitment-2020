#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,n,z;
	printf("Enter Input Number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			printf(" ");
		}
		z = i;
		for(k=1;k<=i;k++)
		{
			printf("%d",z);
			z++;
		}
		printf("\n");
	}
}
