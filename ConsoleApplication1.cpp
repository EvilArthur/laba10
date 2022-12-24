
// prakex2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal() {
		name = "";
		cage_number = -1;
		food_type = "";
	}
	Animal(string name_animal, int cage, string food) {
		name = name_animal;
		cage_number = cage;
		food_type = food;
	}
	string getName() {
		return name;
	}
	string getFoodType() {
		return food_type;
	}
	int getСageNumber() {
		return cage_number;
	}

private:
	string name;
	int cage_number;
	string food_type;

};

class Zoo {
private:
	Animal* animals;
	int animal_count = 0;
public:
	Zoo(Animal* amls, int count) {
		animals = amls;
		animal_count = count;
	}
	void displayAnimals() {
		for (int i = 0; i < animal_count; i++) {
			cout << "Имя животного: " << animals[i].getName() << endl;
			cout << "Номер клетки: " << animals[i].getСageNumber() << endl;
			cout << "Что ест животное: " << animals[i].getFoodType() << endl;
			cout << endl;
		}
	}
};





int main()
{
	setlocale(LC_ALL, "Russian");
	Animal tiger("Тигр", 1, "Плотоядный");
	Animal bear("Медведь", 2, "Всеядный");
	Animal rabbit("Кролик", 3, "Травоядный");
	Animal *amls = new Animal[3];
	amls[0] = tiger;
	amls[1] = bear;
	amls[2] = rabbit;
	Zoo zoo_1(amls, 3);
	zoo_1.displayAnimals();

}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.