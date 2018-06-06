#include"counting_sort.hpp"
#include<iostream>
#include<vector>
using std::vector;
using namespace std;
void COUNTING_S(vector<unsigned> &A,vector<unsigned> &B,unsigned n)
{
    unsigned Max=A[0];
    for(unsigned i=0;i!=n;++i)
        if(A[i]>Max)
            Max=A[i];
    vector<unsigned> C(Max+1);
    for(unsigned i=0;i!=n;++i)
        ++C[(A[i])];
    for(unsigned i=1;i!=Max+1;++i)
        C[i]+=C[i-1];
    for(int i=n-1;i>=0;--i)
        B[(C[(A[i])])-1]=A[i];
}
