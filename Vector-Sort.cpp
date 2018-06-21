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
    vector<int> v(N);
    for(int i=0;i<N;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int j=0;j<N;j++)
        cout<<v[j]<<" ";
    return 0;
}
