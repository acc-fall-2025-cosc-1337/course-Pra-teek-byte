<<<<<<< Updated upstream
//h
=======
#ifndef TICTACTOE_H
#define TICTACTOE_H

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
>>>>>>> Stashed changes
