#include <iostream>

using namespace std;

bool isPrime(int n) {
  int i;
  bool isprime = true;

  if (n == 0 || n == 1) {
    isprime = false;
  }
  else {
    for (i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
        isprime = false;
        break;
      }
    }
  }

  return isprime;
}

int main() {
  int q, i;
  bool flag = false;

  cout << "Enter a positive  integer: ";
  cin >> q;

  for (i = 2; i <= q / 2; ++i) {
    if (isPrime(i)) {
      if (isPrime(q - i)) {
        cout << q << " = " << i << " + " << q - i << endl;
        flag = true;
      }
    }
  }

  if (!flag)
    cout << q << " can't be expressed as sum of two prime numbers.";

  return 0;
}
