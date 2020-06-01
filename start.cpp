#include <unistd.h>
#include "terminal_io.h"
#include "classSnake.h"
#include <thread>
#include <time.h>
void Snake::input()
{
    if (c = getch())
    {
        switch (c)
        {
        case 'w':
            c = 'w';
            break;
        case 'a':
            c = 'a';
            break;
        case 'd':
            c = 'd';
            break;
        case 's':
            c = 's';
            break;
        }
    }
}
void Snake::StartGame()
{
    system("clear");
    int k = 199000;
    display();
    cout << "\n value of posx:" << posx << " and posy:" << posy;
    c = getch();
    while (1)
    {
        system("clear");
        moving(k, c);
        cout << "\n value of posx:" << posx << " and posy:" << posy;
        cout << "\n Your score:" << score << " and speed:" << k;
        display();
        usleep(k);
        thread t1([this] { //using lamba function
            this->input();
        });
        t1.detach();
    }
}