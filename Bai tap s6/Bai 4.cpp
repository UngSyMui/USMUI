# include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n; i++){
		printf("\n a[%d]=",i);
		scanf("%d", &a[i]);
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int a1 =a[0];
	int b =a[0];
	for(int i=0;i<n;i++){
		if(a[i]>a1){
			a1=a[i];
		}
		if(a[i]<b){
			b=a[i];
		}
	}
	int a2=a1<0?-a1:a1;
	int b1=b<0?-b:b;
	if(b1>a2){
		printf("Doan can tim %d %d ", -b1, b1);
	}else{
		printf("Doan can tim %d %d ", -a2, a2);
	}
	
		
	
	
	
	

}
