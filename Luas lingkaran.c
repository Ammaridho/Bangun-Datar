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

void segitiga(){
	float alas;
	float tinggi;
	float luas_segitiga;
	float keliling_segitiga;
	
	//input
	printf("Masukkan alas: ");
	scanf("%f",&alas);
	
	printf("Masukkan tinggi: ");
	scanf("%f",&tinggi);
	
	//proses
	luas_segitiga = alas * tinggi / 2;
	keliling_segitiga = alas * 3;
	
	//output
	printf("Luas Segitiga:%f",luas_segitiga);
	printf("Keliling Segitiga:%f",keliling_segitiga);
}

int menu(){
	int pilihan;
	printf("0. exit\n");
	printf("1. luas lingkaran\n");
	printf("2. luas segitiga\n");
	printf("masukan pilihan : \n");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 0 :
			return 0;
		case 1 :
			lingkaran();
			break;
		case 2 :
			segitiga();
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
