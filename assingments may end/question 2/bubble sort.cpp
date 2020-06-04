#include <iostream>
using namespace std;

void bubblesort(int*a,int n)
{   int i=n-1;
    while(i>0)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            { 
             
               a[j]=a[j]+a[j+1];
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
    
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
        
        
    }
    
    bubblesort(a,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        
        
    }
    
    
}
