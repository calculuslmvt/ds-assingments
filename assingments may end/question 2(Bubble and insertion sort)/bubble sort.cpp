#include <iostream>
using namespace std;

void bubblesort(int*a,int n)
{   int i=n-1;
    while(i>0)                                        // outer loop
    {
        for(int j=0;j<i;j++)                           // inner loop(depends on outer loop)
        {
            if(a[j]>a[j+1])
            { 
             
               a[j]=a[j]+a[j+1];                    // swaping elements without using third variable
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
                
            }
        }
        
        
        
        i--;
    }
    
    
}
int main(void){
    // binary sorting program
    
    int*a=(int*)malloc(sizeof(int*));
    int n;
    
    
    cin>>n;                             // inserting size of array
    for(int i=0;i<n;i++)                // inserting elements of array
    {
        cin >>a[i];
        
        
    }
    
    bubblesort(a,n);                    // calling bubble sort
    
    for(int i=0;i<n;i++)                // printing sorted array
    {
        cout<<a[i];
        
        
    }
    
    
}
