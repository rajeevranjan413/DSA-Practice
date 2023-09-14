#include <iostream>
#include<stack>
using namespace std;
bool valid(string str){
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        
        char ch= str[i];
        if (ch=='('  || ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            s.push(ch);
        }
        else
        {
            if (ch==')')
            {
                bool isRedundant=true;
                while (s.top() != '(')
                {
                    char top= s.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        isRedundant=false;
                    }
                    s.pop();

                }
                if (isRedundant==true)
                {
                    return true;
                }
                s.pop();
            }
            
        }

        
    }
    return false;
    
}
int main()
{
    string str="((a+b))";
    
    if(valid(str)){
        cout<<"Redundant";
    }
    else
        cout<<"Not Redudant";
return 0;
}