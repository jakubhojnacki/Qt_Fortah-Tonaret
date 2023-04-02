#pragma once

#include <QObject>
#include "MainModel.hpp"

class MainController : public QObject {

    Q_OBJECT

    public:
        explicit MainController(QObject* pParent = nullptr);
        MainController(const MainModel& pModel, QObject* pParent = nullptr);

    private:
        MainModel model { };

    public:
        const QString title() const;

    public slots:
        void onExit(QWidget* pParent);
        void onAbout(QWidget* pParent);

};

