#pragma once

#include "Character.h"


class Game
{
	void delay(int mSec, bool isTouched);
	Character me;
public:
	void init();
};

