# include<stdio.h>
# include<string.h>
void menu(){
		printf("    QUAN LY SINH VIEN     \n");
		printf("================== \n");
		printf("1. Nhap so luong sinh vien cua lop \n");
		printf("2. Nhap danh sach ten sinh vien \n");
		printf("3. Sap xep ten sinh vien theo thu tu alphabe\n");
		printf("4. In ra danh sach sinh vien\n");
		printf("5. Thoat \n");
		printf("====================\n");
		printf("Vui long chon chuc nang: \n");
}

void nhapDanhSachTenSV(char a[][100], int n){

	for(int i=0;i<n;i++){
		
		scanf("\n %s",&a[i]);
		
		
	}
	
}



void sapXepTenSV(char arrs[][100], int n){
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			
			if(strcmp(arrs[j],arrs[j+1]) > 0){
				char tmp[100];
				strcpy(tmp,arrs[j]);
				strcpy(arrs[j],arrs[j+1]);
				strcpy(arrs[j+1],tmp);
			}
		}
	} 
}
	
void inDanhSachSV(char a[100][100], int n){
	for(int i=0;i<n;i++){
		printf("\n  %s ",&a[i]);
	}
}


int main(){
	int m,n,i,j;
	
	
	do{
		menu();
		scanf("%d",&m);
	switch(m)	{
		case 1:
		printf("Nhap so luong sinh vien cua lop \n ");
		scanf("%d",&n);

		break;
				
		case 2:
			char a[n][100];
			nhapDanhSachTenSV(a,n);
		
			sapXepTenSV(a,n);
		
			inDanhSachSV(a,n);
			break;
			
			
		}
	}while(m!=5);
}
	

