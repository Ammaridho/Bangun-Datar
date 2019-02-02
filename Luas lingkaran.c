//Program luaspersegi;
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

void persegi(){
	
	float s1,s2;
	float luas_persegi;
	
	//input
	printf("Masukan Sisi 1 : ");
	scanf("%f",&s1);
	
	printf("Masukan Sisi 2 : ");
	scanf("%f",&s2);
	
	//proses
	luas_persegi = s1*s2;
	
	//Output
	printf("Luas Persegi : %f",luas_persegi);
	
}

int menu(){
	int pilihan;
	printf("0. exit\n");
	printf("1. luas lingkaran\n");
	printf("4. luas persegi\n");
	printf("masukan pilihan : \n");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 0 :
			return 0;
		case 1 :
			lingkaran();
			break;
		case 4 :
			persegi();
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
