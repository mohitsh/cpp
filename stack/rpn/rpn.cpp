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

  /* example rpn expression */
  expr = {"3", "4", "+", "2", "*", "1", "+"};
  expr = {"4", "2", "5", "*", "+", "1", "3", "2", "*", "+", "/"};
  expr = {"2", "1", "+", "3", "*"};
  expr = {"4", "13", "5", "/", "+"};
  /* ENDS */


  expr = {"3", "4", "+", "2", "*", "1", "+"};
  vector<string> operators;
  operators = {"+", "-", "*", "/"};

  vector<string>::iterator itr;
  double a, b, result;
  for(itr = expr.begin(); itr != expr.end(); ++itr)
  {
    	auto present = find(operators.begin(), operators.end(), *itr);
    	if (present == operators.end()){ // data detected  
      		int data = stoi(*itr);   // convert string to int
      		data = (double) data;    // convert int to double
      		s.push(data);
    	}
    	else                             // operator detected
	{
		/* if operator detected pop stack twice compute result and then
		 * push the result on to stack
		 * */
      		string oper = *itr;
      		a = s.pop();
      		b = s.pop();
      		if (!oper.compare("+"))
		        result = addi(a, b);
      		else if (!oper.compare("-"))
		        result = subt(a, b);
	      	else if (!oper.compare("*"))
		        result = mult(a, b);
	        else if (!oper.compare("/"))
		        result = divi(b, a); // sequence is important here
	        s.push(result);
    	}
 }
  cout << "final result: " << result << endl;
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
