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

	
	for(int i=0;i<n;i++){
	
		if (a[i]<0){
			if(d>max){
			max=d;
			d=0;
			}
	   	}else{
		d++;
			}
		}
	if(max>d) printf("So luong so duong lien tiep lon nhat %d",max);
	else printf("So luong so duong lien tiep lon nhat %d",d);
	
		
	}
	
		
	
		
		
	
