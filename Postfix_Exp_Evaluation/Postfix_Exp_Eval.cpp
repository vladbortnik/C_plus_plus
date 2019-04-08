// Evaluate Postfix Expression (Expression in reverse-Polish notation.


#include <iostream>
#include <stack>

using namespace std;

bool is_operator(char chr){
    if (chr == '+' || chr == '-' || chr == '*' || chr == '/')
        return true;
    else
        return false;
}


int evaluate(int op1, int op2, char op){
    int result;
    switch(op){
    	case '+':
        	result = op2 + op1;
        	break;
    	case '-':
        	result = op2 - op1;
        	break;
    	case '*':
        	result = op2 * op1;
        	break;
    	case '/':
        	result = op2 / op1;
        	break;
    }
    return result;
}


int main(){
	
	stack<int> stk;
	string exp;
	char digit[10];
    int i = 0, op1 = 0, op2 = 0;
	int len = 0, j = 0, x = 0;
    
    cout << "Enter expression:" << endl;
    getline(cin, exp);
    len = exp.length();
	
    for(i=0; i<len; i++){

        if(exp[i]>='0' && exp[i]<='9'){
            digit[j++] = exp[i];
        }
        else if(exp[i]==' '){
            if(j>0){
                digit[j] = '\0';
                x = atoi(digit);
                stk.push(x);
                j = 0;
            }
        }
        else if(is_operator(exp[i])){
            op1 = stk.top();
            stk.pop();
            op2 = stk.top();
            stk.pop();
            stk.push(evaluate(op1, op2, exp[i]));
        }
    }

	cout << "Result = " << stk.top() << endl;

    return 0;
}