#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstdio>
using namespace std;

void Display(char[8][8]);
void Display(char Board[8][8])
{


    int i;
    for (i = 0; i < 8; i++)
    {
        cout << "\t\t\t\t  +---+---+---+---+---+---+---+---+" << endl;
        cout << "\t\t\t\t" << i + 1 << " | " << Board[i][0] << " | " << Board[i][1] << " | " << Board[i][2] << " | " << Board[i][3] << " | " << Board[i][4] << " | " << Board[i][5] << " | " << Board[i][6] << " | " << Board[i][7] << " |" << endl;
    }
    cout << "\t\t\t\t  +---+---+---+---+---+---+---+---+" << endl;
    cout << "\t\t\t\t    A   B   C   D   E   F   G   H  " << endl;
}
int main()
{
Begin:


    int i, j;
    char Board[8][8], A, B, pozycja[2];
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            Board[i][j] = ' ';
    }
    cout << "\t\t\t" << "Witaj w grze w warcaby!" << endl;
    cout << "Zasady sa proste:" << endl << endl;
    cout << "Kto straci wszystkie pionki przegrywa!" << endl << endl;
    cout << " !    @    #    $    %    ^    &    *    (    )    /    -    +    = " << endl << endl;

    cout << "Jakim symbolem chcesz grac? "; cin >> A;
    cout << "Jaki symbol ma miec przeciwnik? "; cin >> B;
    if (A == B)
    {
        cout << endl << "\t\t" << "Nie mozna wybrać tych samych symboli";

        goto Begin;
    }
    char sym1p = A;
    char sym2p = B;

    cout <<endl << "Zaczynajmy!" << endl<<endl;



    Board[0][0] = B; Board[0][2] = B; Board[0][4] = B; Board[0][6] = B;
    Board[1][1] = B; Board[1][3] = B; Board[1][5] = B; Board[1][7] = B;
    Board[2][0] = B; Board[2][2] = B; Board[2][4] = B; Board[2][6] = B;

    Board[5][1] = A; Board[5][3] = A; Board[5][5] = A; Board[5][7] = A;
    Board[6][0] = A; Board[6][2] = A; Board[6][4] = A; Board[6][6] = A;
    Board[7][1] = A; Board[7][3] = A; Board[7][5] = A; Board[7][7] = A;

    Display(Board);

    return 0;
}