#include<stdio.h>
#include<string.h>
int main()
{
    char dial[15];
    int sum = 0, len;
    scanf("%s", dial);
    len = strlen(dial);
    
    for (int i = 0; i < len; i++)
	{
		if (dial[i] == 'A' || dial[i] == 'B' || dial[i] == 'C'){
			sum += 3;
		}
		if (dial[i] == 'D' || dial[i] == 'E' || dial[i] == 'F'){
			sum += 4;
		}
        if (dial[i] == 'G' || dial[i] == 'H' || dial[i] == 'I'){
			sum += 5;
		}
        if (dial[i] == 'J' || dial[i] == 'K' || dial[i] == 'L'){
			sum += 6;
		}
        if (dial[i] == 'M' || dial[i] == 'N' || dial[i] == 'O'){
			sum += 7;
		}
		if (dial[i] == 'P' || dial[i] == 'Q' || dial[i] == 'R' || dial[i] == 'S'){
			sum += 8;
		}
		if (dial[i] == 'T' || dial[i] == 'U' || dial[i] == 'V'){
			sum += 9;
		}
		if (dial[i] == 'W' || dial[i] == 'X' || dial[i] == 'Y' || dial[i] == 'Z'){
			sum += 10;
		}
	}
	printf("%d", sum);
	return 0;
}