#include <stdio.h>
int main(void)
{
	
	int i=1,j=2,k=3,m=2;
	
	printf( "%d\n", i == 1 );
	printf( "%d\n", j == 3 );
	printf( "%d\n", i >= 1 && j < 4 );
	printf( "%d\n",k+m <j || 3-j >=k);
	printf( "%d\n", !m );
	printf( "%d\n",!(j-m));
	
	return 0;
}
