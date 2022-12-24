
// prakex2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
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
	~Animal() {
		cout << "Удален: " << name << endl;
	}

private:
	string name;
	int cage_number;
	string food_type;

};

class Zoo {
private:
	vector <Animal*> animals;
public:
	void displayAnimals() {
		for (int i = 0; i < animals.size(); i++) {
			cout << "Имя животного: " << animals[i]->getName() << endl;
			cout << "Номер клетки: " << animals[i]->getСageNumber() << endl;
			cout << "Что ест животное: " << animals[i]->getFoodType() << endl;
			cout << endl;
		}
	}
	void Add(Animal* animal)
	{
		animals.push_back(animal);
	}
	~Zoo() {
		for (int i = 0; i < animals.size(); i++) {
			delete animals[i];
		}
	}
};





int main()
{
	setlocale(LC_ALL, "Russian");
	Animal* tiger = new Animal("Тигр", 1, "Плотоядный");
	Animal* bear = new Animal("Медведь", 2, "Всеядный");
	Animal* rabbit = new Animal("Кролик", 3, "Травоядный");
	Zoo zoo1;
	zoo1.Add(tiger);
	zoo1.Add(bear);
	zoo1.Add(rabbit);
	zoo1.displayAnimals();

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