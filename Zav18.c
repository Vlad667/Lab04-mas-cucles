#include <stdio.h>
#include <stdlib.h>
#include <time.h>


         void print_mas(int *mas, int n);
         int perev(int *mas, int n, int zn);
         void rand_mas_n(int *mas, int n, int kol, int poch);

         int main(int argc, char *argv[]){
	
         int masA[200], masB[200];
	     int roz_A, roz_B, roz_diap;
	     int i_A, i_B, flag = 0;
	
	     srand(time(0));
	
	     printf("Vvedite razmer masiva A = ");
	     scanf("%d", &roz_A);
	     printf("Vvedite razmer masiva B = ");
	     scanf("%d", &roz_B);
	     printf("Vvedite diapazon = ");
	     scanf("%d", &roz_diap);
	
	
    
    rand_mas_n(masA, roz_A, roz_diap, 0);
	rand_mas_n(masB, roz_B, roz_diap, 0);
	printf("\nMassiv A = \n");
	print_mas(masA, roz_A);
	printf("Massiv B = \n");
	print_mas(masB, roz_B);
	
	for(i_A = 0; i_A < roz_A; i_A++)
		for(i_B = 0; i_B < roz_B; i_B++)
			if(masA[i_A] == masB[i_B]) {
				flag = flag + 1;
				break;
}
	
	if(flag == roz_A)
		printf("\nMassiv A vhodit v massiv B.\n\n");
	else
		printf("\n\nMassiv A ne vhodit v massiv B.\n\n");
	
	system("pause");
	
    return 0;
}

 void print_mas(int *mas, int n){
	int i;
	for(i=0;i<n;i++)
		printf("\tmas[%d] = %d\n", i, mas[i]);
}

int perev(int *mas, int n, int zn){
	
	int i;
	for(i=0;i<n;i++)
		if(zn == mas[i])
			return 0;
		
	return 1;	
}

void rand_mas_n(int *mas, int n, int kol, int poch){
	int i;
	for(i=0;i<n;) {
		mas[i] = poch + rand() % kol;
		if(perev(mas, i, mas[i]))
			i++;
	}	
} 
