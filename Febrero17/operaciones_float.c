/* Programa 17 de febrero: jerarquia de operaciones con enteros y decimales*/

#include <stdio.h>

int main(){

	float a,b,c,d;
	float e1,e2,e3,e4;
	a=-2;
	b=6;
	c=4;
	d=2.5;
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*(c/d);
	e4=a+b*c/d;
	printf("e=(a+b)*c/d=%f\n",e1);
	printf("e=((a+b)*c)/d=%f\n",e2);
	printf("e3=(a+b)*(c/d)=%f\n",e3);
	printf("e4=a+b*c/d=%f\n",e4);
	
	
}
