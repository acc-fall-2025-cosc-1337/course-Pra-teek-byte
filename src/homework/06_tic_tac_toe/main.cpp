#include "tic_tac_toe.h"
#include <iostream>

using namespace std;

int main()
{
    TicTacToe game;
    string first_player;
    char again = 'y';

    cout << "Welcome to Tic Tac Toe!\n";

    while (again == 'y' || again == 'Y')
    {
        cout << "Enter first player (X or O): ";
        cin >> first_player;

        game.start_game(first_player);

        int position;

        while (!game.game_over())
        {
            game.display_board();
            cout << "Player " << game.get_player() << ", enter position (1-9): ";
            cin >> position;
            game.mark_board(position);
        }

        game.display_board();
        cout << "Game over! Board is full.\n";

        cout << "Play again? (y/n): ";
        cin >> again;
    }

    cout << "Thanks for playing!\n";
    return 0;
}
