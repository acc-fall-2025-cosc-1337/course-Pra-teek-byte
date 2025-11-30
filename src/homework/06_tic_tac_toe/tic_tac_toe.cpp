#include "tic_tac_toe.h"
#include <iostream>

using std::cout;
using std::endl;

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    if (position >= 1 && position <= 9)
    {
        pegs[position - 1] = player;
        display_board();
        set_next_player();
    }
}

string TicTacToe::get_player() const
{
    return player;
}

string TicTacToe::get_winner() const
{
    // Simple check for X or O win or tie
    const int win_combinations[8][3] = {
        {0,1,2},{3,4,5},{6,7,8}, // rows
        {0,3,6},{1,4,7},{2,5,8}, // cols
        {0,4,8},{2,4,6}           // diagonals
    };

    for (auto& combo : win_combinations)
    {
        if (pegs[combo[0]] != " " &&
            pegs[combo[0]] == pegs[combo[1]] &&
            pegs[combo[1]] == pegs[combo[2]])
            return pegs[combo[0]];
    }

    for (auto& peg : pegs)
        if (peg == " ") return " "; // game not finished

    return "C"; // tie
}

void TicTacToe::display_board() const
{
    cout << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << endl;
    cout << "-+-+-" << endl;
    cout << pegs[3] << "|" << pegs[4] << "|" << pegs[5] << endl;
    cout << "-+-+-" << endl;
    cout << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << endl;
    cout << endl;
}

void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
        player = "X";
}

void TicTacToe::clear_board()
{
    for (auto& peg : pegs)
        peg = " ";
}
