#include "MainWindow.hpp"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget* pParent) : QMainWindow { pParent }, ui { new Ui::MainWindow } {
    this->ui->setupUi(this);
}

MainWindow::~MainWindow() {
    if (this->ui != nullptr)
        delete ui;
}

