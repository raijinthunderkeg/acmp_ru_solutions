#define _CRT_SECURE_NO_WARNINGS
//http://acmp.ru/?main=task&id_task=1
#include <stdio.h>


int main()
{
	long a,b;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	scanf("%ld%ld",&a,&b);
	printf("%ld",a+b);
	return 0;
}