#include <iostream>
using namespace std;

int main() {

	char op;
	float num1, num2;

	cout<<"Please enter operator ! ( +, -, *, / ) : "<<endl;
	cin >> op;

	cout << "Please enter two numbers" << endl;
	cin >> num1 >> num2;


	switch (op) {
		
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;

	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	
	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;

	case '/':
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;

	default:
		cout << "Error, Wrong operator entered";
		break;
	}
		
	system("pause");
	return 0;
	}
