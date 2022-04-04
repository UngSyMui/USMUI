#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int b;
	scanf ("%d",&b);
	int c;
	scanf("%d",&c);
	int min;
	min=a;
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	printf("so nho nhat la : %d",min);
	
	
		
}
