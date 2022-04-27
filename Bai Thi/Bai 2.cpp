# include<stdio.h>

void reverseArray(int ary[], int n){
	
	for(int i=0;i<n;i++){		
		printf("\n Phan tu thu %d ",i);
		scanf("%d",&ary[i]);
	}
		
	printf("Reverse Integer Array \n");
	
	for(int i=n-1;i>=0;i--){
		printf("%d  ", ary[i]);
	}	
}

int main(){
	int n;
	printf("Nhap vao so luong phan tu n \n");
	scanf("%d",&n);
	int ary[n];
	reverseArray(ary,n);
}
