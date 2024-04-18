#include <iostream>

using namespace std;

const enum LevelUp {
	None = 0,
	Level1 = 20,
	Level2 = 50,
	Level3 = 100,
	Level4 = 250,
	Level5 = 600,
	Level6 = 1100,
	Level7 = 2000,
	Level8 = 3200,
	Level9 = 5000,
};

int xP = 0;

int InputXP();
void LevelUpCalculator(int xP);

int main()
{
	InputXP();
	LevelUpCalculator(xP);
}

int InputXP() {
	cout << "Enter XP: ";
	cin >> xP;
	return xP;
}

void LevelUpCalculator(int xP) {
	int xp = xP;
	if (xp < 20) {
		cout << "You are not level up yet!" << endl;
	}
	else if (xp < 50) {
		cout << "You are level 1!" << endl;
	}
	else if (xp < 100) {
		cout << "You are level 2!" << endl;
	}
	else if (xp < 250) {
		cout << "You are level 3!" << endl;
	}
	else if (xp < 600) {
		cout << "You are level 4!" << endl;
	}
	else if (xp < 1100) {
		cout << "You are level 5!" << endl;
	}
	else if (xp < 2000) {
		cout << "You are level 6!" << endl;
	}
	else if (xp < 3200) {
		cout << "You are level 7!" << endl;
	}
	else if (xp < 5000) {
		cout << "You are level 8!" << endl;
	}
	else if (xp < 8000) {
		cout << "You are level 9!" << endl;
	}
}