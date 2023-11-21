#include<Stdio.h>
main()
{
	int n,k=0,i;
	printf("Enter no");
	scanf("%d" ,&n);
	for(i=1;i<=n;i++)
	{
		if(n*i==0)
		k=k+1;
	}
	if(k==2)
	printf("Prime no");
	else
	printf("Not a prime no");
}
