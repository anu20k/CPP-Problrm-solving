#include <iostream>
using namespace std;

void thirdlargest(int arr[], int n){
    
    int max=arr[0];
    int sec=0;
    int third=0;
    
    if(n==1){
        cout<<"-1";
    }
    
    for(int i=1;i<n;i++){
        
        if(max<arr[i])
        {
            sec=max;
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        
        if(third<sec && sec>arr[i] && max>arr[i]){
            third=arr[i];
        }
    }
    if(third==sec || third==max || third==0){
        cout<<"-1";
    }
    cout<<max<<" "<<sec<<" "<<third;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    thirdlargest(arr,n);
    return 0;
}
