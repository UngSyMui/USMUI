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
	int c=0;
	for(int i=n-1;i>=0;i--){
		if(a[i]%2!=0){
			printf("So le cuoi cung cua mang la: %d", a[i]);
			c++;
			break;
		}
	}
	if(c==0) printf("Mang khong co so le");
}
