// Question - https://www.hackerrank.com/challenges/save-the-prisoner/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long t,n,m,s;
    cin>>t;
    while(t>0)
        {
         cin>>n>>m>>s;
        m=m+s-1;
        m=m%n;
        if(m==0)
        cout<<n<<endl;
        else
        cout<<m<<endl;
        t--;
    }
    return 0;
}

