#include <iostream>
#include <iomanip>

using namespace std;

bool closeEnough(double num1, double num2) {
  double diff = abs(num1 - num2);
  if (diff < 0.0000001) {
    return true;
  } else {
    return false;
  }
}

double sqrtNewton(double x) {
  double guess =  x / 2;
  bool isNotClose = !closeEnough(guess * guess, x);
  while (isNotClose) {
    guess = 0.5 * (guess + x / guess);
    isNotClose = !closeEnough(guess * guess, x);
  }
  return guess;
}

int main() {
  cout << setprecision(20);
  double result = sqrtNewton(36);
  cout << "sqrt of 10 is " << result << endl;
  return 0;
}