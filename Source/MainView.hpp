#pragma once

#include <QMainWindow>
#include "MainController.hpp"

namespace Ui {
    class MainView;
}

class MainView : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainView(QWidget* pParent = nullptr);
        MainView(const MainController* pController, QWidget* pParent = nullptr);
        ~MainView();

    private:
        MainController* controller;
        Ui::MainView *ui;

    private:
        void initialise();
};

