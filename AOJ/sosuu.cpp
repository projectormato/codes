#include <stdio.h>
#include <math.h>

int main(void)
{
	int i,j,k;

	printf("2 ");

	for(i=3;i<=10000;i+=2)
	{
		k=0;
		for(j=3;j<=sqrt(i);j+=2)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}

		if(k==0) printf("%d ",i);
	}

	printf("\n");

	return 0;
}

