#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <string>
using namespace std;

class GameObject {
protected:
    int hp;              // Здоров'я об'єкта
    string name;         // Ім'я об'єкта
    int x, y;            // Координати на карті

public:
    GameObject(int hp, const string& name, int x, int y);

    // Геттери та сеттери для HP, ім'я, та координат
    int getHP() const;
    void setHP(int hp);

    string getName() const;
    void setName(const string& name);

    int getX() const;
    int getY() const;
    void setPosition(int x, int y);

    // Методи руху об'єкта
    void move(int dx, int dy);
};




#endif
