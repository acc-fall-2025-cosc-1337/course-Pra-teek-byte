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
