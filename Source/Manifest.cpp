#include "Manifest.hpp"

Manifest::Manifest() {
}

QString Manifest::name() {
    return QString{"Tonaret"};
}

QString Manifest::descripion() {
    return QString{"Icon bulk manipulation utility"};
}

Version Manifest::version() {
    return Version{0, 1, 0, 1};
}

QString Manifest::author() {
    return QString{"Jakub Hojnacki <jakubhojnacki@gmail.com>"};
}

QString Manifest::date() {
    return QString{"April 2023"};
}
