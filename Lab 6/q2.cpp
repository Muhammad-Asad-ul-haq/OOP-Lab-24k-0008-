#include <iostream>
#include <string>

using namespace std;

class Character {
public:
    int health;
    int damage;

    Character(int health, int damage) {
        this->health = health;
        this->damage = damage;
    }

    void display() {
        cout << "The Health is: " << health <<endl<< "The Damage is: " << damage << endl;
    }
};

class Enemy : public Character {
public:
    Enemy(int health, int damage) : Character(health, damage) {}

    void display() {
        cout << "Enemy Stats : ";
        Character::display();
    }
};

class Player : public Character {
public:
    Player(int health, int damage) : Character(health, damage) {}

    void display() {
        cout << "Player Stats : ";
        Character::display();
    }
};

class Wizard : public Player {
private:
    int magicPower;
    string spells;

public:
    Wizard(int health, int damage, int magicPower, string spells)
        : Player(health, damage) {
        this->magicPower = magicPower;
        this->spells = spells;
    }

    void display() {
        cout << "Wizard Stats : "<< endl;
        Character::display();
        cout << "Magic Power: " << magicPower <<endl<< "The Spells are: " << spells << endl;
    }
};

int main() {
    Wizard legendary(150, 75, 250, "Speed, Lightning, Paranoia");
    legendary.display();
    
    return 0;
}
