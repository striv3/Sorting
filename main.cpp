#include"Merge_Operations.hpp"
#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
int main()
{
    vector<int> A;
    unsigned n;
    cin>>n;
    int temp;
    for(unsigned i=0;i!=n;++i)
    {   cin>>temp;
        A.push_back(temp);
    }
    vector<int>Merged=MERGE_SORT(A,0,n-1);
    //cout<<"ok";
    for(auto i:Merged)
        cout<<i<<" ";
    return 0;
}
