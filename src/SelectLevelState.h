#ifndef SELECT_LEVEL_STATE_H
#define SELECT_LEVEL_STATE_H
#pragma once

#include <Gui/GuiButton.hpp>
#include <Scene/State.hpp>

#include <memory>

using namespace dt;
using namespace std;

class SelectLevelState : public State
{
    Q_OBJECT
public:
    void OnInitialize();

    void UpdateStateFrame(double simulationFrameTime);

    void OnReturnClick(MyGUI::Widget* sender);

private:
    GuiButton* mReturnButton;
};

#endif