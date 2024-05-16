#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct praktikum1
{
    /* data */
    string nama;
    string kelas;
    float nim;
};

void inputData(praktikum1 &data){
    cout <<"Masukkan Nama : ";  //
    cin >> data.nama;
    cout << "Masukkan Kelas: ";//
    cin>> data.kelas;
    cout << "Masukkan nim: ";//
    cin>> data.nim;
}

void cetakData(praktikum1 data){
    cout << "Nama Anda : " << data.nama << endl;
    cout << "Kelas Anda : " << data.kelas << endl;
    cout << "Nim Anda : " << data.nim << endl;
}

int main(){
    praktikum1 data;
    inputData(data);
    cetakData(data);
    return 0;
}