#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <iostream>
#define ll long long
#define PB push_back
#define MP make_pair
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    int val=0, val1=0;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        if(n%i==0)
        {
            val1=i;
            if(val1>val)
               val=val1;
        }
    }
    cout<<val;
    
    return 0;
}