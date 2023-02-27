#include<iostream>
using namespace std;
int i=0;
void fun(int i, int n){
    
    if(i<1){
        return;
    }
    cout<<i<<endl;
    fun(i-1,n);
}
int main(){
    int n;
    cin>>n;
    fun(n,n);
}
