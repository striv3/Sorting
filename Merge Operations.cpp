#include"Merge_Operations.hpp"
#include<vector>
using std::vector;
vector<int> MERGE_SORT(vector<int>&A,unsigned p,unsigned r)
{
    if(A.size()==1)
        return A;

    unsigned q=(p+r)/2;
    MERGE_SORT(A,p,q);
    MERGE_SORT(A,q+1,r);
    vector<int> Merged=MERGE(A,p,q,r);
    return Merged;

}
vector<int> MERGE(vector<int>&A,unsigned p,unsigned q,unsigned r)
{
    vector<int> B,C;
    for(unsigned i=p;i!=q;++i)
        B.push_back(A[i]);
    B.push_back(128000);
    for(unsigned i=q+1;i!=r;++r)
        C.push_back(A[i]);
    C.push_back(128000);
    vector<int> Merged(p+r);
    unsigned k=0,i=0,j=0;
    while(k<=r-p)
    {
        if(B[i]<=C[j])
        {
            Merged[k]=B[i];
            ++i,++k;
        }
        else if(C[j]<B[i])
        {
            Merged[k]=A[i];
            ++j,++k;
        }
    }
    return Merged;
}
