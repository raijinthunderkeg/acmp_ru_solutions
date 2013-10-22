#define _CRT_SECURE_NO_WARNINGS
//http://acmp.ru/?main=task&id_task=2
#include <stdio.h>

int sum(int);
int main()
{
	int a;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	scanf("%i",&a);
	printf("%i",sum(a));
	return 0;
}
int sum(int n)
{
	int result = 0;
	int count = 0 ;
	if(n<=0) count = 2+-1*n;
	else count = n;

	return (1+n)*count/2;
}