# include <stdio.h>
# include <stdlib.h>


int main(void)
{
	long long n;

	if(scanf("%lld" , &n)!=1)
		return 1;
	while(n!=1)
	{
		printf("%lld " , n);
		if(n%2==0)
			n = n/2;
		else
			n = (3*n) + 1;
	}
	printf("1\n");
	return 0;

}


