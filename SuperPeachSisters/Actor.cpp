#include "Actor.h"
#include "StudentWorld.h"

// Students:  Add code to this file, Actor.h, StudentWorld.h, and StudentWorld.cpp

Twinkler::Twinkler(StudentWorld* sw, int x, int y)
 : GraphObject(IID_STAR, x, y), m_world(sw)
{
}

void Twinkler::doSomething()
{
    int key;
    if (m_world->getKey(key))
    {
        switch (key)
        {
          case KEY_PRESS_SPACE:
            m_world->playSound(SOUND_PLAYER_JUMP);
            break;
        }
    }
}

