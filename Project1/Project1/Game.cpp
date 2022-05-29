#include "Game.h"

void Game::delay(int mSec, bool isTouched = false) {
	Sleep(mSec);
	if (isTouched) {
		while (true)
			if (GetAsyncKeyState(VK_SPACE) & 0x8000) break;
	}
}

void Game::init() {
	cout << "눈을 떠 보니 앞이 깜깜하다. 아무것도 보이지 않는다." << endl;
	delay(700);
	cout << "그 순간, 갑자기 앞이 밝아지며 어디선가 목소리가 울린다." << endl;
	delay(300);
	cout << "용사이시여, 당신의 이름을 말해주세요 : ";
	cin >> me.name;
}