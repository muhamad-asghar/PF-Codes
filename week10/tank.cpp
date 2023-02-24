#include <iostream>
#include <windows.h>
using namespace std;
char box = 219;
char tank1[6] = {box, box, box, '-', '-', '>'};
char tank2[6] = {'0', ' ', '0', ' ', ' ', ' '};

char enemy1[6] = {' ', ' ', ' ', '-', '-', '-'};
char enemy2[6] = {'<', '=', '=', '(', '-', ')'};
char enemy3[6] = {' ', ' ', ' ', '/', '@', '/'};
char enemy4[6] = {' ', ' ', ' ', '*', '*', '*'};

// Player Coordinates
int tankX = 5;
int tankY = 5;
// Enemy Coordinates
int enemyX = 28;
int enemyY = 10;
string enemyDirection="Up";
char nexte;
// Player Bullets
int bulletX[10000];
int bulletY[10000];
bool isBulletActive[100000];
int bulletCount = 0;
int score = 0;

void printMaze();
void printTank();
void moveTankLeft();
void moveTankRight();
void moveTankUp();
void moveTankDown();
void moveEnemy();
void erasEnemy();
void eraseTank();
void printEnemy();
void generateBullet();
void moveBullet();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void makeBulletInactive(int index);
void bulletCollisionWithEnemy();
void addScore();
void printscore();
char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y);

main()
{
    system("cls");
    printMaze();
    printTank();
    printEnemy();
   
    while (true)
    {
        printscore();
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveTankLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveTankRight();
        }
        if (GetAsyncKeyState(VK_UP))
        {

            moveTankUp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveTankDown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            generateBullet();
        }

        moveEnemy();

        moveBullet();
        bulletCollisionWithEnemy();

        Sleep(90);
    }
}
void printTank()
{
    gotoxy(tankX, tankY);
    for (int index = 0; index < 6; index++)
    {
        cout << tank1[index];
    }

    gotoxy(tankX, tankY + 1);

    for (int index = 0; index < 6; index++)
    {
        cout << tank2[index];
    }
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void printEnemy()
{
    gotoxy(enemyX, enemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy1[index];
    }
    gotoxy(enemyX, enemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy2[index];
    }
    gotoxy(enemyX, enemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy3[index];
    }
    gotoxy(enemyX, enemyY + 3);

    for (int index = 0; index < 6; index++)
    {
        cout << enemy4[index];
    }
}
void moveTankLeft()
{
    char next = getCharAtxy(tankX - 1, tankY);
    if (next == ' ')
    {
        eraseTank();
        tankX = tankX - 1;
        printTank();
    }
}
void moveTankRight()
{
    char next = getCharAtxy(tankX + 6, tankY);
    if (next == ' ')
    {
        eraseTank();
        tankX = tankX + 1;
        printTank();
    }
}
void moveTankUp()
{
    char next = getCharAtxy(tankX, tankY - 1);
    if (next == ' ')
    {
        eraseTank();
        tankY = tankY - 1;
        printTank();
    }
}
void moveTankDown()
{
    char next = getCharAtxy(tankX, tankY + 2);
    if (next == ' ')
    {
        eraseTank();
        tankY = tankY + 1;
        printTank();
    }
}
void moveEnemy()
{
    if (enemyDirection == "Down")
    {
        nexte = getCharAtxy(enemyX, enemyY + 4);
        if (nexte == '#')
        {
            enemyDirection = "Up";
            
                 
        }
        else
        {
            erasEnemy();
            enemyY= enemyY+1;
            gotoxy(enemyX, enemyY);
            printEnemy();
        }
    }
    if (enemyDirection == "Up")
    {
        nexte = getCharAtxy(enemyX, enemyY -1);
        if (nexte == '#')
        {
            enemyDirection = "Down"; 
           
           
        }
       else
        {
            erasEnemy();
            enemyY = enemyY -1;
            gotoxy(enemyX, enemyY);
            printEnemy();
           
        }
    }
}
void erasEnemy()
{
    gotoxy(enemyX, enemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}
void eraseTank()
{
    gotoxy(tankX, tankY);

    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(tankX-1, tankY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}
void generateBullet()
{
    bulletX[bulletCount] = tankX + 7;
    bulletY[bulletCount] = tankY;
    isBulletActive[bulletCount] = true;
    gotoxy(tankX + 7, tankY);
    cout << ".";
    bulletCount++;
}
void moveBullet()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {
            char next = getCharAtxy(bulletX[x] + 1, bulletY[x]);
            if (next != ' ')
            {
                eraseBullet(bulletX[x], bulletY[x]);
                makeBulletInactive(x);
            }

            else
            {
                eraseBullet(bulletX[x], bulletY[x]);
                bulletX[x] = bulletX[x] + 1;
                printBullet(bulletX[x], bulletY[x]);
            }
        }
    }
}
void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << ".";
}
void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void makeBulletInactive(int index)
{

    isBulletActive[index] = false;
}
void bulletCollisionWithEnemy()
{

    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {
            if (bulletX[x] + 1 == enemyX && (bulletY[x] == enemyY || bulletY[x] == enemyY + 2 || bulletY[x] == enemyY + 3))
            {
                addScore();
            }

            if (enemyX - 1 == bulletX[x] && enemyY + 1 == bulletY[x])
            {
                addScore();
            }
        }
    }
}
void addScore()
{
    score++;
}
void printscore()
{
    gotoxy(45, 8);
    cout << "Score: " << score;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
    cout << "########################################" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "########################################" << endl;
}