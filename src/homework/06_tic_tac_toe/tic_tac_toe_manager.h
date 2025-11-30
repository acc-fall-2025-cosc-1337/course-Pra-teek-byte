
#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

#include <memory>
#include <vector>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <vector>
#include <string>

using std::vector;
using std::string;

class TicTacToeManager
{
public:

    void save_game(std::unique_ptr<TicTacToe>& game);
    void display_games() const;

private:
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_wins{0}, o_wins{0}, ties{0};

    void update_winner_count(std::string winner);
};

#endif

    void save_game(TicTacToe b);
    void get_winner_total(int& x, int& o, int& t);

private:
    vector<TicTacToe> games;
    int x_win {0};
    int o_win {0};
    int ties {0};

    void update_winner_count(string winner);
};

#endif

