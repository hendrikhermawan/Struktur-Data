#include <iostream>
#include <string>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string jurusan;
};

void inputData(mahasiswa &mhs)
{
    cout << "masukkan nama : " << mhs.nama;
    cin >> mhs.nama;

    cout << "masukkan nim : " << mhs.nim;
    cin >> mhs.nim;

    cout << "Masukkan Jurusan: ";
    cin >> mhs.jurusan;
}

int main()
{
    int jumlah_data;



    
        cout << "Masukkan jumlah data mahasiswa: ";
        cin >> jumlah_data;
        mahasiswa *mhs = new mahasiswa[jumlah_data];
        cout << "=========================" << endl;
        for (int i = 0; i < jumlah_data; i++)
        {
            cout << "[+] Masukkan Data Mahasiswa ke - " << i + 1 << " [+]" << endl;
            inputData(mhs[i]);
        }
        
   
        cout << "NIM\tNama\tJurusan" << endl;
        for (int i = 0; i < jumlah_data; i++)
        {
            cout << mhs[i].nim << "\t" << mhs[i].nama << "\t" << mhs[i].jurusan << endl;
        }

        // Hapus alokasi memori yang telah dilakukan
        delete[] mhs;
     

    return 0;
}
