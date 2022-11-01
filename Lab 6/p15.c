#include<stdio.h>

int main()
{
	int num, temp, n, i, f, sum=0;
	scanf("%d", &num);
	temp = num;
	while(temp)
	{
		n = temp % 10;
		f = 1;
		for(i = 1; i <= n; i++)
			f = f*i;
		sum = sum + f;
		temp = temp/10;
	}

	if(num == sum)
		printf("%d is a strong number.\n", num);
	else
		printf("%d is not a strong number.\n", num);

	return 0;
}

