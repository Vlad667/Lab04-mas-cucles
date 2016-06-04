#include <stdio.h>
#include <stdlib.h>
#include <time.h>


         int get_random_int_min_max(int min_rand, int max_rand)
{
         return min_rand + rand() % (max_rand - min_rand);
}

     int main()
{
	  int mas[100], i, n, dodat = 0, vid = 0;
	  int min, max;
	
     	printf ("Razmer massiva = ");
    	scanf ("%d", &n);
	
      printf ("\nVvedite Min rand = ");
    scanf ("%d", &min);
	
    	printf ("\nVvedite Max rand = ");
	scanf ("%d", &max);
	
                       srand(time(0));
	
	               for (i = 0; i < n; i++){
	               mas[i] = get_random_int_min_max(min, max);
		       printf("\nmas[%d] = %d", i, mas[i]);
	              }
	
	    for (i = 0; i < n; i++){
		if (mas[i] > 0){
		dodat =  dodat + 1;
		} else {
		vid = vid + 1;
		}
	}
	
	printf ("\n\n\tDodatnih chisel = %d", dodat);
	printf ("\n\tVid'emnih chisel = %d", vid);
	
	system("pause");
	return 0;
}
 
