#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vybor(int* mas);

int main(int argc, char *argv[]) {
	int mas[10], i, n, k = 0, obrat[10];
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
	
    mas[i] = rand()%50;
}
	
	vybor(mas);
	
	for(i = 0; i < 10; i++)
	obrat[i] = mas[10-(i+1)];
	
	for( i = 0; i < 10; i++)
	printf("\tmas[%d] = %d\n", i, obrat[i]);
	
	printf("Vvedite N = ");
	scanf("%d", &n);
	
	for(i=10-1,mas[10+1]=0;i>=0;i--){
	if(n >= mas[i])
	mas[i + 1] = mas[i];
	else {
	mas[i + 1] = n;
	k = 1;
	break;
			}	
	}
	
	if(k == 0)
		mas [0] = n;
		
	vybor(mas);
	
	for(i = 0; i < 10; i++)
	obrat[i] = mas[10-(i+1)];
	
	for(i = 0; i < 10; i++)
	printf("\tmas[%d] = %d\n ", i, obrat[i]);
		
	
	return 0;
}

        int vybor(int* mas){
	    int i, f, i_m, m, j;
		for(i=0;i<10-1;i++){
		f = 0;
		i_m = i;
		m = mas[i];
		for(j = i + 1; j < 10; j++){
		if(mas[j] < m ){
		m = mas[j];
		i_m = j;
		f = 1;
		}
		}
		if(f){
		mas[i_m] = mas[i];
		mas[i] = m ;
}
}
}
