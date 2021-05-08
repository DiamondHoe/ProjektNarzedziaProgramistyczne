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
    string quit;
    char Plansza[8][8], A, B, pozycja[2];
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            Plansza[i][j] = ' ';
    }
    cout << "Witaj w grze w warcaby!" << endl;
    cout << "Zasady sa proste:" << endl;
    cout << "Kto straci wszystkie pionki przegrywa!" << endl << endl;
    cout << " !    @    #    $    %    ^    &    *    (    )    /    -    +    = " << endl << endl;

    cout << "Jakim symbolem chcesz grac? "; cin >> A;
    cout << "Jaki symbol ma miec przeciwnik? "; cin >> B;
    if (A == B)
    {
        cout << endl << "\t\t" << "Nie mozna wybrać tych samych symboli"<<endl<<endl;

        goto Begin;
    }
    char sym1p = A;
    char sym2p = B;

    cout <<endl << "Zaczynamy!" << endl<<endl;



    Plansza[0][0] = B; Plansza[0][2] = B; Plansza[0][4] = B; Plansza[0][6] = B;
    Plansza[1][1] = B; Plansza[1][3] = B; Plansza[1][5] = B; Plansza[1][7] = B;
    Plansza[2][0] = B; Plansza[2][2] = B; Plansza[2][4] = B; Plansza[2][6] = B;

    Plansza[5][1] = A; Plansza[5][3] = A; Plansza[5][5] = A; Plansza[5][7] = A;
    Plansza[6][0] = A; Plansza[6][2] = A; Plansza[6][4] = A; Plansza[6][6] = A;
    Plansza[7][1] = A; Plansza[7][3] = A; Plansza[7][5] = A; Plansza[7][7] = A;

    Display(Plansza);

    cout << "Zakonczyc?";
    cin >> quit;
    if (quit == "t" || "tak" || "ta") { return 0; }
    else { goto Begin; };

}
