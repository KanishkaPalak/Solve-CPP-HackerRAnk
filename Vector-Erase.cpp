#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int N;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    cin>>N;
    int i,pos,a,b;
    vector<int> v(N);
    for(i=0;i<N;i++)
        cin>>v[i];
    cin>>pos;
    v.erase(v.begin()+(pos-1));
    cin>>a>>b;
    for(i=a;i<b;i++)
        v.erase(v.begin()+(a-1));
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
