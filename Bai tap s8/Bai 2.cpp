# include<stdio.h>

int timMax(int a[],int n){
	int max;
	max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			
		}
	}
	return max;
}
bool kiemTraSoNguyenTo(int x){
	if(x<2) return false;
	if(x<4) return true;
	for(int i=2;i<=x/2;i++){
		if(x%i==0) return false;
	}
	return true;
}

int timSoNguyenTo(int a[],int n){
	timMax(a,n);
	for(int i=1;;i++){
		if(kiemTraSoNguyenTo(timMax(a,n)+i)){
			return timMax(a,n)+i;
		}
	}
}

int main(){
	int a[4]={1,2,3,4};
	printf("%d", timSoNguyenTo(a,4));
	
}
