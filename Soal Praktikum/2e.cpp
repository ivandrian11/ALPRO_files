#include <iostream>

using namespace std;

main(){
    int input;
    char key;
    cin>>input;
    cin>>key;

    for(int i=0; i<input; i++){
        for(int k=i; k<input; k++)
            cout<<" ";
        for(int j=0; j<=i; j++)
            cout<<key<<" ";
        cout<<endl;
    }
    system("pause");
}