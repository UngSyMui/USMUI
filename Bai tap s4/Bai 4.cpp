# include <stdio.h>
# include <math.h>
int main(){
	int n;
	do{
	
	printf("Nhap n>0 \n");
	scanf("%d",&n);
	}while (n<=0);
	
	int sodu;
	for(int i=1;n>0; n/=10){
	
	sodu=n%10;}
	
	printf("Chu so dau tien %d",sodu);
	
	
	
	
}
