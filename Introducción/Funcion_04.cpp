#include<iostream>

using namespace std;

int Max(int a, int b);

int main(){
    int N1, N2, N3;
    cout<<"Introduzca el valor del primer numero: ";
    cin>>N1;
    cout<<"Introduzca el valor del segundo numero: ";
    cin>>N2;
    cout<<"Introduzca el valor del tercer numero: ";
    cin>>N3;
    int max = Max(Max(N1, N2), N3);
    cout<<"El numero mayor es: "<<max<<endl;
    return 0;
}

int Max(int a, int b){
    int c;
    if(a>b){
        c = a;
    }

    else{
        c = b;
    }
    return c;
}
