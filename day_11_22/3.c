#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
#include <stdlib.h> 3
#define N 200
int main()
{
	int i = 0, k;
	char a[N];
	gets(a);
	puts(a);
	while (a[i]=='*')
		i++;
	k = i;
	for (i = 0; a[k] != 0; i++,k++)
		a[i] = a[k];
	a[i] = '\0';
	printf("%s\n", a);
	system("pause");
	return 0;
}


void str_copy(char target[], char source[]) {
	int i = 0;
	/*while (source[i] != "\0") {
		target[i] = source[i];
		i++;
	}*/
	//while (target[i] = source[i])i++;
	target[i] = "\0";
}
