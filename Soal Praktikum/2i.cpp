#include <iostream>

using namespace std;

main(){
    int x, input, hasil=0;
    cout<<"Input: ";
    cin>>input;
    x=input;
    for(int i=0; i<input; i++){
        int y=0;
        for(int j=i; j<input; j++){
            cout<<x<<" ";
            y+=x;
            if(j!=input-1){
                if(i%2==0)
                    x+=input;
                else
                    x-=input;
            }
        }
        cout<<"= "<<y;
        if(i%2==0)
            hasil+=y;
        else
            hasil-=y;
        cout<<endl;
    }
    cout<<"Hasil: "<<hasil<<endl;
    system("pause");
}