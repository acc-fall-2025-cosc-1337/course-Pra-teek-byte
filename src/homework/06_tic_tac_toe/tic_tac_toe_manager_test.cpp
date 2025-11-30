#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include <cassert>
#include <iostream>

int main()
{
    TicTacToeManager manager;

    // Game 1: X wins
    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1); game1.mark_board(4); game1.mark_board(2);
    game1.mark_board(5); game1.mark_board(3);
    manager.save_game(game1);

    // Game 2: O wins
    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1); game2.mark_board(4); game2.mark_board(2);
    game2.mark_board(5); game2.mark_board(8);
    manager.save_game(game2);

    // Game 3: tie
    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1); game3.mark_board(2); game3.mark_board(3);
    game3.mark_board(5); game3.mark_board(4); game3.mark_board(6);
    game3.mark_board(8); game3.mark_board(7); game3.mark_board(9);
    manager.save_game(game3);

    int x, o, t;
    manager.get_winner_total(x, o, t);

    assert(x == 1);
    assert(o == 1);
    assert(t == 1);

    std::cout << "All tests passed!\n";
    std::cout << "X wins: " << x << ", O wins: " << o << ", Ties: " << t << "\n";

    return 0;
}
