#include<stdio.h>
#include<math.h>
main()
{
	int n,r,sum=0,a;
	printf("enter a value:");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(a==sum)
    printf("is a armstrong number");
	else
		printf("is not a armstrong number");
}
