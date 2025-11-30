#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

#include <memory>
#include <vector>
#include "tic_tac_toe.h"

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
