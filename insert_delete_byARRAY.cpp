#include<iostream>
#include<vector>
using namespace std;

class stack{
   vector<int> arr;
   int idx;
   int size;
   public:
  
   stack(){
      idx=-1;
      size=0;

   } 

   void push(int ele){
        arr.push_back(ele);
        size++;
        idx++;
   }
   
   int top(){
    if(size==0){
        cout<<"empty";
        return 0;
    }

    return arr[idx];
   }

   void pop(){
    if(size==0){
        cout<<"empty";
        return;
    }

    idx--;
    size--;
   }

};

int main(){
   stack st;
   
   st.push(90);
   st.push(10);
   cout<<st.top()<<endl;
   st.pop();
   cout<<st.top()<<endl;
   st.pop();
   cout<<st.top()<<endl;
   st.pop();

}