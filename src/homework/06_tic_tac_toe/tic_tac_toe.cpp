#include "tic_tac_toe.h"
#include <iostream>

using namespace std;

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
  
    if (first_player == "X" || first_player == "O")
    {
        player = first_player;
    }
    else
    {
        cout << "Invalid input! Defaulting to X.\n";
        player = "X";
    }

    clear_board();
}

void TicTacToe::mark_board(int position)
{
    if (position >= 1 && position <= 9 && pegs[position - 1] == " ")
    {
        pegs[position - 1] = player;
        set_next_player();
    }
    else
    {
        cout << "Invalid position! Try again.\n";
    }
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{
    cout << "\n";
    for (int i = 0; i < 9; i += 3)
    {
        cout << pegs[i] << " | " << pegs[i + 1] << " | " << pegs[i + 2] << "\n";
        if (i < 6)
            cout << "--+---+--\n";
    }
    cout << "\n";
}

void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
        player = "X";
}

bool TicTacToe::check_board_full()
{
    for (auto peg : pegs)
    {
        if (peg == " ")
            return false;
    }
    return true;
}

void TicTacToe::clear_board()
{
    for (auto &peg : pegs)
    {
        peg = " ";
    }
}
