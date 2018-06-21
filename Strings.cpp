#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2,temp,s3;
    int l1,l2;
    cin>>s1;
    cin>>s2;
    s3=s1+s2;
    cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s3<<endl;
    temp=s2[0];
    s2[0]=s1[0];
    s1[0]=temp[0];
    cout<<s1<<" "<<s2<<endl;
    return 0;
}
