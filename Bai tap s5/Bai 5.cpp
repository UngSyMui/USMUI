# include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0;i<n;i++){
	
	printf("\n a[%d]=",i);
	scanf("%d",&a[i]);
	}
	
	int min;
	int min1;
	for(int i=0;i<n;i++){
		
		if(a[i]>0){
		min = a[i];
		break;
		}
		
	}
	for(int i=0;i<n;i++){
		if(a[i]>0&&a[i]<min1){
			min1=a[i];
		}
	}
	printf("\nSo duong nho nhat la %d", min1);
}
