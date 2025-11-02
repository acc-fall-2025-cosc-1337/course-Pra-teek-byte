#include "tic_tac_toe.h"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
    TicTacToe game;
    game.start_game("X");

    int moves[] = {1, 2, 3, 4, 5, 7, 6, 9, 8};
    bool over = false;

    for (int i = 0; i < 9; i++)
    {
        game.mark_board(moves[i]);
        game.display_board();
        over = game.game_over();
        cout << "Game over after move " << moves[i] << "? " << (over ? "Yes" : "No") << "\n";
    }

    assert(over == true);
    cout << "\n✅ Test Passed: Game ends when all 9 slots are filled.\n";
    return 0;
}
