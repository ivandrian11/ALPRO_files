#include <stdio.h> // untuk fungsi input output pada C
#include <conio.h> // untuk fungsi getch
#include <string.h> // untuk operasi char array (string)

struct Pecahan {
	int pembilang;
	int penyebut;
};

int main() {
	struct Pecahan p1,p2, p3;
	// 3/4+1/2==>3/4*(2/2)+1/2*(4/4)==>3*2/4*2+1*4/2*4
	p1.pembilang = 3;
	p1.penyebut = 4;
	p2.pembilang = 1;
	p2.penyebut = 2;
	
	p3.pembilang = p1.pembilang * p2.penyebut + p2.pembilang * p1.penyebut;
	p3.penyebut = p1.penyebut * p2.penyebut;
	
	printf("%d/%d", p3.pembilang, p3.penyebut);
	
	getch();
}