#include<stdio.h>
int main()
{
	int a,b,sum,sub,quotient,remainder;
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	quotient=a/b;
	remainder=a%b;
	printf("%d is the sum\n",sum);
	printf("%d is the sub\n",sub);
	printf("%d is the quotient\n",quotient);
	printf("%d is the remainder\n",remainder);
	return 0;
}
