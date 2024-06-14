#include<iostream>
#include<stack>

using namespace std;
void insert_bottom(stack<int> &st,int ele){
    if(st.empty()){
      st.push(ele);
      return;
    }
    int cur=st.top();
    st.pop();
    insert_bottom(st,ele);
    st.push(cur);
}
int main(){
   stack<int> st;

   int n;
   cin>>n;

   for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    st.push(ele);
   }

   insert_bottom(st,126);

   while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
   }


}