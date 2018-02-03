#ifndef PLATFORMER_GAMESTATE_H
#define PLATFORMER_GAMESTATE_H

#include "ByteBuf.h"

namespace platformer {

    class GameState {
    public:
        virtual ~GameState() = default;
        virtual void onButtonAPress() = 0;
        virtual void onButtonBPress() = 0;
        virtual void onButtonABPress() = 0;
        virtual void onMessage(ByteBuf &in) = 0;
        virtual void run() = 0;
    };

}

#endif //PLATFORMER_GAMESTATE_H
