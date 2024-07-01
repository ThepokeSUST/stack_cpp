#include<iostream>
#include<stack>

using namespace std;

#define s string

int man(char ch){
    
    if(ch=='^') return 3;
    else if(ch=='/' or ch=='*') return 2;
    else if(ch=='-' or ch=='+') return 1;
    else return 0;
}

s inTOpost(s str){
      s ans="";
   stack<char> st;
    for(int i=0;i<str.size();i++){
        char ch=str[i];

        if( (ch>='a' and ch<='z') or (ch>='A' and ch<='Z') or (ch>='1' and ch<='9')){
            ans+=ch;
        }

        else if(ch=='(') st.push(ch);

        else if(ch==')'){
             while( st.top()!='('){
                ans+=st.top();
                st.pop();
             }
             st.pop();
        }
        else{
             if(!st.empty()){
                if(man(ch)> man(st.top())){
                    st.push(ch);
                }
                else{
                    ans+=st.top();
                    st.pop();
                    st.push(ch);

                }
             }
             else st.push(ch);
        }
    }

    while(not st.empty()){
        ans+=st.top();
        st.pop();
    }

    return ans;
}

int main(){
  
  s str;
  cin>>str;

  s ans = inTOpost(str);
}