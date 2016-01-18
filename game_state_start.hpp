#ifndef GAME_STATE_START_HPP
#define GAME_STATE_START_HPP

#include </Users/sophiapeaslee/Desktop/Programs/game/SFML-2.3.2-osx-clang-unversal/include/SFML/Graphics.hpp>
#include <map>
#include <string>

#include "game_state.hpp"
#include "gui.hpp"

class GameStateStart : public GameState
{
    private:

    sf::View view;

    std::map<std::string, Gui> guiSystem;

    void loadgame();

    public:

    virtual void draw(const float dt);
    virtual void update(const float dt);
    virtual void handleInput();

    GameStateStart(Game* game);
};

#endif /* GAME_STATE_START_HPP */
