#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

    int findmax(int *mas, int n, int max2)
{
	int y, zn = max2;
	int max = mas[max2];
	
	if(max2 == n)
		return max2;
	
	for(y = max2; y < n; y++)
		if(mas[y] > max) 
        {
		max = mas[y];
		zn = y;
		}	
		
	return zn;	
}

    void sort(int *mas, int n)
{
	int y, x, zn;
	for(y = 0; y < n; y++) 
    {
		x = mas[y];
		zn = findmax(mas, n, y);
		mas[y] = mas[zn];
		mas[zn] = x;
	}
}

int main()
{
	int mas[100], y, n, flag = 0;
	int min, max, znachenie;
	
	printf ("Razmer massiva = ");
	scanf ("%d", &n);
	
	printf ("\n\Vvedite Min rand = ");
	scanf ("%d", &min);
	
	printf ("\n\Vvedite Max rand = ");
	scanf ("%d", &max);
	
	srand(time(0));
	
	for (y = 0; y < n; y++)
    {
		mas[y] = get_random_int_min_max(min, max);
		printf("\nmas[%d] = %d", y, mas[y]);
	}
	
	sort(mas, n);
	
	for (y = 0; y < n; y++){
	printf("\n\tmas[%d] = %d", y, mas[y]);
	}
	
	printf ("\nEnter n = ");
	scanf ("%d", &znachenie);
	
	for(y = (n - 1), mas[n + 1] = 0; y >= 0; y--) 
    {
		if(znachenie >= mas[y])
			mas[y + 1] = mas[y];
		else {
			mas[y + 1] = znachenie;
			flag = 1;
			break;
		}	
	}
	
	if(flag == 0)
    {
		mas[0] = n;
	}
		
	for (y = 0; y < (n + 1); y++)
    {
		printf("\nmas[%d] = %d", y, mas[y]);
	}
	
	system("pause");
	return 0;
}
