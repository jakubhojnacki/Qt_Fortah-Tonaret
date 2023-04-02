#include "AboutView.hpp"
#include "ui_AboutView.h"

AboutView::AboutView(QWidget* pParent)
    : AboutView{nullptr, pParent} {
}

AboutView::AboutView(const AboutController* pController, QWidget* pParent)
    : QDialog{pParent}, ui{new Ui::AboutView} {

    this->controller = (pController != nullptr) ? (const_cast<AboutController*>(pController)) : (new AboutController{this});
    this->ui->setupUi(this);
}

AboutView::~AboutView() {
    if (this->ui != nullptr)
        delete this->ui;
}
