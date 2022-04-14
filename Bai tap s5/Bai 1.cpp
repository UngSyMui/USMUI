# include <stdio.h>
int main(){
	int n;
	printf("Nhap n =  ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	
	printf("\n a[%d]=",i);
	scanf("%d",&a[i]);}
	
	int c=0;
	int tong=0;
	float trungbinhcongsole;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			tong=tong+a[i];
			c++;
		}
	}
	trungbinhcongsole=(float)tong/c;
	printf("\n Trung binh cong so le la: %f",trungbinhcongsole);
}
