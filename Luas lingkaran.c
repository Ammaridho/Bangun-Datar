//Program luaslingkaran;
//{program ini digunakan untuk menghitung luas}

//Deklarasi
#include<stdio.h>

const float PHI = 3.14;

//Algoritma
void lingkaran() {
	float r;
	float luas_lingkaran;
	
	//input
	printf("Masukan Jari jari: ");
	scanf("%f",&r);
	
	//proses
	luas_lingkaran = PHI * r * r;
	
	//Output
	printf("Luas Lingkaran:%f",luas_lingkaran);
}
int menu(){
	int pilihan;
	printf("0. exit\n");
	printf("1. luas lingkaran\n");
	printf("masukan pilihan : \n");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 0 :
			return 0;
		case 1 :
			lingkaran();
			break;
		default :
			printf("invailid");

	}
}
int main (){
	
	while(1) {
		if(menu() == 0) {
			break;
		}
	}
	
	return 0;
}
