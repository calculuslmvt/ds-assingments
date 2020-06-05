#include <iostream>
#include<string.h>
using namespace std;

void merge(int*a,int s,int e)               // merge  function
{   
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    
    
    int*temp=(int*)malloc(sizeof(int*));
    int k=s;
    
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        temp[k++]=a[i++];
        else
        temp[k++]=a[j++];
        
    }
    
    while(i<=mid)
    {
        temp[k++]=a[i++];
        
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
        
    }
    
    
    for(int p=s;p<=e;p++)
    {
        a[p]=temp[p];
        
    }
}







void mergesort(int*a,int s, int e)        //  dividing into subparts functions
{
    
    if(s>=e)
   { return;}
    
    int mid=(s+e)/2;
                                           // dividing and recursively solving sub arrays
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);
    merge(a,s,e);                         // calling merge function
}








int main(void){
    // Your code here!
    
    int n;
    int*a=(int*)malloc(sizeof(int*));
    
                                                         // entering string 
    char*s=(char*)malloc(sizeof(char*));
    cin>>s;
    n=strlen(s);
    
    cout<<"size of string " <<n<<" ";
     
                                                         // transfering string into ascii valued array
    
     
     for(int i=0;i<n;i++)
     {  
         a[i]=int(s[i]);
         
     }
    
    
   mergesort(a,0,n-1);                                       // calling merge sort function
    
    
    
    for(int i=0;i<n;i++)                                     // printing sorted string
     {
         cout<<char(a[i]);
         
     }
    
    
}
