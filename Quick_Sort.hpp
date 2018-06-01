#ifndef Quick_Sort
#define Quick_Sort
#include<vector>
using std::vector;
int PARTITION(vector<int> &A,unsigned p,unsigned r);
int random(int p,int r);
int RANDOMISED_PARTITION(vector<int> &A,unsigned p,unsigned r);
void Quicksort(vector<int>&A,int p,int r);
#endif // Quick_Sort
