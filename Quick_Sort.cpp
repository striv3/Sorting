#include"Quick_Sort.hpp"
#include<vector>
#include<iostream>
#include<random>
#include<ctime>
using namespace std;
int PARTITION(vector<int> &A,unsigned p,unsigned r)
{
    int i=p-1;
    int x=A[r];
    //std::cout<<x<<"\n"<<i<<"\n";
    for(unsigned j=p;j!=r;++j)
        if(A[j]<x)
    {
        ++i;
        std::swap(A[i],A[j]);
    }
    std::swap(A[i+1],A[r]);
    return i+1;

}
int RANDOMISED_PARTITION(vector<int> &A,unsigned p,unsigned r)
{
    int i=random(p,r);
    swap(A[i],A[r]);
    return PARTITION(A,p,r);
}
int random(int p,int r)
{
    static default_random_engine e(time(0));
    static uniform_int_distribution<unsigned> u(p,r);
    u(e);
    return u(e);
}
void Quicksort(vector<int>&A,int p,int r)
{   int q=RANDOMISED_PARTITION(A,p,r);
    if(p==r)
        return;
    Quicksort(A,p,q);
    Quicksort(A,q+1,r);
}
