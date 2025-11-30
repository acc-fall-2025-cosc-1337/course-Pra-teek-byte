
#include "tic_tac_toe_manager.h"
#include <iostream>

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X") x_wins++;
    else if (winner == "O") o_wins++;
    else ties++;
}

void TicTacToeManager::display_games() const
{
    for (auto& game : games)
    {
        for (auto& peg : game->get_pegs())
            std::cout << peg << " ";

        std::cout << " Winner: " << game->get_winner() << "\n";
    }
}


#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    x = x_win;
    o = o_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
        ++x_win;
    else if (winner == "O")
        ++o_win;
    else if (winner == "C")
        ++ties;
}

