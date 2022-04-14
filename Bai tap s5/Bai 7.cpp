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

	int d=0;
	int max=0;
	int tong=0;

	
	for(int i=0;i<n;i++){
	
		if (a[i]<0){
			if(tong>max){
			max=tong;
			tong=0;
			}
	   	}else{
	   	tong+=a[i];
			}
		}
	if(max>tong) printf(" Tong so duong lien tiep lon nhat %d",max);
	else printf("Tong so duong lien tiep lon nhat %d",tong);
	
		
	}
	
		
	
		
		
	
