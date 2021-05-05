#include <iostream>
#include <string>
using namespace std;

int main(){
	int num1, num2, result;
	string op;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter the operator: ";
	cin >> op;
	if(op == "+"){
		result = num1 + num2;
		}
	else if(op == "-"){
		result = num1 - num2;
		}	
	else if(op == "*"){
		result = num1 * num2;
		}
	else if(op == "/"){
		result = num1 / num2;
		}
	cout << num1 << op << num2 << " is equal to: " << result;			
	return 0;
	}
