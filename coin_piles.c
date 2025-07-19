# include <stdio.h>
# include <stdlib.h>

void test(int a , int b)
{
	if(((a+b) % 3 == 0) && (a <= 2*b) && (b <= 2*a))
		printf("YES\n");
	else
		printf("NO\n");
	
}

int main(void)
{
	int t;
	if(scanf("%d" , &t)!=1)
		return 1;

	for(int i = 0 ; i < t ; i++)
	{
		int a , b;
		if(scanf("%d%d" , &a , &b)!=2)
			return 1;
		test(a , b);
	}
	return 0;
}
