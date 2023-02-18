#include<stdio.h>
int main(){
	
	int a=20;
	int *p=&a;
	int **q=&p;

	printf("\nValue of a is %d",a);
	printf("\nMemory address of a is %u",&a);
	printf("\nValue of p pointer is %d",*p);
	printf("\nMemory address of p is %u",&p);
	printf("\nValue of q chain pointer is %d",**q);
	printf("\nMemory address of q which is pointer toward p pointer %u",&q);
	
	
	
	return 0;
}
