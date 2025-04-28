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
};

int main()
{
    Planet plnt;
    plnt.inputData();
    cout << "Nama-nya adalah "<< plnt.Nama<< endl;
    cout << "Diameter-nya adalah " << plnt.Diameter;
    plnt.displayData();
}