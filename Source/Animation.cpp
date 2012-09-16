#include"Animation.hpp"


Animation::Animation()
{
    Done, Loop = false;
    Reset();
}

void Animation::Reset()
{
    CurrentFrame = 0;
}

bool Animation::Animate()
{

}
