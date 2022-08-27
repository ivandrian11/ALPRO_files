#include <iostream>
#include <conio.h>

using namespace std;

main(){
	// Declaration
	int operand1, operand2;
	char operation;
	
	// Input Number
	cout<<"Input first number: ";
	cin>>operand1;
	cout<<"Input second number: ";
	cin>>operand2;
	
	// Loop for Input Operation
	do{
	cout<<"Choose your operation: ";
	cout<<"(*) for multiply"<<"/t(/) for divide";
	cout<<"(+) for add"<<"/t(-) for subtract";
	cin>>operation;
	} while(operation!='*'||operation!='/'||operation!='+'||operation!='-');
	
	// Operation Condition
	switch(operation){
		case '*': cout<<operand1<<operation<<operand2<<"="<<(operand1*operand2);	break;
		case '/': cout<<operand1<<operation<<operand2<<"="<<(operand1/operand2);	break;
		case '+': cout<<operand1<<operation<<operand2<<"="<<(operand1+operand2);	break;
		case '-': cout<<operand1<<operation<<operand2<<"="<<(operand1-operand2);	break;
		default:
	}
	
	// END thankioo by Ivan
	getch();
}