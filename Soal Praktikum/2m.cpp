#include <sstream> 
#include <string.h>
#include <iostream>
#include <conio.h>

using namespace std;

main(){

    string kata="234aa 5", konversis;
    int angka=3, konversi;

    stringstream jadi_kata(kata);

    jadi_kata >> konversi;
    cout<<konversi<<endl;
	
	getch();
}