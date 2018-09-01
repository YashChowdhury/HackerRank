// Question- https://www.hackerrank.com/challenges/caesar-cipher-1/problem
#include <cctype>
#include <iostream>
using namespace std;

int main(){
  char s[1000];
 int n,k,i;
 cin>>n;
 for(i=0;i<n;i++)
  cin>>s[i];
 cin>>k;
 for(i=0;i<n;i++)
 {
  if(isalpha(s[i])!=0)
  {
	if((s[i]>=65 && s[i]<=90 && s[i]+k%26>90)||(s[i]>=97 && s[i]<=122 && s[i]+k%26>122))
	{
	  s[i]=s[i]+k%26-26;
	}
	else
	 s[i]=s[i]+k%26;

  }
 }
 for(i=0;i<n;i++)
  cout<<s[i];
    return 0;
}
