#include "classSnake.h"
void Snake::display()
{
    cout << "\n The snake board area:\n";
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == fruitx && j == fruity)
            {
                if (i == posx && j == posy)
                {
                    cout << " 0 ";
                    srand(time(0));
                    fruitx = rand() % width;
                    fruity = rand() % length;
                }
                else
                {
                    cout << " F ";
                }
            }
            else
            {
                if (i == posx && j == posy)
                    cout << " 0 ";
                else
                {
                    cout << " . ";
                }
            }
        }
        cout << endl
             << endl;
    }
}
void Snake::moving(char c)
{
    switch (c)
    {
    case 'w':
        if ((posx) <= 0)
            posx = width - 1;
        else
            posx--;
        break;
    case 'a':
        if ((posy) <= 0)
            posy = length - 1;
        else
            posy--;
        break;
    case 'd':
        posy++;
        posy = (posy) % width;
        break;
    case 's':
        posx++;
        posx = (posx) % length;
        break;
    }
}
