#include <iostream>
using namespace std;

class Position {
public:
    float x, y, z;

    Position(float x ,float y , float z )  {
        this->x=x;
        this->y=y;
        this->z=z;
    }

    void display() {
        cout << "Position is: (" << x << ", " << y << ", " << z << ")\n";
    }
};

class Health {
public:
    int health;

    Health(int health )  {
        this->health=health;
    }

    void takeDamage(int damage) {
        health -= damage;
        if (health < 0) health = 0;
    }

    void display() {
        cout << "Health: " << health << "\n";
    }
};

class Character : public Position, public Health {
public:
    string name;

    Character(string name, float x = 0, float y = 0, float z = 0, int health = 100)
        : Position(x, y, z), Health(health){
            this->name=name;
        }

    void display() {
        cout << "The Character name is: " << name << "\n";
        Position::display();
        Health::display();
    }
};

int main() {
    Character protagonist("Lewandowski", 45, 35.2, 0, 150);

    cout << "When the Game starts:\n";
    protagonist.display();

    protagonist.takeDamage(20);
    cout << "\nAfter taking damage:\n";
    protagonist.display();

    protagonist.x = 18.76;
    protagonist.y = 2.45;
    protagonist.z = 11.22;
    cout << "\nAfter moving:\n";
    protagonist.display();

    return 0;
}
