#include<iostream>
using namespace std;
int i=0;
void fun(int i, int n){
    
    if(i<1){
        return;
    }
    fun(i-1,n);
    cout<<i<<endl;

    
}
int main(){
    int n;
    cin>>n;
    fun(n,n);
}
