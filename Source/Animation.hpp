#ifndef ANIMATION_H
#define ANIMATION_H

#include"Graphics.hpp"

class Animation
{
public:
    Animation();

    Graphics Gfx;
    bool Loop, Done;
    SDL_Rect Clip; // deminsions of each frame
    int CurrentFrame, MaxFrames;

    bool Animate();
    void Reset();


};


#endif
