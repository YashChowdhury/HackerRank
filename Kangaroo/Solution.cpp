// Question- https://www.hackerrank.com/challenges/kangaroo/problem
#include <iostream>
using namespace std;


int main(){
     long int x1; 
    long int v1; 
    long int x2; 
    long int v2; 
    cin>>x1>>v1>>x2>>v2;
    while(x1<=100000000 && x2<=100000000)
        {
        if(x1==x2)
        {
            cout<<"YES";
         break;
        }
        else
        {
            x1=x1+v1;
            x2=x2+v2;
        }   
    }
        if(x1!=x2)
            cout<<"NO";
    return 0;
}