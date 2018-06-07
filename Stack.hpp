#ifndef Stack_user
#define Stack_user
#include<vector>
using std::vector;
bool Empty(vector<int>&s,int &s_top);
void push(vector<int>&s,int &s_top,int x);
int pop(vector<int>&s,int &s_top);
#endif // stack
