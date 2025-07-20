# include <stdio.h>
# include <stdlib.h>
# include <string.h>


int main(void)
{

	int freq[26] = {0};
	//string s;
	char s[1000000];

	if(scanf("%1000000s" , s)!=1)
		return 1;
	
	int n = strlen(s);

	for(int c = 0 ; c < n ; c++)
		freq[s[c]-'A']++;


	char half[1000000];

	char mid[2] = {'?' , '\0'};

	
	for(int c = 0 ; c < 26 ; c++)
	{
		if(freq[c] %2 == 1)
		{
			if(n%2 == 0 || mid[0]!='?')
			{
				printf("NO SOLUTION\n");
				return 0;
			}
			else
			{
				//mid = 'A' + c;
				mid[0] = 'A' + c;
			}
			freq[c]--;

		}
		//freq[c]--;
		

	}

	int idx =0;
	for(int i = 0 ; i < 26 ; ++i)
	{
		for(int j = 0 ; j < freq[i]/2 ; j++) 
		{
			half[idx++] = 'A' + i;
		}
	}
	half[idx] = '\0';


	printf("%s" , half);

	if(mid[0]!='?')
		printf("%s" , mid);

	for(int i = idx-1; i >= 0 ; i--)
		printf("%c" , half[i]);
	
	printf("\n");
	return 0;
}
