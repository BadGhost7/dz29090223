#include <iostream>
#include <string>

using namespace std;

class Component {
protected:
    string name;
    float price;

public:
    Component(string name, float price) : name(name), price(price) {}

    void display() {
        cout << "Комплектующее: " << name << ", Цена: " << price << endl;
    }
};

class Processor : public Component {
private:
    string socket;
    int coreCount;

public:
    Processor(string name, float price, string socket, int coreCount)
        : Component(name, price), socket(socket), coreCount(coreCount) {}

    void display() {
        Component::display();
        cout << "Сокет: " << socket << ", Колво ядер: " << coreCount << endl;
    }
};

class RAM : public Component {
private:
    string capacity;
    string speed;

public:
    RAM(string name, float price, string capacity, string speed)
        : Component(name, price), capacity(capacity), speed(speed) {}

    void display() {
        Component::display();
        cout << "Вместительность: " << capacity << ", Скорость: " << speed << endl;
    }
};

class GraphicsCard : public Component {
private:
    string memory;
    int coreCount;

public:
    GraphicsCard(string name, float price, string memory, int coreCount)
        : Component(name, price), memory(memory), coreCount(coreCount) {}

    void display() {
        Component::display();
        cout << "Память: " << memory << ", Колво ядер: " << coreCount << endl;
    }
};


int main() {
    setlocale(LC_ALL, "");
    Processor processor("Intel Core i7", 300, "LGA1151", 8);
    processor.display();

    RAM ram("Corsair Vengeance", 100, "16GB", "3200MHz");
    ram.display();

    GraphicsCard graphicsCard("Nvidia GeForce RTX 2080 Ti", 1200, "11GB GDDR6", 4352);
    graphicsCard.display();

    return 0;
}