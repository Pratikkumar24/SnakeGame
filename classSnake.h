#include <iostream>
using namespace std;
class Snake
{
    int fruitx, fruity, posx, posy;
    int width, length;
    char area[100][100];
    char c;

public:
    Snake(int width, int length)
    {
        this->width = width;
        this->length = length;

        this->posx = width / 2;
        this->posy = length / 2;
    }
    void Setup();
    void StartGame();
    void moving(char c);
    void display();
    void input();
};
