#include<iostream>
#include<vector>
using std::vector;
bool Empty(vector<int>&s,int &s_top)
{
    if(s_top==-1)
        return true;
    else
        return false;
}
void push(vector<int>&s,int &s_top,int x)
{
    if(s_top==(int)s.size()-1)
        std::cerr<<"Overflow";
    else
        {++s_top;
         s[s_top]=x;
        }
}
int pop(vector<int>&s,int &s_top)
{
    if(s_top==-1)
        std::cerr<<"UnderFlow";
    else{
        --s_top;
        return(s[s_top+1]);
    }
    return false;
}
