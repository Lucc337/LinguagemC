#include <stdio.h>

int main() {
    int vetor[20];
    int i = 0, num = 1;

	    while (i < 20) {
	    	//encontrar multiplo de 7 ou que n�o termina em 7
	        if (num % 7 != 0 && num % 10 != 7) { 
	            vetor[i] = num;
	            i++;
	        }
	        num++;
	    }
	
	
	    printf("N�meros que n�o s�o m�ltiplos de 7 ou que n�o terminam em 7:\n");
	    for (i = 0; i < 20; i++) {
	        printf("%d ", vetor[i]);
	    }
	
	    return 0;
}
