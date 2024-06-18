#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    cout<<"hello world"<<endl;
    int arr[]={1,2,3,4,5,8,7,6,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<arr+n<<endl;
    cout<<arr<<endl;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}