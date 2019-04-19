#include<iostream>
using namespace std;

int main()
{
  long a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  long s1=a+b+c+d;
  long s2=a+b+c+e;
  long s3=a+b+d+e;
  long s4=a+c+d+e;
  long s5=b+c+d+e;

  if(s1<s2 && s1<s3 && s1<s4 && s1<s5)
    cout<<s1;
  else   if(s1>s2 && s2<s3 && s2<s4 && s2<s5)
    cout<<s2;
  else   if(s3<s1 && s2>s3 && s3<s4 && s3<s5)
    cout<<s3;
  else   if(s1>s4 && s4<s3 && s2>s4 && s4<s5)
    cout<<s4;
  else
    cout<<s5;


   if(s1>s2 && s1>s3 && s1>s4 && s1>s5)
     cout<<" "<<s1;
   else   if(s1<s2 && s2>s3 && s2>s4 && s2>s5)
    cout<<" "<<s2;
  else   if(s3>s1 && s2<s3 && s3>s4 && s3>s5)
    cout<<" "<<s3;
  else   if(s1<s4 && s4>s3 && s2<s4 && s4>s5)
    cout<<" "<<s4;
  else
    cout<<" "<<s5;
}