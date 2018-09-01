// Question- https://www.hackerrank.com/challenges/the-time-in-words/problem
#include<iostream>
using namespace std;
int main()
{
    string s[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
    int h,m;
    cin>>h>>m;
    if(m>30)
        h=h+1;
    if(m==0)
        cout<<s[h-1]<<" o' clock";
    else if(m==15)
        cout<<"quarter past "<<s[h-1];
    else if(m==30)
        cout<<"half past "<<s[h-1];
    else if(m==45)
        cout<<"quarter to "<<s[h-1];
    else if(m==1)
        cout<<s[m-1]<<" minute past "<<s[h-1];
    else if(m==59)
        cout<<s[60-m-1]<<" minute to "<<s[h-1];
    else if(m>0 && m<30)
        cout<<s[m-1]<<" minutes past "<<s[h-1];
    else if(m>30 && m<59)
        cout<<s[60-m-1]<<" minutes to "<<s[h-1];
    return 0;
}
