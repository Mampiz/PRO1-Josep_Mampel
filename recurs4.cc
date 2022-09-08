#include <iostream>
#include <vector>
using namespace std;

int sumaenters(vector <int> v)
{
    int i=v.size()-1;
    if(i==0) return v[0];
    else{
        if(v[i]<sumaenters(v(i-1))){
            return sumaenters(v(i-1));
        }
        return v[i];
    }
}
int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(unsigned int i=0; i<n; i++){
        cin>> v[i];
    }
    cout << sumaenters(v);
}