#include <stdio.h> // untuk fungsi input output pada C
#include <conio.h> // untuk fungsi getch

main() {
	int index = 1;
	do {
		printf("Masukkan jumlah index: ");
		scanf("%d", &index);
	} while (index % 3 != 0);
	
	int arr[index];
	int max = 0, max_kel_tiga = 0;
	for(int i=0; i<index; i++) {
		printf("\nMasukkan nilai pada index %d: ", i);
		scanf("%d", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];
		}
		if (arr[i] % 3 == 0 && max_kel_tiga < arr[i]) {
			max_kel_tiga = arr[i];
		}
	}
	
	for(int i=0; i<index; i++) {
		if (arr[i] == max) {
			printf("\nNilai terbesar yaitu %d berada di index ke-%d", max, i);
		}
		if (arr[i] == max_kel_tiga) {
			printf("\nNilai terbesar berkelipatan 3 yaitu %d berada di index ke-%d", max_kel_tiga, i);
		}
	}

	getch();
}