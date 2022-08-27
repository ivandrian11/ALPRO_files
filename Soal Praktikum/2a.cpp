#include <iostream>
#include <sstream> 

using namespace std;

int main(){
    int angka, x;
    string hasil="";

    cout<<"Masukkan nilai desimal: ";
    cin>>angka;
    x = angka;
    do{
        if(x % 2 == 1)
            hasil = "1" + hasil;
        else
            hasil = "0" + hasil;
        x /= 2;
    } while(x != 0);
    cout << "Binernya: " << hasil <<endl;

    system("pause");
}