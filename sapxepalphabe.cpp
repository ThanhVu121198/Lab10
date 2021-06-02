#include <stdio.h>
#include <string.h>
void nhapstring(char s[]){
	printf("Nhap chuoi:");
	scanf("%s",s);
}
void nhapmangstring(char arrs[][50],int n){
	for(int i=0;i<n;i++){
		nhapstring(arrs[i]);
	}
}
void sapxepalphabe(char arrs[][50],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			// kiem tra 2 phan tu arrs[j] va arrs[j+1]
			if(strcmp(arrs[j],arrs[j+1]) >0){
				// swap 2 phan tu cho nhau
				char tmp[50];
				strcpy(tmp,arrs[j]);
				strcpy(arrs[j],arrs[j+1]);
				strcpy(arrs[j+1],tmp);
			}
		}
	}
}
void inmangstring(char arrs[][50],int n){
	for(int i=0;i<n;i++){
		printf("%s\n",arrs[i]);
	
	}
}
int kiemtra(int a,int b){
	if(a > b){
		return 1;
	}
	return 0;
}
bool kiemtra2so(int a,int b){
	if(a > b){
		return true;
	}
	return false;
}
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	char arrs[n][50];// khai bao 1 mang n string
	
	nhapmangstring(arrs,n);
	
	sapxepalphabe(arrs,n);
	printf("Sau khi sap xep:\n");
	inmangstring(arrs,n);
	if(kiemtra(1,2) == 1){
		
	}
	if(kiemtra2so(1,2)){
		
	}
}
