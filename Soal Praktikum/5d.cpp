#include <stdio.h> // untuk fungsi input output pada C
#include <conio.h> // untuk fungsi getch
#include <string.h> // untuk operasi char array (string)

struct Mahasiswa {
	char nama[20];
	int sks_lulus;
	float ipk;
	char status[11];
};

int main() {
	int n;
	printf("Masukkan jumlah mahasiswa: ");
	scanf("%d", &n);
	getchar();
	
	struct Mahasiswa mhs[n];
	for(int i=0; i<n; i++) {
		printf("\nMasukkan nama mahasiswa ke-%d: ", (i+1));
		gets(mhs[i].nama);
		printf("Masukkan sks lulus mahasiswa ke-%d: ", (i+1));
		scanf("%d", &mhs[i].sks_lulus);
		printf("Masukkan IPK mahasiswa ke-%d: ", (i+1));
		scanf("%f", &mhs[i].ipk);
		getchar();
		if (mhs[i].ipk > 2.0 && mhs[i].sks_lulus > 144) {
			strcpy(mhs[i].status, "LULUS");
		} else {
			strcpy(mhs[i].status, "TIDAK LULUS");
		}
	}
	
	for(int i=0; i<n; i++) {
		printf("\n~~~ Rincian Mahasiswa %d ~~~\n", (i+1));
		printf("Nama: %s\n", mhs[i].nama);
		printf("SKS Lulus: %d\n", mhs[i].sks_lulus);
		printf("IPK: %.2f\n", mhs[i].ipk);
		printf("Status: %s\n", mhs[i].status);
	}
	
	getch();
}