#include <iostream>
using namespace std;

int maximumDigit(int n){
    if(n<10) return n;
    else{
        if(n%10<maximumDigit(n/10)) return maximumDigit(n/10);
        return n%10;
    }
}
int main(){
    int n;
    while(cin>>n){
        cout << maximumDigit(n) << endl;
    }

}