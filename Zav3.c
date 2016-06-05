#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

int main ()
{
	int mas[200], i, proizvedenie = 1, kolichestvo = 0;
	int n, min, max;
	
	printf ("Vvedite razmer massiva = ");
	scanf ("%d", &n);
	
	printf ("\nVvedite Min rand = ");
	scanf ("%d", &min);
	
	printf ("\nVvedite max rand = ");
	scanf ("%d", &max);
	
	srand(time(0));
	
	for(i = 0; i < n; i++) 
    {
		mas[i] = get_random_int_min_max(min, max);
		printf("\nmas[%d] = %d", i, mas[i]);
	}
	
	for (i = 0; i < n; i++) 
    {
		if(((i % 2) == 0) && (mas[i] > 0))
        {
		 proizvedenie *= mas[i];
		 kolichestvo = kolichestvo + 1;
		}
	}	
	
	printf("\n\nProizvedenie ravno = %d", proizvedenie);	
	printf("\nKolichestvo = %d", kolichestvo);
		
	system("pause");	
	return 0;	
}
