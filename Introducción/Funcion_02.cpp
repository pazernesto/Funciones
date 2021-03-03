#include<iostream>

using namespace std;

void Max(int a, int b);

int main(){
    int N1, N2;
    cout<<"Introduza el valor del primer numero: ";
    cin>>N1;
    cout<<"Introduza el valor del segundo numero: ";
    cin>>N2;
    Max(N1, N2);
    return 0;
}

void Max(int a, int b){
    if(a>b){
        cout<<a<<" es mayor."<<endl;
    }

    else if(a<b){
        cout<<b<<" es mayor."<<endl;
    }

    else
        cout<<"Error."<<endl;
}
