#include <QWidget>
#include "MainController.hpp"

MainController::MainController(QObject* pParent)
    : QObject{pParent} {
}

MainController::MainController(const MainModel& pModel, QObject* pParent)
    : QObject{pParent}, model{pModel} {
}

const QString MainController::title() const {
    return this->model.title();
}

void MainController::onExit(QWidget* pParent) {
    pParent->close();
}

void MainController::onAbout(QWidget* pParent) {

}
