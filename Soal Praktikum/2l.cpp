#include <string.h>
#include <iostream>
#include <conio.h>

using namespace std;

main(){
    int input;
    string keys;
    cout<<"Input: ";
    cin>>input;
    do{
        cout<<"Masukkan "<<input<<" karakter: ";
        cin>>keys;
        if(keys.length() != input){
            if(keys.length()>input)
                cout<<"Panjang karakter melebihi input-an!\n";
            else
                cout<<"Panjang karakter kurang dari input-an!\n";
            getch();
        }
    } while(keys.length() != inputs);

    for(int i=0; i<input; i++){
        for(int j=0; j<=i; j++)
            cout<<keys[i]<<" ";
        cout<<endl;
    }
    getch();
}