#include <iostream>
#include <conio.h>

using namespace std;

main(){
    int input;
    char key;

    cout<<"Masukkan key: ";
    cin>>key;
    do{
        cout<<"Masukkan angka: ";
        cin>>input;
        if(input < 3){
            cout<<"Input-an kurang dari 3!\n";
            getch();
        }
        else if(input%2==0){
            cout<<"Input-an bukan bilangan ganjil!\n";
            getch();
        }
    } while(input<3 || input%2==0);

    // huruf H
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
            if(i!=input/2)
                if(j==0 || j==input-1)
                    cout<<key<<" ";
                else
                    cout<<"  ";
            else
                cout<<key<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    // huruf O
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
            if(i==0 || i==input-1)
                cout<<key<<" ";
            else
                if(j==0 || j==input-1)
                    cout<<key<<" ";
                else
                    cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    // huruf I
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
            if(i==0 || i==input-1)
                cout<<key<<" ";
            else
                if(j!=input/2)
                    cout<<"  ";
                else
                    cout<<key<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    // huruf C
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
           if(i==0 || i==input-1)
                cout<<key<<" ";
            else
                if(j==0)
                    cout<<key<<" ";
                else
                    cout<<"  "; 
        }
        cout<<endl;
    }

    cout<<"\n\n";
    // huruf L
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
            if(i!=input-1)
                if(j==0)
                    cout<<key<<" ";
                else
                    cout<<"  ";
            else
                cout<<key<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    // huruf T
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
            if(i==0)
                cout<<key<<" ";
            else
                if(j!=input/2)
                    cout<<"  ";
                else
                    cout<<key<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    // huruf U
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
            if(i==input-1)
                cout<<key<<" ";
            else
                if(j==0 || j==input-1)
                    cout<<key<<" ";
                else
                    cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    // huruf V
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
            if(i<=input/2)
                if(j==0 || j==input-1)
                    cout<<key<<" ";
                else
                    cout<<"  ";
            else
                if(j==i-input/2 || j==input-i+(input/2-1))
                    cout<<key<<" ";
                else
                    cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    // huruf X
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
            if(j==i || j==input-1-i)
                cout<<key<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    getch();
}