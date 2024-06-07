#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <winuser.h>
#define size 100

char name[100];
char a1[20] = "YES";
char a2[20] = "Yes";
char a3[20] = "yes";
char b1[20] = "NO";
char b2[20] = "No";
char b3[20] = "no";
char a[4] = "UGC";
char b[4] = "ugc";
char c[8] = "Hostel";
char d[8] = "hostel";
char e[8] = "HOSTEL";
char f[20] = "mess food";
char g[20] = "MESS FOOD";
char h[20] = "Mess Food";
char j[20] = "mess";
char k[20] = "Canteen";
char l[20] = "CANTEEN";
char m[20] = "Faculty Member";
char n[20] = "FACULTY MEMBER";
char o[15] = "faculty member";
char p[16] = "Faculty";
char q[9] = "faculty";
char r[20] = "SCHOLARSHIP";
char s[20] = "Scholarship";
char t[20] = "scholarship";
char u[20] = "INTERNSHIP";
char v[20] = "Internship";
char w[20] = "internship";
char aa[20] = "PLACEMENT";
char ab[20] = "Placement";
char ac[20] = "placement";
char ad[20] = "PROGRAM";
char ae[20] = "Program";
char af[20] = "program";
char ag[20] = "ICFAI";
char ah[20] = "IUT";
char ai[20] = "Icfai";
char aj[20] = "icfai";
char ak[20] = "iut";
char al[20] = "ADMISSION";
char am[20] = "Admission";
char an[20] = "admission";
char ao[20] = "Shutdown";
char ap[20] = "shutdown";
char aq[20] = "SHUTDOWN";
char ar[20] = "restart";
char as[20] = "Restart";
char at[20] = "RESTART";
char au[20] = "Bye";
char av[20] = "Exit";
char aw[20] = "Bye Bye";
char ax[20] = "bye";
char ay[20] = "exit";
char az[20] = "Thank You";
char ba[20] = "Fee Structure";
char bb[20] = "FEE STRUCTURE";
char bc[20] = "Fee Structure";
char bd[20] = "Fee";
char be[20] = "fee";
char bf[20] = "about";
char bg[20] = "ABOUT SEARCH BOT";
char bh[20] = "about search bot";
char bi[20] = "bot";
char bj[20] = "chat bot";
char bk[20] = "About Search Bot";
char bl[20] = "chatty";
char bm[20] = "Chat Bot";
char bn[20] = "CHAT BOT";
char bo[20] = "You";
char bp[20] = "you";
char bq[20] = "About";
char br[20] = "CHATTY";
char bs[20] = "Hi";
char bt[20] = "Hii";
char bu[20] = "hi";
char bv[20] = "HI";
char bw[20] = "hii";
char bx[20] = "HELLO";
char by[20] = "Hello";
char bz[20] = "hello";
char ca[20] = "hey";
char cb[20] = "HEY";
char cc[20] = "Hey";

COORD coord = {0, 0};
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void SetColor(int ForgC)
{

    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {

        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void ClearConsoleToColors(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD coord = {0, 0};

    DWORD count;

    CONSOLE_SCREEN_BUFFER_INFO csbi;

    SetConsoleTextAttribute(hStdOut, wColor);
    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {

        FillConsoleOutputCharacter(hStdOut, (TCHAR)32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
        FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

        SetConsoleCursorPosition(hStdOut, coord);
    }
    return;
}
void SetColorAndBackground(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
    ;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
    return;
}
void box(int x, int y, int left, int down)
{
    int i;

    gotoxy(x, y);
    printf("%c", 218);
    for (i = 0; i <= left; i++)
    {
        gotoxy(x + 1 + i, y);
        printf("%c", 196);
    }
    gotoxy(x + left + 1, y);
    printf("%c", 191);
    for (i = 0; i <= down; i++)
    {
        gotoxy(x, y + 1 + i);
        printf("%c", 179);
    }
    for (i = 0; i <= down; i++)
    {
        gotoxy(x + 1 + left, y + 1 + i);
        printf("%c", 179);
    }
    gotoxy(x, y + 1 + down);
    printf("%c", 192);
    for (i = 0; i <= left; i++)
    {
        gotoxy(x + 1 + i, y + down + 1);
        printf("%c", 196);
    }
    gotoxy(x + 1 + left, y + 1 + down);
    printf("%c", 217);
    SetColor(7);
}
void drawRectangle()
{
    int i, j, x = 24;

    gotoxy(x, 0);
    printf("%c", 201);
    for (i = 1; i < 94; i++)
    {
        gotoxy(x + i, 0);
        printf("%c", 205);
    }
    gotoxy(x + 94, 0);
    printf("%c", 187);
    for (i = 1; i < 58; i++)
    {
        gotoxy(x + 94, i);
        if (i == 6)
        {
            printf("%c", 185);
        }
        else
        {
            printf("%c", 186);
        }
    }
    gotoxy(x + 94, 58);
    printf("%c", 188);
    for (i = 93; i > 0; i--)
    {
        gotoxy(x + i, 58);
        if (i == 62)
        {
            printf("%c", 202);
        }
        else
        {
            printf("%c", 205);
        }
    }
    gotoxy(x, 58);
    printf("%c", 200);
    for (i = 57; i > 0; i--)
    {
        gotoxy(x, i);
        if (i == 6)
        {
            printf("%c", 204);
        }
        else
        {
            printf("%c", 186);
        }
    }

    for (i = 1; i < 94; i++)
    {
        gotoxy(x + i, 6);
        if (i == 62)
        {
            printf("%c", 203);
        }
        else
        {
            printf("%c", 205);
        }
    }

    for (i = 7; i < 58; i++)
    {
        gotoxy(x + 62, i);
        printf("%c", 186);
    }
}
void p_heading(const char st[])
{
    SetColorAndBackground(31, 28);

    printf("%s", st);
}
void p_option(const char string[])
{
    SetColorAndBackground(31, 16);

    printf("%s", string);
}
void user_message(const char um[])
{
    SetColorAndBackground(31, 10);

    printf("%s", um);
}
void window2()
{
    drawRectangle();
    int x = 30;

    gotoxy(x + 33, 2);

    p_heading("ICFAI SEARCH BOT");
    gotoxy(x + 28, 4);
    printf("ICFAI UNIVERSITY, TRIPURA");
    gotoxy(x + 35, 5);
    printf("ESTD: 2004");
    gotoxy(x + 25, 24);
    SetColor(17);
    SetColorAndBackground(17, 15);
}

void question_box()
{

    p_option("");
    int x = 32, i, y = 55;

    gotoxy(x, 54);
    printf("Type in Your Question Here");
    box(x, y, 42, 1);
}

void yes_no(int x, int y)
{

    int i;
    gotoxy(x, y);
    printf("%c", 218);
    for (i = 0; i < 4; i++)
    {
        gotoxy(x + 1 + i, y);
        printf("%c", 196);
    }
    gotoxy(x + 4, y);
    printf("%c", 191);
    for (i = 1; i < 2; i++)
    {
        gotoxy(x, y + i);
        printf("%c", 179);
    }
    for (i = 1; i < 2; i++)
    {
        gotoxy(x + 4, y + i);
        printf("%c", 179);
    }
    gotoxy(x + 1, y + 1);
    printf("YES");
    gotoxy(x, y + 2);
    printf("%c", 192);
    for (i = 0; i < 4; i++)
    {
        gotoxy(x + 1 + i, y + 2);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 2);
    printf("%c", 217);

    x = x + 11;
    gotoxy(x, y);
    printf("%c", 218);
    for (i = 0; i < 3; i++)
    {
        gotoxy(x + 1 + i, y);
        printf("%c", 196);
    }
    gotoxy(x + 3, y);
    printf("%c", 191);
    for (i = 1; i < 2; i++)
    {
        gotoxy(x, y + i);
        printf("%c", 179);
    }
    for (i = 1; i < 2; i++)
    {
        gotoxy(x + 3, y + i);
        printf("%c", 179);
    }
    gotoxy(x + 1, y + 1);
    printf("NO");
    gotoxy(x, y + 2);
    printf("%c", 192);
    for (i = 0; i < 3; i++)
    {
        gotoxy(x + 1 + i, y + 2);
        printf("%c", 196);
    }
    gotoxy(x + 3, y + 2);
    printf("%c", 217);
}
void bot_message1(int x, int y)
{

    int i;

    p_heading("");
    gotoxy(x - 2, y);

    p_option("");

    box(x, y + 2, 3, 1);
    gotoxy(x + 1, y + 3);
    printf("IUT");

    box(x + 10, y + 2, 7, 1);
    gotoxy(x + 11, y + 3);
    printf("PROGRAM");

    box(x + 22, y + 2, 13, 1);
    gotoxy(x + 23, y + 3);
    printf("FEE STRUCTURE");

    box(x, y + 6, 15, 1);
    gotoxy(x + 1, y + 7);
    printf("HOSTEL FACILITY");

    box(x + 22, y + 6, 9, 1);
    gotoxy(x + 23, y + 7);
    printf("MESS FOOD");

    box(x, y + 10, 14, 1);
    gotoxy(x + 1, y + 11);
    printf("FACULTY MEMBER");

    box(x + 20, y + 10, 11, 1);
    gotoxy(x + 21, y + 11);
    printf("SCHOLARSHIP");

    box(x, y + 14, 9, 1);
    gotoxy(x + 1, y + 15);
    printf("PLACEMENT");

    box(x + 16, y + 14, 10, 1);
    gotoxy(x + 17, y + 15);
    printf("INTERNSHIP");

    box(x, y + 18, 9, 1);
    gotoxy(x + 1, y + 19);
    printf("ADMISSION");

    box(x + 16, y + 18, 16, 1);
    gotoxy(x + 17, y + 19);
    printf("ABOUT SEARCH BOT");
}
void about_icfai()
{
    int x = 32, y = 25, i;
    gotoxy(x, y);
    SetColor(6);
    printf("MOTTO");
    gotoxy(x + 16, y);
    SetColor(7);
    printf("Meritum Ethicus");

    gotoxy(x, y + 2);
    SetColor(6);
    printf("TYPE");
    gotoxy(x + 16, y + 2);
    SetColor(7);
    printf("Non Profit Institution");

    gotoxy(x, y + 4);
    SetColor(6);
    printf("ESTABLISHED");
    gotoxy(x + 16, y + 4);
    SetColor(7);
    printf("2004");

    gotoxy(x, y + 6);
    SetColor(6);
    printf("CAMPUS");
    gotoxy(x + 16, y + 6);
    SetColor(7);
    printf("Urban (32 acres)");

    gotoxy(x, y + 8);
    SetColor(6);
    printf("AFFILIATIONS");
    gotoxy(x + 16, y + 8);
    SetColor(7);
    printf("UGC.BCI.ACU.AIU.NAAC");

    gotoxy(x, y + 10);
    SetColor(6);
    printf("WEBSITE");
    gotoxy(x + 16, y + 10);
    SetColor(7);
    printf("www.iutripura.edu.in");

    gotoxy(x, y + 12);
    SetColor(6);
    printf("V.C");
    gotoxy(x + 16, y + 12);
    SetColor(7);
    printf("Dr. R.L. PAREEK");

    x = 27;
    SetColor(7);
    gotoxy(x - 2, y + 17);
    sleep(1);
    printf(">");
    gotoxy(x, y + 17);
    p_heading("Do You want to check Icfai`s Webpage");
    p_option("");
    yes_no(x + 4, y + 18);
    y = 8;
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);

    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        window2();
        p_heading("");
        p_option("");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");
        window2();
        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void icfai()
{

    question_box();
    int x = 27, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    sleep(1);
    printf(">");
    gotoxy(x, y);
    p_heading("ICFAI was established in 1984 as a not-for-profit");
    gotoxy(x, y + 1);
    p_heading("society with the broad objective of empowering");
    gotoxy(x, y + 2);
    p_heading("citizens through world class quality education.");

    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 5);
    sleep(1);
    printf(">");
    gotoxy(x, y + 5);
    p_heading("ICFAI University, Tripura is a nonprofit private");
    gotoxy(x, y + 6);
    p_heading("university located at Agartala, Tripura, India.");
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 9);
    sleep(1);
    printf(">");
    gotoxy(x, y + 9);
    p_heading("It was established in 2004 through an Act of State");
    gotoxy(x, y + 10);
    p_heading("Legislature (Tripura Act 8 of 2004).");
    gotoxy(x + 13, y + 13);
    p_heading("ICFAI UNIVERSITY, TRIPURA");

    p_option("");

    box(x + 3, y + 15, 43, 15);
    about_icfai();
}

void course()
{

    window2();
    p_option("");
    SetColor(7);
    gotoxy(25, 8);
    printf(">");
    gotoxy(27, 8);
    p_heading("Select a stream to know more about The IUT");
    gotoxy(27, 9);
    p_heading("courses:");
    p_option("");
    int x = 38 + 3;
    gotoxy(x, 12);
    printf("Faculty of Science and");
    gotoxy(x, 13);
    printf("Technology");
    gotoxy(x, 16);
    printf("Ph.D programs");
    gotoxy(x, 20);
    printf("Faculty of Management");
    gotoxy(x, 21);
    printf("Studies");
    gotoxy(x, 24);
    printf("ICFAI Law School");
    gotoxy(x, 28);
    printf("Allied Health Sciences");
    gotoxy(x, 32);
    printf("Faculty of Liberal Arts");
    gotoxy(x, 36);
    printf("Faculty of Education");
    gotoxy(x, 40);
    printf("Faculty of Special Education");
    gotoxy(x, 44);
    printf("Faculty of Library and");
    gotoxy(x, 45);
    printf("Information science");
    gotoxy(x, 48);
    printf("Nursing Science");
    gotoxy(x, 52);
    printf("Faculty of Physical Education");
    gotoxy(x, 53);
    printf("and Yoga");
}
void course2()
{

    window2();

    gotoxy(27, 8);
    p_heading("Select a stream to know more about The IUT");
    gotoxy(27, 9);
    p_heading("courses:");
    p_option("");
    int x = 38 + 3;
    gotoxy(x, 12);
    printf("Faculty of Science and");
    gotoxy(x, 13);
    printf("Technology");
    gotoxy(x, 16);
    printf("Ph.D programs");
    gotoxy(x, 20);
    printf("Faculty of Management");
    gotoxy(x, 21);
    printf("Studies");
    gotoxy(x, 25);
    printf("ICFAI Law School");
    gotoxy(x, 29);
    printf("Allied Health Sciences");
    gotoxy(x, 33);
    printf("Faculty of Liberal Arts");
    gotoxy(x, 37);
    printf("Faculty of Education");
    gotoxy(x, 40);
    printf("Faculty of Special Education");
    gotoxy(x, 44);
    printf("Faculty of Library and");
    gotoxy(x, 45);
    printf("Information science");
    gotoxy(x, 48);
    printf("Nursing Science");
    gotoxy(x, 52);
    printf("Faculty of Physical Education");
    gotoxy(x, 53);
    printf("and Yoga");
}
void course_under_fst()
{

    window2();

    int x = 27, i, y = 8;

    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Here`s what I found");
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y + 3);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y + 3);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 4);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    gotoxy(x1, 16);

    printf("B.Tech");
    gotoxy(x1, 20);
    printf("B.Tech(Lateral Entry)");
    gotoxy(x1, 23 + 1);
    printf("BCA");
    gotoxy(x1, 27 + 1);
    printf("BCA-MCA Integrated");
    gotoxy(x1, 31 + 1);
    printf("MCA/MCA(LE)");
    gotoxy(x1, 35 + 1);
    printf("M.SC.Physics");
    gotoxy(x1, 39 + 1);
    printf("M.SC. Chemistry");
    gotoxy(x1, 43 + 1);
    printf("B.Sc Physics");
    gotoxy(x1, 47 + 1);
    printf("B.Sc Chemistry");
    gotoxy(x1, 51 + 1);
    printf("B.Sc Mathematics");
    gotoxy(x1, 55 + 1);
    printf("M.Sc Mathematics");
}

char reply2[5];
#define str_size 200
char firstinput[str_size];
void btech()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.Tech Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }

    gotoxy(x + 4, y + 9);
    printf("The B.Tech. Program is a four-year,");
    gotoxy(x + 4, y + 10);
    printf("eight-semester,full-time, campus-");
    gotoxy(x + 4, y + 11);
    printf("based program. The Program provides");
    gotoxy(x + 4, y + 12);
    printf("cutting edge education to equip");
    gotoxy(x + 4, y + 13);
    printf("students with comprehensive and");
    gotoxy(x + 4, y + 14);
    printf("critical understanding in various");
    gotoxy(x + 4, y + 15);
    printf("branches of engineering.");

    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 18);
    sleep(1);
    printf(">");
    gotoxy(x, y + 18);
    p_heading("The following branches of engineering");
    gotoxy(x, y + 19);
    printf("are offered:");
    p_option("");

    gotoxy(x + 4, y + 21);
    printf("Civil Engineering");
    gotoxy(x + 4, y + 23);
    printf("Computer Science & Engineering");
    gotoxy(x + 4, y + 25);
    printf("Electronics & Communications");
    gotoxy(x + 4, y + 27);
    printf("Engineering");
    gotoxy(x + 4, y + 29);
    printf("Mechanical Engineering ");
    gotoxy(x + 4, y + 31);
    printf("Electrical and Electronics Engineering");

    SetColor(7);
    gotoxy(x - 2, y + 34);
    sleep(1);
    printf(">");
    gotoxy(x, y + 34);
    p_heading("Do You want to check Icfai`s B.Tech Webpage");
    p_option("");
    yes_no(x + 4, y + 35);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BTech.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void btechlateral()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.Tech(Lateral) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }

    gotoxy(x + 4, y + 9);
    printf("The B.Tech. Program is a four-year,");
    gotoxy(x + 4, y + 10);
    printf("eight-semester,full-time, campus-");
    gotoxy(x + 4, y + 11);
    printf("based program. The Program provides");
    gotoxy(x + 4, y + 12);
    printf("cutting edge education to equip");
    gotoxy(x + 4, y + 13);
    printf("students with comprehensive and");
    gotoxy(x + 4, y + 14);
    printf("critical understanding in various");
    gotoxy(x + 4, y + 15);
    printf("branches of engineering.");

    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 18);
    sleep(1);
    printf(">");
    gotoxy(x, y + 18);
    p_heading("The following branches of engineering");
    gotoxy(x, y + 19);
    printf("are offered:");
    p_option("");
    y = y + 2;
    gotoxy(x + 4, y + 19);
    printf("Civil Engineering");
    gotoxy(x + 4, y + 21);
    printf("Computer Science & Engineering");
    gotoxy(x + 4, y + 23);
    printf("Electronics & Communications");
    gotoxy(x + 4, y + 25);
    printf("Engineering");
    gotoxy(x + 4, y + 27);
    printf("Mechanical Engineering ");
    gotoxy(x + 4, y + 29);
    printf("Electrical and Electronics Engineering");

    SetColor(7);
    gotoxy(x - 2, y + 32);
    sleep(1);
    printf(">");
    gotoxy(x, y + 32);
    p_heading("Do You want to check Icfai`s B.Tech(Lateral) Webpage");
    p_option("");
    yes_no(x + 4, y + 33);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BTech-lateral.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void bca()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose The BCA Program");
    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The program provides a sound academic base in");
    gotoxy(x + 4, y + 9);
    printf("computer skills and applications from which");
    gotoxy(x + 4, y + 10);
    printf("an advanced career in computer applications");
    gotoxy(x + 4, y + 11);
    printf("can be developed.The students get a good");
    gotoxy(x + 4, y + 12);
    printf("conceptual grounding in computer usage");
    gotoxy(x + 4, y + 13);
    printf("and its practical business applications.");
    gotoxy(x + 4, y + 14);
    printf("The BCA Program focuses on various areas");
    gotoxy(x + 4, y + 15);
    printf("IT and prepares students for a career");

    SetColor(7);
    gotoxy(x - 2, y + 18);
    sleep(1);
    printf(">");
    gotoxy(x, y + 18);
    p_heading("Do You want to check Icfai`s BCA Webpage");
    p_option("");
    yes_no(x + 4, y + 19);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BCA-Program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void bca_mca_integrated()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose The BCA-MCA Integrated Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The program provides a sound academic base in");
    gotoxy(x + 4, y + 9);
    printf("computer skills and applications from which");
    gotoxy(x + 4, y + 10);
    printf("an advanced career in computer applications");
    gotoxy(x + 4, y + 11);
    printf("can be developed.The students get a good");
    gotoxy(x + 4, y + 12);
    printf("conceptual grounding in computer usage");
    gotoxy(x + 4, y + 13);
    printf("and its practical business applications.");
    gotoxy(x + 4, y + 14);
    printf("The Integrated BCA-MCA Program focuses on");
    gotoxy(x + 4, y + 15);
    printf("various areas of IT");
    gotoxy(x + 4, y + 16);
    printf("IT and prepares students for a career");
    gotoxy(x + 4, y + 17);
    printf("for a career in the field of Information");
    gotoxy(x + 4, y + 18);
    printf("Technology");

    SetColor(7);
    gotoxy(x - 2, y + 21);
    sleep(1);
    printf(">");
    gotoxy(x, y + 21);
    p_heading("Do You want to check Icfai`s BCA-MCA Integrated Webpage");
    p_option("");
    yes_no(x + 4, y + 22);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/Integrated-BCA-MCA.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void mca()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose The MCA Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Master of Computer Applications (MCA) is");
    gotoxy(x + 4, y + 9);
    printf("a two years, four semesters, full-time,");
    gotoxy(x + 4, y + 10);
    printf("campus-based program,with a view to impart");
    gotoxy(x + 4, y + 11);
    printf("the students an in-depth academic base in IT");
    gotoxy(x + 4, y + 12);
    printf("and hands-on skills in computer applications");
    gotoxy(x + 4, y + 13);
    printf("so that they can build an advanced career in IT.");
    gotoxy(x + 4, y + 14);
    printf("The program covers cutting-edge technology inputs");
    gotoxy(x + 4, y + 15);
    printf("as well as provides IT skills in programming");
    gotoxy(x + 4, y + 16);
    printf("and application development as per industry");
    gotoxy(x + 4, y + 17);
    printf("requirements");

    SetColor(7);
    gotoxy(x - 2, y + 20);
    sleep(1);
    printf(">");
    gotoxy(x, y + 20);
    p_heading("Do You want to check Icfai`s MCA Webpage");
    p_option("");
    yes_no(x + 4, y + 21);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MCA-MCA%20(LE).html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void bsc_chem_hon()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose The B.SC.(HONS.)CHEMISTRY Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("To provide high quality and relevant");
    gotoxy(x + 4, y + 9);
    printf("education in the field of chemistry.");
    gotoxy(x + 4, y + 10);
    printf("Expose students to the applications of");
    gotoxy(x + 4, y + 11);
    printf("Chemistry.The student will demonstrate skills");
    gotoxy(x + 4, y + 12);
    printf("and competencies to conduct simple scientific");
    gotoxy(x + 4, y + 13);
    printf("experiments in Chemistry.The student");
    gotoxy(x + 4, y + 14);
    printf("will present the potentiality of Chemistry");
    gotoxy(x + 4, y + 15);
    printf("in terms of day to day applications of");
    gotoxy(x + 4, y + 16);
    printf("chemical phenomena with respect to three");
    gotoxy(x + 4, y + 17);
    printf("basic fields i.e. Physical, Inorganic and");
    gotoxy(x + 4, y + 18);
    printf("Organic Chemistry, industrial and");
    gotoxy(x + 4, y + 19);
    printf("environmental chemistry.");
    gotoxy(x + 4, y + 20);
    printf("The student will identify clearly");
    gotoxy(x + 4, y + 21);
    printf("their area of interest in Chemistry");
    gotoxy(x + 4, y + 22);
    printf("and pursue higher studies with greater");
    gotoxy(x + 4, y + 23);
    printf("confidence.");

    SetColor(7);
    gotoxy(x - 2, y + 26);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x, y + 26);
    p_heading("Do You want to check Icfai`s B.SC.(HONS.)CHEMISTRY Webpage");
    p_option("");
    yes_no(x + 4, y + 27);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BSc-Hons-chemistry.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void bsc_phy_hon()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose B.SC.(HONS.)PHYSICS Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The graduates will become successful");
    gotoxy(x + 4, y + 9);
    printf("professionals by demonstrating logical");
    gotoxy(x + 4, y + 10);
    printf("and analytical thinking abilities.");
    gotoxy(x + 4, y + 11);
    printf("national and international level in");
    gotoxy(x + 4, y + 12);
    printf("The graduates will work and communicate");
    gotoxy(x + 4, y + 13);
    printf("effectively in inter-disciplinary");
    gotoxy(x + 4, y + 14);
    printf("environment, either independently");
    gotoxy(x + 4, y + 15);
    printf("or in a team, and demonstrate");
    gotoxy(x + 4, y + 16);
    printf("leadership qualities.");
    gotoxy(x + 4, y + 17);
    printf("The graduates will engage in life-long");
    gotoxy(x + 4, y + 18);
    printf("learning and professional development");
    gotoxy(x + 4, y + 19);
    printf("through self-study, continuing");
    gotoxy(x + 4, y + 20);
    printf("education or professional and");
    gotoxy(x + 4, y + 21);
    printf("doctoral level studies.");

    SetColor(7);
    gotoxy(x - 2, y + 24);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x, y + 24);
    p_heading("Do You want to check Icfai`s B.SC.(HONS.)PHYSICS Webpage");
    p_option("");
    yes_no(x + 4, y + 25);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BSc-Hons-physics.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void bsc_math_hon()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 1);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 1);
    p_heading("You choose B.SC.(HONS.)MATHEMATICS Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The syllabus for Mathematics (Hons)");
    gotoxy(x + 4, y + 9);
    printf("level has been framed using the Choice");
    gotoxy(x + 4, y + 10);
    printf("Based Credit System (CBCS).Main objective");
    gotoxy(x + 4, y + 11);
    printf("of this syllabus is to give the students");
    gotoxy(x + 4, y + 12);
    printf("a holistic understanding of the subject.");
    gotoxy(x + 4, y + 13);
    printf("The syllabus has also been framed in");
    gotoxy(x + 4, y + 14);
    printf("such a way that the basic skills of subject");
    gotoxy(x + 4, y + 15);
    printf("are taught to the students.In this");
    gotoxy(x + 4, y + 16);
    printf("curriculum students will be able to take");
    gotoxy(x + 4, y + 17);
    printf("a large variety of mathematics courses.");
    gotoxy(x + 4, y + 18);
    printf("This B.Sc. Mathematics graduate");
    gotoxy(x + 4, y + 19);
    printf("degree serves as a basis for higher");
    gotoxy(x + 4, y + 20);
    printf("studies in this field such as M.Sc., M.Phil");
    gotoxy(x + 4, y + 21);
    printf("and PhD.s.");

    SetColor(7);
    gotoxy(x - 2, y + 24);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x, y + 24);
    p_heading("Do You want to check Icfai`s B.SC.(HONS.)MATHEMATICS Webpage");
    p_option("");
    yes_no(x + 4, y + 25);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BSc-Hons-Math.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void msc_phy()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose M.SC PHYSICS Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("Science is basic foundation of any");
    gotoxy(x + 4, y + 9);
    printf("technological and engineering creation.");
    gotoxy(x + 4, y + 10);
    printf(" In view of the changing scenario at");
    gotoxy(x + 4, y + 11);
    printf("national and international level in");
    gotoxy(x + 4, y + 12);
    printf("in field of Science and Technology,");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("with considerable knowledge of its");
    gotoxy(x + 4, y + 15);
    printf("applications.ICFAI University Tripura is");
    gotoxy(x + 4, y + 16);
    printf("for a career in the field of Information");
    gotoxy(x + 4, y + 17);
    printf("Technology. ICFAI University Tripura is");
    gotoxy(x + 4, y + 18);
    printf("committed to high academic standards.");
    gotoxy(x + 4, y + 19);
    printf("The M.Sc. (Physics) program is designed");
    gotoxy(x + 4, y + 20);
    printf("for four semesters (two years) in such a");
    gotoxy(x + 4, y + 21);
    printf("way that a good basic foundation of subjects");
    gotoxy(x + 4, y + 22);
    printf("laid and applications along with recent");
    gotoxy(x + 4, y + 23);
    printf("developments are covered. Students will");
    gotoxy(x + 4, y + 24);
    printf("also get theoretical and practical knowledge");
    gotoxy(x + 4, y + 25);
    printf("of computer programming. This M.Sc. program");
    gotoxy(x + 4, y + 27);
    printf("will provide opportunity to");
    gotoxy(x + 4, y + 28);
    printf("make career in R&D,industries and");
    gotoxy(x + 4, y + 29);
    printf("academic institutions.");

    SetColor(7);
    gotoxy(x - 2, y + 32);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x, y + 32);
    p_heading("Do You want to check Icfai`s M.SC PHYSICS Webpage");
    p_option("");
    yes_no(x + 4, y + 33);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MSc-Physics.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void msc_chem()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose M.SC Chemistry Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("To provide a broad foundation in chemistry");
    gotoxy(x + 4, y + 9);
    printf("that stresses scientific reasoning and");
    gotoxy(x + 4, y + 10);
    printf("analytical problem solving with a");
    gotoxy(x + 4, y + 11);
    printf("with a molecular perspective.");
    gotoxy(x + 4, y + 12);
    printf("To provide students with the skills");
    gotoxy(x + 4, y + 13);
    printf(" required to succeed in the chemical");
    gotoxy(x + 4, y + 14);
    printf("industry or professional school.");
    gotoxy(x + 4, y + 15);
    printf("To expose the students to a breadth");
    gotoxy(x + 4, y + 16);
    printf("of experimental techniques");
    gotoxy(x + 4, y + 17);
    printf("using modern instrumentation.");

    SetColor(7);
    gotoxy(x - 2, y + 20);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x, y + 20);
    p_heading("Do You want to check Icfai`s M.SC Chemistry Webpage");
    p_option("");
    yes_no(x + 4, y + 21);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MSc-Chemistry.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void msc_math()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose M.SC MATHEMATICS Program");

    gotoxy(x, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The program contains some compulsory");
    gotoxy(x + 4, y + 9);
    printf("courses as well as few electives in the.");
    gotoxy(x + 4, y + 10);
    printf("second year. The compulsory");
    gotoxy(x + 4, y + 11);
    printf("courses are aimed at building strong");
    gotoxy(x + 4, y + 12);
    printf("mathematical background and also in");
    gotoxy(x + 4, y + 13);
    printf("the process students will be benefitted");
    gotoxy(x + 4, y + 14);
    printf("in various competitive examinations.");
    gotoxy(x + 4, y + 15);
    printf("The electives, however, are essential");
    gotoxy(x + 4, y + 16);
    printf("to the flexibility of this program.");
    gotoxy(x + 4, y + 17);
    printf("These courses will act as specializations");
    gotoxy(x + 4, y + 18);
    printf("for the students and also give them");
    gotoxy(x + 4, y + 19);
    printf("opportunity to select from various career");
    gotoxy(x + 4, y + 20);
    printf("paths. Students will be using");
    gotoxy(x + 4, y + 21);
    printf("computer laboratory of ICFAI University");
    gotoxy(x + 4, y + 22);
    printf("Tripura for few of their compulsory");
    gotoxy(x + 4, y + 23);
    printf("courses and also for some their electives");
    gotoxy(x + 4, y + 24);
    printf("depending upon their choices.");

    SetColor(7);
    gotoxy(x - 2, y + 27);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x, y + 27);
    p_heading("Do You want to check Icfai`s M.SC MATHEMATICS Webpage");
    p_option("");
    yes_no(x + 4, y + 28);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/M-Sc-Mathematics.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void course_under_fst_box()
{
    system("cls");
    int x = 39 + 3, i, y = 14, a;
    x = x - 1;
    course_under_fst();

    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;
        else if (a == 72)
        {
            system("cls");
            course_under_fst();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);
            a = getch();

            if (a == 13)
            {

                if (y == 18)
                {
                    btech();
                }
                else if (y == 22)
                {
                    btechlateral();
                }
                else if (y == 26)
                {
                    bca();
                }
                else if (y == 30)
                {
                    bca_mca_integrated();
                }
                else if (y == 34)
                {
                    mca();
                }
                else if (y == 38)
                {
                    msc_phy();
                }
                else if (y == 42)
                {
                    msc_chem();
                }
                else if (y == 46)
                {
                    bsc_phy_hon();
                }
                else if (y == 50)
                {

                    bsc_chem_hon();
                }
                else if (y == 54)
                {

                    bsc_math_hon();
                }
                else if (y == 58)
                {
                    msc_math();
                }
            }
        }

        else if (a == 80)
        {
            system("cls");
            course_under_fst();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 18)
                {
                    btech();
                }
                else if (y == 22)
                {
                    btechlateral();
                }
                else if (y == 26)
                {
                    bca();
                }
                else if (y == 30)
                {
                    bca_mca_integrated();
                }
                else if (y == 34)
                {
                    mca();
                }
                else if (y == 38)
                {
                    msc_phy();
                }
                else if (y == 42)
                {
                    msc_chem();
                }
                else if (y == 46)
                {
                    bsc_phy_hon();
                }
                else if (y == 50)
                {

                    bsc_chem_hon();
                }
                else if (y == 54)
                {

                    bsc_math_hon();
                }
                else if (y == 58)
                {
                    msc_math();
                }
            }
        }
    }
}

void course_under_phd()
{

    window2();

    int x = 27, i, y = 8;
    p_option("");

    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");

    gotoxy(x + 1, y);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 1);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    y = y + 4;
    gotoxy(x1, y - 1);
    SetColor(7);
    printf("English");
    gotoxy(x1, y + 3);
    SetColor(7);
    printf("Management");
    gotoxy(x1, y + 7);
    printf("Mathematics");
    gotoxy(x1, y + 11);
    printf("Physics");
    gotoxy(x1, y + 15);
    printf("Chemistry");
    gotoxy(x1, y + 19);
    printf("Engineering (ECE, CE, CSE, ME");
    gotoxy(x1, y + 20);
    printf(", EEE)");
    gotoxy(x1, y + 23);
    printf("Education");
    gotoxy(x1, y + 27);
    printf("Physical Education & Yoga");
    gotoxy(x1, y + 31);
    printf("Special Education");
    gotoxy(x1, y + 35);
    printf("Law");
    gotoxy(x1, y + 39);
    printf("Library & Information Science");
    gotoxy(x1, y + 43);
    printf("Clinical Psychology");
}
void management()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose Management Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Management Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void math()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose Mathematics Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Mathematics Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void physics()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose Physics Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Physics Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void chemistry()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose Chemistry Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Chemistry Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");
        //window2();
        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void engineering()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose Engineering (ECE, CE, CSE, ME,EEE) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Engineering (ECE, CE, CSE,");
    gotoxy(x, y + 20);
    p_heading("ME,EEE) Webpage");
    p_option("");
    yes_no(x + 4, y + 21);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void education()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose Education Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Education Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void phy_edu_yoga()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose Physical Education & Yoga Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Physical Education & Yoga");
    gotoxy(x, y + 20);
    p_heading("Webpage");
    p_option("");
    yes_no(x + 4, y + 21);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void special_edu()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose Special Education Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Special Education Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void law()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose Law Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Law Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void english()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose English Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s English Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void library_information_science()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose Library & Information Science Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Library & Information");
    gotoxy(x, y + 20);
    p_heading("Science Webpage");
    p_option("");
    yes_no(x + 4, y + 21);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
    else
    {
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("Waiting for your command!");
        firstmessage();
    }
}
void clinical_psychology()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("You choose Clinical Psychology Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 8);
    printf("The Ph.D. program is campus-based");
    gotoxy(x + 4, y + 9);
    printf("and designed on the basis of latest");
    gotoxy(x + 4, y + 10);
    printf("UGC guidelines. The main objective");
    gotoxy(x + 4, y + 11);
    printf("of the program is to develop");
    gotoxy(x + 4, y + 12);
    printf("bright young academicians with research");
    gotoxy(x + 4, y + 13);
    printf("there is great demand for basic sciences");
    gotoxy(x + 4, y + 14);
    printf("skills to conduct research in");
    gotoxy(x + 4, y + 15);
    printf("contemporary issues in the related");
    gotoxy(x + 4, y + 16);
    printf("discipline.");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s Clinical Psychology Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PhD.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void course_under_phd_box()
{
    system("cls");
    int x = 39 + 3, i, y = 9, a;
    x = x - 1;
    course_under_phd();

    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;
        else if (a == 72)
        {
            system("cls");
            course_under_phd();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);
            a = getch();
            if (a == 13)
            {

                if (y == 13)
                {
                    english();
                }

                else if (y == 17)
                {
                    management();
                }
                else if (y == 21)
                {
                    math();
                }
                else if (y == 25)
                {
                    physics();
                }
                else if (y == 29)
                {
                    chemistry();
                }
                else if (y == 33)
                {
                    engineering();
                }
                else if (y == 37)
                {
                    education();
                }
                else if (y == 41)
                {
                    phy_edu_yoga();
                }
                else if (y == 45)
                {
                    special_edu();
                }
                else if (y == 49)
                {

                    law();
                }
                else if (y == 53)
                {
                    library_information_science();
                }
                else if (y == 57)
                {
                    clinical_psychology();
                }
            }
        }

        else if (a == 80)
        {
            system("cls");
            course_under_phd();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();
            if (a == 13)
            {

                if (y == 13)
                {
                    english();
                }

                else if (y == 17)
                {
                    management();
                }
                else if (y == 21)
                {
                    math();
                }
                else if (y == 25)
                {
                    physics();
                }
                else if (y == 29)
                {
                    chemistry();
                }
                else if (y == 33)
                {
                    engineering();
                }
                else if (y == 37)
                {
                    education();
                }
                else if (y == 41)
                {
                    phy_edu_yoga();
                }
                else if (y == 45)
                {
                    special_edu();
                }
                else if (y == 49)
                {

                    law();
                }
                else if (y == 53)
                {
                    library_information_science();
                }
                else if (y == 57)
                {
                    clinical_psychology();
                }
            }
        }
    }
}

void course_under_fms()
{

    window2();
    int x = 27, i, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");

    gotoxy(x + 1, y);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 1);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    y = y + 5;
    gotoxy(x1, y);
    SetColor(7);
    printf("BBA");
    gotoxy(x1, y + 3);
    SetColor(7);
    printf("MBA");
    gotoxy(x1, y + 7);
    printf("MBA Rural Mgmt");
    gotoxy(x1, y + 11);
    printf("MBA Healthcare Mgmt");
    gotoxy(x1, y + 15);
    printf("M.Com");
    gotoxy(x1, y + 19);
    printf("B.Com");
}
void bba()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose BBA Program");

    gotoxy(x, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The Bachelor of Business Administration(BBA)");
    gotoxy(x + 4, y + 10);
    printf("program is a campus based program");
    gotoxy(x + 4, y + 11);
    printf("offered with a view to impart");
    gotoxy(x + 4, y + 12);
    printf("in-depth knowledge and broad understanding");
    gotoxy(x + 4, y + 13);
    printf("of the basics of management. The");
    gotoxy(x + 4, y + 14);
    printf("program focuses on various areas of");
    gotoxy(x + 4, y + 15);
    printf("with considerable knowledge of its");
    gotoxy(x + 4, y + 16);
    printf("management and also equips them to");
    gotoxy(x + 4, y + 17);
    printf("pursue MBA program in due course.");
    SetColor(7);
    gotoxy(x - 2, y + 20);
    sleep(1);
    printf(">");
    gotoxy(x, y + 20);
    p_heading("Do You want to check Icfai`s BBA Webpage");
    p_option("");
    yes_no(x + 4, y + 21);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BBA-Program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void mba()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose MBA Program");

    gotoxy(x, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The MBA Program of the University");
    gotoxy(x + 4, y + 10);
    printf("prepares the students with the");
    gotoxy(x + 4, y + 11);
    printf("knowledge, skills and strategic");
    gotoxy(x + 4, y + 12);
    printf("essential to business leadership");
    gotoxy(x + 4, y + 13);
    printf("and a managerial career in the world.");
    SetColor(7);
    gotoxy(x - 2, y + 20);
    printf(">");
    gotoxy(x, y + 20);
    p_heading("Do You want to check Icfai`s MBA Webpage");
    p_option("");
    yes_no(x + 4, y + 21);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MBA-Program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void mba_rural()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose MBA Rural Mgmt Program");

    gotoxy(x, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The University is offering MBA");
    gotoxy(x + 4, y + 10);
    printf("(Rural Management) program for imparting");
    gotoxy(x + 4, y + 11);
    printf("focused knowledge, skills and broad");
    gotoxy(x + 4, y + 12);
    printf("understanding to students in all the");
    gotoxy(x + 4, y + 13);
    printf("core areas of Management subjects like");
    gotoxy(x + 4, y + 14);
    printf("Marketing, Finance, Operations, HR,");
    gotoxy(x + 4, y + 15);
    printf("Quantitative Techniques, Economics");
    gotoxy(x + 4, y + 16);
    printf("and Rural Management.The program is");
    gotoxy(x + 4, y + 17);
    printf("being structured in such a way that");
    gotoxy(x + 4, y + 18);
    printf("students will be exposed in the areas");
    gotoxy(x + 4, y + 19);
    printf(" of Rural Development, Food &");
    gotoxy(x + 4, y + 20);
    printf("Agri-Business Management where a");
    gotoxy(x + 4, y + 21);
    printf("number of job opportunities are available.");
    SetColor(7);
    gotoxy(x - 2, y + 24);
    sleep(1);
    printf(">");
    gotoxy(x, y + 24);
    p_heading("Do You want to check Icfai`s MBA Rural Mgmt Webpage");
    p_option("");
    yes_no(x + 4, y + 25);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MBA-Rural-Program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void mba_healthcare()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose MBA Healthcare Mgmt Program");

    gotoxy(x, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("Healthcare is one of the fastest growing");
    gotoxy(x + 4, y + 10);
    printf("and most challenging industries in the");
    gotoxy(x + 4, y + 11);
    printf("world. Global healthcare is entering");
    gotoxy(x + 4, y + 12);
    printf("its most challenging era, with");
    gotoxy(x + 4, y + 13);
    printf("increasing demand for services.");
    gotoxy(x + 4, y + 14);
    printf("Thus significantly one must");
    gotoxy(x + 4, y + 15);
    printf("professionally deal with advanced");
    gotoxy(x + 4, y + 16);
    printf("medical technology and be opportunistic");
    gotoxy(x + 4, y + 17);
    printf("with currently growing many new hospital");
    gotoxy(x + 4, y + 18);
    printf("care centers coming all over the countries.");
    gotoxy(x + 4, y + 19);
    printf("Unfortunately some educational programs");
    gotoxy(x + 4, y + 20);
    printf("for future healthcare leaders fails");
    gotoxy(x + 4, y + 21);
    printf("to provide many of the needed skills with");
    gotoxy(x + 4, y + 22);
    printf("more care-based teaching and efforts to");
    gotoxy(x + 4, y + 23);
    printf("help students focus on strategic");
    gotoxy(x + 4, y + 24);
    printf("insights and business aspects .But");
    gotoxy(x + 4, y + 25);
    printf("MBA (Healthcare Management),ICFAI University");
    gotoxy(x + 4, y + 26);
    printf("exactly provides those advances and");
    gotoxy(x + 4, y + 27);
    printf("for students with excellent delivery");
    gotoxy(x + 4, y + 28);
    printf("of courses and practical learning in this");
    gotoxy(x + 4, y + 29);
    printf("field");

    SetColor(7);
    gotoxy(x - 2, y + 32);
    sleep(1);
    printf(">");
    gotoxy(x, y + 32);
    p_heading("Do You want to check Icfai`s MBA Healthcare Mgmt Webpage");
    p_option("");
    yes_no(x + 4, y + 33);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MBA-Healthcare-mgmt-Program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void mcom()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose M.Com Program");

    gotoxy(x, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The ICFAI University Tripura offers two-year");
    gotoxy(x + 4, y + 10);
    printf("full time Master of Commerce(M.Com)");
    gotoxy(x + 4, y + 11);
    printf("program with a view to impart specialized");
    gotoxy(x + 4, y + 12);
    printf("knowledge in the field of Accounting,");
    gotoxy(x + 4, y + 13);
    printf("knowledge in the field of Accounting,");
    gotoxy(x + 4, y + 14);
    printf("Thus significantly one must");
    gotoxy(x + 4, y + 15);
    printf("and other related subjects for better career");
    gotoxy(x + 4, y + 16);
    printf(" prospects. The objective of the program is");
    gotoxy(x + 4, y + 17);
    printf("to produce post graduates with");
    gotoxy(x + 4, y + 18);
    printf("professional competence professional");
    gotoxy(x + 4, y + 19);
    printf("competence to meet the challenges of modern");
    gotoxy(x + 4, y + 20);
    printf("corporate requirements and self employability.");

    SetColor(7);
    gotoxy(x - 2, y + 23);
    printf(">");
    gotoxy(x, y + 23);
    p_heading("Do You want to check Icfai`s M.com Webpage");
    p_option("");
    yes_no(x + 4, y + 24);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/M-Com.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void bcom()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.Com Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The ICFAI University Tripura offers");
    gotoxy(x + 4, y + 10);
    printf("full time Master of Commerce(M.Com)");
    gotoxy(x + 4, y + 11);
    printf("program with a view to impart");
    gotoxy(x + 4, y + 12);
    printf("specialized knowledge in the field");
    gotoxy(x + 4, y + 13);
    printf("Accounting, Finance, Taxation, Banking,");
    gotoxy(x + 4, y + 14);
    printf("Insurance, Management and other");
    gotoxy(x + 4, y + 15);
    printf("related subjects for better career");
    gotoxy(x + 4, y + 16);
    printf("prospects. The objective of the");
    gotoxy(x + 4, y + 17);
    printf("program is to produce post graduates");
    gotoxy(x + 4, y + 18);
    printf("with professional competence to");
    gotoxy(x + 4, y + 19);
    printf("meet the challenges of modern corporate");
    gotoxy(x + 4, y + 20);
    printf("requirements and self employability.");

    SetColor(7);
    gotoxy(x - 2, y + 23);
    sleep(1);
    printf(">");
    gotoxy(x, y + 23);
    p_heading("Do You want to check Icfai`s B.Com Webpage");
    p_option("");
    yes_no(x + 4, y + 24);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BCom.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void course_under_fms_box()
{
    system("cls");
    int x = 39 + 3, i, y = 10, a;
    x = x - 1;
    course_under_fms();

    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;
        else if (a == 72)
        {
            system("cls");
            course_under_fms();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 14)
                {
                    bba();
                }

                else if (y == 18)
                {
                    mba();
                }
                else if (y == 22)
                {
                    mba_rural();
                }
                else if (y == 26)
                {
                    mba_healthcare();
                }
                else if (y == 30)
                {
                    mcom();
                }
                else if (y == 34)
                {
                    bcom();
                }
            }
        }

        else if (a == 80)
        {
            system("cls");
            course_under_fms();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 14)
                {
                    bba();
                }

                else if (y == 18)
                {
                    mba();
                }
                else if (y == 22)
                {
                    mba_rural();
                }
                else if (y == 26)
                {
                    mba_healthcare();
                }
                else if (y == 30)
                {
                    mcom();
                }
                else if (y == 34)
                {
                    bcom();
                }
            }
        }
    }
}
void course_under_ils()
{

    window2();

    int x = 27, i, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");

    gotoxy(x + 1, y);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 1);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    y = y + 5;
    gotoxy(x1, y);
    SetColor(7);
    printf("BA-LL.B (Hons.)");
    gotoxy(x1, y + 3);

    printf("BBA-LL.B (Hons.)");
    gotoxy(x1, y + 7);
    printf("LL.B");
    gotoxy(x1, y + 11);
    printf("LL.M");
}
void ballb()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose BA-LLB(HONS) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The ICFAI Law School,");
    gotoxy(x + 4, y + 10);
    printf("a constituent of the ICFAI University,");
    gotoxy(x + 4, y + 11);
    printf("Tripura was established with the");
    gotoxy(x + 4, y + 12);
    printf("objective of developing a new cadre of");
    gotoxy(x + 4, y + 13);
    printf("legal professionals through a");
    gotoxy(x + 4, y + 14);
    printf("comprehensive and contemporary body of");
    gotoxy(x + 4, y + 15);
    printf("integrated knowledge and rigorous");
    gotoxy(x + 4, y + 16);
    printf("education and degree programs.");
    gotoxy(x + 4, y + 17);
    printf("The ICFAI Law School offers BA-LL.B(Hons.)");
    gotoxy(x + 4, y + 18);
    printf("programs which are approved by");
    gotoxy(x + 4, y + 19);
    printf("Unfortunately some educational programs");
    gotoxy(x + 4, y + 20);
    printf("Bar Council of India. The LL.M");
    gotoxy(x + 4, y + 21);
    printf(" program is approved by UGC.");

    SetColor(7);
    gotoxy(x - 2, y + 24);
    sleep(1);
    printf(">");
    gotoxy(x, y + 24);
    p_heading("Do You want to check Icfai`s BA-LLB(HONS) Webpage");
    p_option("");
    yes_no(x + 4, y + 25);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BA-LLB-program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void bballb()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose BBA-LL.B(Hons.) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 7);
    printf("The ICFAI Law School, a");
    gotoxy(x + 4, y + 8);
    printf("constituent of the ICFAI University,");
    gotoxy(x + 4, y + 9);
    printf("Tripura was established with the");
    gotoxy(x + 4, y + 10);
    printf("objective of developing a new cadre");
    gotoxy(x + 4, y + 11);
    printf("legal professionals through a");
    gotoxy(x + 4, y + 12);
    printf("comprehensive and contemporary body of");
    gotoxy(x + 4, y + 13);
    printf("integrated knowledge and rigorous");
    gotoxy(x + 4, y + 14);
    printf("education and degree programs.");
    gotoxy(x + 4, y + 15);
    printf("The ICFAI Law School offers");
    gotoxy(x + 4, y + 16);
    printf("BBA-LL.B (Hons.) programs which are");
    gotoxy(x + 4, y + 17);
    printf("approved by Bar Council of India.");
    gotoxy(x + 4, y + 18);
    printf("The LL.M program is approved by UGC.");

    SetColor(7);
    gotoxy(x - 2, y + 22);
    sleep(1);
    printf(">");
    gotoxy(x, y + 22);
    p_heading("Do You want to check Icfai`s BBA-LL.B(Hons.) Webpage");
    p_option("");
    yes_no(x + 4, y + 23);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/bba-llb(Hns)-program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void llb()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose LL.B Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The ICFAI Law School offers");
    gotoxy(x + 4, y + 10);
    printf("three year full-time LL.B Program");
    gotoxy(x + 4, y + 11);
    printf("which is approved by Bar Council");
    gotoxy(x + 4, y + 12);
    printf("of India (BCI).");

    SetColor(7);
    gotoxy(x - 2, y + 22);
    sleep(1);
    printf(">");
    gotoxy(x, y + 22);
    p_heading("Do You want to check Icfai`s LL.B Webpage");
    p_option("");
    yes_no(x + 4, y + 23);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/LLB-program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void llm()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose LL.M Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The University is offering two");
    gotoxy(x + 4, y + 10);
    printf("years LL.M with an objective to");
    gotoxy(x + 4, y + 11);
    printf("impart legal education to develop");
    gotoxy(x + 4, y + 12);
    printf("juridical inquisitiveness among the");
    gotoxy(x + 4, y + 13);
    printf("students to secure the expectations");
    gotoxy(x + 4, y + 14);
    printf("of the contemporary society. The");
    gotoxy(x + 4, y + 15);
    printf("course curriculum designed in such");
    gotoxy(x + 4, y + 16);
    printf("a way to cultivate research");
    gotoxy(x + 4, y + 17);
    printf("temperament and satisfy scholastic");
    gotoxy(x + 4, y + 18);
    printf(" aptitude to contribute raising demand");
    gotoxy(x + 4, y + 19);
    printf("of legal reform and public interest");
    gotoxy(x + 4, y + 20);
    printf(" lawyering.");

    SetColor(7);
    gotoxy(x - 2, y + 24);
    sleep(1);
    printf(">");
    gotoxy(x, y + 24);
    p_heading("Do You want to check Icfai`s LL.M Webpage");
    p_option("");
    yes_no(x + 4, y + 25);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/LLM-program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void course_under_ils_box()
{
    system("cls");
    int x = 39 + 3, i, y = 10, a;
    x = x - 1;
    course_under_ils();

    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;
        else if (a == 72)
        {
            system("cls");
            course_under_ils();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 14)
                {
                    ballb();
                }

                else if (y == 18)
                {
                    bballb();
                }
                else if (y == 22)
                {
                    llb();
                }
                else if (y == 26)
                {
                    llm();
                }
            }
        }

        else if (a == 80)
        {
            system("cls");
            course_under_ils();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 14)
                {
                    ballb();
                }

                else if (y == 18)
                {
                    bballb();
                }
                else if (y == 22)
                {
                    llb();
                }
                else if (y == 26)
                {
                    llm();
                }
            }
        }
    }
}
void course_under_ahs()
{

    window2();
    int x = 27, i, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");

    gotoxy(x + 1, y);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 1);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    y = y + 6;
    gotoxy(x1, y - 1);
    SetColor(7);
    printf("B.Sc. in Emergency Medical");
    gotoxy(x1, y);
    printf("Technology");
    gotoxy(x1, y + 3);
    printf("B.Sc. in Cardiac Care");
    gotoxy(x1, y + 4);
    printf("Technology");
    gotoxy(x1, y + 7);
    printf("B.Sc. in Dialysis Technology");
    gotoxy(x1, y + 11);
    printf("Bachelor in Health Informat-");
    gotoxy(x1, y + 12);
    printf("ion Management");
}
void bemt()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.Sc. in Emergency Medical Technology Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("Emergency medical technician is trained");
    gotoxy(x + 4, y + 10);
    printf("in basic emergency care skills, such as");
    gotoxy(x + 4, y + 11);
    printf("V cannulation, oxygen therapy, physical");
    gotoxy(x + 4, y + 12);
    printf("examination, assisting emergency");
    gotoxy(x + 4, y + 13);
    printf("child birth and essential newborn care,");
    gotoxy(x + 4, y + 14);
    printf("automated external defibrillation,");
    gotoxy(x + 4, y + 15);
    printf("airway maintenance, CPR,");
    gotoxy(x + 4, y + 16);
    printf("spinal immobilization, bleeding control,");
    gotoxy(x + 4, y + 17);
    printf("and fracture management.");

    SetColor(7);
    gotoxy(x - 2, y + 20);
    sleep(1);
    printf(">");
    gotoxy(x, y + 20);
    p_heading("Do You want to check Icfai`s B.Sc. in Emergency Medical");
    gotoxy(x, y + 21);
    p_heading("Technology Webpage");
    p_option("");
    yes_no(x + 4, y + 22);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BSc-Emergency-Med-Tech).html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void bcct()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.SC IN (CARDIAC CARE TECHNOLOGY) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("Cardiac Care Technology measures how");
    gotoxy(x + 4, y + 10);
    printf("well a heart is functioning and can");
    gotoxy(x + 4, y + 11);
    printf("monitor heart rate. Technologist");
    gotoxy(x + 4, y + 12);
    printf("here measure how well a patient`s");
    gotoxy(x + 4, y + 13);
    printf("heart is functioning.");

    SetColor(7);
    gotoxy(x - 2, y + 16);
    sleep(1);
    sleep(1);
    printf(">");
    gotoxy(x, y + 16);
    p_heading("Do You want to check Icfai`s B.SC IN (CARDIAC CARE TECHNOLOGY) Webpage");
    p_option("");
    yes_no(x + 4, y + 17);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BSc-in-Cardiac-Care-Technology.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void bdtt()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.SC (DIALYSIS THERAPY TECHNOLOGY) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("Historically, dialysis treatment has");
    gotoxy(x + 4, y + 10);
    printf("been viewed as a life-sustaining");
    gotoxy(x + 4, y + 11);
    printf("therapy that aims to extend survival");
    gotoxy(x + 4, y + 12);
    printf("and improve the quality of life.");

    SetColor(7);
    gotoxy(x - 2, y + 15);
    sleep(1);
    printf(">");
    gotoxy(x, y + 15);
    p_heading("Do You want to check Icfai`s B.SC (DIALYSIS THERAPY TECHNOLOGY) Webpage");
    p_option("");
    yes_no(x + 4, y + 16);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BSc-Dialysis-Tech.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void bhim()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose BACHELOR IN HEALTH INFORMATION Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("A Health Information Management (HIM)");
    gotoxy(x + 4, y + 10);
    printf("Professional is one of the key positions");
    gotoxy(x + 4, y + 11);
    printf("in a healthcare organization responsible");
    gotoxy(x + 4, y + 12);
    printf("for management of various health related");
    gotoxy(x + 4, y + 13);
    printf("information of patient generated within");
    gotoxy(x + 4, y + 14);
    printf("the healthcare system. HIM involves");
    gotoxy(x + 4, y + 15);
    printf("maintaining, collecting, analysing");
    gotoxy(x + 4, y + 16);
    printf("and disseminating traditional and");
    gotoxy(x + 4, y + 17);
    printf("digital medical information essential");
    gotoxy(x + 4, y + 18);
    printf("for delivery of quality care.");

    SetColor(7);
    gotoxy(x - 2, y + 21);
    sleep(1);
    printf(">");
    gotoxy(x, y + 21);
    p_heading("Do You want to check Icfai`s BACHELOR IN HEALTH INFORMATION Webpage");
    p_option("");
    yes_no(x + 4, y + 22);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/Bachelor-in-Health-Information.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void course_under_ahs_box()
{
    system("cls");
    int x = 39 + 3, i, y = 11, a;
    x = x - 1;
    course_under_ahs();

    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;
        else if (a == 72)
        {
            system("cls");
            course_under_ahs();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {

                    bemt();
                }

                else if (y == 19)
                {

                    bcct();
                }
                else if (y == 23)
                {
                    bdtt();
                }
                else if (y == 27)
                {

                    bhim();
                }
            }
        }

        else if (a == 80)
        {
            system("cls");
            course_under_ahs();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {

                    bemt();
                }

                else if (y == 19)
                {

                    bcct();
                }
                else if (y == 23)
                {
                    bdtt();
                }
                else if (y == 27)
                {

                    bhim();
                }
            }
        }
    }
}
void course_under_fla()
{

    window2();
    int x = 27, i, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");

    gotoxy(x + 1, y);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 1);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    y = y + 6;
    gotoxy(x1, y - 1);
    SetColor(7);
    printf("BA English (Hons)");
    gotoxy(x1, y + 3);
    printf("BA Psychology (Hons)");
    gotoxy(x1, y + 7);
    printf("MA English");
    gotoxy(x1, y + 11);
    printf("MA Psychology");
}
void baenglish()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.A. (HONS) ENGLISH Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("ICFAI University Tripura offers three");
    gotoxy(x + 4, y + 10);
    printf("years full time BA-English (Hons) Program.");
    gotoxy(x + 4, y + 11);
    printf("A degree in English Honours provides large");
    gotoxy(x + 4, y + 12);
    printf("provides large scope of career options");
    gotoxy(x + 4, y + 13);
    printf("Beside the teaching field,");
    gotoxy(x + 4, y + 14);
    printf("one can also venture into journalism,");
    gotoxy(x + 4, y + 15);
    printf(", writing, editing, Civil Services, MBA etc.");

    SetColor(7);
    gotoxy(x - 2, y + 17);
    sleep(1);
    printf(">");
    gotoxy(x, y + 17);
    p_heading("Do You want to check Icfai`s B.A. (HONS) ENGLISH Webpage");
    p_option("");
    yes_no(x + 4, y + 18);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BA-Hons-English.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void bapsychology()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose BA.PSYCHOLOGY Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("ICFAI University Tripura offers three");
    gotoxy(x + 4, y + 10);
    printf("years full time BA-Psychology (Hons) Program.");
    gotoxy(x + 4, y + 11);
    printf("This degree in Psychology Honours");
    gotoxy(x + 4, y + 12);
    printf("Beside the teaching field, one can also");
    gotoxy(x + 4, y + 13);
    printf("venture into as Career Counselor,");
    gotoxy(x + 4, y + 14);
    printf("Social Service Specialist,");
    gotoxy(x + 4, y + 15);
    printf("Psychiatric Technician,Rehabilitation Specialist,");
    gotoxy(x + 4, y + 16);
    printf("Probation and Parole Officer, Child Care Worker,");
    gotoxy(x + 4, y + 17);
    printf("Laboratory Assistant etc.");
    SetColor(7);
    gotoxy(x - 2, y + 20);
    sleep(1);
    printf(">");
    gotoxy(x, y + 20);
    p_heading("Do You want to check Icfai`s BA.PSYCHOLOGY Webpage");
    p_option("");
    yes_no(x + 4, y + 21);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BA-Psychology.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void maenglish()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose MA (ENGLISH) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("ICFAI University Tripura offers two");
    gotoxy(x + 4, y + 10);
    printf("years full time M.A-English Program.");
    gotoxy(x + 4, y + 11);
    printf("This degree aims to provide graduates");
    gotoxy(x + 4, y + 12);
    printf("with a wide range of transferable skills,");
    gotoxy(x + 4, y + 13);
    printf("which are important in many career fields.");
    gotoxy(x + 4, y + 14);
    printf("Students will develop the art of");
    gotoxy(x + 4, y + 15);
    printf("thinking independently, able to express");
    gotoxy(x + 4, y + 16);
    printf("clearly in both oral & written form, to");
    gotoxy(x + 4, y + 17);
    printf("summarize and précis, to condense");
    gotoxy(x + 4, y + 18);
    printf("facts, ideas and arguments,");
    gotoxy(x + 4, y + 19);
    printf("to write reports, to present information ");
    gotoxy(x + 4, y + 20);
    printf("effectively and to work as part of a team.");
    SetColor(7);
    gotoxy(x - 2, y + 23);
    sleep(1);
    printf(">");
    gotoxy(x, y + 23);
    p_heading("Do You want to check Icfai`s MA (ENGLISH) Webpage");
    p_option("");
    yes_no(x + 4, y + 24);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MA-English.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void mapsychology()
{
    system("cls");

    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose MA.PSYCHOLOGY Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("ICFAI University Tripura offers two");
    gotoxy(x + 4, y + 10);
    printf("years full time MA Psychology Program.");
    gotoxy(x + 4, y + 11);
    printf("This degree aims to provide");
    gotoxy(x + 4, y + 12);
    printf("graduates with a wide range");
    gotoxy(x + 4, y + 13);
    printf("of transferable skills that aid one’s");
    gotoxy(x + 4, y + 14);
    printf("personal and career development.");
    gotoxy(x + 4, y + 15);
    printf("Students will develop critical");
    gotoxy(x + 4, y + 16);
    printf("thinking and analytical skills, abstract");
    gotoxy(x + 4, y + 17);
    printf("reasoning, understanding of physiological,");
    gotoxy(x + 4, y + 18);
    printf("emotional, cognitive and social determinants");
    gotoxy(x + 4, y + 19);
    printf("of behaviour and experience basic techniques");
    gotoxy(x + 4, y + 20);
    printf("of statistical analysis.");
    SetColor(7);
    gotoxy(x - 2, y + 23);
    sleep(1);
    printf(">");
    gotoxy(x, y + 23);
    p_heading("Do You want to check Icfai`s MA.PSYCHOLOGY Webpage");
    p_option("");
    yes_no(x + 4, y + 24);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MA-Psychology.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void course_under_fla_box()
{
    system("cls");
    int x = 39 + 3, i, y = 11, a;
    x = x - 1;
    course_under_fla();

    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;
        else if (a == 72)
        {
            system("cls");
            course_under_fla();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {

                    baenglish();
                }

                else if (y == 19)
                {

                    bapsychology();
                }
                else if (y == 23)
                {
                    maenglish();
                }
                else if (y == 27)
                {

                    mapsychology();
                }
            }
        }

        else if (a == 80)
        {
            system("cls");
            course_under_fla();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {

                    baenglish();
                }

                else if (y == 19)
                {

                    bapsychology();
                }
                else if (y == 23)
                {
                    maenglish();
                }
                else if (y == 27)
                {

                    mapsychology();
                }
            }
        }
    }
}
void course_under_fe()
{

    window2();

    int x = 27, i, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");

    gotoxy(x + 1, y);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 1);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    y = y + 6;
    gotoxy(x1, y - 1);
    SetColor(7);
    printf("B.Ed");
    gotoxy(x1, y + 3);
    printf("MA (Education)");
    gotoxy(x1, y + 7);
    printf("M.Ed");
}
void bed()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.ED Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("Faculty of Education offers two years");
    gotoxy(x + 4, y + 10);
    printf("program in Education. The program");
    gotoxy(x + 4, y + 11);
    printf(" offers students, a unique opportunity to");
    gotoxy(x + 4, y + 12);
    printf("actively engage and thoughtfully process");
    gotoxy(x + 4, y + 13);
    printf("relevant issues in education. It develops");
    gotoxy(x + 4, y + 14);
    printf("domain of knowledge, teaching skills,");
    gotoxy(x + 4, y + 15);
    printf(" IT skills and soft skills. Students");
    gotoxy(x + 4, y + 16);
    printf("are trained in computer aided learning");
    gotoxy(x + 4, y + 17);
    printf("ambience where they get to meet students");
    gotoxy(x + 4, y + 18);
    printf("from different linguistic, cultural and");
    gotoxy(x + 4, y + 19);
    printf(" behavioral backgrounds.");
    SetColor(7);
    gotoxy(x - 2, y + 22);
    sleep(1);
    printf(">");
    gotoxy(x, y + 22);
    p_heading("Do You want to check Icfai`s B.ED Webpage");
    p_option("");
    yes_no(x + 4, y + 23);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/B.Ed-program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void maeducation()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose MA (EDUCATION) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The program consists of 20 courses");
    gotoxy(x + 4, y + 10);
    printf("covered in 4 semesters spread over");
    gotoxy(x + 4, y + 11);
    printf("2 years. Students are also");
    gotoxy(x + 4, y + 12);
    printf("required to do dissertation work");
    gotoxy(x + 4, y + 13);
    printf("on significant problem in the");
    gotoxy(x + 4, y + 14);
    printf("field of education");
    SetColor(7);
    gotoxy(x - 2, y + 17);
    sleep(1);
    printf(">");
    gotoxy(x, y + 17);
    p_heading("Do You want to check Icfai`s MA (EDUCATION) Webpage");
    p_option("");
    yes_no(x + 4, y + 18);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MA-Program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void med()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose M.ED Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The Faculty of Education, the ICFAI");
    gotoxy(x + 4, y + 10);
    printf("University, Tripura, offers two year");
    gotoxy(x + 4, y + 11);
    printf("Master of Education (M.Ed.) Program,");
    gotoxy(x + 4, y + 12);
    printf("approved by NCTE. It is designed");
    gotoxy(x + 4, y + 13);
    printf("to provide opportunities for students");
    gotoxy(x + 4, y + 14);
    printf("to deepen their knowledge and");
    gotoxy(x + 4, y + 15);
    printf("understanding of education, specialize");
    gotoxy(x + 4, y + 16);
    printf("in select areas and develop research");
    gotoxy(x + 4, y + 17);
    printf("capacities, leading to specialization");
    gotoxy(x + 4, y + 18);
    printf("in either primary calculation or secondary");
    gotoxy(x + 4, y + 19);
    printf("& senior secondary education.");
    gotoxy(x + 4, y + 20);
    printf("The Choice Based Credit System");
    gotoxy(x + 4, y + 21);
    printf("(CBCS) proposed by UGC is adopted.");
    SetColor(7);
    gotoxy(x - 2, y + 24);
    sleep(1);
    printf(">");
    gotoxy(x, y + 24);
    p_heading("Do You want to check Icfai`s M.ED Webpage");
    p_option("");
    yes_no(x + 4, y + 25);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MEd-Program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void course_under_fe_box()
{
    system("cls");
    int x = 39 + 3, i, y = 11, a; //14
    x = x - 1;
    course_under_fe();
    //x=38
    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;
        else if (a == 72)
        {
            system("cls");
            course_under_fe();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {

                    bed();
                }

                else if (y == 19)
                {

                    maeducation();
                }
                else if (y == 23)
                {
                    med();
                }
            }
        }

        else if (a == 80)
        {
            system("cls");
            course_under_fe();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {

                    bed();
                }

                else if (y == 19)
                {

                    maeducation();
                }
                else if (y == 23)
                {
                    med();
                }
            }
        }
    }
}
void course_under_fse()
{

    window2();

    int x = 27, i, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");

    gotoxy(x + 1, y);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 1);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    y = y + 6;
    gotoxy(x1, y - 1);
    SetColor(7);
    printf("B.Ed Spl. Ed.(ID)");
    gotoxy(x1, y + 3);
    printf("D.Ed.Spl. Ed.(ID)");
    gotoxy(x1, y + 7);
    printf("M.Ed Spl.Ed.(ID)");
    gotoxy(x1, y + 11);
    printf("M.Phil in Clinical Psychology");
}
void bedsql()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.ED SPL ED (INTELLECTUAL DISABILITY) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("Faculty of Education offers the");
    gotoxy(x + 4, y + 10);
    printf("B.Ed. Spl.Ed. Program of two");
    gotoxy(x + 4, y + 11);
    printf("years in Special Education in the");
    gotoxy(x + 4, y + 12);
    printf("field of ID. This program");
    gotoxy(x + 4, y + 13);
    printf("aims to develop Special Education");
    gotoxy(x + 4, y + 14);
    printf("teachers /Educators for children");
    gotoxy(x + 4, y + 15);
    printf("with disabilities.");

    SetColor(7);
    gotoxy(x - 2, y + 18);
    sleep(1);
    printf(">");
    gotoxy(x, y + 18);
    p_heading("Do You want to check Icfai`s B.ED SPL ED (INTELLECTUAL");
    gotoxy(x, y + 19);
    p_heading("DISABILITY) Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/B-Ed-Spl-Ed-(ID)Program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void dedsql()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose D.ED SPL ED (INTELLECTUAL DISABILITY) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The D.Ed. (Special Education) program");
    gotoxy(x + 4, y + 10);
    printf("will prepare human resources to enable");
    gotoxy(x + 4, y + 11);
    printf("them to acquire knowledge and");
    gotoxy(x + 4, y + 12);
    printf("develop competencies and skills");
    gotoxy(x + 4, y + 13);
    printf("to impart education and training");
    gotoxy(x + 4, y + 14);
    printf("effectively to children with disability");
    gotoxy(x + 4, y + 15);
    printf(" as well as all other children");
    gotoxy(x + 4, y + 16);
    printf("and thus being teachers for all children");
    gotoxy(x + 4, y + 17);
    printf("with currently growing many new hospital");
    gotoxy(x + 4, y + 18);
    printf("care centers coming all over the countries.");
    gotoxy(x + 4, y + 19);
    printf("Unfortunately some educational programs");
    gotoxy(x + 4, y + 20);
    printf("for future healthcare leaders fails");
    gotoxy(x + 4, y + 21);
    printf("to provide many of the needed skills with");
    gotoxy(x + 4, y + 22);
    printf("more care-based teaching and efforts to");
    gotoxy(x + 4, y + 21);
    printf("help students focus on strategic");
    gotoxy(x + 4, y + 22);
    printf("insights and business aspects .But");
    gotoxy(x + 4, y + 23);
    printf("MBA (Healthcare Management),ICFAI University");
    gotoxy(x + 4, y + 24);
    printf("exactly provides those advances and for");
    gotoxy(x + 4, y + 25);
    printf("students with excellent delivery of courses");
    gotoxy(x + 4, y + 26);
    printf("and practical learning in this field");
    ;

    SetColor(7);
    gotoxy(x - 2, y + 29);
    sleep(1);
    printf(">");
    gotoxy(x, y + 29);
    p_heading("Do You want to check Icfai`s D.ED SPL ED (INTELLECTUAL");
    gotoxy(x, y + 30);
    p_heading("DISABILITY) Webpage");
    p_option("");
    yes_no(x + 4, y + 31);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/Ded-Spl-Education.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void medsql()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose M.ED SPECIAL EDUCATION (INTELLECTUAL DISABILITY) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The course prepares the students to work");
    gotoxy(x + 4, y + 10);
    printf("as Master Trainers in the field of");
    gotoxy(x + 4, y + 11);
    printf("Intellectual Disability in Colleges and");
    gotoxy(x + 4, y + 12);
    printf("Universities. They will also work in");
    gotoxy(x + 4, y + 13);
    printf("higher positions in Govt.");
    gotoxy(x + 4, y + 14);
    printf("Departments and Non-Government");
    gotoxy(x + 4, y + 15);
    printf("Organisations in India and abroad.");

    SetColor(7);
    gotoxy(x - 2, y + 18);
    sleep(1);
    printf(">");
    gotoxy(x, y + 18);
    p_heading("Do You want to check Icfai`s M.ED SPECIAL EDUCATION");
    gotoxy(x, y + 19);
    p_heading("(INTELLECTUAL DISABILITY) Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MEd-Special%20Education.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void mphilclinic()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose M.PHIL IN CLINICAL PSYCHOLOGY Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }

    gotoxy(x + 4, y + 9);
    printf("Clinical psychology as one of the core");
    gotoxy(x + 4, y + 10);
    printf("disciplines in the area of mental");
    gotoxy(x + 4, y + 11);
    printf("health/illness has grown significantly");
    gotoxy(x + 4, y + 12);
    printf("in the last two decades. Today, the");
    gotoxy(x + 4, y + 13);
    printf("clinical psychology training is being");
    gotoxy(x + 4, y + 14);
    printf("being offered at more than ten recognized");
    gotoxy(x + 4, y + 15);
    printf("centers across the country with utmost");
    gotoxy(x + 4, y + 16);
    printf("efficiency. Consequently, the number of");
    gotoxy(x + 4, y + 17);
    printf("of clinical psychologists available in");
    gotoxy(x + 4, y + 18);
    printf("in service sectors has increased");
    gotoxy(x + 4, y + 19);
    printf("increased significantly. Though there is");
    gotoxy(x + 4, y + 20);
    printf("an upward trend, number of professionals");
    gotoxy(x + 4, y + 21);
    printf("currently available at various levels is");
    gotoxy(x + 4, y + 22);
    printf("no match to the number specified to face");
    gotoxy(x + 4, y + 23);
    printf("the ever growing demands in the field");

    SetColor(7);
    gotoxy(x - 2, y + 26);
    sleep(1);
    printf(">");
    gotoxy(x, y + 26);
    p_heading("Do You want to check Icfai`s M.PHIL IN CLINICAL PSYCHOLOGY");
    gotoxy(x, y + 27);
    p_heading("Webpage");
    p_option("");
    yes_no(x + 4, y + 28);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/MPhil-In-Clinical-Psychology.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void course_under_fse_box()
{
    system("cls");
    int x = 39 + 3, i, y = 11, a;
    x = x - 1;
    course_under_fse();

    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;
        else if (a == 72)
        {
            system("cls");
            course_under_fse();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {

                    bedsql();
                }

                else if (y == 19)
                {

                    dedsql();
                }
                else if (y == 23)
                {
                    medsql();
                }
                else if (y == 27)
                {
                    mphilclinic();
                }
            }
        }

        else if (a == 80)
        {
            system("cls");
            course_under_fse();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {

                    bedsql();
                }

                else if (y == 19)
                {

                    dedsql();
                }
                else if (y == 23)
                {
                    medsql();
                }
                else if (y == 27)
                {
                    mphilclinic();
                }
            }
        }
    }
}
void course_under_flis()
{

    window2();

    int x = 27, i, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");

    gotoxy(x + 1, y);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 1);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    y = y + 6;
    gotoxy(x1, y - 1);
    SetColor(7);
    printf("B.Lib. I.Sc-");
    gotoxy(x1, y);
    printf("1 year");
    gotoxy(x1, y + 3);
    printf("M.Lib. I.Sc");
    gotoxy(x1, y + 4);
    printf("Integrated");
    gotoxy(x1, y + 7);
    printf("M.Lib.I.Sc-");
    gotoxy(x1, y + 8);
    printf("1 year");
}
void blibisc()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.LIB.I.SC Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The University offers a careeroriented");
    gotoxy(x + 4, y + 10);
    printf("degree in Library and Information Science.");
    gotoxy(x + 4, y + 11);
    printf("It undertakes the task of carving the");
    gotoxy(x + 4, y + 12);
    printf("information professional competence in");
    gotoxy(x + 4, y + 13);
    printf("student and information personnel of the");
    gotoxy(x + 4, y + 14);
    printf("region in particular.");
    SetColor(7);
    gotoxy(x - 2, y + 17);
    sleep(1);
    printf(">");
    gotoxy(x, y + 17);
    p_heading("Do You want to check Icfai`s B.LIB.I.SC Webpage");
    p_option("");
    yes_no(x + 4, y + 18);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/B-Lib-I-Sc.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void mlibiscintegrated()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose M.LIB. I. SC. INTEGRATED Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The University offers a careeroriented");
    gotoxy(x + 4, y + 10);
    printf("degree in Library and Information Science.");
    gotoxy(x + 4, y + 11);
    printf("It undertakes the task of carving");
    gotoxy(x + 4, y + 12);
    printf("the information professional");
    gotoxy(x + 4, y + 13);
    printf("competence in student and information");
    gotoxy(x + 4, y + 14);
    printf("personnel of the region in particular.");
    gotoxy(x + 4, y + 15);
    printf("The program structure consists of");
    gotoxy(x + 4, y + 16);
    printf("20 courses covered in 4 semesters");
    gotoxy(x + 4, y + 17);
    printf("spread over two years.");
    SetColor(7);
    gotoxy(x - 2, y + 20);
    sleep(1);
    printf(">");
    gotoxy(x, y + 20);
    p_heading("Do You want to check Icfai`s M.LIB. I. SC. INTEGRATED");
    gotoxy(x, y + 21);
    p_heading("Webpage");
    p_option("");
    yes_no(x + 4, y + 22);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/M-Lib-I-Sc-Program.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void mlibisc()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose M.LIB. I. SC. Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 6);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The University offers a careeroriented");
    gotoxy(x + 4, y + 10);
    printf("degree in Library and Information Science.");
    gotoxy(x + 4, y + 11);
    printf("It undertakes the task of carving");
    gotoxy(x + 4, y + 12);
    printf("the information professional");
    gotoxy(x + 4, y + 13);
    printf("competence in student and information");
    gotoxy(x + 4, y + 14);
    printf("personnel of the region in particular.");
    gotoxy(x + 4, y + 15);
    printf("The program structure consists of");
    gotoxy(x + 4, y + 16);
    printf("20 courses covered in 4 semesters");
    gotoxy(x + 4, y + 17);
    printf("spread over two years.");
    SetColor(7);
    gotoxy(x - 2, y + 20);
    sleep(1);
    printf(">");
    gotoxy(x, y + 20);
    p_heading("Do You want to check Icfai`s M.LIB. I. SC. Webpage");
    p_option("");
    yes_no(x + 4, y + 21);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/M-Lib-I-Sc.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void course_under_flis_box()
{
    system("cls");
    int x = 39 + 3, i, y = 11, a;
    x = x - 1;
    course_under_flis();

    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;
        else if (a == 72)
        {
            system("cls");
            course_under_flis();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);
            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {

                    blibisc();
                }

                else if (y == 19)
                {

                    mlibiscintegrated();
                }
                else if (y == 23)
                {
                    mlibisc();
                }
            }
        }

        else if (a == 80)
        {
            system("cls");
            course_under_flis();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {

                    blibisc();
                }

                else if (y == 19)
                {

                    mlibiscintegrated();
                }
                else if (y == 23)
                {
                    mlibisc();
                }
            }
        }
    }
}
void course_under_ns()
{

    window2();

    int x = 27, i, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");

    gotoxy(x + 1, y);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 1);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    y = y + 6;
    gotoxy(x1, y - 1);
    SetColor(7);
    printf("ANM");
}
void anm()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    sleep(1);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    p_heading("Sorry.No answer found");
    p_option("");

    sleep(1);
    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 3);
    p_heading("For further details contact through the collage");
    gotoxy(x + 1, y + 4);
    p_heading("administration");
    p_option("");
    sleep(3);

    SetColor(7);
    gotoxy(25, 8);
    printf(">");
    gotoxy(27, 8);
    p_heading("Waiting for your command!");
    firstmessage();
}
void course_under_ns_box()
{
    system("cls");
    int x = 39 + 3, i, y = 11, a;
    x = x - 1;
    course_under_ns();

    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;

        if (a == 80)
        {
            system("cls");
            course_under_ns();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {
                    anm();
                }
            }
        }
    }
}

void course_under_fpey()
{

    window2();

    int x = 27, i, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 1, y);
    printf(">");

    gotoxy(x + 1, y);
    p_heading("Select a course to know more about programs");
    gotoxy(x + 1, y + 1);
    p_heading("offered by The IUT");
    p_option("");
    int x1 = 38 + 3;
    y = y + 6;
    gotoxy(x1, y - 1);
    SetColor(7);
    printf("B.P.ED");
    gotoxy(x1, y + 3);
    printf("D.P.Ed");
    gotoxy(x1, y + 7);
    printf("Post Graduate Diploma in Yoga");
    gotoxy(x1, y + 8);
    printf("(PGDY)");
    gotoxy(x1, y + 11);
    printf("BPES");
}
void bped()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose B.P.ED Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The Two-year B.P.Ed. Program recognized");
    gotoxy(x + 4, y + 10);
    printf("by National Council for Teacher Education( NCTE)");
    gotoxy(x + 4, y + 11);
    printf("is going to be started under the");
    gotoxy(x + 4, y + 12);
    printf("Department of Physical");
    gotoxy(x + 4, y + 13);
    printf("Education and Yoga (Faculty of Education)");
    gotoxy(x + 4, y + 14);
    printf("The University having a magnificent greeneries,");
    gotoxy(x + 4, y + 15);
    printf("playfields, hostel accommodation,Modern");
    gotoxy(x + 4, y + 16);
    printf("Classrooms, Library Facilities etc.");

    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("Do You want to check Icfai`s B.P.ED Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/Bp-Ed.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void dped()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose D.P.ED Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The D.P.Ed. program will prepare human");
    gotoxy(x + 4, y + 10);
    printf("resources to enable them to acquire");
    gotoxy(x + 4, y + 11);
    printf("knowledge and develop competencies and");
    gotoxy(x + 4, y + 12);
    printf("skills to impart education and");
    gotoxy(x + 4, y + 13);
    printf("training effectively to children with");
    gotoxy(x + 4, y + 14);
    printf("disability as well as all other children");
    gotoxy(x + 4, y + 15);
    printf("and thus being teachers for all children");

    SetColor(7);
    gotoxy(x - 2, y + 18);
    sleep(1);
    printf(">");
    gotoxy(x, y + 18);
    p_heading("Do You want to check Icfai`s D.P.ED Webpage");
    p_option("");
    yes_no(x + 4, y + 19);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/D.P.Ed.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void pgdy()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose POST GRADUATE DIPLOMA IN YOGA(PGDY) Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("The ICFAI University Tripura is offering");
    gotoxy(x + 4, y + 10);
    printf("post Graduate diploma in Yoga with the aim");
    gotoxy(x + 4, y + 11);
    printf("of preparing high quality future");
    gotoxy(x + 4, y + 12);
    printf("Yoga Teachers, Yoga Researchers,");
    gotoxy(x + 4, y + 13);
    printf("Yoga Trainers, and Yoga Therapists.");
    gotoxy(x + 4, y + 14);
    printf("This program will cover the entire");
    gotoxy(x + 4, y + 15);
    printf("important limbs (branch) of Yoga.");
    SetColor(7);
    gotoxy(x - 2, y + 18);
    sleep(1);
    printf(">");
    gotoxy(x, y + 18);
    p_heading("Do You want to check Icfai`s POST GRADUATE DIPLOMA IN");
    gotoxy(x, y + 19);
    p_heading("YOGA(PGDY) Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/PGDY.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}
void bpes()
{
    system("cls");
    int x = 27, y = 8, i;
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    p_heading("Ok.I found this");
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("You choose BACHELOR OF PHYSICAL EDUCATION AND SPORTS");
    gotoxy(x, y + 4);
    p_heading("Program");

    gotoxy(x + 4, y + 6);
    p_option("ABOUT THE PROGRAM");
    for (i = 0; i < 17; i++)
    {
        gotoxy(x + 4 + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 4, y + 9);
    printf("ICFAI University Tripura offers three years");
    gotoxy(x + 4, y + 10);
    printf("fulltime BPES undergraduate program.");
    gotoxy(x + 4, y + 11);
    printf("Like B.P.Ed., B.P.E.S is a");
    gotoxy(x + 4, y + 12);
    printf("physical education training program");
    gotoxy(x + 4, y + 13);
    printf("that will prepare students as a Physical");
    gotoxy(x + 4, y + 14);
    printf("Education teacher and physical instructor.");
    SetColor(7);
    gotoxy(x - 2, y + 18);
    sleep(1);
    printf(">");
    gotoxy(x, y + 18);
    p_heading("Do You want to check Icfai`s BACHELOR OF PHYSICAL");
    gotoxy(x, y + 19);
    p_heading("EDUCATION AND SPORTS Webpage");
    p_option("");
    yes_no(x + 4, y + 20);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/BPES.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void course_under_fpey_box()
{
    system("cls");
    int x = 39 + 3, i, y = 11, a;
    x = x - 1;
    course_under_fpey();

    while (a != 27)
    {

        a = getch();
        if (a == 27)
            break;
        else if (a == 72)
        {
            system("cls");
            course_under_fpey();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;
            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {
                    bped();
                }

                else if (y == 19)
                {
                    dped();
                }
                else if (y == 23)
                {
                    pgdy();
                }
                else if (y == 27)
                {
                    bpes();
                }
            }
        }

        else if (a == 80)
        {
            system("cls");
            course_under_fpey();
            x = x - 1;
            y = y + 1;

            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 15)
                {
                    bped();
                }

                else if (y == 19)
                {
                    dped();
                }
                else if (y == 23)
                {
                    pgdy();
                }
                else if (y == 27)
                {
                    bpes();
                }
            }
        }
    }
}
void instraction()
{

    int x = 52, i;
    gotoxy(x + 36, 14);
    SetColor(12);
    printf("INSTRUCTION");
    gotoxy(x + 37, 16);
    SetColor(8);

    x--;
    gotoxy(x + 38, 16);
    printf("You Can Move Text Cursor to");
    gotoxy(x + 38, 18);
    printf("Previous Line and Next Line");
    gotoxy(x + 38, 20);
    printf("by Up and Down Arrow Key");
    gotoxy(x + 38, 22);
    printf("And You Can Select The");
    gotoxy(x + 38, 24);
    printf("Any Option By Enter Key");
    x++;
    gotoxy(x + 36, 15);
    printf("%c", 218);
    for (i = 0; i < 28; i++)
    {
        gotoxy(x + 37 + i, 15);
        printf("%c", 196);
    }
    gotoxy(x + 65, 15);
    printf("%c", 191);
    for (i = 0; i < 9; i++)
    {
        gotoxy(x + 36, 16 + i);
        printf("%c", 179);
    }
    for (i = 0; i < 9; i++)
    {
        gotoxy(x + 65, 16 + i);
        printf("%c", 179);
    }
    gotoxy(x + 36, 25);
    printf("%c", 192);
    for (i = 0; i < 28; i++)
    {
        gotoxy(x + 37 + i, 25);
        printf("%c", 196);
    }
    gotoxy(x + 65, 25);
    printf("%c", 217);

    sleep(5);
}
void iut_programs()
{
    system("cls");
    p_option("");
    course();
    instraction();

    int x = 39 + 3, i = 0, y = 10, a, count;
    x = x - 1;
    while (a != 27)
    {

        a = getch();

        if (a == 27)
            break;

        else if (a == 72)
        {
            system("cls");
            course2();
            x = x - 1;
            y = y - 7;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }

            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            gotoxy(x + 1, y);

            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);

            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)
            {

                if (y == 14)
                {
                    course_under_fst_box();
                }
                else if (y == 18)
                {
                    course_under_phd_box();
                }
                else if (y == 22)
                {
                    course_under_fms_box();
                }
                else if (y == 26)
                {
                    course_under_ils_box();
                }
                else if (y == 30)
                {
                    course_under_ahs_box();
                }
                else if (y == 34)
                {
                    course_under_fla_box();
                }
                else if (y == 38)
                {
                    course_under_fe_box();
                }
                else if (y == 42)
                {
                    course_under_fse_box();
                }
                else if (y == 46)
                {
                    course_under_flis_box();
                }
                else if (y == 50)
                {
                    course_under_ns_box();
                }
                else if (y == 54)
                {
                    course_under_fpey_box();
                }
            }
        }

        else if (a == 80)
        {

            system("cls");
            course();

            x = x - 1;
            y = y + 1;
            gotoxy(x, y);
            printf("%c", 218);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 191);
            y = y + 1;
            x = x - 1;
            for (i = 0; i < 2; i++)
            {

                gotoxy(x, y + i);
                printf("%c", 179);
            }
            for (i = 0; i < 2; i++)
            {
                gotoxy(x + 30, y + i);
                printf("%c", 179);
            }
            y = y + 2;

            gotoxy(x, y);
            printf("%c", 192);
            x = x + 1;
            for (i = 0; i < 29; i++)
            {
                gotoxy(x + i, y);
                printf("%c", 196);
            }
            gotoxy(x + 29, y);
            printf("%c", 217);

            a = getch();

            if (a == 13)

                if (y == 14)
                {
                    course_under_fst_box();
                }

                else if (y == 18)
                {
                    course_under_phd_box();
                }
                else if (y == 22)
                {
                    course_under_fms_box();
                }
                else if (y == 26)
                {
                    course_under_ils_box();
                }
                else if (y == 30)
                {
                    course_under_ahs_box();
                }
                else if (y == 34)
                {
                    course_under_fla_box();
                }
                else if (y == 38)
                {
                    course_under_fe_box();
                }
                else if (y == 42)
                {
                    course_under_fse_box();
                }

                else if (y == 46)
                {
                    course_under_flis_box();
                }
                else if (y == 50)
                {
                    course_under_ns_box();
                }
                else if (y == 54)
                {
                    course_under_fpey_box();
                }
        }
    }
}

void fee_structure_box(int x, int y)
{
    int i;

    p_option("");
    box(x, y, x + 28, 7);
    gotoxy(x + 3, y + 1);
    SetColor(12);
    printf("Program Fee Per Semester(Rs)");
    gotoxy(x + 4, y + 3);
    SetColor(6);
    printf("Domicile");
    SetColor(7);
    SetColor(6);
    gotoxy(x + 18, y + 3);
    printf("Non-Domicile");
    SetColor(7);

    gotoxy(x + 36, y);
    printf("%c", 194);
    for (i = 1; i < 8; i++)
    {
        gotoxy(x + 36, y + i);
        printf("%c", 179);
    }
    gotoxy(x + 36, y + 8);
    printf("%c", 193);
    gotoxy(x, y + 2);
    printf("%c", 195);

    for (i = 1; i < 36; i++)
    {
        gotoxy(x + i, y + 2);
        printf("%c", 196);
    }
    gotoxy(x + 13, y + 2);
    printf("%c", 194);
    gotoxy(x + 36, y + 2);
    printf("%c", 180);
    SetColor(12);
    gotoxy(x + 43, y + 2);
    printf("Duration");
    SetColor(7);

    gotoxy(x, y + 4);
    printf("%c", 195);

    for (i = 1; i < 56; i++)
    {
        gotoxy(x + i, y + 4);
        printf("%c", 196);
    }
    gotoxy(x + 56, y + 4);
    printf("%c", 180);
    for (i = 3; i < 8; i++)
    {
        gotoxy(x + 13, y + i);
        printf("%c", 179);
    }
    gotoxy(x + 13, y + 8);
    printf("%c", 193);
    gotoxy(x + 13, y + 4);
    printf("%c", 197);
    gotoxy(x + 36, y + 4);
    printf("%c", 197);
}

void fee_structure()
{

    char a[20] = "Management";
    char b[20] = "management";
    char c[20] = "MANAGEMENT";

    char d[20] = "Mathematics";
    char e[20] = "mathematics";
    char f[20] = "MATHEMATICS";

    char g[20] = "Physics";
    char h[20] = "physics";
    char i1[20] = "PHYSICS";

    char j[20] = "Chemistry";
    char k[20] = "chemistry";
    char l[20] = "CHEMISTRY";

    char m[20] = "Engineering";
    char n[20] = "engineering";
    char o[20] = "ENGINEERING";

    char p[20] = "Education";
    char q[20] = "education";
    char r[20] = "ENGINEERING";

    char s[30] = "Physical Education & Yoga";
    char t[20] = "physical education & yoga";
    char u[20] = "PHYSICAL EDUCATION & YOGA";

    char v[20] = "Spicial Education";
    char w[20] = "special education";
    char x1[20] = "SPECIAL EDUCATION";

    char y1[20] = "Law";
    char z[20] = "law";
    char z1[20] = "LAW";

    char a1[20] = "English";
    char a2[20] = "english";
    char a3[20] = "ENGLISH";

    char a4[20] = "Library and Information Science";
    char a5[20] = "library and information science";
    char a6[20] = "LIBRARY AND INFORMATON SCIENCE";

    char a7[20] = "Clinical Psychology";
    char a8[20] = "clinical psychology";
    char a9[20] = "CLINICAL PSYCHOLOGY";

    char aa[20] = "B.Tech";
    char ab[20] = "btech";
    char ac[20] = "B.TECH";
    char ad[20] = "b.tech";

    char ae[20] = "B.tech(Lateral entry)";
    char af[20] = "B.tech(lateral entry)";
    char ag[20] = "B.TECH(LATERAL ENTRY)";
    char ah[20] = "b.tech(lateral entry)";

    char ai[20] = "Bca";
    char aj[20] = "bca";
    char ak[20] = "BCA";

    char al[20] = "Bca-Mca Integrated";
    char am[20] = "Bca-Mca integrated";
    char an[20] = "BCA-MCA INTEGRATED";

    char ao[20] = "Mca";
    char ap[20] = "mca";
    char aq[20] = "MCA";

    char ar[20] = "M.Sc.Physics";
    char as[20] = "m.sc.physics";
    char at[20] = "M.SC.PHYSICS";
    char au[20] = "m.sc.physics";

    char av[20] = "M.Sc.Chemistry";
    char aw[20] = "m.sc.chemistry";
    char ax[20] = "M.SC.CHEMISTRY";
    char ay[20] = "m.sc.chemistry";

    char az[20] = "M.Sc.Mathematics";
    char az1[20] = "m.sc.mathematics";
    char az2[20] = "M.SC.MATHEMATICS";
    char az3[20] = "msc math";

    char az4[20] = "B.Sc.Physics";
    char az5[20] = "b.sc.physics";
    char az6[20] = "B.SC.physics";
    char az7[20] = "bsc physics";

    char az8[20] = "B.Sc.Chemistry";
    char az9[20] = "b.sc.chemistry";
    char az10[20] = "B.SC.CHEMISTRY";
    char az11[20] = "bsc chemistry";

    char az12[20] = "B.Sc.Mathematics";
    char az13[20] = "b.sc.mathematics";
    char az14[20] = "B.SC.MATHEMATICS";
    char az15[20] = "bsc math";

    char ba[20] = "Bba";
    char bb[20] = "bba";
    char bc[20] = "BBA";

    char bd[20] = "Mba";
    char be[20] = "mba";
    char bf[20] = "MBA";

    char bg[20] = "mba rural management";
    char bh[20] = "mba Rural mgmt.";
    char bi[20] = "Mba rural management";
    char bj[20] = "MBA Rural management";
    char bk[20] = "MBa Rural Management";
    char bl[20] = "Mba Rural management";
    char bm[20] = "Mba Rural mgmt.";
    char bn[20] = "MBa rural management";
    char bo[20] = "MBa rural mgmt.";
    char bp[20] = "MBA Rural Management";
    char bq[20] = "MBA Rural Mgmt";

    char br[20] = "mba healthcare management";
    char bs[20] = "Mba healthcare management";
    char bt[20] = "MBA healthcare management";
    char bu[20] = "mba healthcare mgmt.";
    char bv[20] = "Mba healthcare mgmt.";
    char bw[20] = "MBA healthcare mgmt.";
    char bx[20] = "mba Healthcare Management";
    char by[20] = "Mba Healthcare Management";
    char bz[20] = "MBA Healthcare Management";
    char e1[20] = "mba Healthcare mgmt.";
    char e2[20] = "Mba Healthcare mgmt.";
    char e3[20] = "MBA Healthcare mgmt.";

    char e4[20] = "mcom";
    char e5[20] = "Mcom";
    char e6[20] = "M.com";
    char e7[20] = "M.Com";
    char e8[20] = "m.com";
    char e9[20] = "m.Com";

    char e10[20] = "bcom";
    char e11[20] = "Bcom";
    char e12[20] = "B.com";
    char e13[20] = "B.Com";
    char e14[20] = "b.com";
    char e15[20] = "b.Com";

    char ca[20] = "Ba llb";
    char cb[20] = "ba llb";
    char cc[20] = "BA LLB";

    char cd[20] = "Bba llb";
    char ce[20] = "bba llb";
    char cf[20] = "BBA LLB";

    char cg[20] = "Llb";
    char ch[20] = "llb";
    char ci[20] = "LLb";

    char cj[20] = "Llm";
    char ck[20] = "llm";
    char cl[20] = "LLM";

    char xa[20] = "Bsc in emergency medical technology";
    char xb[20] = "bsc in emergency medical technology";
    char xc[20] = "BBC IN EMERGENCY MEDICAL TECHNOLOGY";

    char xd[20] = "Bsc in cardiac care technology";
    char xe[20] = "bsc in cardiac care technology";
    char xf[20] = "BSC IN CARDIAC CARE TECHNOLOGY";

    char xg[20] = "Bsc in dialysis technology";
    char xh[20] = "bsc in dialysis technology";
    char xi[20] = "BSC IN DIALYSIS TECHNOLOGY";

    char xj[20] = "Bachlor in health information; management";
    char xk[20] = "Bachlor in health information";
    char xl[20] = "BACHLOR IN HEALTH INFORMATION";

    char b1[20] = "Ba English Hons";
    char b2[20] = "ba english hons";
    char b3[20] = "BA ENGLISH HONS";

    char b4[20] = "Ba Psychology";
    char b5[20] = "ba psychology";
    char b6[20] = "BA PSYCHOLOGY";

    char b7[20] = "Ma English";
    char b8[20] = "ma english";
    char b9[20] = "MA ENGLISH";

    char b10[20] = "Ma Psychology";
    char b11[20] = "ma psychology";
    char b12[20] = "MA PSYCHOLOGGY";

    char d1[20] = "Bed";
    char d2[20] = "bed";
    char d3[20] = "BED";

    char d4[20] = "Ma Education";
    char d5[20] = "ma education";
    char d6[20] = "MA EDUCATION";

    char d7[20] = "Med";
    char d8[20] = "med";
    char d9[20] = "MED";

    char c1[20] = "Bped";
    char c2[20] = "bped";
    char c3[20] = "BPED";

    char c4[20] = "Dped";
    char c5[20] = "dped";
    char c6[20] = "DPED";

    char c7[20] = "Post Graduate Diploma in Yoga";
    char c8[20] = "post graduate diploma in yoga";
    char c9[20] = "POST GRADUATE DIPLOMA IN YOGA";
    char c10[20] = "Pgdy";
    char c11[20] = "PGDY";
    char c12[20] = "pgdy";

    char c13[20] = "Bpes";
    char c14[20] = "bpes";
    char c15[20] = "BPES";

    char hg[20] = "B.Ed.Spl.Ed.(ID)";
    char hi[20] = "b.ed.spl.ed.(id)";
    char hj[20] = "B.ED.SPL.ED.(ID)";
    char hk[20] = "bedspled(id)";

    char hl[20] = "D.Ed.Spl.Ed.(Id)";
    char hm[20] = "d.ed.spl.ed.(id)";
    char hn[20] = "D.ED.SPL.ED.(ID)";
    char ho[20] = "dedspled(id";

    char ha[20] = "M Ed Spl Ed Id";
    char hb[20] = "m ed spl ed id";
    char hc[20] = "M ED SPL ED ID";

    char hd[20] = "M Phil Clinical Psychology";
    char he[20] = "m phil clinical psychology";
    char hf[20] = "M PHIL CLINICAL PSYCHOLOGY";

    char f1[20] = "B.Lib.I.Sc";
    char f2[20] = "b.lib.I.sc";
    char f3[20] = "B.LIB.I.SC";
    char f4[20] = "blibisc";

    char f5[20] = "M.Lib.I.Sc Integrated";
    char f6[20] = "m.lib.I.sc integrated";
    char f7[20] = "M.LIB.I.SC INTEGRATED";
    char f11[20] = "mlibiscintegrated";

    char f12[20] = "M.Lib.I.Sc";
    char f8[20] = "m.lib.I.sc";
    char f9[20] = "M.LIB.I.SC";
    char f10[20] = "mlibisc";

    char user[size];
    int x = 27, y = 8, i;

    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x + 1, y);
    printf("Enter the required program");
    p_option("");
    int alp;
    alp = i = 0;

    gotoxy(x + 6, y + 48);
    gets(user);

    while (user[i] != '\0')
    {
        if ((user[i] >= 'a' && user[i] <= 'z') || (user[i] >= 'A' && user[i] <= 'Z'))
        {
            alp++;
        }
        i++;
    }

    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }

    gotoxy(x + 55 - alp, y + 3);
    user_message("");
    printf("%s", user);
    p_option("");
    sleep(1);
    SetColor(7);
    gotoxy(x - 2, y + 6);
    sleep(1);
    printf(">");
    gotoxy(x + 1, y + 6);
    p_heading("");
    gotoxy(x, y + 6);
    p_heading("Here`s What I found");
    p_option("");

    if (strstr(user, a) || strstr(user, b) || strstr(user, c))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, d) || strstr(user, e) || strstr(user, f))
    {
        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, g) || strstr(user, h) || strstr(user, i1))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, j) || strstr(user, k) || strstr(user, l))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, m) || strstr(user, n) || strstr(user, o))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, p) || strstr(user, q) || strstr(user, r))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, s) || strstr(user, t) || strstr(user, u))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, v) || strstr(user, w) || strstr(user, x1))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, y1) || strstr(user, z) || strstr(user, z1))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, a4) || strstr(user, a5) || strstr(user, a6))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, a7) || strstr(user, a8) || strstr(user, a9))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("45,500");
        gotoxy(x + 44, y + 5);
        printf("3 years");
        gotoxy(x + 44, y + 6);
        printf("   or");
        gotoxy(x + 44, y + 7);
        printf("6 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else if (strstr(user, aa) || strstr(user, ab) || strstr(user, ac) || strstr(user, ad))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("50,000");
        gotoxy(x + 20, y + 6);
        printf("57,500");
        gotoxy(x + 44, y + 6);
        printf("4 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, ae) || strstr(user, af) || strstr(user, ag) || strstr(user, ah))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("50,000");
        gotoxy(x + 20, y + 6);
        printf("57,500");
        gotoxy(x + 44, y + 6);
        printf("4 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, ai) || strstr(user, aj) || strstr(user, ak))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("27,000");
        gotoxy(x + 20, y + 6);
        printf("30,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, al) || strstr(user, am) || strstr(user, an))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("27,000");
        gotoxy(x + 20, y + 6);
        printf("30,000");
        gotoxy(x + 44, y + 6);
        printf("5 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, ao) || strstr(user, ap) || strstr(user, aq))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("30,000");
        gotoxy(x + 20, y + 6);
        printf("33,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, ar) || strstr(user, as) || strstr(user, at) || strstr(user, au))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("35,000");
        gotoxy(x + 20, y + 6);
        printf("37,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, av) || strstr(user, aw) || strstr(user, ax) || strstr(user, ay))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("35,000");
        gotoxy(x + 20, y + 6);
        printf("37,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, az) || strstr(user, az1) || strstr(user, az2) || strstr(user, az3))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("27,500");
        gotoxy(x + 20, y + 6);
        printf("29,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, az4) || strstr(user, az5) || strstr(user, az6) || strstr(user, az7))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("27,500");
        gotoxy(x + 20, y + 6);
        printf("29,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, az8) || strstr(user, az9) || strstr(user, az10) || strstr(user, az11))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("27,500");
        gotoxy(x + 20, y + 6);
        printf("29,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, az12) || strstr(user, az13) || strstr(user, az14) || strstr(user, az15))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("25,000");
        gotoxy(x + 20, y + 6);
        printf("27,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else if (strstr(user, ba) || strstr(user, bb) || strstr(user, bc))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("25,000");
        gotoxy(x + 20, y + 6);
        printf("27,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, bd) || strstr(user, be) || strstr(user, bf))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("60,000");
        gotoxy(x + 20, y + 6);
        printf("70,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, bg) || strstr(user, bh) || strstr(user, bj) || strstr(user, bk) || strstr(user, bl) || strstr(user, bk) || strstr(user, bm) || strstr(user, bn) || strstr(user, bo) || strstr(user, bp) || strstr(user, bq))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("60,000");
        gotoxy(x + 20, y + 6);
        printf("70,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, br) || strstr(user, bs) || strstr(user, bt) || strstr(user, bu) || strstr(user, bv) || strstr(user, bw) || strstr(user, bx) || strstr(user, by) || strstr(user, bz) || strstr(user, e1) || strstr(user, e2) || strstr(user, e3))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("60,000");
        gotoxy(x + 20, y + 6);
        printf("70,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, e10) || strstr(user, e11) || strstr(user, e12) || strstr(user, e13) || strstr(user, e14) || strstr(user, e15))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("25,000");
        gotoxy(x + 20, y + 6);
        printf("27,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else if (strstr(user, e4) || strstr(user, e5) || strstr(user, e6) || strstr(user, e7) || strstr(user, e8) || strstr(user, e9))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("26,000");
        gotoxy(x + 20, y + 6);
        printf("28,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else if (strstr(user, ca) || strstr(user, cb) || strstr(user, cc))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("27,000");
        gotoxy(x + 20, y + 6);
        printf("29,000");
        gotoxy(x + 44, y + 6);
        printf("5 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, cd) || strstr(user, ce) || strstr(user, cf))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("27,000");
        gotoxy(x + 20, y + 6);
        printf("29,000");
        gotoxy(x + 44, y + 6);
        printf("5 years");

        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, cg) || strstr(user, ch) || strstr(user, ci))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("25,000");
        gotoxy(x + 20, y + 6);
        printf("27,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, cj) || strstr(user, ck) || strstr(user, cl))
    {

        y = y + 8;
        fee_structure_box(x, y);
        gotoxy(x + 4, y + 6);
        printf("30,000");
        gotoxy(x + 20, y + 6);
        printf("35,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else if (strstr(user, xa) || strstr(user, xb) || strstr(user, xc))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("35,000");
        gotoxy(x + 20, y + 6);
        printf("35,000");
        gotoxy(x + 44, y + 6);
        printf("4 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, xd) || strstr(user, xe) || strstr(user, xf))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("35,000");
        gotoxy(x + 20, y + 6);
        printf("35,000");
        gotoxy(x + 44, y + 6);
        printf("4 years");

        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, xg) || strstr(user, xh) || strstr(user, xi))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("35,000");
        gotoxy(x + 20, y + 6);
        printf("35,000");
        gotoxy(x + 44, y + 6);
        printf("4 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, xj) || strstr(user, xk) || strstr(user, xl))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("35,000");
        gotoxy(x + 20, y + 6);
        printf("35,000");
        gotoxy(x + 44, y + 6);
        printf("4 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("22,000");
        gotoxy(x + 20, y + 6);
        printf("24,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, b4) || strstr(user, b6) || strstr(user, b5))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("22,000");
        gotoxy(x + 20, y + 6);
        printf("24,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");

        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, b7) || strstr(user, b8) || strstr(user, b9))
    {
        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("22,000");
        gotoxy(x + 20, y + 6);
        printf("24,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, b10) || strstr(user, b11) || strstr(user, b12))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("24,000");
        gotoxy(x + 20, y + 6);
        printf("26,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else if (strstr(user, d1) || strstr(user, d2) || strstr(user, d3))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("42,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, d7) || strstr(user, d8) || strstr(user, d9))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("48,000");
        gotoxy(x + 20, y + 6);
        printf("48,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");

        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, d4) || strstr(user, d5) || strstr(user, d6))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("17,000");
        gotoxy(x + 20, y + 6);
        printf("19,500");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else if (strstr(user, c1) || strstr(user, c2) || strstr(user, c3))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("22,000");
        gotoxy(x + 20, y + 6);
        printf("24,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, c4) || strstr(user, c5) || strstr(user, c6))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("20,000");
        gotoxy(x + 20, y + 6);
        printf("20,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");

        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, c7) || strstr(user, c8) || strstr(user, c9) || strstr(user, c10) || strstr(user, c11) || strstr(user, c12))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("16,000");
        gotoxy(x + 20, y + 6);
        printf("21,000");
        gotoxy(x + 44, y + 6);
        printf("1 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, c13) || strstr(user, c14) || strstr(user, c15))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("20,000");
        gotoxy(x + 20, y + 6);
        printf("20,000");
        gotoxy(x + 44, y + 6);
        printf("3 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else if (strstr(user, hg) || strstr(user, hi) || strstr(user, hj) || strstr(user, hk))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("40,000");
        gotoxy(x + 20, y + 6);
        printf("42,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, hl) || strstr(user, hm) || strstr(user, hn) || strstr(user, ho))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("25,000");
        gotoxy(x + 20, y + 6);
        printf("25,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");

        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, ha) || strstr(user, hb) || strstr(user, hc))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("37,500");
        gotoxy(x + 20, y + 6);
        printf("37,500");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, hd) || strstr(user, he) || strstr(user, hf))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("70,000");
        gotoxy(x + 20, y + 6);
        printf("70,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else if (strstr(user, f1) || strstr(user, f2) || strstr(user, f3) || strstr(user, f4))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("21,000");
        gotoxy(x + 20, y + 6);
        printf("23,000");
        gotoxy(x + 44, y + 6);
        printf("1 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, f5) || strstr(user, f6) || strstr(user, f7) || strstr(user, f11))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("21,000");
        gotoxy(x + 20, y + 6);
        printf("23,000");
        gotoxy(x + 44, y + 6);
        printf("2 years");

        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }
    else if (strstr(user, f12) || strstr(user, f8) || strstr(user, f9) || strstr(user, f10))
    {

        y = y + 8;
        fee_structure_box(x, y);

        gotoxy(x + 4, y + 6);
        printf("21,000");
        gotoxy(x + 20, y + 6);
        printf("23,000");
        gotoxy(x + 44, y + 6);
        printf("1 years");
        SetColor(7);
        gotoxy(25, y + 12);
        printf(">");
        gotoxy(27, y + 12);
        p_heading("I can help you with the following");
        bot_message1(29, y + 13);
        firstmessage();
    }

    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void hostel_facility()
{
    question_box();
    int x = 27, y = 8, i;
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    gotoxy(x, y);
    p_heading("The University has separate hostels for boys and");
    gotoxy(x, y + 1);
    p_heading("girls within the campus.The accommodation is on");
    gotoxy(x, y + 2);
    p_heading("twin-sharing basis.The University has its won");
    sleep(1);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 5);
    printf(">");
    gotoxy(x, y + 5);
    p_heading("24 hours ambulance facility for students who are");
    gotoxy(x, y + 6);
    p_heading("in need of immediate medical attention.University");
    gotoxy(x, y + 7);
    p_heading("also has a provision to provide 24x7 hours power");
    gotoxy(x, y + 8);
    p_heading("generator back-up for the entire campus.");
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 11);
    sleep(1);
    printf(">");
    gotoxy(x, y + 11);
    p_heading("Hostel Fee");

    p_option("");

    box(x, y + 12, 52, 19);
    gotoxy(x + 1, y + 14);
    SetColor(12);
    printf("Hostel Accommodation");
    gotoxy(x + 1, y + 15);
    printf("per semester");
    SetColor(7);
    gotoxy(x + 26, y + 14);
    printf("Rs. 12,000 per semester for");
    gotoxy(x + 26, y + 15);
    printf("1st year Subsequent years");
    gotoxy(x + 26, y + 16);
    printf("fee will be communicated");
    gotoxy(x + 26, y + 17);
    printf("before the commencement of");
    gotoxy(x + 26, y + 18);
    printf("the academic year");
    gotoxy(x, y + 20);
    printf("%c", 195);
    for (i = 0; i < 53; i++)
    {
        gotoxy(x + 1 + i, y + 20);
        printf("%c", 196);
    }
    gotoxy(x + 53, y + 20);
    printf("%c", 180);

    gotoxy(x + 23, y + 12);
    printf("%c", 194);
    for (i = 13; i < 32; i++)
    {
        gotoxy(x + 23, y + i);
        printf("%c", 179);
    }
    gotoxy(x + 23, y + 32);
    printf("%c", 193);
    gotoxy(x + 23, y + 20);
    printf("%c", 197);

    SetColor(12);
    gotoxy(x + 1, y + 22);
    printf("Hostel   Deposite");
    gotoxy(x + 1, y + 23);
    printf("(Refundable)");
    SetColor(7);
    gotoxy(x + 26, y + 22);
    printf("Rs. 10,000");

    gotoxy(x, y + 25);
    printf("%c", 195);
    for (i = 0; i < 53; i++)
    {
        gotoxy(x + 1 + i, y + 25);
        printf("%c", 196);
    }
    gotoxy(x + 53, y + 25);
    printf("%c", 180);

    gotoxy(x + 23, y + 25);
    printf("%c", 197);

    SetColor(12);
    gotoxy(x + 1, y + 27);
    printf("Mess Charges");
    SetColor(7);
    gotoxy(x + 26, y + 27);
    printf("Actual cost will be work");
    gotoxy(x + 26, y + 28);
    printf("out in consulation with");
    gotoxy(x + 26, y + 29);
    printf("Mess Committe consulation");
    gotoxy(x + 26, y + 30);
    printf("with Mess Committe.");
}

void mess_food()
{

    question_box();
    int x = 27, y = 8;
    p_option("");
    SetColor(7);

    gotoxy(x - 2, y);
    sleep(1);
    printf(">");
    gotoxy(x, y);
    p_heading("The infrastructure of the Hostel is very good and");
    gotoxy(x, y + 1);
    p_heading("The Canteen provides healthy and hygienic food to");
    gotoxy(x, y + 2);
    p_heading("the students.");

    p_option("");
    SetColor(7);

    gotoxy(x - 2, y + 5);
    sleep(1);
    printf(">");
    gotoxy(x, y + 5);
    p_heading("The price for the mess is very affordable. For further");
    gotoxy(x, y + 6);
    p_heading("details contact through collage administration");
}

void faculty_member()
{
    question_box();
    int x = 27, y = 8, i;
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    sleep(1);
    printf(">");
    gotoxy(x, y);
    p_heading("ICFAI University, Tripura comprises of faculties");
    gotoxy(x, y + 1);
    p_heading("drawn from the best of institutes all across India");
    sleep(1);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 4);
    sleep(1);
    printf(">");
    gotoxy(x, y + 4);
    p_heading("There is a rich blend of faculties with extensive");
    gotoxy(x, y + 5);
    p_heading("teaching, research and industry experience. The");
    sleep(1);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 8);
    sleep(1);
    printf(">");
    gotoxy(x, y + 8);
    p_heading("faculties of IUT are well known for their well");
    gotoxy(x, y + 9);
    p_heading("acclaimed contribution in research, consultancy");
    sleep(1);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 12);
    sleep(1);
    printf(">");
    gotoxy(x, y + 12);
    p_heading("and development of case studies. They are ranked");
    gotoxy(x, y + 13);
    p_heading("very high in terms of lecture delivery and imparting");
    gotoxy(x, y + 14);
    p_heading("of knowledge.");
}

void scholarship()
{

    question_box();
    int x = 27, y = 8;
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    sleep(1);
    printf(">");
    gotoxy(x, y);
    p_heading("The national scholarship is available by");
    gotoxy(x, y + 1);
    p_heading("the government.");
    sleep(1);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 4);
    sleep(1);
    printf(">");
    gotoxy(x, y + 4);
    p_heading("Up To 20% of the student of the batch will");
    gotoxy(x, y + 5);
    p_heading("be awarded merit scholarship based on their");
    gotoxy(x, y + 6);
    p_heading("Semester-wise performancein the preceding");
    gotoxy(x, y + 7);
    p_heading("semester.");
    sleep(1);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 10);
    sleep(1);
    printf(">");
    gotoxy(x, y + 10);
    p_heading("Like for getting 9 CGPA in a particular");
    gotoxy(x, y + 11);
    p_heading("IUT awarded 50% of the semester fee as Scholarship");
    gotoxy(x, y + 12);
    p_heading("and for getting 8 CGPA IUT awarded 25% of the");
    gotoxy(x, y + 13);
    p_heading("semester fee as Scholarship.");
}

void placement()
{

    question_box();
    int x = 27, y = 8, i;
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    sleep(1);
    printf(">");
    gotoxy(x, y);
    p_heading("Over the past several years, a strong placement");
    gotoxy(x, y + 1);
    p_heading("network has been developed with bluechip");
    sleep(1);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 4);
    sleep(1);
    printf(">");
    gotoxy(x, y + 4);
    p_heading("companies in the manufacturing,engineering,");
    gotoxy(x, y + 5);
    p_heading("financial services,information technology");
    sleep(1);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 8);
    sleep(1);
    printf(">");
    gotoxy(x, y + 8);
    p_heading("and other sectors.A number of national and");
    gotoxy(x, y + 9);
    p_heading("multinational companies have recruited the");
    gotoxy(x, y + 10);
    p_heading("student through campus recruitment.");
    gotoxy(x, y + 12);
    p_heading("If you want to know more about IUT placements");
    gotoxy(x, y + 13);
    p_heading("then you can visit IUT placement webpage");
}

void internship()
{

    question_box();
    int x = 27, y = 8, i;
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    sleep(1);
    printf(">");
    gotoxy(x, y);
    p_heading("For the development of institutionalized");
    gotoxy(x, y + 1);
    p_heading("linkages with society and industry,unique");
    gotoxy(x, y + 2);
    p_heading("Internship Programs are offered. The");
    gotoxy(x, y + 3);
    p_heading("Programs require that the students undergo");
    sleep(1);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 6);
    sleep(1);
    printf(">");
    gotoxy(x, y + 6);
    p_heading("the rigors of the professional world in");
    gotoxy(x, y + 7);
    p_heading("form as well as in substance, and provide");
    gotoxy(x, y + 8);
    p_heading("them with an opportunity to apply their");
    gotoxy(x, y + 9);
    p_heading("classroom knowledge to live situations.");
    sleep(1);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 12);
    sleep(1);
    printf(">");
    gotoxy(x, y + 12);
    p_heading("The Internship Programs offer all the");
    gotoxy(x, y + 13);
    p_heading("three partners in the conduct of the");
    gotoxy(x, y + 14);
    p_heading("programs,viz.,the students,the external");
    gotoxy(x, y + 15);
    p_heading("organization,and the ICFAI Tech School");
    gotoxy(x, y + 16);
    p_heading("several benefits.");
}

void admission()
{

    question_box();
    int x = 27, y = 8, i;
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    gotoxy(x, y);
    p_heading("IUT Admission Calendar");
    p_option("");
    box(x, y + 1, 55, 25);
    SetColor(12);
    gotoxy(x + 1, y + 4);
    printf("PROGRAMS");
    SetColor(6);
    gotoxy(x + 1, y + 9);
    printf("   UG");
    gotoxy(x + 1, y + 13);
    printf("   PG");
    gotoxy(x + 1, y + 16);
    printf("PARAMEDI");
    gotoxy(x + 1, y + 17);
    printf("  -CAL");
    gotoxy(x + 1, y + 18);
    printf(" SCIENCE");
    gotoxy(x + 1, y + 21);
    printf(" B.TECH");
    gotoxy(x + 1, y + 25);
    printf("  PG");
    gotoxy(x + 1, y + 26);
    printf("DIPLOMA");
    gotoxy(x + 10, y + 1);
    SetColor(7);

    printf("%c", 194);

    for (i = 2; i < 27; i++)
    {
        gotoxy(x + 10, y + i);
        printf("%c", 179);
    }
    gotoxy(x + 10, y + 27);
    printf("%c", 193);
    x--;
    SetColor(12);
    gotoxy(x + 12, y + 2);
    printf("  Last Date for");
    gotoxy(x + 12, y + 3);
    printf("  submission of");
    gotoxy(x + 12, y + 4);
    printf("    completed");
    gotoxy(x + 12, y + 5);
    printf("application forms");
    SetColor(7);
    gotoxy(x + 12, y + 9);
    printf("  Aug 27,2020");
    gotoxy(x + 12, y + 13);
    printf("  Aug 27,2020");
    gotoxy(x + 12, y + 17);
    printf("  Aug 27,2020");
    gotoxy(x + 12, y + 21);
    printf("  Aug 27,2020");
    gotoxy(x + 12, y + 25);
    printf("  Aug 27,2020");

    x = x + 13;
    gotoxy(x + 15, y + 1);
    printf("%c", 194);
    for (i = 2; i < 27; i++)
    {
        gotoxy(x + 15, y + i);
        printf("%c", 179);
    }
    gotoxy(x + 15, y + 27);
    printf("%c", 193);
    x--;
    SetColor(12);
    gotoxy(x + 17, y + 3);
    printf("Last Date of");
    gotoxy(x + 17, y + 4);
    printf(" Admission");
    gotoxy(x + 17, y + 5);
    printf("Registration");
    SetColor(7);
    gotoxy(x + 17, y + 9);
    printf("Aug 31,2020");
    gotoxy(x + 17, y + 13);
    printf("Aug 31,2020");
    gotoxy(x + 17, y + 17);
    printf("Aug 31,2020");
    gotoxy(x + 17, y + 21);
    printf("Aug 31,2020");
    gotoxy(x + 17, y + 25);
    printf("Aug 31,2020");

    x = x + 16;
    gotoxy(x + 13, y + 1);
    printf("%c", 194);
    for (i = 2; i < 27; i++)
    {
        gotoxy(x + 13, y + i);
        printf("%c", 179);
    }
    gotoxy(x + 13, y + 27);
    printf("%c", 193);

    x = x + 14;
    SetColor(12);
    gotoxy(x, y + 3);
    printf("Commencement of");
    gotoxy(x, y + 4);
    printf("regular classes");
    SetColor(7);
    gotoxy(x, y + 9);
    printf(" Sept 01,2020");
    gotoxy(x, y + 13);
    printf(" Sept 01,2020");
    gotoxy(x, y + 17);
    printf(" Sept 01,2020");
    gotoxy(x, y + 21);
    printf(" Sept 01,2020");
    gotoxy(x, y + 25);
    printf(" Sept 01,2020");
    x = 27;

    gotoxy(x, y + 7);
    printf("%c", 195);
    for (i = 1; i < 56; i++)
    {
        gotoxy(x + i, y + 7);
        printf("%c", 196);
    }
    gotoxy(x + 10, y + 7);
    printf("%c", 197);
    gotoxy(x + 27, y + 7);
    printf("%c", 197);
    gotoxy(x + 40, y + 7);
    printf("%c", 197);
    gotoxy(x + 56, y + 7);
    printf("%c", 180);

    gotoxy(x, y + 11);
    printf("%c", 195);

    for (i = 1; i < 56; i++)
    {
        gotoxy(x + i, y + 11);
        printf("%c", 196);
    }
    gotoxy(x + 10, y + 11);
    printf("%c", 197);
    gotoxy(x + 27, y + 11);
    printf("%c", 197);
    gotoxy(x + 40, y + 11);
    printf("%c", 197);
    gotoxy(x + 56, y + 11);
    printf("%c", 180);

    gotoxy(x, y + 15);
    printf("%c", 195);

    for (i = 1; i < 56; i++)
    {
        gotoxy(x + i, y + 15);
        printf("%c", 196);
    }
    gotoxy(x + 10, y + 15);
    printf("%c", 197);
    gotoxy(x + 27, y + 15);
    printf("%c", 197);
    gotoxy(x + 40, y + 15);
    printf("%c", 197);
    gotoxy(x + 56, y + 15);
    printf("%c", 180);

    gotoxy(x, y + 19);
    printf("%c", 195);

    for (i = 1; i < 56; i++)
    {
        gotoxy(x + i, y + 19);
        printf("%c", 196);
    }
    gotoxy(x + 10, y + 19);
    printf("%c", 197);
    gotoxy(x + 27, y + 19);
    printf("%c", 197);
    gotoxy(x + 40, y + 19);
    printf("%c", 197);
    gotoxy(x + 56, y + 19);
    printf("%c", 180);

    gotoxy(x, y + 23);
    printf("%c", 195);

    for (i = 1; i < 56; i++)
    {
        gotoxy(x + i, y + 23);
        printf("%c", 196);
    }
    gotoxy(x + 10, y + 23);
    printf("%c", 197);
    gotoxy(x + 27, y + 23);
    printf("%c", 197);
    gotoxy(x + 40, y + 23);
    printf("%c", 197);
    gotoxy(x + 56, y + 23);
    printf("%c", 180);

    sleep(1);
    SetColor(7);
    gotoxy(x - 2, y + 30);
    sleep(2);
    printf(">");
    gotoxy(x, y + 30);
    p_heading("Do You Want To Apply Online");
    p_option("");
    yes_no(x + 4, y + 31);
    char user[5];
    gotoxy(x + 6, y + 48);
    gets(user);
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 50, y + 42);
    user_message("");
    printf("%s", user);
    sleep(1);
    p_option("");
    if (strstr(user, a1) || strstr(user, a2) || strstr(user, a3))
    {
        char site[] = "explorer https://www.iutripura.edu.in/Apply-Online.html";

        system(site);
        sleep(2);
        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_heading("I can help you with the following");
        bot_message1(29, 9);
        firstmessage();
    }
    else if (strstr(user, b1) || strstr(user, b2) || strstr(user, b3))
    {

        system("cls");
        SetColor(7);
        gotoxy(25, 8);
        printf(">");
        gotoxy(27, 8);
        p_option("");
        p_heading("Waiting for your command!");
        bot_message1(29, 9);
        firstmessage();
    }
    else
    {
        int x = 27, y = 8;
        system("cls");

        question_box();
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y);

        printf(">");
        p_heading("");
        gotoxy(x, y);
        printf("No answer found");
        p_option("");
        SetColor(7);
        gotoxy(x - 2, y + 4);
        sleep(1);
        printf(">");
        p_heading("");
        gotoxy(x, y + 4);
        printf("I can help you with the following");
        bot_message1(x + 1, y + 5);
        firstmessage();
        p_option("");
    }
}

void about()
{
    int x = 27, i, y = 8;
    system("cls");
    window2();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    gotoxy(x, y);
    p_heading("Hi,I`m Chatty.");
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 3);
    sleep(1);
    printf(">");
    gotoxy(x, y + 3);
    p_heading("I`m a Rule-Based Chatbot");
    gotoxy(x, y + 4);
    printf("Programmed to Recognized");
    gotoxy(x, y + 5);
    printf("Certain Terms and Patterns from");
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 8);
    sleep(1);
    printf(">");
    gotoxy(x, y + 8);
    p_heading("");
    printf("which I can Response with pre-set");
    gotoxy(x, y + 9);
    printf("Answers.");
    gotoxy(x, y + 10);
    printf("I can also shutdown or restart");
    gotoxy(x, y + 11);
    printf("your device.");
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 14);
    sleep(1);
    printf(">");
    gotoxy(x, y + 14);
    p_heading("");
    printf("I can help you regarding");
    gotoxy(x, y + 15);
    printf("IUT information & admission");
    gotoxy(x, y + 16);
    printf("issues.");
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 19);
    sleep(1);
    printf(">");
    gotoxy(x, y + 19);
    p_heading("");
    printf("Ready!Set!Search!");
    bot_message1(x + 1, y + 19);
    firstmessage();
    for (i = 5; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
}

void firstmessage()
{

    int x = 28, i, y = 8;
    window2();
    p_option("");
    question_box();

    while (1)
    {

        int alp;
        alp = i = 0;

        gotoxy(x + 6, y + 48);
        gets(firstinput);

        while (firstinput[i] != '\0')
        {
            if ((firstinput[i] >= 'a' && firstinput[i] <= 'z') || (firstinput[i] >= 'A' && firstinput[i] <= 'Z'))
            {
                alp++;
            }
            i++;
        }
        for (i = 5; i < 47; i++)
        {
            SetColor(16);
            gotoxy(x + i, 56);
            printf("\xB2");
        }
        gotoxy(x + 55 - alp, y + 42);
        user_message("");
        printf("%s", firstinput);
        p_option("");
        sleep(1);
        if (strstr(firstinput, a) || strstr(firstinput, b))
        {

            system("cls");
            window2();
            question_box();
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y);
            printf(">");
            p_heading("");
            gotoxy(x, y);
            printf("Ok. I found this");
            p_option("");
            SetColor(7);
            sleep(1);
            gotoxy(x - 2, y + 3);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 3);
            printf("The ICFAI University,Tripura was");
            gotoxy(x, y + 4);
            printf("established in 2004 through an Act");
            gotoxy(x, y + 5);
            printf("of State Legislature (Tripura Act");
            gotoxy(x, y + 6);
            printf("8 of 2004).");
            p_option("");
            SetColor(7);
            sleep(1);
            gotoxy(x - 2, y + 9);
            printf(">");
            p_heading("");
            gotoxy(x, y + 9);
            printf("The University has been approved");
            gotoxy(x, y + 10);
            printf("by the University Grants commission");
            gotoxy(x, y + 11);
            printf("(UGC), under Section 2(f) of the UGC");
            gotoxy(x, y + 12);
            printf("Act, 1956.");
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y + 14);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 14);
            printf("I can help you with this following");
            gotoxy(x, y + 13);
            p_option("");
            bot_message1(x + 1, y + 14);
            p_option("");
        }
        else if (strstr(firstinput, c) || strstr(firstinput, d) || strstr(firstinput, e))
        {
            system("cls");
            window2();
            hostel_facility();
        }
        else if (strstr(firstinput, f) || strstr(firstinput, g) || strstr(firstinput, h) || strstr(firstinput, j) || strstr(firstinput, k) || strstr(firstinput, l))
        {
            system("cls");
            window2();
            mess_food();
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y + 10);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 10);
            printf("I can help you with the following");
            bot_message1(x + 1, y + 10);
            p_option("");
        }
        else if (strstr(firstinput, m) || strstr(firstinput, n) || strstr(firstinput, o) || strstr(firstinput, p) || strstr(firstinput, q))
        {
            system("cls");
            window2();
            faculty_member();
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y + 17);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 17);
            printf("I can help you with the following");
            bot_message1(x + 1, y + 17);
            p_option("");
        }
        else if (strstr(firstinput, r) || strstr(firstinput, s) || strstr(firstinput, t))
        {
            system("cls");
            window2();
            scholarship();
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y + 16);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 16);
            printf("I can help you with the following");
            bot_message1(x + 1, y + 16);
            p_option("");
        }
        else if (strstr(firstinput, u) || strstr(firstinput, v) || strstr(firstinput, w))
        {
            system("cls");
            window2();
            internship();
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y + 19);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 19);
            printf("I can help you with the following");
            bot_message1(x + 1, y + 19);
            p_option("");
        }
        else if (strstr(firstinput, aa) || strstr(firstinput, ab) || strstr(firstinput, ac))
        {
            system("cls");
            window2();
            placement();
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y + 16);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 16);
            printf("I can help you with the following");
            bot_message1(x + 1, y + 16);
            p_option("");
        }

        else if (strstr(firstinput, ad) || strstr(firstinput, ae) || strstr(firstinput, af))
        {
            iut_programs();
        }
        else if (strstr(firstinput, ag) || strstr(firstinput, ah) || strstr(firstinput, ai) || strstr(firstinput, aj) || strstr(firstinput, ak))
        {
            system("cls");
            window2();
            icfai();
        }
        else if (strstr(firstinput, al) || strstr(firstinput, am) || strstr(firstinput, an))
        {
            system("cls");
            window2();

            admission();
        }
        else if (strstr(firstinput, ao) || strstr(firstinput, ap) || strstr(firstinput, aq))
        {
            system("c:\\windows\\system32\\shutdown /s");
        }
        else if (strstr(firstinput, ar) || strstr(firstinput, as) || strstr(firstinput, at))
        {
            system("c:\\windows\\system32\\shutdown /r");
        }
        else if (strstr(firstinput, ba) || strstr(firstinput, bb) || strstr(firstinput, bc) || strstr(firstinput, bd) || strstr(firstinput, be))
        {
            system("cls");
            window2();
            fee_structure();
        }
        else if (strstr(firstinput, au) || strstr(firstinput, av) || strstr(firstinput, aw) || strstr(firstinput, ax) || strstr(firstinput, ay) || strstr(firstinput, az))
        {
            system("cls");
            window2();
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y);
            printf(">");
            p_heading("");
            gotoxy(x, y);
            printf("Thanks for using me");
            p_option("");
            SetColor(7);
            sleep(1);
            gotoxy(x - 2, y + 3);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 3);
            printf("Bye %s!", name);
            sleep(1);
            system("cls");
            p_option("");
            exit(0);
        }
        else if (strstr(firstinput, bs) || strstr(firstinput, bt) || strstr(firstinput, bu) || strstr(firstinput, bv) || strstr(firstinput, bw) || strstr(firstinput, bx) || strstr(firstinput, by) || strstr(firstinput, bz) || strstr(firstinput, ca) || strstr(firstinput, cb) || strstr(firstinput, cc))
        {
            system("cls");
            window2();
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y);
            printf(">");
            p_heading("");
            gotoxy(x, y);
            printf("Hii  %s", name);
            p_option("");
            SetColor(7);
            sleep(1);
            gotoxy(x - 2, y + 3);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 3);
            printf("I`m chatty, your assistant");
            p_option("");
            SetColor(7);
            sleep(1);
            gotoxy(x - 2, y + 6);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 6);
            printf("Ask me your question");
            bot_message1(x + 1, y + 7);
            firstmessage();
        }
        else if (strstr(firstinput, bf) || strstr(firstinput, bg) || strstr(firstinput, bh) || strstr(firstinput, bi) || strstr(firstinput, bj) || strstr(firstinput, bk) || strstr(firstinput, bl) || strstr(firstinput, bm) || strstr(firstinput, bn) || strstr(firstinput, bo) || strstr(firstinput, bp) || strstr(firstinput, bq) || strstr(firstinput, br))
        {
            about();
        }
        else
        {
            int x = 27, y = 8;
            system("cls");
            window2();
            question_box();
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y);
            printf("No answer found");
            p_option("");
            SetColor(7);
            gotoxy(x - 2, y + 4);
            sleep(1);
            printf(">");
            p_heading("");
            gotoxy(x, y + 4);
            printf("I can help you with the following");
            bot_message1(x + 1, y + 5);
            p_option("");
        }
    }
}

int main()
{

    int x = 27, i, y = 8;

    p_option("");
    system("cls");
    window2();
    question_box();
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y);
    printf(">");
    p_heading("");
    gotoxy(x, y);
    printf("Hello,Happy to see you");
    p_option("");
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 3);
    printf(">");
    p_heading("");
    gotoxy(x, y + 3);
    printf("What is your name?");
    p_option("");
    int alp;
    alp = i = 0;

    gotoxy(x + 6, y + 48);
    gets(name);

    while (name[i] != '\0')
    {
        if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
        {
            alp++;
        }
        i++;
    }
    for (i = 6; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }
    gotoxy(x + 55 - alp, y + 6);
    user_message("");
    printf("%s", name);
    p_option("");

    SetColor(7);
    gotoxy(x - 2, y + 9);
    printf(">");
    p_heading("");
    gotoxy(x, y + 9);
    printf("Hi %s !", name);
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 12);
    sleep(1);
    printf(">");
    gotoxy(x, 9);
    p_heading("");
    gotoxy(x, y + 12);
    printf("I`m Chatty. How can I help you today?");
    p_option("");
    SetColor(7);
    gotoxy(x - 2, y + 15);
    sleep(1);
    printf(">");
    p_heading("");
    gotoxy(x, y + 15);
    printf("Select your interest to begin with around ICFAI");
    gotoxy(x, y + 16);
    printf("UNIVERSITY TRIPURA");

    bot_message1(x + 1, y + 17);
    firstmessage();
    for (i = 5; i < 47; i++)
    {
        SetColor(16);
        gotoxy(x + i, 56);
        printf("\xB2");
    }

    return 0;
}

