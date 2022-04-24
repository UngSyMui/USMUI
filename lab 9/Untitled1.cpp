Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@UngSyMui 
hoatq-fptaptech
/
T2203E-LBEP
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Create Demo4.cpp
 master
quanghoa committed 2 days ago 
1 parent 9f5b379 commit fab039004c65e58dfa6674ce88c5e4b60bf5af78
Showing  with 60 additions and 0 deletions.
 60  
Session9/Demo4.cpp
@@ -0,0 +1,60 @@
#include <stdio.h>

void menu(){
	printf("TINH TOAN\n");
	printf("================\n");
	printf("1. Nhap so\n");
	printf("2. Tinh Tong\n");
	printf("3. Tinh Hieu\n");
	printf("4. Tinh tich\n");
	printf("5. Tinh Thuong\n");
	printf("6. Thoat\n");
	printf("================\n");
	printf("Vui long chon chuc nang:");
}
int tinhTong(int a,int b){
	return a+b;
}
int tinhHieu(int a,int b){
	return a-b;
}
int tinhTich(int a,int b){
	return a*b;
}
double tinhThuong(int a,int b){
	return b!=0?(double)a/b:NULL;
}
void nhapSo(int *a,int *b){
	printf("Nhap so thu nhat:");
	scanf("%d",a);
	printf("Nhap so thu hai:");
	scanf("%d",b);
}
int main(){
	int m,a,b;
	bool f = false;
	do{
		menu();
		scanf("%d",&m);
		switch(m){
			case 1:{
				nhapSo(&a,&b);
				f = true;
				break;
			}
			case 2:
				tinhTong(a,b);
			case 3:
				tinhHieu(a,b);
			case 4:
				tinhTich(a,b);
			case 5:{
				if(!f){
					printf("Vui long nhap gia tri 2 so truoc\n");
					break;
				}
				double c = tinhThuong(a,b);
				if(c==NULL){
					printf("Khong the chia cho 0\n");
				}else{
					printf("Thuong: %lf\n",c);
				}
				break;
			}
		}
	}while(m!=6);
}

