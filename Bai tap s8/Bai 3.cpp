# include<stdio.h>

int ucln(int a, int b){
	if(a==0||b==0) return a+b;
	else{
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}
	}
	return a;
}

int uclnmang(int a[], int n){
	int j;
	int uclnmang=a[0];
	for(int i=0;i<n;i++){
		uclnmang=ucln(uclnmang,a[i]);
	}
	
	return uclnmang;
}

int main(){
	int a[4]={3,6,9,18};
	printf("%d", uclnmang(a,4));
}





