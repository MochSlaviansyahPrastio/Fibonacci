#include <iostream>
using namespace std;
int fibonacci(int f) {
	//kasus dasar
    if (f == 0 || f ==1){
        return f;
    //kasus rekursif
      } else {
        return (fibonacci(f-1) + fibonacci(f-2));
      }
    }
    
int main() {
  
  //inisisasi variabel
  int n, f = 0;
  cout << "Masukkan batas jumlah bilangan fibonacci: ";
  //input variabel
  cin >> n;
  cout << "Hasil bilangan fibonacci: \n";
  //output hasil
  for (int i = 1; i <= n; i++){
    cout << "fibonacci ke-"<< i <<": " << fibonacci(f) << endl;
    f++;
  }
  return 0;
}
