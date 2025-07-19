# include <stdio.h>
# include <stdlib.h>

int main()
{
	int n;
	if(scanf("%d" , &n)!=1)
	{
		return 1;	
	}
	int answer = 0;

	for(long long m = 5 ; m<=n ; m = m*5)
	{
		answer = answer + n/m;
	}
	printf("%d" , answer);
	return 0;
}
