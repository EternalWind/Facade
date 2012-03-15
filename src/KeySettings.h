#ifndef KEY_SETTINGS_H
#define KEY_SETTINGS_H

#include <Input/InputManager.hpp>

#include <map>

using namespace dt;
using namespace std;

class KeySettings
{
public:
    enum Function
    {
        FORWARD,
        BACKWARD,
        LEFTWARD,
        RIGHTWARD,
        JUMP,
        DUCK,
        ACTIVATE,
        RECALL_NANO,
        RELEASE_NANO,
        ZOOM
    };

    KeySettings();

    void SetKey(Function function, InputManager::InputCode key);

    InputManager::InputCode GetKey(Function function) const;

private:
    map<Function, InputManager::InputCode> mKeyMap;
};

#endif