#ifndef TICTACTOE_H
#define TICTACTOE_H

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


#include <string>
#include <vector>


class TicTacToe
{
public:
    TicTacToe(int size) : pegs(size * size, " ") {}

    void start_game(std::string first_player)
    {
        player = first_player;
        clear_board();
    }

    void mark_board(int position)
    {
        pegs[position - 1] = player;
        set_next_player();
    }

    bool game_over()
    {
        if (check_row_win() || check_column_win() || check_diagonal_win())
        {
            set_winner();
            return true;
        }

        return check_board_full();
    }

    std::string get_player() const { return player; }
    std::string get_winner() const { return winner; }
    const std::vector<std::string>& get_pegs() const { return pegs; }

protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win() { return false; }
    virtual bool check_row_win() { return false; }
    virtual bool check_diagonal_win() { return false; }

private:
    std::string player;
    std::string winner;

    void set_next_player()
    {
        if (player == "X")
            player = "O";
        else
            player = "X";
    }

    bool check_board_full()
    {
        for (auto& p : pegs)
        {
            if (p == " ")
                return false;
        }
        winner = "C";
        return true;
    }

    void set_winner()
    {
        if (player == "X")
            winner = "O";
        else
            winner = "X";
    }

    void clear_board()
    {
        for (auto& peg : pegs)
            peg = " ";
    }
};

#endif

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

    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;

    void display_board() const;

private:
    void set_next_player();

    bool check_board_full() const;
    void clear_board();

    string player {"X"};
    vector<string> pegs { " ", " ", " ", " ", " ", " ", " ", " ", " " };
};

#endif

    bool check_board_full();
    void clear_board();

    string player;
    vector<string> pegs{9, " "}; 
};

#endif
