#include <iostream>
using namespace std;
// program for quick sort

int partion(int*a,int s,int e)     // partition function (it returns the index of pivot element)
{                                               
 int pivot=a[e];
 int i=s-1;
 
 for(int j=s;j<e;j++)
 {
     if(a[j]<=pivot)
     {
         i++;
         {  int temp;                       //swapping (to send smaller numbers to one side of the array)
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
             
         }
     }
     
 }
    
            int temp=a[i+1];                // swapping the pivot element 
            a[i+1]=a[e];
            a[e]=temp;
    
    return i+1;                             // returning the index of pivot point
    
}

void quick(int*a,int s ,int e)              // quick function which is called recursively   
{   if(s>=e)
    {return; }
    int i=partion(a,s,e);
    
    
    quick(a,s,i-1);
    quick(a,i+1,e);
    
    
}


int main()

{ int n; int*a=(int*)malloc(sizeof(int*)); cin>>n; for(int i=0;i<n;i++){cin>>a[i];}  //  taking input of the array


quick(a,0,n-1);                                  // calling quick function for quick sorting algorithm
for(int i=0;i<n;i++){cout<<a[i]<<" ";}          // printing the elements
    
    
}
