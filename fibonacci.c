#include <stdio.h>

int main(void) {
	int x,y,z;

	while(1) {
		x=0;
		y=1;
		do{
			printf("%d\n",x);

			z=x+y;
			x=y;
			y=z;
		} while(x<255);
		break;
	}
}

