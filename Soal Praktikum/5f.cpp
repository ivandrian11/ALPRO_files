#include <stdio.h> // untuk fungsi input output pada C
#include <conio.h> // untuk fungsi getch
#include <string.h> // untuk operasi char array (string)

struct Mahasiswa {
	char nama[20];
	int uts;
	int uas;
	char status;
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
		printf("Masukkan nilai uts mahasiswa ke-%d: ", (i+1));
		scanf("%d", &mhs[i].uts);
		printf("Masukkan nilai uas mahasiswa ke-%d: ", (i+1));
		scanf("%d", &mhs[i].uas);
		getchar();
		if ((float)(mhs[i].uts + mhs[i].uas)/2 >= 60.0) {
			mhs[i].status = 'L';
		} else {
			mhs[i].status = 'T';
		}
	}
	
	for(int i=0; i<n; i++) {
		printf("\n~~~ Rincian Mahasiswa %d ~~~\n", (i+1));
		printf("Nama: %s\n", mhs[i].nama);
		printf("UTS: %d\n", mhs[i].uts);
		printf("UAS: %d\n", mhs[i].uas);
		printf("Status: %c\n", mhs[i].status);
	}
	
	getch();
}