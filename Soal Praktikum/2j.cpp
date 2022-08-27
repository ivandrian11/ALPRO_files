#include <iostream>

using namespace std;

main(){
    int input, hasil=0;
    cout<<"Input: ";
    cin>>input;
    for(int i=0; i<input; i++){
        int x=input;
        int y=0;
        for(int j=i; j<input; j++){
            if(j!=input-1)
                cout<<"  ";
            else
                for(int k=0; k<=i; k++){
                    cout<<x<<" ";
                    y+=x*2;
                    x--;
                }
        }
        y%=10;
        cout<<"= "<<y;
        hasil+=y;
        cout<<endl;
    }
    cout<<"Hasil: "<<hasil<<endl;
    system("pause");
}