# include <stdio.h>
# include <stdlib.h>


int main(void)
{
	int n;
	if(scanf("%d" , &n)!=1)
		return 1;
			

	long long res = 0;
	
	for(int i = 1 ; i < n ; i++)
	{
		int num;
		if(scanf("%d" , &num)!=1)
			return 1;
		
		res+=num;
	}
	
	long long ans = (long long)n*(n+1)/2 - res;
	printf("%lld\n" , ans);
	return 0;
}
