# include<stdio.h>
# include<string.h>
int main(){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);
	char a[n][50];
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(int i=0;i<n;i++){
		char tmp[50];
		strcpy(tmp,a[i]);
		int j=i-1;
		for(;j>=0&&strcmp(a[j],tmp)>0;){
			strcpy(a[j+1],a[j]);
			j--;
		}
		strcpy(a[j+1],tmp);
	}
		for(int i=0;i<n;i++){
		printf("\n%s",a[i]);
}
}

