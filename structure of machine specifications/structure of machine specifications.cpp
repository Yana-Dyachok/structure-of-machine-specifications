//Завдання 2. Реалізувати структуру «Автомобіль» (довжина, кліренс (висота посадки), об’єм двигуна, потужність  двигуна, діаметр коліс, колір, тип коробки передач).Створіть функції для задання значень, відображення значень, пошуку значень
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
struct Car 
{	double length; //довжина
	double clearance;//кліренс (висота посадки)
	double engine_capacity;//об’єм двигуна
	double power;//потужність  двигуна
	double wheel_diameter;//діаметр коліс
	string color;//колір
	string gearbox_type;//тип коробки передач
	};
void inputCarCharacteristics(Car& data);//функція для задання значень
void printCarCharacteristics(Car& data);//функція для  відображення значень
void searchCarCharacteristics(Car& data);//функція пошуку значень
int main()
{	Car data;
    inputCarCharacteristics(data);//звертаємось до функціїзадання значень
	cout << endl;
	printCarCharacteristics(data);//звертаємось до функції відображення значень
	cout << endl;
	searchCarCharacteristics(data);//звертаємось до функції пошуку значень
}
void inputCarCharacteristics(Car& data) {//функція для задання значень
	cout << "Enter car's length" << endl;
	cin >> data.length;
	cout << "Enter car's clearance" << endl;
	cin >> data.clearance;
	cout << "Enter car's engine capacity" << endl;
	cin >>data.engine_capacity;
	cout << "Enter car's engine power" << endl;
	cin >> data.power;
	cout << "Enter car's wheel diameter" << endl;
	cin >> data.wheel_diameter;
	cout << "Enter car's color" << endl;
	cin >>data.color;
	cout << "Enter car's gearbox type" << endl;
	cin >> data.gearbox_type;
}
void printCarCharacteristics(Car& data) {//функція для  відображення значень
	cout << "Car's length- " << data.length <<" m" << endl;
	cout << "Car's landing height- " << data.clearance <<" mm" << endl;
	cout << "Car's engine capacity -" << data.engine_capacity << " l" << endl;
	cout << "Car's engine power - " << data.power <<" kVt"<< endl;
	cout << "Car's wheel diameter- " << data.wheel_diameter << " sm" << endl;
	cout << "Car's color -" << data.color << endl;
	cout << "Car's gearbox type - " << data.gearbox_type << endl;
}
void searchCarCharacteristics(Car& data) {//функція пошуку значень
	char search;//змінна для пошуку значень
	cout << "Choose -1- if you want to find car's lenght" << endl;
	cout << "Choose -2- if you want to find car's clearance" << endl;
	cout << "Choose -3- if you want to find car's engine capacity" << endl;
	cout << "Choose -4- if you want to find car's power" << endl;
	cout << "Choose -5- if you want to find car's wheel diametr" << endl;
	cout << "Choose -6- if you want to find car's color" << endl;
	cout << "Choose -7- if you want to find car's gearbox type" << endl;
	cin >> search;
	switch (search) {//використовуємо оператор switch для пошуку значень
	case '1': cout << "Car's length- " << data.length << " m" << endl; break;
	case '2':cout << "Car's landing height- " << data.clearance << " mm" << endl; break;
	case '3':cout << "Car's engine capacity -" << data.engine_capacity << "  l" << endl; break;
	case '4': cout << "Car's engine power - " << data.power << " kVt" << endl; break;
	case '5':cout << "Car's wheel diameter- " << data.wheel_diameter << " sm" << endl; break;
	case '6': cout << "Car's color -" << data.color << endl; break;
	case '7': cout << "Car's gearbox type - " << data.gearbox_type << endl; break;
	default: cout << "Wrong choice" << endl; break;}
}