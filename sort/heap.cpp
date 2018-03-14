#include<iostream>
#include<vector>
using spacename std;
void adjustBigRootHeap(vector<int> & array,int size);
int main()
{
    vector<int> myarray;   
    sort(myarray);
}

void sort(vector<int> & array)
{
    int size=array.size()
    while(size>1)
    {
    adjustBigRootHeap(array,size);
    swap(1,size-1);
    }
}
       
//adjust big root heap
void adjustBigRootHeap(vector<int> & array,int size)
{
    int root_index=1;
    int left_index=root_index*2;
    int right_index=root_index*2+1;
    while(root_index<size &&left_index<size)
    {
        if(right_index<size)
        {
            if(array[root_index]<array[left_index]||array[root_index]<array[right_index])
            {
                (array[left_index]<array[right_index])?swap(right_index,root_index):swap(left_index,root_index);
            }
        }
        else
        {  
            (array[root_index]<array[left_index])?swap(left_index,root_index):1;
        }
        root_index*=2;
    }
}
    
    
