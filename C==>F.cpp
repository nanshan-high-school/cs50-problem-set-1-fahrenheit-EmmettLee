#include <iostream>
using namespace std;

int main() {
  float C;
  cout << "請輸入攝氏溫度";
  cin >> C;

  float F;
  F = ((C * 9.0) / 5.0) + 32.0;

  cout << "華氏溫度為" << F;
}
