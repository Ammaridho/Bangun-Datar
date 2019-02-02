//Program luaslingkaran;
//{program ini digunakan untuk menghitung luas}

//Deklarasi
#include<stdio.h>
float r;
float luas_lingkaran;
float Phi = 3.14;

//Algoritma
int main (){
	//input
	printf("Masukan Jari jari: ");
	scanf("%f",&r);
	
	//proses
	luas_lingkaran = Phi * r * r;
	
	//Output
	printf("Luas Lingkaran:%f",luas_lingkaran);
//	return 0;
}
