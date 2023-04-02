#include "AboutController.hpp"

AboutController::AboutController(QObject* pParent)
    : QObject{pParent} {
}

AboutController::AboutController(const AboutModel& pModel, QObject* pParent)
    : QObject{pParent}, model{pModel} {
}
