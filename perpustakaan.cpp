#include <iostream>
using namespace std;

class Perpustakaan {
protected:
  string buku = "Komet Minor";
  string nama = "Mira";

public:
  string cekPinjaman() {
    return "Buku Komet Minor telah dipinjam oleh Mira";
  }
};

class Pengembalian : public Perpustakaan {
protected:
  string pengembalian = "Telah di kembalikan";

public:
  string cekKembali() {
    return "Buku komet minor telah di kembalikan oleh Mira ";
  }
};


int main() {
  Pengembalian bukuPerpustakaan;

  cout << bukuPerpustakaan.cekPinjaman() << endl;
  cout << bukuPerpustakaan.cekKembali() << endl;

  return 0;
}