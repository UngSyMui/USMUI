# include<stdio.h>
# include<string.h>
int main(){
	char s1[50];
	scanf("%s",s1);
	char s2[50];
	scanf("%s",s2);
	int d;
	if(strlen(s1)<strlen(s2)){
		d=0;
		for(int i=0;i<strlen(s1);i++){
			int c=0;
			for(int j=0;j<strlen(s2);j++){
				if(s1[0]!=s2[j]){
					c++;
				}else{
					break;
				}
				
			}
	
		if(s1[i]!=s2[c+i]){
		d++;
		break;
				}
			}
	if(d==0) printf("\n Chuoi s1 la chuoi con chuoi s2");
	else printf("\n Chuoi s1 khong phai la chuoi con chuoi s2");
	
	}else{
		
		d=0;
		for(int i=0;i<strlen(s2);i++){
			int c=0;
			for(int j=0;j<strlen(s1);j++){
				if(s2[0]!=s1[j]){
					c++;
				}else{
					break;
				}
				
			}
	
		if(s2[i]!=s1[c+i]){
		d++;
		break;
				}
			}
	if(d==0) printf("\n Chuoi s2 la chuoi con chuoi s1");
	else printf("\n Chuoi s2 khong phai la chuoi con chuoi s1");
		}
	}
	

	

