#ifndef Linkedlm
#define Linkedlm
#include<vector>
using std::vector;
struct Linkedl{
public:
    Linkedl()=default;
    Linkedl(int a,Linkedl *b,Linkedl *c):x(a),prev(b),next(c){}
    int x=0;
    Linkedl *prev=nullptr,*next=nullptr;

};
Linkedl* search_l(Linkedl *p,int n);//Reference To Pointer.
void List_Insert(Linkedl*&L_head,Linkedl* p);
void List_Delete(Linkedl*&L_head,Linkedl* p);
void List_Insert_Sentinel(Linkedl*&L_nill,Linkedl* p);
void List_Delete_Sentinel(Linkedl*&L_nill,Linkedl* p);
#endif // Linked_List
