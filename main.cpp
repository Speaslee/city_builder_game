#include "game.hpp"
#include "game_state_start.hpp"

int main()
{
    Game game;

    game.pushState(new GameStateSTart(&game));
    game.gameLoop();

    return 0;
}
