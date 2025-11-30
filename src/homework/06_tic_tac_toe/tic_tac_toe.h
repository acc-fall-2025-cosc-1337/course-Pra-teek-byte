#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>

using std::string;
using std::vector;

class TicTacToe
{
public:
<<<<<<< HEAD
    TicTacToe() { clear_board(); }

    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    string get_winner() const;
=======
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
>>>>>>> 56b1d4fc5fbdb1aed6ffd32ad551aa8a3f0cb210
    void display_board() const;

private:
    void set_next_player();
<<<<<<< HEAD
    bool check_board_full() const;
    void clear_board();

    string player {"X"};
    vector<string> pegs { " ", " ", " ", " ", " ", " ", " ", " ", " " };
};

#endif
=======
    bool check_board_full();
    void clear_board();

    string player;
    vector<string> pegs{9, " "}; 
};

#endif
//h
>>>>>>> 56b1d4fc5fbdb1aed6ffd32ad551aa8a3f0cb210
