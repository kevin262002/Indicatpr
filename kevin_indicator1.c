#include<stdio.h>

void swap(int *a , int *b){
	
	int c ;
	
	c=*a;
	*a=*b;
	*b=c;
	
	printf("After SWAP A : %d\n",*a);
	printf("After SWAP B : %d\n",*b);
}
int main(){
		
	int a,b;
		
	printf("ENTER A : ");
	scanf("%d",&a);
	
	printf("ENTER B : ");
	scanf("%d",&b);
		
	swap(&a,&b);
		
	return 0;
}
