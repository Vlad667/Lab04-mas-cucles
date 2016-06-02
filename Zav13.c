#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main(int argc, char *argv[]) {    
         int mas[10], i, k;
    
    	 srand(time(0));
	
    	 for(i=0;i<10;i++){
		 mas[i]=rand()%100;
		 if(z(mas, i))
         printf("%d \n", mas[i]);
   }
   
	
        bubble(mas);

	    printf("\nRosstavlen metodom bulbashki:\n\n");
	
        for(i = 0; i < 10; i++)
        printf("%d \n", mas[i]);

	    system("pause");
	
        return 0;
}

int bubble(int* mas){
	int m, i, k;
	for (i = 10 -1; i >= 0; i--){
		for (k = 0; k < i; k++){
			if (mas[k] > mas[k+1]){
				int m = mas[k];
				mas[k] = mas[k+1];
				mas[k+1] = m;
			}
		}
	}
}

int z(int*mas, int i){
	int p;
	for (p=0; p < i; p++){
		if (mas[i] == mas[p])
		
        return 0;
	}
	return 1;
}
         int bubble(int* mas);
         int z(int*mas, int i);


      
