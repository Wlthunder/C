# include <stdio.h>

int main(void)
{
	int i, j;

	for (i=0; i<3; ++i)
		for (j=2; j<5; ++j)
			printf("込込!\n");
		printf("細細!\n");

	return 0;
}
/*
壓VC++6.0嶄議補竃潤惚頁��
-------------
込込!
込込!
込込!
込込!
込込!
込込!
込込!
込込!
込込!
細細!
--------------
*/