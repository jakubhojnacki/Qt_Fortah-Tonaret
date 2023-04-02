#pragma once

#include <QObject>
#include "AboutModel.hpp"

class AboutController : public QObject {

    Q_OBJECT

    public:
        explicit AboutController(QObject* pParent = nullptr);
        AboutController(const AboutModel& pModel, QObject* pParent = nullptr);

    private:
        AboutModel model;

};

