#include<stdio.h>
int	ffactorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		result = nb * ffactorial(nb - 1);
	return (result);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    printf("%d", ffactorial(n) / (ffactorial(k) * ffactorial(n - k)));
    
    return 0;
}