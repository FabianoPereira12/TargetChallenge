#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

int main() {

string str="target"; 
    int i;

    cout << "Imprima o reverso" << endl;

    for(i = str.length() - 1; i >= 0; i--)
    {
      	cout<<str[i];
    }
    return 0;

  return 0;
}
