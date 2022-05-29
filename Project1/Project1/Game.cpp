#include "Game.h"

void Game::delay(int mSec, bool isTouched = false) {
	Sleep(mSec);
	if (isTouched) {
		while (true)
			if (GetAsyncKeyState(VK_SPACE) & 0x8000) break;
	}
}

void Game::init() {
	cout << "���� �� ���� ���� �����ϴ�. �ƹ��͵� ������ �ʴ´�." << endl;
	delay(700);
	cout << "�� ����, ���ڱ� ���� ������� ��𼱰� ��Ҹ��� �︰��." << endl;
	delay(300);
	cout << "����̽ÿ�, ����� �̸��� �����ּ��� : ";
	cin >> me.name;
}