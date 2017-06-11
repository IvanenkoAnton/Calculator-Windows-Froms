/*******************************************************************************
Simple Calculator,
Created by Anton Ivanenko,June 2017
I wrote this to train using Windows Forms .NET
Calculation algorithm, witch uses stack to save operand and operations
*******************************************************************************/
#pragma once

#include <iostream>

struct Operation {
	std::string oper;
	int priority;
	Operation() {};
	Operation(std::string _oper, int _prior) : oper(_oper), priority(_prior) {};
	bool operator > (const Operation& _op) { return (this->priority > _op.priority); };
};

template <class Type>
class Stack {
	struct Node {
		Type Data;
		Node *next;
		Node(): next(NULL){};
		Node(Type _Data) : Data(_Data), next(NULL){};
		Type GetData() { return Data; };
	};
public:
	Stack() { top = NULL; };
	~Stack() { clear(); };
	void push_front(Type);
	Type pop_front();
	bool isEmpty() { return (top == NULL) ? true : false; };
	Type GetTopData() { return top->Data; };
	void clear() {while (!isEmpty()) pop_front()} ;
private:
	Node *top;
};

template <class Type>
void Stack<Type>::push_front(Type _data) {
	Node* New = new Node(_data);
	New->next = top;
	top = New;
}

template <typename Type>
Type Stack<Type>::pop_front() {
	if (!isEmpty()){
		Type tmp = top->GetData();
	    Node* tmpNode;
	    tmpNode = top->next;
	    delete top;
	    top = tmpNode;
	    return tmp;
	} else {
		abort();
	}
}


bool CheckRoundBrackets(const char *);

bool isNumeral(char);

bool isOperation(char);

bool isFunction(std::string oper);

int ReturnPriority(std::string, bool);

float Calc(float, float, std::string);

float Calc(float, std::string);

std::string Calculate(const char *);
