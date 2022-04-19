# include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(int i=0;i<n; i++){
		printf("\n a[%d]=",i);
		scanf("%d", &a[i]);

	}
	for(int i=0;i<n;i++){
	if (a[i]%2!=0){

		for(int j=i+1;j<n;j++){
			if(a[j]%2!=0&&a[i]>a[j]){
				int temp =a[j];
				a[j]=a[i];
				a[i]= temp;
			}

		}
						
		}
		}
			for(int i=0;i<n;i++){
				printf("%d ", a[i]);
		}
}
		

	

