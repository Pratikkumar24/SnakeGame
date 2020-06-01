#include "classSnake.h"
void Snake::display()
{
    cout << "\n The snake board area:\n";
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i == fruitx && j == fruity)
            {
                cout << " F ";
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
void Snake::moving(int &k, char c)
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
    if (posx == fruitx && posy == fruity)
    {
        srand(time(0));
        fruitx = rand() % width;
        fruity = rand() % length;
        score += 20;
        if (score >= 50)
        {
            k -= 500;
        }
    }
}
