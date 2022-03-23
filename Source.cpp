/*
*  FCAI - Programming 1 - 2022 - Assigment 2
 * Program Name : play X_O.cpp
 * Auother : Aymen Motea Alshami
 * last Modification Data : 22 Mar 2022
*/
#include <iostream>
using namespace std;
void drow();
void replace(int, char);
bool chekAvailibality(int);
bool checkwhinner(char player);
void initializecharacters();
char c1, c2, c3, c4, c5, c6, c7, c8, c9;
char curentplayer = 'X';
int main() {
	while (true)
	{
		initializecharacters();
		cout << " helllo" << endl << endl;
		drow();
		int input;
		//counterx »⁄ «–« ﬂ«‰ œÊ— 
		int counter = 0;
		while (true)
		{
			cout << "turn" << curentplayer << endl;
			cin >> input;
			while (!chekAvailibality(input)) {
				cout << "the numbur is incorrect or it is reseved" << endl;
				cout << " enter onother number" << endl;
				cin >> input;
			}
			if (counter % 2 == 0) {
				replace(input, curentplayer);
				curentplayer = 'O';
			}
			else {
				replace(input, curentplayer);
				curentplayer = 'X';
			}
			counter++;
			drow();
			if (checkwhinner('X') || checkwhinner('O')) {
				cout << "are you need replay game" << endl;
				break;
			}
			else if (counter == 9) {
				cout << "taadol " << endl;
				break;
			}

		}
		cout << " are you need play again" << endl;
		cout << "1- continue\n";
		cout << "2-exit";
		cin >> input;
		if (input == 1) {
			continue;
		}
		else {
			exit(0);
		}
	}

}
// Ã⁄· «·„ €Ì—«   ”«ÊÌ Â–Â «·ﬁÌ„
void initializecharacters() {
	c1 = '1';
	c2 = '2';
	c3 = '3';
	c4 = '4';
	c5 = '5';
	c6 = '6';
	c7 = '7';
	c8 = '8';
	c9 = '9';

}
//  —”„ «··ÊÕ…
void drow() {
	cout << "\t" << c1 << "\t|\t" << c2 << "\t|\t" << c3 << endl;
	cout << "\t__________________________________" << endl;
	cout << "\t" << c4 << "\t|\t" << c5 << "\t|\t" << c6 << endl;
	cout << "\t__________________________________" << endl;
	cout << "\t" << c7 << "\t|\t" << c8 << "\t|\t" << c9 << endl;
	cout << "\t__________________________________" << endl;
	cout << endl;
}
// ﬁÊ„ »«” »œ«· «·—ﬁ„ «·„œŒ·  
void replace(int i, char c) {
	switch (i)
	{
	case 1:
		c1 = c;
		break;
	case 2:
		c2 = c;
		break;
	case 3:
		c3 = c;
		break;
	case 4:
		c4 = c;
		break;
	case 5:
		c5 = c;
		break;
	case 6:
		c6 = c;
		break;
	case 7:
		c7 = c;
		break;
	case 8:
		c8 = c;
		break;
	case 9:
		c9 = c;
		break;
	}
}
//true :  ﬁÊ„ »«—Ã«⁄ ’ÕÌÕ« «–« ﬂ«‰ «·„œŒ· ’ÕÌÕ«
//false :  ﬁÊ„ »«—Ã«⁄ Œ«ÿ∆« «–« ﬂ«‰ «·„œŒ· Œÿ«
bool chekAvailibality(int input) {
	if (input < 1 || input > 9)
		return false;
	switch (input)
	{
	case 1:
		if (c1 == '1')
			return true;
		break;
	case 2:
		if (c2 == '2')
			return true;
		break;
	case 3:
		if (c3 == '3')
			return true;
		break;
	case 4:
		if (c4 == '4')
			return true;
		break;
	case 5:
		if (c5 == '5')
			return true;
		break;
	case 6:
		if (c6 == '6')
			return true;
		break;
	case 7:
		if (c7 == '7')
			return true;
		break;
	case 8:
		if (c8 == '8')
			return true;
		break;
	case 9:
		if (c9 == '9')
			return true;
		break;


	}
	return false;
}

//«· «ﬂœ «–« ﬂ«‰  «ﬂ” ÂÌ «·›«∆“… «„ ·«
bool checkwhinner(char player) {
	//«· «ﬂœ „‰ «·’›Ê›
	bool r1 = (c1 == player && c2 == player && c3 == player);
	bool r2 = (c4 == player && c5 == player && c6 == player);
	bool r3 = (c7 == player && c8 == player && c9 == player);
	//«· «ﬂœ „‰ «·«⁄„œ…
	bool cl = (c1 == player && c4 == player && c7 == player);
	bool cl2 = (c5 == player && c2 == player && c8 == player);
	bool cl3 = (c3 == player && c6 == player && c9 == player);
	//«· Õﬁﬁ „‰ «·ﬁÿ—«‰
	bool r7 = (c1 == player && c5 == player && c9 == player);
	bool r8 = (c7 == player && c5 == player && c3 == player);

	if (r1 || r2 || r3 || cl || cl2 || cl3 || r7 || r8) {
		cout << player << "the winner ";
		return true;
	}
	return false;
}