#include<iostream>
using namespace std;
int topla(int *pt,int boyut){
	int toplam= 0;
	for(int i = 0; i < boyut; i++){
		toplam += *(pt +i);
		printf("%d : %x\n", *(pt +i),(pt +i));  // %x adresini gösterir
	}
	return toplam;
}
int main(){
	int sayilar[] ={15,25,63,89,24};
	printf("%d",topla(sayilar,5));
	
}
	
