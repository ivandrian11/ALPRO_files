#include <stdio.h> // untuk fungsi input output pada C
#include <conio.h> // untuk fungsi getch

int main() {
	int x[5] = {1, 2, 3, 4, 5};
	
	for (int i = 0 ; i < 4; i++) {
		x[i] += x[i+1];
	}
	
	int sum = x[1] + x[4];
	printf("%d", sum);
	
	getch();
}