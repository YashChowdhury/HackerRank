// Question- https://www.hackerrank.com/challenges/between-two-sets/problem
#include <iostream>
using namespace std;


int main(){
   int a[10],b[10],m,n,i,x,c,z=0;
 cin>>m>>n;
 for(i=0;i<m;i++)
  cin>>a[i];
 for(i=0;i<n;i++)
  cin>>b[i];
 for(x=1;x<=100;x++)
 {
  c=0;
  for(i=0;i<m;i++)
  {
	if(x%a[i]==0)
	 c++;
  }
  for(i=0;i<n;i++)
  {
	if(b[i]%x==0)
	 c++;
  }
  if(m+n==c)
	z++;
 }
 cout<<z;
    return 0;
}
