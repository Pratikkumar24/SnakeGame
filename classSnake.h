#include <iostream>
using namespace std;
class Snake
{
    int fruitx, fruity, posx, posy;
    int width, length;
    char area[100][100], c;
    int score = 0;

public:
    Snake(int width, int length)
    {
        this->width = width;
        this->length = length;

        this->posx = width / 2;
        this->posy = length / 2;
    }
    void StartGame();
    void moving(int &, char c);
    void display();
    void input();
};
