#include <stdio.h>
void makestar(int Y, int X, int n) {
    if ((Y / n) % 3 == 1 && (X / n) % 3 == 1) {
        printf(" ");
    }
    else {
        if (n / 3 == 0) {
            printf("*");
        }
        else {
            makestar(Y, X, n / 3);
        }
    }
}
int main() {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			makestar(i, j, num);
		}
		printf("\n");
	}
	return 0;
}
