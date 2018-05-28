#include<iostream>
#include<vector>
using std::vector;
inline unsigned parent(unsigned i)
    {return(i/2);}
inline unsigned  node_left(unsigned i)
    {return(2*i);}
inline unsigned  node_right(unsigned i)
    {return (2*i+1);}
void Swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

void Maxify(vector<int>&A,unsigned i)
{
 unsigned largest=i;
 unsigned left=node_left(i),right=node_right(i);
 if(left<=A.size() && A[i]<A[left])
    largest=left;
 if(right<=A.size() && A[right]>A[largest])
    largest=right;
 if(i!=largest)
 {
     Swap(A[i],A[largest]);
     Maxify(A,largest);
 }

}
void Build_Max_Heap(vector<int>&A)
{
    unsigned n=A.size();
    for(unsigned i=n/2;i!=0;--i)
       Maxify(A,i);
}
