#include <iostream>
#include <openssl/rand.h>

using namespace std;

int main() {
  system("chcp 65001");

  unsigned char buf[16] = { 0 };
  int res = RAND_bytes(buf, sizeof(buf));

  cout << "Hello world : " << res << endl;

  system("pause");

  return 0;
}
