// Single linked list.

#include <iostream>
using namespace std;

template <typename T>
class node {
public:
	T val;
	node<T> *next;
	
	node(const T &item, node<T> *nextNode = NULL): val(item), next(nextNode){}
};

template <typename T>
node<T>* add_back(node<T> *head, const T &elm){
	if(head == NULL)
		return new node<T>(elm);
	node<T> *cur = head;
	while(cur->next != NULL){
		cur = cur->next;
	}
	cur->next = new node<T>(elm);
	return head;			
}

template <typename T>
node<T>* add_front(node<T> *head, const T &elm){
	return new node<T>(elm, head);
}

template <typename T>
int length(node<T> *head){
	int count = 0;
	while(head != NULL){
		head = head->next;
		count++;
	}
	return count;
}

template <typename T>
node<T>* find(node<T> *head, const T &target){
	while(head != NULL && head->val != target){
		head = head->next;
	}
	return head;
}

template <typename T>
bool isMember(node<T> *head, const T& target){
	while(head != NULL && head->val != target){
		head = head->next;
	}
	return head;
}

// returns linked list with first n members of original list
// if n is more than list size, it returns copy of original list
template <typename T>
node<T>* sub_list(node<T> *head, int n){
	if(head == NULL || n == 0)
		return NULL;
	node<T> *head2 = new node<T>(head->val);
	node<T> *cur = head2;
	n--;
	while(head->next != NULL && n > 0){
		head = head->next;
		cur->next = new node<T>(head->val);
		cur = cur->next;
		n--;
	}
	return head2;
}

// counts number of occurences of "elm"
template <typename T>
int count_value(node<T> *head, const T &elm){
	if(head == NULL)
		return 0;
	int count = 0;
	while(head->next != NULL){
		if(head->val == elm)
			count++;
		head = head->next;
	}
	return count;
}

template <typename T>
void print(node<T> *head){
	if(head == NULL)
		return;
	cout << "List = {" << head->val;
	while(head->next != NULL){
		head = head->next;
		cout << ", " << head->val;
	}
	cout << "}" << endl;
}

// print reverse with recursion
template <typename T>
void print_reverse(node<T> *head){
	if(head == NULL)
		return;
	static int count = 0;
	if(head->next == NULL){
		cout << "Reverse List = {" << head->val << " ";
		return;
	}
	count++;
	print_reverse(head->next);
	cout << head->val << " ";
	count--;
	if(count == 0)
		cout << "}" << endl;
}

int main(){
	
	node<int> *head = new node<int>(2);
	head = add_front(head, 1);
	head = add_back(head, 3);
	head = add_back(head, 4);
	head = add_back(head, 5);
	head = add_back(head, 5);
	head = add_back(head, 6);
	print(head);
	
	cout << "Length = " << length(head) << endl;
	cout << "isMember = " << isMember(head, 33) << endl;
	cout << "count_value = " << count_value(head, 5) << endl;
	
	node<int> *cur = find(head, 3);
	cout << "Current ";
	print(cur);

	node<int> *head2 = sub_list(head, 4);
	cout << "Sub";
	print(head2);
	
	print_reverse(head2);
	
	return 0;
}