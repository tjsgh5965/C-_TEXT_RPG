#include <iostream>
#include <Windows.h>

using namespace std;

void gotoxy(int x,int y)
{
    COORD pos={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); 
}

int main() {
    
    int x = 0, y = 0;

    while (true) {
        gotoxy(x, y);
        cout << " ";
        if (GetAsyncKeyState(VK_UP) & 0x8000) y--;
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) y++;
        if (GetAsyncKeyState(VK_LEFT) & 0x8000) x--;
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) x++;

        gotoxy(x,y);
        cout << "O";
        Sleep(50);
    }

}