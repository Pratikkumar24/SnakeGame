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
        default:
            c = c;
        }
    }
}
void Snake::StartGame()
{
    system("clear");

    display();
    cout << "\n value of posx:" << posx << " and posy:" << posy;
    c = getch();
    while (1)
    {
        system("clear");
        moving(c);
        cout << "\n value of posx:" << posx << " and posy:" << posy;
        cout << "\n Your score:" << score;
        display();
        usleep(199000);
        // sleep(1); //Sleep for 1 second
        thread t1([this] {
            this->input();
        });
        t1.detach();
    }
}