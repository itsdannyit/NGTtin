#include <bits/stdc++.h>
using namespace std;


void calele(int inp){
    int kw1=1800,kw2=1900,kw3=2100,kw4=2200;
    int ans=0,n;
    if(inp<=50)
    {
        ans = inp * kw1;
    }
    if(inp>=51 && inp<=100)
    {
        ans = (50 * kw1) + (inp - 50) * kw2;
    }
    if(inp>=101 && inp<=200)
    {
        ans = (50 * kw1) + (50 * kw2) + (inp - 100) * kw3;
    }
    if(inp>=201)
    {
        ans = (50 * kw1) + (50 * kw2) + (100 * kw3) + (inp - 200) * kw3 ;
    }
cout << ans;
}

int main(){
    freopen("b1.inp","r",stdin);
    freopen("b1.out","w",stdout);
    int inp;
    cin >> inp;
    calele(inp);
    return 0;
}
