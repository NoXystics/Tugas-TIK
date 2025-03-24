#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <list>
#include <ctime>
using namespace std;

string makananStr;
string minumanStr;
string NamaStr;
string lanjutStr;
list<string> makananList;
list<string> minumanList;
int NomorMeja;
int makanan;
int minuman;
int UangCustomer;
int Kembalian;
int total = 0;
int totalMakanan = 0;
int totalMinuman = 0;
bool error = true;
bool again = true;
      
int main() {
    lanjutStr = "Y";
    time_t tt;
    struct tm* ti;
    time(&tt); 
    ti = localtime(&tt);
    
    while (lanjutStr == "Y") {
    total = 0;
    totalMakanan = 0;
    totalMinuman = 0;
    makananList.clear();
    minumanList.clear();
    cout << "=================================================================" << endl;
    cout << "                     RESTORAN KAKI LIMA" << endl;
    cout << "=================================================================" << endl;
    cout << "Masukan Nama: ";
    cin >> NamaStr;
    system("cls");
        do {
            cout << "=================================================================" << endl;
            cout << "                            MAKANAN" << endl;
            cout << "=================================================================" << endl;
            cout << "1. Bakso          Rp 15.000" << endl;
            cout << "2. Mie Ayam       Rp 20.000" << endl;
            cout << "3. Nasi Goreng    Rp 15.000" << endl;
            cout << "4. Sate           Rp 20.000" << endl;
            cout << "5. Soto           Rp 15.000" << endl;

            cout << "Pilih menu (1-5): ";
            cin >> makanan;


            if (makanan < 0 || makanan > 5) {
                cout << "Tolong input makanan dengan angka 1-5" << endl;
                getch();
                system("cls");
                error = true;
            } else if (makanan == 0) {
                cout << "Tidak pesan makanan" << endl;
                getch();
                system("cls");
                error = false;
                again = false;
            } else {
                error = false;
                switch (makanan) {
                    case 1:
                        total += 15000;
                        totalMakanan += 15000;
                        makananList.push_front("Bakso");
                        break;
                    case 2:
                        total += 20000;
                        totalMakanan += 20000;
                        makananList.push_front("Mie Ayam");
                        break;
                    case 3:
                        total += 15000;
                        totalMakanan += 15000;
                        makananList.push_front("Nasi Goreng");
                        break;
                    case 4:
                        total += 20000;
                        totalMakanan += 20000;
                        makananList.push_front("Sate");
                        break;
                    case 5:
                        total += 15000;
                        totalMakanan += 15000;
                        makananList.push_front("Soto");
                        break;
                    }
                cout << "=================================================================" << endl;
                cout << "Pesan lagi? (Y/N): ";
                cin >> lanjutStr;
                if (lanjutStr == "Y") {
                    again = true;
                    system("cls");
                } else if (lanjutStr == "y") {
                    again = true;
                    system("cls");
                } else if (lanjutStr == "N") {
                    again = false;
                } else if (lanjutStr == "n") {
                    again = false;
                } else {
                    cout << "Tolong input Y/N" << endl;
                    getch();
                    system("cls");
                    error = true;
                }
            }
        } while (error == true, again == true);

        do {
            system("cls");
            cout << "=================================================================" << endl;
            cout << "                           MINUMAN" << endl;
            cout << "=================================================================" << endl;
            cout << "1. Es Teh          Rp 5.000" << endl;
            cout << "2. Jus Jeruk       Rp 10.000" << endl;
            cout << "3. Jus Alpukat     Rp 10.000" << endl;
            cout << "4. Jus Mangga      Rp 20.000" << endl;
            cout << "5. Jus Melon       Rp 15.000" << endl;

            cout << "Pilih menu (1-5): ";
            cin >> minuman;

            if (minuman < 0 || minuman > 5) {
                cout << "Tolong input minuman dengan angka 1-5" << endl;
                getch();
                system("cls");
                error = true;
            } else if (minuman == 0) {
                cout << "Tidak pesan minuman" << endl;
                getch();
                system("cls");
                error = false;
                again = false;
            } else {
                error = false;
                switch (minuman) {
                    case 1:
                        total += 5000;
                        totalMinuman += 5000;
                        minumanList.push_front("Es Teh");
                        break;
                    case 2:
                        total += 10000;
                        totalMinuman += 10000;
                        minumanList.push_front("Jus Jeruk");
                        break;
                    case 3:
                        total += 10000;
                        totalMinuman += 10000;
                        minumanList.push_front("Jus Alpukat");
                        break;
                    case 4:
                        total += 20000;
                        totalMinuman += 20000;
                        minumanList.push_front("Jus Mangga");
                        break;
                    case 5:
                        total += 15000;
                        totalMinuman += 15000;
                        minumanList.push_front("Jus Melon");
                        break;
                    }
                cout << "=================================================================" << endl;
                cout << "Pesan lagi? (Y/N): ";
                cin >> lanjutStr;
                if (lanjutStr == "Y") {
                    again = true;
                    system("cls");
                } else if (lanjutStr == "y") {
                    again = true;
                    system("cls");
                } else if (lanjutStr == "N") {
                    again = false;
                } else if (lanjutStr == "n") {
                    again = false;
                } else {
                    cout << "Tolong input Y/N" << endl;
                    getch();
                    system("cls");
                    error = true;
                }
            }
        } while (error == true, again == true);

        system("cls");
        cout << "=================================================================" << endl;
        cout << "                        UANG CUSTOMER" << endl;
        cout << "=================================================================" << endl;
        cout << "Uang Customer: " << endl;
        cin >> UangCustomer;
        
        
        Kembalian = UangCustomer - total;
        NomorMeja += 1;
        system("cls");

        cout << "=================================================================" << endl;
        cout << "                       RESTORAN KAKI LIMA" << endl;
        cout << "=================================================================" << endl;
        cout << "Nama: \t\t" << NamaStr << endl;
        cout << "Nomor Meja: \t" << NomorMeja << endl;
        cout << "=================================================================" << endl;
        cout << "Makanan: \t" << makananList.size() << " item" << "\t\t" << "Rp " << totalMakanan << endl;
        cout << "Makanan: \t";
        for (string makananList : makananList) {
            cout << makananList << "\n" << "\t\t";
          }

        cout << " " << endl;
        cout << "Minuman: \t" << minumanList.size() << " item" << "\t\t" << "Rp " << totalMinuman << endl;
        cout << "Minuman: \t";
        for (string minumanList : minumanList) {
            cout << minumanList << "\n" << "\t\t";
        }

        cout << " " << endl;
        cout << "=================================================================" << endl;
        cout << "Total: \t\tRp " << total << endl;
        if (Kembalian > 0) {
            cout << "Kembalian: \tRp " << Kembalian << endl;
        } else {
            cout << "Uang kurang. Anda membutuhkan tambahan Rp " << -Kembalian << endl;
        }
        cout << "=================================================================" << endl;
        cout << "\t\t    " << asctime(ti);
        cout << "=================================================================";
        
        getch();
        system("cls");
        cout << "=================================================================" << endl;
        cout << "                          CONTINUE" << endl;
        cout << "=================================================================" << endl;
        cout << "Lanjut? (Y/N)" << endl;
        cin >> lanjutStr;
        system("cls");
    }
    return 0;
}
