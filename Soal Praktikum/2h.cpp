#include <iostream>

using namespace std;

main(){
    int x, input, hasil=0;
    cout<<"Input: ";
    cin>>input;
    for(int i=0; i<input; i++){
        x=input+(i*4);
        int y=0;
        for(int j=0; j<=i; j++){
            cout<<x<<" ";
            y+=x;
            x+=input;
        }
        cout<<"= "<<y;
        y%=10;
        hasil+=y%10;
        cout<<endl;
    }
    cout<<"Hasil: "<<hasil<<endl;
    system("pause");
}