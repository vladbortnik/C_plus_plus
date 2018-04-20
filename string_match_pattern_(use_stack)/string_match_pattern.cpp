/*

Write a program that reads strings until empty string is entered.
The program should indicate if the string match pattern.
Pattern is: STRING1#STRING2 where STRING2 is the reverse of STRING1.
Must use Stack.

*/

#include <iostream>
#include <stack>
using namespace std;

bool match_pattern(string a, string b){
	int i = 0;
	stack<char> stk;
	for(i = 0; i < a.length(); i++)
		stk.push(a[i]);
	i = 0;
	while(!stk.empty() && i < b.length()){
		if(stk.top() == b[i]){
			stk.pop();
			i++;
		}
		else
			return false;
	}
	
	if(stk.empty() && i == b.length())
		return true;
	else
		return false;
}


int main(){
	
	string s, token1, token2, delimiter = "#";
	int pos = -1;
	
	while(pos == -1){
		cout << "Please enter a string and hit ENTER: ";
		getline(cin, s);
		pos = s.find('#');
		if(pos == -1)
			cout << "You must use \"#\" as a delimiter." << endl;
	}
	
	token1 = s.substr(0, pos);
	s.erase(0, pos + 1);
	token2 = s.substr();
	
	bool match =  match_pattern(token1, token2);
	if(match)
		cout << "Your string matches pattern STRING1#STRING2." << endl;
	else
		cout << "Your string does NOT matches pattern STRING1#STRING2." << endl;

	return 0;
}