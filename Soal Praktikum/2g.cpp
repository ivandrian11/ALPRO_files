#include <sstream> 
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

main(){
    int hasil=0, converted;
    string input, tampung="";
    getline(cin, input);
    for(int i=0; i<input.length(); i++){
        if(input[i]==' ')
            continue;
        else{
            tampung+=input[i];
            if(i+1<input.length()&&input[i+1]!=' '){
                tampung+=input[i+1];
                i++;
            }
            stringstream convert(tampung);
            convert >> converted;
            hasil+=converted;
        }
        tampung="";
    }

    cout << "Value of x : " <<hasil<<endl;;

    system("pause");
}