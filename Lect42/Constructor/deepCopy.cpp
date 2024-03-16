#include<iostream>
#include <string.h>
using namespace std;

class Hero 
{
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
   
    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }
   
    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }
};


int main() {

    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[6] = "Aditi";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor

    Hero hero2(hero1);
    hero2.print();
 

    //Shallow copy
    hero1.name[0]='B';
    hero1.print();
    hero2.print();

}