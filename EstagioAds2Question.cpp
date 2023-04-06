#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

int num = 0, fibo1 = 0, fibo2 = 1, prox = 0;
cin >> num;


for (int i = 1; i <= num; i++)
{
  if (i == 1)
  {
    //fibo1;
  }

  if (i == 2)
  {
    //fibo2;
  }

  prox = fibo1 + fibo2;
  fibo1 = fibo2;
  fibo2 = prox;

  cout << prox << " ";

  if (num == fibo1 || num == fibo2 || num == prox)
  {
    cout << "O numero informado pertence a sequencia." << endl;
  }
  
  
}

  return 0;
}
