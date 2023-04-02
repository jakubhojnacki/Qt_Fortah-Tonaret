#include "MainModel.hpp"
#include "Manifest.hpp"

MainModel::MainModel() {
}

const QString MainModel::title() const {
    return (QString { "%1 %2" }).arg(Manifest::name(), Manifest::version().toString());
}
