#include <iostream>
#include <string>
using namespace std;

class PembalapF1 {
private:
    std::string nama;
    int posisi;
    float point;

public:
    PembalapF1( string name, int position ) {
        this->nama = name;
        this->posisi = position;
    }

    float hitungPoint(int posisi) {
        switch (posisi)
        {
        case 1:
            point = 25;
            break;
        case 2:
            point = 18;
            break;
        case 3:
            point = 15;
            break;
        case 4:
            point = 12;
            break;
        case 5:
            point = 10;
            break;
        case 6:
            point = 8;
            break;
        case 7:
            point = 6;
            break;
        case 8:
            point = 4;
            break;
        case 9:
            point = 2;
            break;
        case 10:
            point = 1;
            break;
        default:
            point = 0;
            break;
        }
        return point;
    }

    void printInfo() {
        cout << "Point yang diperoleh " << nama << " adalah +" << hitungPoint(posisi) << endl;
    }
};

int main() {
    int jumlahPembalap;
    std::cout << "Masukkan jumlah pembalap: ";
    std::cin >> jumlahPembalap;

    PembalapF1** pembalap = new PembalapF1*[jumlahPembalap];

    std::string nama;
    int posisi;

    for (int i = 0; i < jumlahPembalap; i++) {
        std::cin >> nama >> posisi;
        pembalap[i] = new PembalapF1(nama, posisi);
    }

    for (int i = 0; i < jumlahPembalap; i++) {
        pembalap[i]->printInfo();
        delete pembalap[i];
    }
    return 0;
}
