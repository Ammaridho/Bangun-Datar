//Program luaspersegi;
//{program ini digunakan untuk menghitung luas}

//Deklarasi
#include<stdio.h>

const float PHI = 3.14;

//Algoritma
void persegipanjang(){
	float panjang;
	float lebar;
	float luas_pp;
	float keliling_pp;
	
	//input
	printf("Masukan Panjang : ");
	scanf("%f",&panjang);
	printf("Masukan Lebar : ");
	scanf("%f",&lebar);
	
	//proses
	luas_pp = panjang * lebar;
	keliling_pp = 2 * (panjang + lebar);
	
	//output
	printf("Luas Persegi Panjang:%f\n",luas_pp);
	printf("Keliling Persegi Panjang:%f\n",keliling_pp);

}
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
	
	float s;
	float luas_persegi;
	float kel_persegi;
	
	//input
	printf("Masukan Sisi : ");
	scanf("%f",&s);
	
	//proses
	luas_persegi = s*s;
	kel_persegi = 4*s;
	
	//Output
	printf("Luas Persegi : %f \n",luas_persegi);
	printf("Keliling Persegi : %f \n",kel_persegi);	
}

int menu(){
	int pilihan;
	printf("0. exit\n");
	printf("1. luas lingkaran\n");
	printf("2. luas persegi\n");
	printf("3. Persegi Panjang\n");
	printf("masukan pilihan : \n");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 0 :
			return 0;
		case 1 :
			lingkaran();
			break;
		case 2 :
			persegi();
			break;
		case 3 :
			persegipanjang();
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
