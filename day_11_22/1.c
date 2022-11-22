#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
#include <stdlib.h> 3
#define N 1000
int main()
{
	char line[1000];
	int maxlen = 0, i = 0, max = 0, end = 0;
	gets(line);
	while(line[i])
	{
		while (line[i] != "" && line[i])
		{
			i++;
			maxlen++;
		}
		if (max < maxlen)
		{
			max = maxlen;
			end = i;
		}
		while (line[i] == "")
		{
			i++;
			maxlen = 0;
		}
	}
	for (i = end - max; i < end; i++)
		printf("%c", line[i]);
	printf("\n");
	system("pause");
	return 0;
}
