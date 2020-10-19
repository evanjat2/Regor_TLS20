#include <stdio.h>
#include <stdlib.h>

int main() {
	int X1, V1, X2, V2;
	scanf("%d %d %d %d", &X1, &V1, &X2, &V2);
	
if (X2 < X1 || X1 < 0 || X1 > 1000 || V1 < 1 || V1 > 1000 || X2 < 0 || X2 > 1000 || V2 < 1 || V2 > 1000 || X1 == X2) {
		printf("Masukkan tidak sesuai syarat batasan");
		exit(EXIT_FAILURE);
		
	} else if (X2 > X1) {
		if (V1 > V2) {
			while (X2 > X1) {
				X2 = X2 + V2; X1 = X1 + V1;
				if ( X1 == X2) {
					printf("YES");
					exit(EXIT_FAILURE);
				}
			}
		}
	} 
	printf("NO");
	return 0;
}