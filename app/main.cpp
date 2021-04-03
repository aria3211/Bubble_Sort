#include <iostream>

using namespace std;

void swap(int *x, int *y);
int bubble_sort(int data[],int n);
void Print_sorted_list(int data[],int n);


int main()
{
    int x[6] = {1,4,2,7,1,6};
    int len = sizeof(x)/sizeof(x[0]);
    bubble_sort(x,len);
    Print_sorted_list(x,len);
    
}


void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int bubble_sort(int data[],int n)
{
    for(int i = 0; i<n-1; ++i)
    {
        for(int j = 0; j<n-1-i; ++j)
        {
            if(data[j] > data[j+1])
            {
                swap(&data[j],&data[j+1]); 


            }
        }
    }
    return 0;
}

void Print_sorted_list(int data[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout  << data[i] << " , " ;
    }
}