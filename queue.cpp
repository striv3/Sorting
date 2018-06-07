#include"queue"
#include<iostream>
#include<vector>
using std::vector;
void EQUEUE(vector<int> &q,int &q_head,int &q_tail,int x)
{
    if((q_head==0 && q_tail==(int)q.size()-1) || (q_head-q_tail)==1 )
        std::cerr<<"Overflow";
    else{
        q[q_tail]=x;
        if(q_tail==(int)q.size()-1)
            q_tail=0;
        else
            ++q_tail;
    }
}
int DEQUEUE(vector<int> &q,int &q_head,int &q_tail)
{
    if(q_head==q_tail)
        std::cerr<<"UnderFlow";
    else{
        int x=q[q_head];
        if(q_head==(int)q.size()-1)
            q_head=0;
        else
            ++q_head;
        return x;
    }
    return false;
}
