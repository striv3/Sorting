#include"Linked.hpp"
#include<vector>
using std::vector;
Linkedl* search_l(Linkedl *&p,int n)
{
    while(p->next!=nullptr && p->x!=n )
        p=p->next;
    return p;
}
void List_Insert(Linkedl *&L_head,Linkedl* p)
{
    p->next=L_head;
    if(L_head!=nullptr)
        L_head->prev=p;
    p->prev=nullptr;
    L_head=p;
}
void List_Delete(Linkedl *&L_head,Linkedl* p)
{
    if(p->next!=nullptr)
        (p->next)->prev=p->prev;
    if(p->prev!=nullptr)
        (p->prev)->next=p->next;
    else
        L_head=p->next;

}
void List_Insert_Sentinel(Linkedl*&L_nill,Linkedl* p)
{
    (L_nill->next)->prev=p;
    p->next=L_nill->next;
    p->prev=L_nill;
    L_nill->next=p;

}
void List_Delete_Sentinel(Linkedl*&L_nill,Linkedl* p)
{
    (p->next)->prev=p->prev;
    (p->prev)->next=p->next;
}

