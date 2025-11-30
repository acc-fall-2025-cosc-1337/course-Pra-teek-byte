#include "tic_tac_toe.h"
#include <iostream>

<<<<<<< HEAD
using std::cout;
using std::endl;

void TicTacToe::start_game(string first_player)
{
    player = first_player;
=======
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

>>>>>>> 56b1d4fc5fbdb1aed6ffd32ad551aa8a3f0cb210
    clear_board();
}

void TicTacToe::mark_board(int position)
{
<<<<<<< HEAD
    if (position >= 1 && position <= 9)
    {
        pegs[position - 1] = player;
        display_board();
        set_next_player();
    }
=======
    if (position >= 1 && position <= 9 && pegs[position - 1] == " ")
    {
        pegs[position - 1] = player;
        set_next_player();
    }
    else
    {
        cout << "Invalid position! Try again.\n";
    }
>>>>>>> 56b1d4fc5fbdb1aed6ffd32ad551aa8a3f0cb210
}

string TicTacToe::get_player() const
{
    return player;
}

<<<<<<< HEAD
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
=======
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
>>>>>>> 56b1d4fc5fbdb1aed6ffd32ad551aa8a3f0cb210
}

void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
        player = "X";
}

<<<<<<< HEAD
void TicTacToe::clear_board()
{
    for (auto& peg : pegs)
        peg = " ";
=======
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
>>>>>>> 56b1d4fc5fbdb1aed6ffd32ad551aa8a3f0cb210
}
