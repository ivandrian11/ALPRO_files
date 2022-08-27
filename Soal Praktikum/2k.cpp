#include <iostream>

using namespace std;

main(){
    int input, hasil=0;
    cout<<"Input: ";
    cin>>input;
    for(int i=1; i<=input; i++){
        int x=input*i;
        int y=0;
        for(int j=1; j<=i; j++){
            cout<<x<<" ";
            y+=x;
            x+=i;
        }
        cout<<"= "<<y;
        hasil+=y%10;
        cout<<endl;
    }
    cout<<"Hasil: "<<hasil<<endl;

    system("pause");
}