# include <stdio.h>

int f(float i)
{
	return 10.8;
}

int main(void)
{
	float i = 99.9;
	
	printf("%f\n", i);
	i = f(5);
	printf("%f\n", i);

	return 0;
}
