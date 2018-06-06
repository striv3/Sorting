#include"RADIX_S.hpp"
#include<vector>
using std::vector;
vector<vector<unsigned> > CONVERT(const vector<unsigned>&A)
{
    unsigned n=A.end()-A.begin();
    unsigned Max=A[0];
    for(unsigned i=0;i!=n;++i)
        if(A[i]>Max)
            Max=A[i];
    unsigned d=0;
    while(Max>0)
    {
        ++d;
        Max/=10;
    }
    vector<vector<unsigned> >C;
    for(unsigned i=0;i!=n;++i)
    {
       C.push_back(vector<unsigned>() );
    }
    for(unsigned i=0;i!=n;++i)
    {
        for(unsigned j=0;j!=d;++j)
        {
            unsigned temp=A[i];
            C[i].push_back(temp%10);
            temp/=10;
        }
    }

return C;
}
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

