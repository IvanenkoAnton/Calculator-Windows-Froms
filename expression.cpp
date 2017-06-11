/*******************************************************************************
Simple Calculator,
Created by Anton Ivanenko,June 2017
I wrote this to train using Windows Forms .NET
Calculation algorithm, which uses stack to save operand and operations
*******************************************************************************/
#include "expression.h"
#include <vector>
#include <sstream>
#include <string>

bool CheckRoundBrackets(const char *string) {

	int size = 0;
	for (int i = 0; string[i] != '\0'; i++) {
		if (string[i] == '(') size++;
		if (string[i] == ')') size--;
		if (size < 0) { return false; }
	}
	
	return !(size > 0);
}

bool isNumeral(char symb) {
	
	char numerals[11] = { '0','1','2','3','4','5','6','7','8','9','.' };
	for (int i = 0; i < 11; i++) if (symb == numerals[i]) return true;
	return false;
}

bool isOperation(char symb) {
	
	char operations[7] = { '(',')','+','-','*','/','^' };
for (int i = 0; i < 7; i++) if (symb == operations[i]) return true;
return false;
}

bool isFunction(std::string oper) {

	std::vector<std::string> func = { "sin", "cos" };

	for (auto v : func)
		if (v == oper)
			return true;

	return false;
}

float Calc(float op1, float op2, std::string oper) {

	if (oper == "+")
		return op1 + op2;
	if (oper == "-")
		return op1 - op2;
	if (oper == "*")
		return op1 * op2;
	if (oper == "/")
		return op1 / op2;
	if (oper == "^")
		return pow(op1, op2);
}

int ReturnPriority(std::string op, bool flag) {
	if (flag || isFunction(op))
		return 5;
	std::string operation1[4] = { ")","+","*","^" };
	std::string operation2[4] = { "(","-", "/","^" };
	int ioper = -1;
	for (int i = 0; i < 4; i++) {
		if (operation1[i] == op) {
			ioper = i + 1;
		}
		if (operation2[i] == op) {
			ioper = i + 1;
		}
	}
	return ioper;
}

float Calc(float op, std::string oper) {

	if (oper == "-")
		return -op;
	if (oper == "sin")
		return sin(op);
	if (oper == "cos")
		return cos(op);

	return op;
}

std::string Calculate(const char *string) {

	std::string buffer;
	int i = 0;
	float Sum = 0, op1, op2;
	bool isUnarOperation = true;
	bool isNumber = true;
	bool isOper = true;
	Stack<float> *Num = new Stack<float>;
	Stack<Operation> *Oper = new Stack<Operation>;
	if (!CheckRoundBrackets(string)) {
		return "Err";
	}
	while (i < strlen(string)) {
		while ((string[i] != ' ') && (i < strlen(string))) {
			buffer.clear();
			if (isOperation(string[i]))
				buffer.push_back(string[i]);
			else if (isNumeral(string[i])) {
				while ((i < strlen(string)) && isNumeral(string[i])) {
					buffer.push_back(string[i]);
					i++;
				}
				if (!isNumber) {
					return "Err";
				}
				Num->push_front(atof(buffer.c_str()));
				isNumber = false;
				isUnarOperation = false;
				isOper = true;
			}
			else {
				while ((i < strlen(string)) && !isNumeral(string[i]) && !isOperation(string[i])) {
					buffer.push_back(string[i]);
					i++;
				}
				i--;
				if (!isFunction(buffer))
					return "Err";
			}
			if (isOperation(buffer[0]) || isFunction(buffer)) {
				if (buffer != "(") {
					if (!isOper && !isFunction(buffer)){
						return "Err";
					}
					if (Oper->isEmpty()) {;
						Oper->push_front(*(new Operation(buffer, ReturnPriority(buffer, isUnarOperation))));
						isNumber = true;
						isOper = false;
					}
					else {
						Operation *op = new Operation(buffer, ReturnPriority(buffer, isUnarOperation));
						if (*op > Oper->GetTopData()) { //âûñøûé ïðèîðèòåò
							Oper->push_front(*(new Operation(buffer, ReturnPriority(buffer, isUnarOperation))));
							isNumber = true;
							isOper = false;
						}
						else {
							if (buffer == ")") { // åñëè âñòðåòèëè çàêðûâàþùóþ ñêîáêó
								Operation operation = Oper->pop_front();
								std::string oper = operation.oper;
								int prior = operation.priority;
								while (oper != "(") {
									if (prior == 5) { //åñëè óíàðíàÿ îïåðàöèÿ
										op2 = 0;
										if (!Num->isEmpty()) op2 = Num->pop_front();
										Sum = Calc(op2, oper);
									}
									else {
										op1 = 0; op2 = 0;
										if (!Num->isEmpty()) op2 = Num->pop_front();
										if (!Num->isEmpty()) op1 = Num->pop_front();
										Sum = Calc(op1, op2, oper);
									}
									Num->push_front(Sum);
									if (!Oper->isEmpty()) operation = Oper->pop_front();
									oper = operation.oper;
									prior = operation.priority;
									isOper = true;
								}
							}
							else { //åñëè îïåðàöèÿ èìååò ìåíüøèé èëè òàêîé æå ïðèîðèòåò
								Operation operation = Oper->pop_front();
								std::string oper = operation.oper;
								int prior = operation.priority;
								if (prior == 5) {
									op2 = 0;
									if (!Num->isEmpty()) op2 = Num->pop_front();
									Sum = Calc(op2, oper);
								}
								else {
									op1 = 0; op2 = 0;
									if (!Num->isEmpty()) op2 = Num->pop_front();
									if (!Num->isEmpty()) op1 = Num->pop_front();
									Sum = Calc(op1, op2, oper);
								}
								Num->push_front(Sum);
								Oper->push_front(*(new Operation(buffer, ReturnPriority(buffer, isUnarOperation))));
								isOper = true;
							}
							isNumber = true;
						}
					}
				}
				else {
					isUnarOperation = false;
					Oper->push_front(*(new Operation(buffer, ReturnPriority(buffer, isUnarOperation))));
					isNumber = true;
					isOper = true;
					isUnarOperation = true;
				}
				i++;
			}
		}
	}
	while (!Num->isEmpty() && !Oper->isEmpty()) {//âû÷èñëåíèå îñòàâøèõñÿ îïåðàöèé â ïðèìåðå
		Operation operation;
		std::string oper;
		int prior;
		if (!Oper->isEmpty()) {
			operation = Oper->pop_front();
			oper = operation.oper;
			prior = operation.priority;
			if (prior == 5) {
				op2 = 0;
				if (!Num->isEmpty()) op2 = Num->pop_front();
				Sum = Calc(op2, oper);
			}
			else {
				op1 = 0; op2 = 0;
				if (!Num->isEmpty()) op2 = Num->pop_front();
				if (!Num->isEmpty()) op1 = Num->pop_front();
				Sum = Calc(op1, op2, oper);
			}
			Num->push_front(Sum);
		}
	}

	Sum = Num->pop_front();

	std::ostringstream output;
	output << Sum;

	return output.str();
}
