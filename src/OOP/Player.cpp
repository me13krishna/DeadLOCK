#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    int id;
    string name;
    int health;
    int power;

public:
    // 1. Default Constructor
    Player() {
        id = 0;
        name = "Unknown_Player";
        health = 100;
        power = 10;
    }

    // 2. Parameterized Constructor
    Player(int p_id, string p_name, int p_health, int p_power) {
        id = p_id;
        name = p_name;
        health = p_health;
        power = p_power;
    }

    // 3. Copy Constructor
    Player(const Player &p) {
        id = p.id;
        name = p.name + "_Clone"; // Clone player
        health = p.health;
        power = p.power;
    }

    // 4. Operator Overloading (+ operator to combine power/team up)
    Player operator+(const Player &p) {
        Player temp;
        temp.id = id + p.id;
        temp.name = name + " & " + p.name;
        temp.health = health + p.health; // Combined health
        temp.power = power + p.power;   // Combined power
        return temp;
    }

    // Member Function: Display Details
    void display() {
        cout << "Player ID    : " << id << endl;
        cout << "Player Name  : " << name << endl;
        cout << "Health Points: " << health << endl;
        cout << "Power Level  : " << power << endl;
        cout << "-----------------------------------" << endl;
    }

    // 5. Destructor
    ~Player() {
        cout << "Player " << name << " session ended (Destructor Called)." << endl;
    }
};

int main() {
    cout << "=== DeadLOCK Game Character System ===" << endl << endl;

    // Default Constructor Call
    cout << "--- Player 1 (Default Constructor) ---" << endl;
    Player p1;
    p1.display();

    // Parameterized Constructor Call
    cout << "--- Player 2 (Parameterized Constructor) ---" << endl;
    Player p2(101, "Krishna", 150, 50);
    p2.display();

    // Copy Constructor Call
    cout << "--- Player 3 (Copy Constructor - Clone of Player 2) ---" << endl;
    Player p3(p2);
    p3.display();

    // Operator Overloading Call (+)
    cout << "--- Team Up (Operator Overloading +) ---" << endl;
    Player team = p2 + p3;
    team.display();

    return 0;
}