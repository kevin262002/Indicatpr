#include<stdio.h>

int main(){
		
	int arr[] = {10,20,30,40,50,60,70,80,90};
	int *p;
		
	p =& arr;
	
	printf("%d\n",*(p+8));
	printf("%d\n",*(p+7));
	printf("%d\n",*(p+6));
	printf("%d\n",*(p+5));
	printf("%d\n",*(p+4));
	printf("%d\n",*(p+3));
	printf("%d\n",*(p+2));
	printf("%d\n",*(p+1));
	printf("%d\n",*(p+0));
							
	return 0;
}
