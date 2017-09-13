#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include "stack.h"
#include<typeinfo>


double addi(double, double);
double subt(double, double);
double divi(double, double);
double mult(double, double);

int main()
{

	vector<string> expr;
	Stack s;
  //expr = {"3", "4", "+", "2", "*", "1", "+"};
  //expr = {"4", "2", "5", "*", "+", "1", "3", "2", "*", "+", "/"};
  //expr = {"2", "1", "+", "3", "*"};
  expr = {"4", "13", "5", "/", "+"};
  vector<string> operators;
  operators = {"+", "-", "*", "/"};

	vector<string>::iterator itr;
  double a, b, result;
	for(itr = expr.begin(); itr != expr.end(); ++itr)
	{
    cout << "processing: " << *itr << endl;
    auto present = find(operators.begin(), operators.end(), *itr);
    if (present == operators.end()){
      int data = stoi(*itr);
      data = (double) data;
      s.push(data);
    }
    else{
      string oper = *itr;
      cout << "processing operator: " << oper << endl;
      // its operator then pop two times and take the two operands
      a = s.pop();
      b = s.pop();
      cout << "iterator: " << oper << " a: " << a << " b: " << b << endl;
      if (!oper.compare("+"))
      {
        cout << "calling add: " << endl;
        result = addi(a, b);
        cout << "called add: " << result << endl;
      }
      else if (!oper.compare("-"))
      {
        cout << "calling minus: " << endl;
        result = subt(a, b);
        cout << "called minus: " << result << endl;
      }
      else if (!oper.compare("*"))
      {
        cout << "calling multiply: " << endl;
        result = mult(a, b);
        cout << "called multiply: " <<  result << endl;
      }
      else if (!oper.compare("/"))
      {
        cout << "calling division: " << endl;
        result = divi(b, a); // sequence is important here
        cout << "called division: " << result << endl;
      }
      s.push(result);
    }
	}


}

double addi(double a, double b)
{
  double ans = a+b;
	return ans;
}

double subt(double a, double b)
{
  double ans = a-b;
	return ans;
}

double divi(double a, double b)
{
  double ans = a/b;
	return ans;
}

double mult(double a, double b)
{
  double ans = a*b;
	return ans;
}
