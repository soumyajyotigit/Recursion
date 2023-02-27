#include<iostream>
using namespace std;
int i=1;
void fun(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    fun(i+1,n);
}
int main(){
    int n;
    cin>>n;
    fun(i,n);
}
