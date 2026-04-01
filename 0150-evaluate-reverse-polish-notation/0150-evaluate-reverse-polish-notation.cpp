class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto i:tokens){
            if(i=="+"){
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num1+num2);
            }
            else if(i=="-"){
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num2-num1);
            }
            else if(i=="/"){
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num2/num1);
            }
            else if(i=="*"){
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num1*num2);
            }
            else{
                s.push(stoi(i));
            }
        }
    return s.top();
    }
};