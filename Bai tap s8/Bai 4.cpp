# include<stdio.h>

int timMax(int a[], int n){
	int max;
	max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}

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


int uclnmang(int a[],int n){
	int uclnmang=a[0];
	for(int i=0;i<n;i++){
		uclnmang=ucln(uclnmang,a[i]);
	}
	return uclnmang;
}

int bcnnmang(int a[], int n){
	if(uclnmang(a,n)==1){
		int bcnnmang=1;
		for(int i=0;i<n;i++){
			bcnnmang*=a[i];
		}
		return bcnnmang;
	}else{
	
		int bcnnmang;
	for(int i=0;i<n;i++){
		
		bcnnmang=uclnmang(a,n)*timMax(a,n);		
		}
		return bcnnmang;
	}

}

int main(){
	int a[4]={2,4,6,8};
	printf("%d \n", timMax(a,4));
	printf("%d \n", uclnmang(a,4));
	printf("%d",bcnnmang(a,4));
				
	
}
