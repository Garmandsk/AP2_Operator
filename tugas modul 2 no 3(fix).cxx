#include <iostream>
using namespace std;

int main() {
    char pil;
  
    cout << "Terdapat 4 Macam Rumus Volume Bangun Ruang" << endl;
    cout << "1. Kerucut(k)" << endl;
    cout << "2. Limas Segitiga(l)" << endl;
    cout << "3. Bola(b)" << endl;
    cout << "4. Prisma(p)" << endl;
  
    cout << "Pilih Bangun Ruang Sesuai Petunjuk yang Di Dalam Kurung: "; 
    cin >> pil; 
    cout << endl;

    switch (pil) {
        case 'k':
        case 'K': {
            // Kerucut
            float rk; cout<<"Masukkan Nilai Jari-Jari Kerucut: "; cin>>rk; cout<<endl;
            float tk; cout<<"Masukkan Nilai Tinggi Kerucut: "; cin>>tk; cout<<endl;
            
            float vol_kerucut = 1.0 / 3 * (3.14 * (rk * rk)) * tk;
            cout << "Volume Kerucut Adalah: " << vol_kerucut << endl << endl;
            break;
        }
        
        
        case 'l':
        case 'L': {
            // Limas Segitiga
            float la; cout<<"Masukkan Nilai Luas Alas Limas Segitiga: "; cin>>la; cout<<endl;
            float tl; cout<<"Masukkan Nilai Tinggi Limas Segitiga: "; cin>>tl; cout<<endl;
            
            float vol_limas_segitiga = 1.0 / 3 * la * tl;
            cout << "Volume Limas Segitiga Adalah: " << vol_limas_segitiga << endl << endl;
            break;
        }
        
        
        case 'b':
        case 'B': {
            // Bola
            float rb; cout<<"Masukkan Nilai Jari-Jari Bola: "; cin>>rb; cout<<endl;
            float vol_bola = 4.0 / 3 * 3.14 * (rb * rb * rb);
            cout << "Volume Bola Adalah: " << vol_bola << endl << endl;
            break;
        }
        
        
        case 'p':
        case 'P': {
            // Prisma
            float lp; cout<<"Masukkan Nilai Luas Alas Prisma: "; cin>>lp; cout<<endl;
            float tp; cout<<"Masukkan Nilai Tinggi Prisma: "; cin>>tp; cout<<endl;
            float vol_prisma = lp * tp;
            cout << "Volume Prisma Adalah: " << vol_prisma << endl << endl;
            break;
        }
        
        
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
