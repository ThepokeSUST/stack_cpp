#include<iostream>
#include<stack>
using namespace std;

void insert_at(stack<int> &st,int idx,int ele){
   
  if(idx==1){
    st.push(ele);
    return;
  }

   idx--;
   int cur=st.top();
   st.pop();
   insert_at(st,idx,ele);
   st.push(cur);
}

int main(){
  stack<int> st;
  int n;
  cin>>n;
  for(int i=0;i<n;i++) {
    int ele;
    cin>>ele;
    st.push(ele);
  }

cout<<"enter inx ";
int idx;
cin>>idx;

insert_at(st,idx,9);

while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}

}