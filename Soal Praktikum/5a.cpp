#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct soal{
	char kelas[5];
	int level;
	int rank;
	
	void tes(){
		cout<<"Tes";;
	}
};



main(){
	soal d;
	d.tes();
	
	getch();
}