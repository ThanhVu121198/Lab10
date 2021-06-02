#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Nhap s: ");
	scanf("%s",str);
	int i=0;
	int nguyenam=0;
	int kytukhac=0;
	int len;
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]!='\0'){
		if(str[i]=='a' || str[i]=='e' || str[i]=='u' || str[i]=='o' || str[i]=='i'){
			nguyenam++;
		}else{
			kytukhac++;
		}
	}
	}
	printf("chuoi co chua: %d nguyen am va %d ky tu khac",nguyenam,kytukhac);
}
