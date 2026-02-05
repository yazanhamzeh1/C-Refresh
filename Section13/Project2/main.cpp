#include <iostream>
#include <string>
using namespace std;

class Player {
private:
	string name;
	int xp, health;
public:
	void set_name(string n) { name = n; }
	//constructors and destructor
	Player() {
		cout << "No args constructor called\n";
	}
	Player(string name) {
		cout << "String args constructor called\n";
	}
	Player(string name, int xp, int health) {
		cout<<"Three args constructor called\n"; 
	}
	~Player() {
		cout << "Destructor called for " << name << endl;
	}
};

int main(void) {
	{
		Player Jude;
		Jude.set_name("Jude");
	}
	//destructor will be called here
	{
		Player loser;
		loser.set_name("LOSER");
		Player Zeina("Zeina");
		Player villain("Vill", 100, 12);
		villain.set_name("Villain");
	}
	//destructors will be called here, from last class to first
	Player* enemy = new Player;
	enemy->set_name("Mack");
	return 0;
}