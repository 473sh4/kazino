
#include <iostream>
using namespace std;
#include <cstdlib>
#include <time.h>



int a;
int b;
int c;
int bet;
int popa;
int balance = 10000;
int mkz;
int i;


void ae() {
    if (a == b && b == c) {
        cout << "ЖДЕКПОТ АХУЕТ" << endl;
        balance = bet * 10 + balance;
        cout << "Твой баланс " << balance << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "Ура ставка зашла" << endl;
        balance = bet * 2 + balance;
        cout << "Твой баланс " << balance << endl;
    }
    else {
        cout << "Ставка не зашла брат" << endl;
        cout << "Твой баланс " << balance << endl;
    }


}

void zaim() {
    cout << "Хотите оформить микрозайм?" << endl;
    cin >> i;

    cout << "Идите нахуй " << endl;
    exit(0);


}



int main() {
    setlocale(LC_ALL, "RU");
    


    while (1) {

        cout << "Текущий баланс " << balance << endl;

        cout << " " << endl;
        cout << "Cделайте ставку " << endl;

        cin >> bet;


        balance = balance - bet;



        if (balance >= 0) {




            cout << "Баланс после ставки " << balance << endl;


            srand(time(NULL));
            a = 1 + rand() % 9;
            b = 1 + rand() % 9;
            c = 1 + rand() % 9;

            cout << "ВЫДОЧА " << a << b << c << endl;

            ae();

        }
        else {

            cout << "Нету деняк у вас( " << endl;
            zaim();
        }



    }




    return 0;
}
