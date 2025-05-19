#include <iostream>
#include <string>
using namespace std;

class Character {
private:
  std::string name;
  int health;
  int attackPower;

public:
  Character(std::string name, int health, int attackPower)
    : name(name), health(health), attackPower(attackPower) {}

  void attack(Character& target) {
    target.health -= attackPower;
    if (target.health < 0) target.health = 0;
  }

  bool isAlive() const {
    return health > 0;
  }

  void printStatus() const {
    std::cout << name << " has " << health << " health remaining.\n";
  }

  std::string getName() const {
    return name;
  }
};

int main() {
  int health1, health2, attackPower1, attackPower2;
  string name;
  cin >> health1 >> attackPower1;
  cin >> health2 >> attackPower2;
  cin >> name;
  Character P1("finn", health1, attackPower1);
  Character P2("Ice King" , health2, attackPower2);
  
  Character* first;
  Character* second;
  if(name =="finn"){
    first = &P1;
    second = &P2;
  }
  else if(name == "IceKing" || name == "iceking"){
    first = &P2;
    second = &P1;
  }
  else{
    cout << "Enter the Character to Attack first (either IceKing, or finn)" << endl;
  }

  while(P1.isAlive() && P2.isAlive()){
    first->printStatus();
    second->printStatus();
    cout << first->getName() << " attacks " << second->getName() << "!" << endl;
    first->attack(*second);
    second->printStatus();
    if(!second->isAlive()){
      break;
    }
    cout << second->getName() << " attacks " << first->getName() << "!" << endl;
    second->attack(*first);
    first->printStatus();
  }

  if(P1.isAlive()){
    cout << "Finn Wins the Battle!" << endl;
  }
  else{
    cout << "Ice King Wins the Battle!" << endl;
  }
}

