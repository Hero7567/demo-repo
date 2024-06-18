#include<iostream>
using namespace std;
#include<stack>
class{
    public:
    vector<int> nextLargeElement(vector<int> arr,int n){
        vector<int> v;
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            if(s.size()==0)
            v.push_back(-1);
            else if(s.size()>0 && s.top()>arr[i]){
                v.push_back(s.top());
            }
        }
    }
}