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
	int min=a[0];
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	if(min<0){
		if(0-min>max){
		
		printf("\n Doan [a,b] la [%d,%d]", min, (0-min));
	} 
	 else{
		printf("\n Doan [a,b] la [%d,%d]", (0-max), max);
	}}else{
			printf("\n Doan [a,b] la [%d,%d]", (0-max), max);
	}
	
	
	

}
