#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main(){
    int n;
    double p=0,ne=0,z=0;
    cin >> n;
    double a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
            p++;
        else if(a[i]<0)
            ne++;
        else
            z++;
    }
    cout<<fixed;
    cout<<setprecision(6)<<p/n<<endl;
    cout<<setprecision(6)<<ne/n<<endl;
    cout<<setprecision(6)<<z/n;
    
    
    return 0;
}
