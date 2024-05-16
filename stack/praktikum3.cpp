#include <iostream>
#include <string>
#include <cstdlib>
#define max 100
using namespace std;

struct mahasiswa
{
    string nama;
    string jurusan;
};

struct stack
{
    mahasiswa data[max];
    int top;
};

void buatelm(stack &s)
{
    s.top = -1;
}

bool isempty(stack s)
{
    return (s.top == -1);
}

bool isfull(stack s)
{
    return (s.top == (max - 1));
}

void push(stack &s, mahasiswa isi)
{
    if (isfull(s))
    {
        cout << "Data sudah penuh" << endl;
    }
    else
    {
        s.top++;
        s.data[s.top] = isi;
    }
}

void pop(stack &s)
{
    if (isempty(s))
    {
        cout << "Data sudah kosong" << endl;
    }
    else
    {
        s.top--;
    }
}

mahasiswa peek(stack s)
{
    return s.data[s.top];
}

int main()
{
    stack s;
    buatelm(s);
    int opsi, pilih, maxMahasiswa;
    mahasiswa mhs;

    cout << "Masukkan jumlah maksimum mahasiswa: ";
    cin >> maxMahasiswa;

ulang:
    system("cls");
    cout << "1. Masukkan Mahasiswa" << endl;
    cout << "2. Lihat Mahasiswa Paling Atas" << endl;
    cout << "3. Proses Mahasiswa Paling Atas" << endl;
    cout << "4. Proses Semua Mahasiswa" << endl;
    cout << "5. Exit" << endl;
    cout << "\nData pada stack: " << endl;
    for (int i = s.top; i >= 0; i--)
    {
        cout << "[" << s.data[i].nama << ", " << s.data[i].jurusan << "]" << endl;
    }
    cout << "\nPilihan Anda: ";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
        if (s.top == maxMahasiswa - 1)
        {
            cout << "Stack penuh" << endl;
            break;
        }
        cout << "Masukkan nama mahasiswa: ";
        cin >> mhs.nama;
        cout << "Masukkan jurusan mahasiswa: ";
        cin >> mhs.jurusan;
        push(s, mhs);
        break;

    case 2:
        if (isempty(s))
        {
            cout << "Stack kosong" << endl;
        }
        else
        {
            mhs = peek(s);
            cout << "Mahasiswa paling atas: " << mhs.nama << ", " << mhs.jurusan << endl;
        }
        break;

    case 3:
        if (isempty(s))
        {
            cout << "Stack kosong" << endl;
        }
        else
        {
            pop(s);
        }
        break;

    case 4:
        while (!isempty(s))
        {
            pop(s);
        }
        break;

    case 5:
        cout << "Anda yakin ingin keluar?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;
        cout << "Pilihan Anda: ";
        cin >> opsi;
        if (opsi == 1)
        {
            cout << "Terima kasih" << endl;
            return 0;
            system("exit");
        }
        else
        {
            goto ulang;
        }
        break;

    default:
        cout << "Pilihan tidak valid" << endl;
    }

    system("pause");
    goto ulang;

    return 0;
}




///////////////////////////////////////////////////////////////////////


// struct kelas
// {
//     /* data */
//     string data[3];
//     int top;
// };

// // buat elemen

// void buatelm (kelas &s){
//     s.top = -1;
// }

// bool isempty (kelas &s){
//     return (s.top == -1);
// }

// bool isfull (kelas &s){
//     return (s.top ==  (max -1));
// }

// void push(kelas &s, string isi){
//     if (isfull(s))
//     {
//         /* code */
//         cout <<"data full anjai" ;
        
//     }else
//     {
//         /* code */
//     s.top++;
//     s.data[s.top] = isi;
//     }
    
    
// }

// void pop(kelas &kel){
//     if (isempty(kel))
//     {
//         cout << "kosong";

//     } else
//     {
//         kel.top--;
//     }
     
// }

// void printelm(kelas s){
//     cout << "***********************************************\n";
//     for (int i = 0; i <= s.top; i++)
//     {
//         cout << "[" << s.data[i] <<  "]" << endl;
//     }
//     cout << "***********************************************\n";
// }


// int main(){
//     // deklarasi objek dan fungsi
    
//     kelas stack;
    
//     buatelm(stack);
//     push(stack,"A");
//     push(stack,"B");
//     push(stack,"C");
//     pop(stack);
//     pop(stack);

//     cout<<"\nData yang dipush adalah : \n"; printelm(stack) ;

//     }
