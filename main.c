#include<stdio.h>
#include"add.h"
#include"sub.h"

int main()
{
	int a,b;
	printf("\n Enter value a:: ");
	scanf("%d",&a);
	printf("\n Enter value b:: ");
	scanf("%d",&b);

	add(a,b);
	sub(a,b);

	return 0;
}
