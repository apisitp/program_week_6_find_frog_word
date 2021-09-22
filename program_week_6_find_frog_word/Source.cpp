#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void main()
{
	char text[100];
	int ans = 0;
	scanf("%s", &text);
	for (int i = 0; i < strlen(text) - 4; i++)
	{
		if (text[i] == 'F' || text[i] == 'f')
		{
			if (text[i + 1] == 'R' || text[i + 1] == 'r')
			{
				if (text[i + 2] == 'O' || text[i + 2] == 'o')
				{
					if (text[i + 3] == 'G' || text[i + 3] == 'g')
					{
						ans += 1;
					}
				}
			}
		}
	}
	printf("%d", ans);
}