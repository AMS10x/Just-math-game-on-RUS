#include <iostream>



using namespace std;

int main() {
setlocale(LC_ALL, "RU");
srand(time(0));

int ch, ran, answ, answ2, k1, k2;

float n, res;

cout << "Введите любое число, с которым будут происходить действия: " << endl;

cin >> n;


int act = rand() % 100;
//cout << act;

ran = rand() % 2;
//cout << ran;

ch = rand() % 4 + 1;

if (ch == 1)
{
    res = n + act;
}
if (ch == 2)
{
    res = n - act;
}
if (ch == 3)
{
    res = n * act;
}
if (ch == 4)
{
    res = n / act;
}

cout << "Результат:  " << res << endl;

cout << endl;

int check1, check2;

cout << "Какое действие произошло?" << endl;
cout << " 1. Сложение | 2. Вычитание | 3. Умножение | 4. Деление" << endl;

cin >> answ;

k1 = 0;

while (answ != ch and answ <= 4 and answ > 0)
{
    cout << "Неверно!" << endl;
    k1 += 1;
    cin >> answ;
}
while (answ != ch and answ >4 or answ < 0)
{
    cout << "Там это..... всего 4 цифры" << endl;
    cin >> answ;
}

if (answ == ch)
{
    cout << "Верно" << endl;
}


cout << "Какое 2е число было задействовано? " << endl;

cin >> answ2;

k2 = 0;


while (answ2 != act)
{
    cout << "Неверно!" << endl;
    k2 += 1;
    cin >> answ2;

}

if (answ2 == act)
{
    cout << "Верно!" << endl;
}

cout << "Игра (если можно так назвать) закончена!" << endl;

cout << "----------------------------------------" << endl;

cout << "Кол-во ошибок при подборе действия:  " << k1 << endl;

cout << "----------------------------------------" << endl;

cout << "Кол-во ошибок при подборе числа:  " << k2 << endl;

cout << "----------------------------------------" << endl;

return 0;
}