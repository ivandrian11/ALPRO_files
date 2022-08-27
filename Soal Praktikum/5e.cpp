#include <stdio.h> // untuk fungsi input output pada C
#include <conio.h> // untuk fungsi getch
#include <string.h> // untuk operasi char array (string)

struct Mahasiswa {
	char nama[20];
	float nilai;
};

int main() {
	int n;
	float total=0;
	
	printf("Masukkan jumlah mahasiswa: ");
	scanf("%d", &n);
	getchar();
	
	struct Mahasiswa mhs[n];
	
	for(int i=0; i<n; i++) {
		printf("\nMasukkan nama mahasiswa ke-%d: ", (i+1));
		gets(mhs[i].nama);
		printf("Masukkan nilai mahasiswa ke-%d: ", (i+1));
		scanf("%f", &mhs[i].nilai);
		getchar();
		total += mhs[i].nilai;
	}
	
	printf("\nNilai rata-rata dari %d mahasiswa adalah %.1f", n, (total/n));
	
	getch();
}