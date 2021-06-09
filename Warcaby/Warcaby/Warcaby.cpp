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

    int i, j, X,Y;
    string quit;
    char Plansza[8][8],A,B, pozycja[2];
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            Plansza[i][j] = ' ';
    }
    cout << "Witaj w grze w warcaby!" << endl;
    cout << "Zasady sa proste:" << endl;
    cout << "Kto straci wszystkie pionki przegrywa!" << endl << endl;
    cout << "Jakim symbolem chcesz grac? ";  cout << "\n";
    cin >> A;
    cout << "\n";
    cout << "Jaki symbol ma miec przeciwnik?"; cout << "\n";
    cin >> B;
    
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

    
    start:
        Display(Plansza);
            cout << "Twoja (" << A << ") Tura";

            cout << endl << "Wybierz pozycje: ( Taka jak: A1, G6, C3 itd. ) ";


    cout << endl;
    cin >> (pozycja);
    if (pozycja[0] == 'A')
        X = 0;
    else if (pozycja[0] == 'B')
        X = 1;
    else if (pozycja[0] == 'C')
        X = 2;
    else if (pozycja[0] == 'D')
        X = 3;
    else if (pozycja[0] == 'E')
        X = 4;
    else if (pozycja[0] == 'F')
        X = 5;
    else if (pozycja[0] == 'G')
        X = 6;
    else if (pozycja[0] == 'H')
        X = 7;
    else
    {
        cout << "Wpisz ponownie..." << endl;

        goto start;
    }
    if (pozycja[1] == '1')
        Y = 0;
    else if (pozycja[1] == '2')
        Y = 1;
    else if (pozycja[1] == '3')
        Y = 2;
    else if (pozycja[1] == '4')
        Y = 3;
    else if (pozycja[1] == '5')
        Y = 4;
    else if (pozycja[1] == '6')
        Y = 5;
    else if (pozycja[1] == '7')
        Y = 6;
    else if (pozycja[1] == '8')
        Y = 7;
    else
    {
        cout << "Wpisz ponownie..." << endl;

        goto start;
    }
    if (Plansza[Y][X] != A)
    {
        cout << "Wpisz ponownie..." << endl;

        goto start;
    }
    cout << "Zakonczyc?";
    cin >> quit;
    if (quit == "t" || "tak" || "ta") { return 0; }
    else { goto Begin; };

}
