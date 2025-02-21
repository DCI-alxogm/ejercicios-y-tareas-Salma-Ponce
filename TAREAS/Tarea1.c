/* TAREA 1: Jerarquia de operaciones con enteros y decimales*/

#include <stdio.h>

int main(){

	float a,b,c,d;
	float e1,e2,e3,e4;
	a=-4;
	b=3;
	c=1;
	d=2.5;
	e1=(a-b)*c/d*2;
	e2=((a+b*4)*c+3)/d;
	e3=(a+b)*(c+1/d);
	e4=a+b*c/d-4;
	printf("e1=(a-b)*c/d*2=%f\n",e1);
	printf("e2=((a+b*4)*c+3)/d=%f\n",e2);
	printf("e3=(a+b)*(c+1/d)=%f\n",e3);
	printf("e4=a+b*c/d-4=%f\n",e4);
	
	
}
