#include <iostream>
#include <conio.h>
#include <fstream>
#include <cmath>
#include <windows.h>
using namespace std;
// header
void welcome();
void loading();
void menu();
void cls();

// instruction
void instrect();
// movement
int X = 35;
int Y = 21;
void printplayer(int X, int Y);
void moveleft();
void moveright();
void moveup();
void movedown();
// print player
char prinTplayer[3][2];
char erase = 32;
char eraseplayer[3][2] = {{erase, erase},
                          {erase, erase},
                          {erase, erase}};

////print maze
char prinTmaze[26][88];
// bomb
int bombx[10000];
int bomby[10000];
bool isbombactive[10000];
// bomb function
void printbomb(int x, int y);
int count = 0;
void creatbomb();
void erasebomb(int x, int y);

int remainingplayerhealth = 0;
void printhealth();
// enemies motion variable
int c = 0;
char eni;
char enemy3;
void enimy3();
int enyx3 = 50;
int enyy3 = 12;
float distance();
char smartPrevious = ' ';
int enmy3 = 1;
int b;
int enyx = 3;
int enyy = 24;
int enyx1 = 65;
int enyy1 = 2;
int x;
int y;
char enimy2;
int e1 = 0;
int e2 = 0;
int e3 = 0;
// enimeis motion function
void moveGhostSmart();
void eraseemin3();
void movemeny3();
void enimy1();
void enemyerase();
void enemymove();
void enemy2();
void enemy2erase();
void enemymove2();

// colision
void bombcolisionwithenyme();
void bombcolisionwithplayer();
void bombcolisionwithenyme3();
void bombcolisionwithenyme2();
void bulletCollisionWithplayer();
// timer
int timer1 = 10;
int timer3 = 40;
int ptimer = 0;
int btimer = 0;
int timer2 = 0;
// sporting funtctions
void playererase(int X, int Y);
void startgame();
char getCharAtxy(short int X, short int Y);
void gotoxy(int x, int y);
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void moverendome();
string direction = "right";

// bullet functions
void generateBullet();
void moveBullet();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void makeBulletInactive(int index);
// bullet array
int bulletX[10000];
int bulletY[10000];
bool isBulletActive[100000];
int bulletCount = 0;
int bulettimer = 0;

int a;
void addScore();
void printscore();
void printmaze();
void movebomb();
int enim = 1;
int enim2 = 1;

int slep = 100;
void youwin();
void youlose();
void playerhealth();
void healthsencer();
void foodpalets();
int opt;

void loaddata();
void storegame();
void loadaxis();
void makebombinactive(int index);
string loaddatafromfile(string record, int num);
void Erase();
void printpalets(int paltx, int palty);
void erasepalets(int paltx, int palty);
void makepaletsinactive(int idx);
void colisionwithpalets();
void erasewin();
int level = 1;
// palets

int paletsx[10000];
int paletsy[10000];
bool ispaletsactive[10000];
int palets = 0;
int paltx = 17;
int palty = 13;
int palttimer = 0;
int count1 = 0;
char palet = 0;
string colisiontype;
void scorepalets();
// continous
void loadscore();
// score
void storescore();
int hscore = 0;
void highscore();
void printHighSocre();
void ignor();
main()
{
    welcome();
    loading();
    bool run = true;
    while (run)
    {
        loaddata();
        menu();
        while (!(cin >> opt) || (opt < 0) || (opt > 5))
        {
            ignor();
        }

        if (opt == 1)
        {
            loadaxis();
        }
        if (opt == 2)
        {
            system("cls");
            SetConsoleTextAttribute(h, 3);
            instrect();
            SetConsoleTextAttribute(h, 15);
            cls();
        }
        if (opt == 3)
        {
            Erase();
            startgame();
        }
        if (opt == 4)
        {
            return false;
        }
    }
}
void welcome()

{
    system("cls");
    SetConsoleTextAttribute(h, 9);

    cout << "                                        ..::::::..   " << endl;
    cout << "                                   .--==-:........:-===-.   " << endl;
    cout << "                                -++=:...            ...:=*+- " << endl;
    cout << "                             .+#+-........................-+#+." << endl;
    cout << "                           .*%*-::::::::::::::::::::::::::::-*%* " << endl;
    cout << "                          =@%+-::::::::::::::::::::::::::::::-+%%: " << endl;
    cout << "                         #@%+----------------------------------*%@- " << endl;
    cout << "                       .%@@#=--==++====++=---------------------=#@@- " << endl;
    cout << "                      .@@@%*==++-.      :+*+====================*@@@. " << endl;
    cout << "                      %@@@%*+*=..         :**+++*##**++++*###*++*%@@% " << endl;
    cout << "                     =@@@@@##-........    .:#*#%*-::...   .:=#%##@@@@= " << endl;
    cout << "                     @@@@@@%+:...........-::=@#=:............:+%@@@@@@  " << endl;
    cout << "                    :@@@@@@@-...........+@*-*%@#-+:...........:=@@@@@@+ " << endl;
    cout << "                    =@@@@@@@-...........%@@@@%@@@@=............-@@@@@@@  " << endl;
    cout << "                    +@@@@@@@+...........+@@@%@%@@%:...........:+@@@@@@@= " << endl;
    cout << "                    *@@@@@@@@=...........:==#%#+=:...........:+@@@@@@@@% " << endl;
    cout << "                    @@@@@@@@@@=:......:-===-::.....:::.....-+%@@@@@@@@@@: " << endl;
    cout << "                   #@@@@@@@@@@@#=:...-+++=====-:...  --:.-#@@@@@@@@@@@@@% " << endl;
    cout << "                 :%@@@@@@@@@@@@*:.::-=++=========-::.-:    .+%@@@@@@@@@@@#. " << endl;
    cout << "               .*@@@@@@@@@@@@+.      .-+=============-        -%@@@@@@@@@@@+  " << endl;
    cout << "             .*@@@@@@@@@@@@*.          :=+========+=.           =@@@@@@@@@@@@+." << endl;
    cout << "           -#@%%@@@@@@@@@@-              :=+====+=:              .#@@@@@@@@%%%@#= " << endl;
    cout << "        .+%%#%%%%@@@@@@@@:                .:=++=:.                 *@@@@@@@@%%##%%*:" << endl;
    cout << "      -*%####%@@@@@@@@@@:...........................................*@@@@@@@@@%####%%+" << endl;
    cout << "    -##***#%@@@@@@@@@@@-.............................................%@@@@@@@@@@%#***#%+ " << endl;
    cout << "  :#*++*%@@@@@@@@@@@@@*..............................................-@@@@@@@@@@@@@%*++#%:" << endl;
    cout << " -#+*#@@@@@@*=:#@@@@@@:::::::::::::::::::::::::::::::::::::::::::::::.*@@@@@+ :=*@@@@@#++#:" << endl;
    cout << " %%@@@@@#=.    #@@@@@*.:::::::::::::::::::::::::::::::::::::::::::::::-@@@@@=     :+@@@@@%#" << endl;
    cout << " %@@@*-        +@@@@@=.:::::::::::::::::::::::::::::::::::::::::::::::.%@@@@-        :*@@@@" << endl;
    cout << "  :.           -@@@@@-.::::::::::::::::::::::::::::::::::::::::::::::..#@@@@            :-." << endl;
    cout << "                @@@@@-.::::::::::::::::::::::::::::::::::::::::::::::..#@@@#  " << endl;
    cout << "                =@@@@=.::::::::::::::::::::::::::::::::::::::::::::::..%@@@-  " << endl;
    cout << "                 #%#@*..:::::::::::::::::::::::::::::::::::::::::::::.:@@%# " << endl;
    cout << "                   %#**:.::::::::::::::::::::::::::::::::::::::::::::..=**%. " << endl;
    cout << "                  .%#*=..:::::::::::::::::::::::::::::::::::::::::::.:**%:" << endl;
    cout << "                    *%*-:-======---:::::::::::::::::::::::---======-:+#%- " << endl;
    cout << "                  .:-++=----===+++++==-::::::::::::::--==+++++==-----=+=-:" << endl;
    cout << "                :=-::..........:-=++++++=-:::::::::-=+++++==::..........:-=-. " << endl;
    cout << "              :==:::::::::::::::::-===++++=::::::-=++++===-::::::::::::::::-+=. " << endl;
    cout << "             -+=-----:::::::::::::-=====+++=::::-=+++====-:::::::::::::-----=+=.  " << endl;
    cout << "            .++==------------------======+++-:::=+++======------------------=++=   " << endl;
    cout << "            :++++=================5======+++++===+++++=======================++++  " << endl;
    cout << "         .:-=+++++++================+++++++*%%%%%*++++++=================+++++++-:. " << endl;
    cout << "         :-=++*******#################################################********++=-: " << endl;
    cout << "            ...::::----=======++++++++++++++++++++++++++++++++=======----::::...   " << endl;
    cout << "                                       ..............                               " << endl;

    SetConsoleTextAttribute(h, 15);
}

void loading()
{
    int x = 20;
    int y = 48;
    gotoxy(x, y);
    int m = 223;
    char g = m;
    SetConsoleTextAttribute(h, 7);
    cout << "G A M E  IS  R U N I N G";
    for (int t = x; t < 44; t++)
    {
        gotoxy(t, y);
        SetConsoleTextAttribute(h, 7);
        cout << g;
        Sleep(100);
        SetConsoleTextAttribute(h, 15);
    }
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void menu()
{
    system("cls");

    SetConsoleTextAttribute(h, 12);

    cout << "### ##   ### ###  ###  ##   ## ##   ##  ###    ####   ###  ## " << endl;
    cout << " ##  ##   ##  ##    ## ##  ##   ##  ##   ##     ##      ## ## " << endl;
    cout << " ##  ##   ##       # ## #  ##       ##   ##     ##     # ## # " << endl;
    cout << " ##  ##   ## ##    ## ##   ##  ###  ##   ##     ##     ## ##  " << endl;
    cout << " ## ##    ##       ##  ##  ##   ##  ##   ##     ##     ##  ## " << endl;
    cout << " ##       ##  ##   ##  ##  ##   ##  ##   ##     ##     ##  ## " << endl;
    cout << "####     ### ###  ###  ##   ## ##    ## ##     ####   ###  ## " << endl;
    cout << endl;

    SetConsoleTextAttribute(h, 15);

    cout << "1 continue :" << endl;
    cout << "2 inctructions:" << endl;
    cout << "3 start :" << endl;
    cout << "4 exit:" << endl;
    cout << "enter option " << endl;
}

void ignor()
{
    cout << " error : enter again :";
    cin.clear();
    cin.ignore(123, '\n');
}
void instrect()
{
    cout << "press up arrow key to move up" << endl;
    cout << "press left arrow key to move left" << endl;
    cout << "press down arrow key to move down" << endl;
    cout << "press right arrow key to move right" << endl;
    cout << "press space for bomb; bomb is placed right end of player " << endl;
    cout << " press escape for resume game" << endl;
    cout << " avoid from enemy if you touch your life decraesed" << endl;
    cout << "bomb does not effect your life " << endl;
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
void cls()
{

    cout << "press any key to back ";
    getch();
    system("cls");
}
void startgame()
{
    bool gameRunning = true;
    SetConsoleTextAttribute(h, 3);
    printmaze();
    SetConsoleTextAttribute(h, 15);
    loadscore();

    while (gameRunning)
    {
        storescore();
        printHighSocre();
        if (c >= hscore)
        {
            hscore = c;
        }

        SetConsoleTextAttribute(h, 9);
        printplayer(X, Y);
        SetConsoleTextAttribute(h, 15);
        storegame();
        if (GetAsyncKeyState(VK_LEFT))
        {

            moveleft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveright();
        }
        if (GetAsyncKeyState(VK_UP))
        {

            moveup();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movedown();
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            creatbomb();
        }

        printscore();
        bombcolisionwithenyme2();
        bombcolisionwithenyme();
        bombcolisionwithenyme3();
        bulletCollisionWithplayer();
        colisionwithpalets();
        if (timer3 == bulettimer)
        {
            generateBullet();
            bulettimer = 0;
        }
        moveBullet();
        bulettimer++;

        if (btimer == 25)
        {

            for (int x = 0; x < count; x++)
            {
                if (isbombactive[x] == true)
                {

                    makebombinactive(x);
                    erasebomb(bombx[x], bomby[x]);
                    break;
                }
            }
            btimer = 0;
        }
        btimer++;
        scorepalets();
        int timer;
        if (timer == 100)
        {
            int palets = rand() % 6;
            if (palets == 0)
            {
                paltx = 17;
                palty = 13;
                foodpalets();
            }
            if (palets == 1)
            {
                paltx = 65;
                palty = 18;
                foodpalets();
            }
            if (palets == 2)
            {
                paltx = 70;
                palty = 2;
                foodpalets();
            }
            if (palets == 3)
            {
                paltx = 10;
                palty = 7;
                foodpalets();
            }
            if (palets == 4)
            {
                paltx = 50;
                palty = 23;
                foodpalets();
            }
            if (palets == 5)
            {
                paltx = 70;
                palty = 7;
                foodpalets();
            }
            timer = 0;
        }
        timer++;
        if (palttimer == 30)
        {

            for (int x = 0; x < palets; x++)
            {
                if (ispaletsactive[x] == true)
                {
                    makepaletsinactive(x);
                    erasepalets(paletsx[x], paletsy[x]);
                    break;
                }
            }
            palttimer = 0;
        }
        palttimer++;

        playerhealth();
        printhealth();

        Sleep(slep);

        if (remainingplayerhealth == 10)
        {
            youlose();
            getch();
            Erase();
            storegame();
            remainingplayerhealth = 0;
            gameRunning = false;
        }
        if (count1 == 3)
        {
            count1 = 0;
            youwin();
            getch();
            timer1 = timer1 - 2;
            timer3 = timer3 - 10;
            level++;
            erasewin();
            startgame();
        }
        if (timer1 == timer2)
        {
            if (enim == 1)
            {

                enemymove();
            }
            if (enim2 == 1)
            {

                enemymove2();
            }
            if (enmy3 == 1)
            {

                movemeny3();
            }
            timer2 = 0;
        }
        timer2++;
    }
}
void Erase()
{
    enyx = 3;
    enyy = 24;
    enyx1 = 65;
    enyy1 = 2;
    enyx3 = 50;
    enyy3 = 12;
    X = 35;
    Y = 21;
    remainingplayerhealth = 0;
    c = 0;
    e1 = 0;
    e2 = 0;
    e3 = 0;
    enim = 1;
    enim2 = 1;
    enmy3 = 1;
    level = 1;
}
void erasewin()
{
    enyx = 3;
    enyy = 24;
    enyx1 = 65;
    enyy1 = 2;
    enyx3 = 50;
    enyy3 = 12;
    X = 35;
    Y = 21;
    e1 = 0;
    e2 = 0;
    e3 = 0;
    enim = 1;
    enim2 = 1;
    enmy3 = 1;
}
void youlose()
{
    cout << "##  ##    ## ##   ##  ###           ####      ## ##    ## ##   ### ###" << endl;
    cout << "##  ##   ##   ##  ##   ##            ##      ##   ##  ##   ##   ##  ## " << endl;
    cout << "##  ##   ##   ##  ##   ##            ##      ##   ##  ####      ##    " << endl;
    cout << "## ##   ##   ##  ##   ##            ##      ##   ##   #####    ## ## " << endl;
    cout << "##     ##   ##  ##   ##            ##      ##   ##      ###   ##    " << endl;
    cout << "##     ##   ##  ##   ##            ##  ##  ##   ##  ##   ##   ##  ##" << endl;
    cout << "##      ## ##    ## ##            ### ###   ## ##    ## ##   ### ###  " << endl;
}
void youwin()
{
    cout << " ##  ##    ## ##   ##  ###           ##   ##    ####   ###  ## " << endl;
    cout << " ##  ##   ##   ##  ##   ##           ##   ##     ##      ## ##  " << endl;
    cout << " ##  ##   ##   ##  ##   ##           ##   ##     ##     # ## # " << endl;
    cout << "  ## ##   ##   ##  ##   ##           ## # ##     ##     ## ##  " << endl;
    cout << "##     ##   ##  ##   ##           # ### #     ##     ##  ##  " << endl;
    cout << "   ##     ##   ##  ##   ##            ## ##      ##     ##  ## " << endl;
    cout << "   ##      ## ##    ## ##            ##   ##    ####   ###  ## " << endl;
}
void creatbomb()
{
    bombx[count] = X - 2;
    bomby[count] = Y + 2;
    isbombactive[count] = true;
    gotoxy(bombx[count], bomby[count]);
    cout << "@";
    count++;
}
void printbomb(int x, int y)
{
    gotoxy(x, y);
    cout << "@";
}
void erasebomb(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void makebombinactive(int index)
{

    isbombactive[index] = false;
}
void foodpalets()
{

    paletsx[palets] = paltx;
    paletsy[palets] = palty;
    ispaletsactive[palets] = true;
    gotoxy(paletsx[palets], paletsy[palets]);
    SetConsoleTextAttribute(h, 4);
    cout << palet;
    SetConsoleTextAttribute(h, 15);
    palets++;
}
void printpalets(int paltx, int palty)
{

    gotoxy(paltx, palty);
    cout << palet;
}
void scorepalets()
{
    int ran = rand() % 2;
    if (ran == 0)
    {
        palet = 5;
        colisiontype = "health";
    }
    if (ran == 1)
    {
        palet = 3;
        colisiontype = "score";
    }
}
void erasepalets(int paltx, int palty)
{
    gotoxy(paltx, palty);
    cout << " ";
}
void makepaletsinactive(int idx)
{
    ispaletsactive[idx] = false;
}

void printplayer(int X, int Y)
{

    for (int row = 0; row < 3; row++)
    {
        gotoxy(X, Y);
        for (int col = 0; col < 2; col++)
        {
            cout << prinTplayer[row][col];
        }
        Y++;
    }
}

void playererase(int X, int Y)
{
    for (int row = 0; row < 3; row++)
    {
        gotoxy(X, Y);
        for (int col = 0; col < 2; col++)
        {
            cout << eraseplayer[row][col];
        }
        Y++;
    }
}

void printmaze()
{
    system("cls");
    SetConsoleTextAttribute(h, 12);
    for (int rows = 0; rows < 26; rows++)
    {
        for (int cols = 0; cols < 88; cols++)
        {
            cout << prinTmaze[rows][cols];
        }
        cout << endl;
    }
}
void moveleft()
{
    char nextLocation = getCharAtxy(X - 1, Y);
    char nextLocation1 = getCharAtxy(X - 1, Y + 1);
    char nextLocation2 = getCharAtxy(X - 1, Y + 2);

    if (nextLocation == ' ' && nextLocation1 == ' ' && nextLocation2 == ' ')
    {
        playererase(X, Y);
        X = X - 1;
        printplayer(X, Y);
    }
}
void moveright()
{

    char nextLocation = getCharAtxy(X + 2, Y);
    char nextLocation1 = getCharAtxy(X + 2, Y + 1);
    char nextLocation2 = getCharAtxy(X + 2, Y + 2);

    if (nextLocation == ' ' && nextLocation1 == ' ' && nextLocation2 == ' ')

    {

        playererase(X, Y);
        X = X + 1;
        printplayer(X, Y);
    }
}
void moveup()
{
    char nextLocation = getCharAtxy(X + 1, Y - 1);

    if (nextLocation == ' ')
    {

        playererase(X, Y);
        Y = Y - 1;
        printplayer(X, Y);
    }
}
void movedown()
{

    char nextLocation = getCharAtxy(X, Y + 3);
    char nextLocation1 = getCharAtxy(X + 1, Y + 3);
    if (nextLocation == ' ' && nextLocation1 == ' ')
    {

        playererase(X, Y);
        Y = Y + 1;
        printplayer(X, Y);
    }
}
void enimy1()

{
    SetConsoleTextAttribute(h, 4);
    cout << eni;
    SetConsoleTextAttribute(h, 15);
}

void enemyerase()
{
    gotoxy(enyx, enyy);
    cout << " ";
}
void enemymove()
{

    char nextLocation;

    if (direction == "right")
    {

        nextLocation = getCharAtxy(enyx + 1, enyy);

        if (nextLocation == '#')

        {
            direction = "left";
        }

        else

        {
            enemyerase();
            enyx = enyx + 1;
            gotoxy(enyx, enyy);
            enimy1();
        }
    }

    if (direction == "left")
    {

        nextLocation = getCharAtxy(enyx - 1, enyy);

        if (nextLocation == '#')

        {

            direction = "right";
        }

        else

        {
            enemyerase();
            enyx = enyx - 1;
            gotoxy(enyx, enyy);
            enimy1();
        }
    }
}
void enemy2()
{
    SetConsoleTextAttribute(h, 6);

    gotoxy(enyx1, enyy1);
    cout << enimy2;
    SetConsoleTextAttribute(h, 15);
}
void enemy2erase()
{
    gotoxy(enyx1, enyy1);
    cout << " ";
}
void enemymove2()
{
    a = rand() % 4;
    char location;

    if (a == 0)
    {

        location = getCharAtxy(enyx1 + 1, enyy1);

        if (location == ' ')

        {
            enemy2erase();
            enyx1 = enyx1 + 1;
            gotoxy(enyx1, enyy1);
            enemy2();
        }
    }
    if (a == 1)
    {

        location = getCharAtxy(enyx1 - 1, enyy1);

        if (location == ' ')

        {
            enemy2erase();
            enyx1 = enyx1 - 1;
            gotoxy(enyx1, enyy1);
            enemy2();
        }
    }

    if (a == 2)
    {

        location = getCharAtxy(enyx1, enyy1 + 1);

        if (location == ' ')

        {
            enemy2erase();
            enyy1 = enyy1 + 1;
            gotoxy(enyx1, enyy1);
            enemy2();
        }
    }
    if (a == 3)
    {

        location = getCharAtxy(enyx1, enyy1 - 1);

        if (location == ' ')

        {
            enemy2erase();
            enyy1 = enyy1 - 1;
            gotoxy(enyx, enyy);
            enemy2();
        }
    }
}

void enimy3()
{
    SetConsoleTextAttribute(h, 9);
    gotoxy(enyx3, enyy3);
    cout << enemy3;
    SetConsoleTextAttribute(h, 15);
}
void eraseemin3()
{

    gotoxy(enyx3, enyy3);
    cout << smartPrevious;
}

float distance(int gx, int gy)
{
    return sqrt(pow(X - gx, 2) + pow(Y - gy, 2));
}

void movemeny3()
{
    float left = distance(enyx3 - 1, enyy3);
    float right = distance(enyx3 + 1, enyy3);
    float up = distance(enyx3, enyy3 - 1);
    float down = distance(enyx3, enyy3 + 1);
    if (left <= down && left <= right && left <= up)
    {
        char next = getCharAtxy(enyx3 - 1, enyy3);
        if (next == ' ' || next == palet)
        {
            eraseemin3();
            smartPrevious = next;
            enyx3 = enyx3 - 1;
            enimy3();
        }
    }
    else if (right <= down && right <= left && right <= up)
    {
        char next = getCharAtxy(enyx3 + 1, enyy3);
        if (next == ' ' || next == palet)
        {
            eraseemin3();
            smartPrevious = next;
            enyx3 = enyx3 + 1;
            enimy3();
        }
    }
    else if (down <= left && down <= right && down <= up)
    {
        char next = getCharAtxy(enyx3, enyy3 + 1);
        if (next == ' ' || next == palet)
        {
            eraseemin3();
            smartPrevious = next;
            enyy3 = enyy3 + 1;
            enimy3();
        }
    }
    else
    {
        char next = getCharAtxy(enyx3, enyy3 - 1);
        if (next == ' ')
        {
            eraseemin3();
            smartPrevious = next;
            enyy3 = enyy3 - 1;
            enimy3();
        }
    }
}
void bombcolisionwithenyme()
{
    int counter = 0;

    for (int x = 0; x < count; x++)
    {
        if (isbombactive[x] == true)
        {

            char next = getCharAtxy(bombx[x] + 1, bomby[x]);
            char next1 = getCharAtxy(bombx[x] - 1, bomby[x]);

            if (next == eni || next1 == eni)
            {

                addScore();
                enemyerase();
                erasebomb(bombx[x], bomby[x]);
                enim = 0;
                count1++;
                e1++;
            }
        }
    }
}
void bombcolisionwithenyme2()
{

    for (int x = 0; x < count; x++)
    {
        if (isbombactive[x] == true)
        {

            char nextx = getCharAtxy(bombx[x] + 1, bomby[x]);
            char nextx1 = getCharAtxy(bombx[x] - 1, bomby[x]);
            char nexty = getCharAtxy(bombx[x] + 1, bomby[x]);
            char nexty1 = getCharAtxy(bombx[x] - 1, bomby[x]);
            if (nextx == enimy2 || nextx1 == enimy2 || nexty == enimy2 || nexty1 == enimy2)
            {

                makebombinactive(x);
                addScore();
                erasebomb(bombx[x], bomby[x]);
                enemy2erase();
                enim2 = 0;
                count1++;
                e2++;
            }
        }
    }
}
void bombcolisionwithenyme3()

{

    for (int x = 0; x < count; x++)
    {
        if (isbombactive[x] == true)
        {

            char nextx3 = getCharAtxy(bombx[x] + 1, bomby[x]);
            char nextx = getCharAtxy(bombx[x] - 1, bomby[x]);
            char nexty3 = getCharAtxy(bombx[x], bomby[x] + 1);
            char nexty = getCharAtxy(bombx[x], bomby[x] - 1);
            if (nextx3 == enemy3 || nextx == enemy3 || nexty3 == enemy3 || nexty == enemy3)
            {

                makebombinactive(x);
                addScore();
                erasebomb(bombx[x], bomby[x]);
                eraseemin3();
                enmy3 = 0;
                count1++;
                e3++;
            }
        }
    }
}

void addScore()
{
    c = c + 5;
}
void printscore()
{
    gotoxy(100, 8);
    cout << "Score: " << c;
}
void playerhealth()
{
    if (e1 == 0)
    {
        if ((X + 2 == enyx && Y + 2 == enyy) || (X - 1 == enyx && Y + 2 == enyy))
        {
            healthsencer();
        }
    }
    if (e2 == 0)
    {
        if ((X - 1 == enyx1 && Y == enyy1) || (X - 1 == enyx1 && Y + 1 == enyy1) || (X - 1 == enyx1 && Y + 2 == enyy1) || (X + 2 == enyx1 && Y == enyy1) || (X + 2 == enyx1 && Y + 1 == enyy1) || (X + 2 == enyx1 && Y + 2 == enyy1) || (X - 1 == enyx1 && Y + 2 == enyy1) || (X + 2 == enyx1 && Y == enyy1) || (X - 1 == enyx1 && Y - 1 == enyy1) || (X + 1 == enyx1 && Y - 1 == enyy1))
        {
            healthsencer();
        }
    }
    if (e3 == 0)
    {
        if ((X - 1 == enyx3 && Y == enyy3) || (X - 1 == enyx3 && Y + 1 == enyy3) || (X - 1 == enyx3 && Y + 2 == enyy3) || (X + 2 == enyx3 && Y == enyy3) || ((X + 2 == enyx3 && Y + 1 == enyy3) || (X + 2 == enyx3 && Y + 2 == enyy3) || (X - 1 == enyx3 && Y + 2 == enyy3) || (X + 2 == enyx3 && Y == enyy3) || (X - 1 == enyx3 && Y - 1 == enyy3) || (X + 1 == enyx3 && Y - 1 == enyy3)))
        {
            healthsencer();
        }
    }
}
void colisionwithpalets()
{
    for (int x = 0; x < palets; x++)
    {
        if (ispaletsactive[x] == true)
        {

            if ((X - 2 == paletsx[x] && Y == paletsy[x]) || (X - 2 == paletsx[x] && Y + 1 == paletsy[x]) || (X - 2 == paletsx[x] && Y + 2 == paletsy[x]) || (X + 2 == paletsx[x] && Y == paletsy[x]) || (X + 2 == paletsx[x] && Y + 1 == paletsy[x]) || (X + 2 == paletsx[x] && Y + 2 == paletsy[x]))
            {
                if (colisiontype == "health")
                {
                    if (remainingplayerhealth > 0)
                    {
                        remainingplayerhealth = remainingplayerhealth - 1;
                    }
                }
                if (colisiontype == "score")
                {

                    c = c + 5;
                }

                for (int x = 0; x < palets; x++)
                {
                    if (ispaletsactive[x] == true)
                    {
                        makepaletsinactive(x);
                        erasepalets(paletsx[x], paletsy[x]);
                    }
                }
            }
        }
    }
}
void printhealth()
{
    gotoxy(100, 10);
    cout << " player dameged life:" << remainingplayerhealth;
    gotoxy(100, 11);
    cout << " level :" << level;
}
void healthsencer()
{
    remainingplayerhealth++;
    playererase(X, Y);
    X = 35;
    Y = 16;
    printplayer(X, Y);
}
void generateBullet()
{
    char next = getCharAtxy(enyx1 + 1, enyy1);
    if (next != '#')
    {
        bulletX[bulletCount] = enyx1 + 1;
        bulletY[bulletCount] = enyy1;
        isBulletActive[bulletCount] = true;
        gotoxy(enyx1 + 1, enyy1);
        cout << ".";
        bulletCount++;
    }
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
void bulletCollisionWithplayer()
{

    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {

            if ((X - 2 == bulletX[x] && Y == bulletY[x]) || (X - 2 == bulletX[x] && Y + 1 == bulletY[x]) || (X - 2 == bulletX[x] && Y + 2 == bulletY[x]) || (X + 2 == bulletX[x] && Y == bulletY[x]) || ((X + 2 == bulletX[x] && Y + 1 == bulletY[x]) || (X + 2 == bulletX[x] && Y + 2 == bulletY[x])))
            {
                healthsencer();
            }
        }
    }
}
string loaddatafromfile(string record, int num)
{
    int commaCount = 0;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount = commaCount + 1;
        }
        else if (commaCount == num)
        {
            item = item + record[x];
        }
    }
    return item;
}
void loaddata()
{
    int row = 0;
    int rows = 0;

    string word;
    fstream file;
    file.open("player.txt", ios::in);
    while (getline(file, word))
    {
        for (int col = 0; col < 2; col++)
        {

            prinTplayer[row][col] = stoi(loaddatafromfile(word, col));
        }
        row++;
    }
    file.close();
    file.open("maze.txt", ios::in);
    while (getline(file, word))
    {
        for (int col = 0; col < 88; col++)
        {

            prinTmaze[rows][col] = stoi(loaddatafromfile(word, col));
        }
        rows++;
    }
    file.close();
    file.open("enimy1.txt", ios::in);
    while (getline(file, word))
    {
        eni = stoi(loaddatafromfile(word, 0));
    }
    file.close();
    file.open("enimy2.txt", ios::in);
    while (getline(file, word))
    {
        enimy2 = stoi(loaddatafromfile(word, 0));
    }
    file.close();
    file.open("enimy3.txt", ios::in);
    while (getline(file, word))
    {
        enemy3 = stoi(loaddatafromfile(word, 0));
    }
    file.close();
}
void storegame()
{

    fstream file;
    file.open("continue.txt", ios::out);
    file << enyx;
    file << ",";
    file << enyy;
    file << ",";
    file << enyx1;
    file << ",";
    file << enyy1;
    file << ",";
    file << enyx3;
    file << ",";
    file << enyy3;
    file << ",";
    file << X;
    file << ",";
    file << Y;
    file << ",";
    file << c;
    file << ",";
    file << remainingplayerhealth;
    file << ",";
    file << e1;
    file << ",";
    file << e2;
    file << ",";
    file << e3;
    file << ",";
    file << enim;
    file << ",";
    file << enim2;
    file << ",";
    file << enmy3;
    file << ",";
    file << level;
    file.close();
}
void printHighSocre()
{
    gotoxy(100, 14);
    cout << "Highest Score :" << hscore;
}
void loadaxis()
{
    string word;
    fstream file;
    file.open("continue.txt", ios::in);
    while (getline(file, word))
    {
        enyx = stoi(loaddatafromfile(word, 0));
        enyy = stoi(loaddatafromfile(word, 1));
        enyx1 = stoi(loaddatafromfile(word, 2));
        enyy1 = stoi(loaddatafromfile(word, 3));
        enyx3 = stoi(loaddatafromfile(word, 4));
        enyy3 = stoi(loaddatafromfile(word, 5));
        X = stoi(loaddatafromfile(word, 6));
        Y = stoi(loaddatafromfile(word, 7));
        c = stoi(loaddatafromfile(word, 8));
        remainingplayerhealth = stoi(loaddatafromfile(word, 9));
        e1 = stoi(loaddatafromfile(word, 10));
        e2 = stoi(loaddatafromfile(word, 11));
        e3 = stoi(loaddatafromfile(word, 12));
        enim = stoi(loaddatafromfile(word, 13));
        enim2 = stoi(loaddatafromfile(word, 14));
        enmy3 = stoi(loaddatafromfile(word, 15));
        level = stoi(loaddatafromfile(word, 16));
    }
    file.close();
    startgame();
}
void loadscore()
{
    string word;
    fstream file;
    file.open("heighest score.txt", ios::in);
    while (getline(file, word))
    {
        hscore = stoi(loaddatafromfile(word, 0));
    }
    file.close();
}
void storescore()
{
    fstream file;
    file.open("heighest score.txt", ios::out);
    file << hscore;
    file.close();
}