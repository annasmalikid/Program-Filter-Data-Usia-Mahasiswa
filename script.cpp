#include <iostream>

using namespace std;

int main() {

  int usiaMahasiswa[] = {21, 19, 20, 22, 17, 17};
    cout << "-------------------------------"<<endl;
    cout << " NIM		:  312310520 "<<endl;
    cout << " Nama	:  ANNAS MALIK "<<endl;
    cout << " Kelas	:  TI.23.BA.1 "<<endl;
	cout << "-------------------------------"<<endl;
  
  cout << "Usia Mahasiswa: ";
  for(int i = 0; i < 6; i++) {
    cout << usiaMahasiswa[i] << " "; 
  }
  
  cout << "\nMahasiswa yang berusia > 19 tahun: ";
  for(int i = 0; i < 6; i++) {
    if(usiaMahasiswa[i] > 19) {
      cout << usiaMahasiswa[i] << " "; 
    }
  }

  return 0;
}
