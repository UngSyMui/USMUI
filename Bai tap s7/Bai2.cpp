# include<stdio.h>
# include<string.h>

int main(){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);	
	
	char a[n][50];
	for(int i=0;i<n;i++){
		scanf("\n %s",a[i]);
	}
	char b[50];
	printf("Nhap chuoi b:");
	scanf("%s", b);
	
	int c=0;
	for(int i=0;i<n;i++){	
		if(strcmp(b,a[i])==0){
		c++;
	
		}
		
		}
	
	if(c!=0){
		printf("\n Chuoi b co trong danh sach");
	}else printf("\n Chuoi b khong co trong danh sach");
}

	

