#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
	int mas[10],k=0,i,j;
	
	srand(time(0));
	
	for(i=0;i<10;i++){
	mas[i] = rand()%100;
	printf("%d ", mas[i]);
	
    }
	
	for(i=0;i<10-1;i++){
	for(j=j+1;j<10;j++){
	if(mas[i] == mas[j]) 
	k++;
	}
	}
	
	if(k > 0) 
	printf("\nEst %d par\n", k);
	else 
	printf("\nNet pari\n");
   
   
   system("pause");
   
   return 0;
}
