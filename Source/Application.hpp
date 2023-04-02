#pragma once

#include <QApplication>
#include "MainView.hpp"

class Application : public QApplication {

    private:
        MainView* mainView;

    public:
        Application(int pArgC, char* pArgV[]);
        ~Application();

    public:
        int run();

};

