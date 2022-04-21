# include<stdio.h>

float tinhS(int x, int y){
	
	if(y==0) return 1;
	if(x!=0&&y<0){
		int tich;
		tich=1;
		for(int i=0;i<-y;i++){
			tich=tich*1/x;
		
		}
		return tich;
	}
	if(x!=0&&y>0){
		int tich;
		tich=1;
		for(int i=0;i<y;i++){
			tich=tich*x;
		
		}
		return tich;
	}
}
int main(){
	int x=2;
	int y=3;
	printf("%f", tinhS(2,3));
	
	
	
}
