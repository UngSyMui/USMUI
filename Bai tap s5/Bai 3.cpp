# include <stdio.h>
int main(){
	int n;
	printf("Nhap n =  ");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0;i<n;i++){
	
	printf("\n a[%d]=",i);
	scanf("%d",&a[i]);
	}
	int x;
	printf("\n Nhap vao x");
	scanf("%d",&x);
	
	int c=0;
	for(int i=0;i<n;i++){
		if (a[i]==x){
			printf("\nTim thay x trong mang");
			c++;
			break;
		}
	}
	if (c==0)printf("\nKhong tim thay x trong mang");
	
}
