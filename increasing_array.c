# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	
	long long int n;

	if(scanf("%lld" , &n)!=1)
		return 1;

	long long int input[n];
	
	for(int i = 0 ; i < n ; i++)
	{
		if(scanf("%lld", &input[i])!=1)
			return 1;
	}

	long long answer = 0;
	for(int i = 1 ; i < n ; i++)
	{
		if(input[i] < input[i-1])
		{
			answer += input[i-1] - input[i];
			input[i] = input[i-1];
		}
	}

	printf("%lld" , answer);
	return 0;

}
