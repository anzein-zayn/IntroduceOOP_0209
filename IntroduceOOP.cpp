#include<iostream>
using namespace std;

class Planet{
    private:
        float Gravitasi;
    public:
        string Nama;
        float Diameter;
        void displayData(){
            cout << ", Gravitasiku" << Gravitasi<<endl;
         }
         void inputData(){
            cout << "Input Nama : ";
            cin >> Nama;
            cout << "Input Ukuran : ";
            cin >> Diameter;
            cout << "Input Gravitasi : ";
            cin >> Gravitasi;
        }

int main(){
    Planet plnt;
    plnt.displayData();
        cout << "Namaku adalah" << input.Nama<<endl;
        cout << "Ukuranku adalah" <<input.Diameter<<endl;
    plnt.inputData();
}