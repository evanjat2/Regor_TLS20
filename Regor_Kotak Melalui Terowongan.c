#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,j,k,i;
	scanf("%d", &n);  
	if (n > 100 || n < 1) {
		printf("Jumlah kotak tidak sesuai syarat");
		exit(EXIT_FAILURE);
	}
	int panjang[n] , lebar[n] , tinggi[n] , volume[n] ;
	j = 0;
	
	for (i = 0 ; i < n ; i++){
		scanf("%d %d %d" , &panjang[i] , &lebar[i] , &tinggi[i]);
		if (tinggi[i] < 41) {
			volume[j] = panjang[i] * lebar[i] * tinggi[i];
			j = j + 1;
			
		} else if (0 > tinggi[i] || 1 > panjang[i] || panjang[i] > 100 || 1 > lebar[i] || lebar[i] > 100) {
				printf("Input yang dimasukkan tidak sesuai kriteria");
				exit(EXIT_FAILURE);
		}
	}
	
	for (k = 0 ; k < j  ; k++) {
		printf( "\n%d " , volume[k]); 
	}
	return 0;
}		
		
	

   
  