<<<<<<< Updated upstream

int main() 
{

	return 0;
}
=======
#include <iostream>
#include <memory>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

int main()
{
    TicTacToeManager manager;
    std::unique_ptr<TicTacToe> game;
    std::string first_player;
    int size_choice;

    std::cout << "Enter 3 for TicTacToe3 or 4 for TicTacToe4: ";
    std::cin >> size_choice;

    if (size_choice == 3)
        game = std::make_unique<TicTacToe3>();
    else
        game = std::make_unique<TicTacToe4>();

    std::cout << "Enter first player (X or O): ";
    std::cin >> first_player;

    game->start_game(first_player);

    int position;
    while (!game->game_over())
    {
        std::cout << "Enter position: ";
        std::cin >> position;
        game->mark_board(position);
    }

    manager.save_game(game);
    manager.display_games();

    return 0;
}
>>>>>>> Stashed changes
