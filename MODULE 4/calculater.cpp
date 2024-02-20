//make a simple calculter in c++ 
 # include <iostream>
using namespace std;

int main() {

  char a;  //varible
  float num1, num2; //varible

  cout << "Enter operator: +, -, *, /: ";
  cin >> a;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
 
 // Perform the operation based on the operator entered
  switch(a) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
     
      cout << " operator is not correct";
      break;
  }

  return 0;
}

