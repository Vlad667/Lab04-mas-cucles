
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int poshyk(int *mas, int n);

int main(int argc, char *argv[]) {
 int mas[20];
 int i, n, zn;
 srand(time(0));
 for (i = 0; i < 20; i++){
 mas[i] = rand()%100;
 printf("mas[%d] = %d\n", i, mas[i]);
	}
	
 printf("Vvedite chislo:");
 scanf("%d", &n);
	
 printf("Vashe chislo e v takuh elementah:");
 zn=poshyk(mas, n);
	
 printf("\nVsego 4isel %d v elementah masiva %d", n, zn);
	
 return 0;
}

int poshyk(int *mas, int n){
 int i, zn=0;
	
 for(i = 0; i < 20; i++){
 if(mas[i] == n){
 printf("%d, ", i);
 zn++;
		}
	}
	system("pause");
 return zn;
}
