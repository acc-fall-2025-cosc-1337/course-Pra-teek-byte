#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>

using std::string;
using std::vector;

class TicTacToe
{
public:
    TicTacToe() { clear_board(); }

    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    string get_winner() const;
    void display_board() const;

private:
    void set_next_player();
    bool check_board_full() const;
    void clear_board();

    string player {"X"};
    vector<string> pegs { " ", " ", " ", " ", " ", " ", " ", " ", " " };
};

#endif
