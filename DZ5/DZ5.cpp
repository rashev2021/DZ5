#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

     cout << "Задание 1 \n" << "Введите шестизначное число \n";

     int number;
     int num, num2, num3, num4, num5, num6;
     int s, s2, s3, s4;
     int summa1;
     int summa2;

     cin >> number;

     if (number / 100000 < 1) {
         cout << "Число не является шестизначным, либо состоит из нулей, или начинается с нуля \n" << "Пожалуйста повторите...\n\n";
     }
     else if (number / 100000 >= 1 && number / 100000 <= 9) {

         num6 = number % 10;
         s = number / 10;
         num5 = s % 10;
         s2 = s / 10;
         num4 = s2 % 10;
         s3 = s2 / 10;
         num3 = s3 % 10;
         s4 = s3 / 10;
         num2 = s4 % 10;
         num = s4 / 10;

         summa1 = num + num2 + num3;
         cout << "Сумма первых трех цифр равна: " << summa1 << endl;

         summa2 = num4 + num5 + num6;
         cout << "Сумма последних трех цифр равна: " << summa2 << endl;

         if (summa1 == summa2) {
             cout << "Число: " << number << " - является счастливым числом \n\n";
         }
         else {
             cout << "Число: " << number << " - является несчастливым числом \n\n";
         }
     }
     else {
         cout << "Число содержит больше шести цифр, либо состоит из нулей, или начинается с нуля \n" << "Пожалуйста повторите...\n\n";
     }




     cout << "Задание 2 \n" << "Введите четырехзначное число \n";

     int number1;
     int n, n2, n3, n4;
     int a, a2, a3, a4;
     int new_number;

     cin >> number1;

     if (number1 / 1000 < 1) {
         cout << "Число не является четырехзнычным, либо состоит из нулей, или начинается с нуля \n" << "Пожалуйста повторите...\n\n";
     }
     else if (number1 / 1000 >= 1 && number1 / 1000 <= 9) {

         n4 = number1 % 10;
         a = number1 / 10;
         n3 = a % 10;
         a2 = a / 10;
         n2 = a2 % 10;
         a3 = a2 / 10;
         n = a3 % 10;

         new_number = (n2 * 1000) + (n * 100) + (n4 * 10) + n3;
         cout << new_number << endl;

     }
     else {
         cout << "Число содержит больше четырех цифр, либо состоит из нулей, или начинается с нуля \n" << "Пожалуйста повторите...\n\n";
     }




     cout << "Задание 3 \n" << "Введите семь цифр \n";

     int number2;
     int nam, nam2, nam3, nam4, nam5, nam6, nam7;
     int p, p2, p3, p4, p5;
     int max;

     cin >> number2;

     if (number2 / 1000000 < 1) {
         cout << "Вы ввели меньше семи цифр, либо состоит из нулей, или начинается с нуля \n" << "Пожалуйста повторите...\n\n";
     }
     else if (number2 / 1000000 >= 1 && number2 / 1000000 <= 9) {

         nam7 = number2 % 10;
         p = number2 / 10;
         nam6 = p % 10;
         p2 = p / 10;
         nam5 = p2 % 10;
         p3 = p2 / 10;
         nam4 = p3 % 10;
         p4 = p3 / 10;
         nam3 = p4 % 10;
         p5 = p4 / 10;
         nam2 = p5 % 10;
         nam = p5 / 10;

         if (nam > nam2) {
             max = nam;
         }
         else {
             max = nam2;
         }
         if (max < nam3) {
             max = nam3;
         }
         if (max < nam4) {
             max = nam4;
         }
         if (max < nam5) {
             max = nam5;
         }
         if (max < nam6) {
             max = nam6;
         }
         if (max < nam7) {
             max = nam7;
         }
         cout << "Самая большая цифра в числе: " << max << endl;
     }
     else {
         cout << "Вы ввели больше семи цифр, либо состоит из нулей, или начинается с нуля \n" << "Пожалуйста повторите...\n\n";
     } 




    cout << "Конвертер валют\n" << "Выберите нужную валюту: \n";
    cout << "Доллар: для выбора нажмите (1). \n" << "Евро: для выбора нажмите (2). \n";

    float dollars = 56, euros = 58;
    int currency;
    float summa;
    float convertation;
    cin >> currency;

    enum CURRENCY { dollar = 1, euro = 2 };

    switch (currency)
    {
    case dollar:
        cout << "Выбрана валюта: Доллар \n";
        cout << "Введите сумму в рублях \n";
        cin >> summa;
        convertation = summa / dollars;
        cout << "Конвертация составила " << convertation << " доллара \n\n";
        break;

    case euro:
        cout << "Выбрана валюта: Евро \n";
        cout << "Введите сумму в рублях \n";
        cin >> summa;
        convertation = summa / euros;
        cout << "Конвертация составила " << convertation << " евро \n\n";
        break;

    default:
        break;
    }

}
