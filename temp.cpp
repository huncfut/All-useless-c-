#include <iostream>
#include <cstdio>
#include <stack>
#include <string>

using namespace std;

int main() {
  std::stack<char> stos; char currChar; int currNum = 0; string data; bool lastNum = 0; int wynik = 0; int a, b;
  // while(scanf("%c", &currChar)) {
  //   if(currChar >= '0' && currChar <= '9') {
  //     currNum *= 10;
  //     currNum += (currChar - '0');
  //   } else if (currChar == '+') {
  //
  //   }
  // }
  getline(cin, data);
  for(int i = 0; i < data.length(); i++) {
    if(data[i] >= '0' && data[i] <= '9') {
      currNum *= 10;
      currNum += (currChar - '0');
    } else if (data[i] == ' ' && lastNum) {
      stos.push(currNum);
      currNum = 0;
    } else if (data[i] == '+') {
      a = stos.top();
      stos.pop();
      b = stos.top();
      stos.pop();
      stos.push(a + b);
    } else if (data[i] == '-') {
      a = stos.top();
      stos.pop();
      b = stos.top();
      stos.pop();
      stos.push(a - b);
    } else if (data[i] == '*') {
      a = stos.top();
      stos.pop();
      b = stos.top();
      stos.pop();
      stos.push(a * b);
    } else if (data[i] == '/') {
      a = stos.top();
      stos.pop();
      b = stos.top();
      stos.pop();
      stos.push(a / b);
    }
  }

  cout << stos.top() << endl;
}
