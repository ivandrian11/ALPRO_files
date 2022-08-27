#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main(){
    int input, tampil=0;
    string keys;
    cout<<"Masukkan angka: ";
    cin>>input;
    cout<<"Masukkan kata: ";
    cin>>keys;

    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
            if(j<i)
                cout<<"  ";
            else{
                cout<<keys[tampil]<<" ";
                tampil++;
                if(tampil==keys.length())
                    tampil=0;
            }
        }
        cout<<endl;
    }

    getch();
}
