#include <iostream>
using namespace std;

int sumadigits(int n)
{
    if(n<10) return n;
    else return n%10 + sumadigits(n/10);
}

int reduccio_digits(int n){
    int n = sumadigits(n);
    if(n<10) return n;
    else return reduccio_digits(n);
}

int main(){
    int n;
    cin>>n;
    cout << endl;
}