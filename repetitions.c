# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	char input[1000000];

	if(scanf("%1000000s" , input)!=1)
		return 1;

	long long c = 1;
	
	
	long long max = 1;
	long long curr = 1;


	while(input[c]!='\0')
	{
		if(input[c]==input[c-1])		
			curr+=1;
		
		else
		{
			max = (curr > max) ? curr : max;
			curr = 1;
		}

		c+=1;
	}

	max = (curr > max) ? curr : max;

	printf("%lld" , max);
	return 0;
}

