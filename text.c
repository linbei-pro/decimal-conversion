
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//非递归实现
const char f[] = "0123456789ABCDEF";
void fun1(int n, int m)
{
	int i = 0;
	char a[1000];
	while (n)
	{
		a[i] = f[n % m];
		n = n / m;
		i++;
	}
	while (i--)
		printf("%c", a[i]);
}

//递归实现
void fun(int n, int m)
{
	if (n < m)
	{
		if (n < 10)
			printf("%d", n);
		else
			printf("%c", n - 10 + 'A');
	}
	else
	{
		fun(n / m, m);
		if (n % m < 10)
			printf("%d", n % m);
		else
			printf("%c", n % m - 10 + 'A');
	}
}

int main()
{
	int b, c;
	scanf_s("%d %d", &b, &c);
	fun(b, c);
	printf("\n");
	fun1(b, c);
	printf("\n");
	system("pause");
	return 0;
}
