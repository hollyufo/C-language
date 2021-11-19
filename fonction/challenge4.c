#include <stdio.h>
int divededby(int, int);
int prime(int);
int main()
{
    int x,y,result,pr;
    printf("enter first number : ");
    scanf("%d", &x);
    printf("enter the second number : ");
    scanf("%d", &y);
    result = divededby(x,y);
    printf("Division of %d and %d is %d: ", x, y, result);
    pr=prime(result);
	if(pr==0)
		printf("\n%d IS A PRIME NUMBER\n",result);
	else
		printf("\n%d IS NOT A PRIME NUMBER\n",result);

}
int divededby(int a, int b)
{
        return a/b;
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}