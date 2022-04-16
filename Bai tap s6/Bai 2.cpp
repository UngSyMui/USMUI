# include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("\n a[%d] =",i);
		scanf("%d",&a[i]);
	}
	int x;
	printf("\n Nhap x = ");
	scanf("%d",&x);
	int min=x-a[0];	
	for(int i=0; i<n;i++){
		if(x-a[i]<min){
			min=x-a[i];
		}
		
	}
	int b=x-min;
	printf("\n Gia tri gan x nhat la %d", b );
	
}
