#include<iostream>
#include<list>
using namespace std;

class stack{
  list<int> li;
  
  public:

  void push(int ele){
    li.push_front(ele);

  }

  void pop(){
    if(li.empty()) return ;

    li.pop_front();
  }

  int top(){
    if(li.empty()) {
        cout<<"empty";
        return 0;
    }
   
    return li.front();
  }
  
  bool empty(){
    return li.empty();
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
  cout<<st.top();
}