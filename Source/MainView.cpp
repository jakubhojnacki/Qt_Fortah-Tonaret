#include "MainView.hpp"
#include "ui_MainView.h"

MainView::MainView(QWidget* pParent)
    : MainView{nullptr, pParent} {
}

MainView::MainView(const MainController* pController, QWidget* pParent)
    : QMainWindow{pParent}, ui{new Ui::MainView} {

    this->controller = (pController != nullptr) ? (const_cast<MainController*>(pController)) : (new MainController{this});
    this->ui->setupUi(this);
    this->initialise();
}

MainView::~MainView() {
    if (this->ui != nullptr)
        delete this->ui;
}

void MainView::initialise() {
    this->setWindowTitle(this->controller->title());
}
