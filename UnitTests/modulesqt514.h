/*
 * Copyright (C) 2018-2020 QuasarApp.
 * Distributed under the lgplv3 software license, see the accompanying
 * Everyone is permitted to copy and distribute verbatim copies
 * of this license document, but changing it is not allowed.
 */

#ifndef MODULESQT514_H
#define MODULESQT514_H
#include "modulesqt513.h"

class ModulesQt514 : public ModulesQt513
{
public:
    ModulesQt514();

    static QSet<QString> qtLibs(const QString &distDir = DISTRO_DIR);
    static QSet<QString> onlyC(const QString &distDir = DISTRO_DIR);
    static QSet<QString> qmlLibs(const QString &distDir = DISTRO_DIR);
    static QSet<QString> qmlLibsExtractPlugins(const QString &distDir = DISTRO_DIR);
    static QSet<QString> separetedPackageslibs(const QString &distDir = DISTRO_DIR);

    static QSet<QString> outTestLibs(const QString &distDir = DISTRO_DIR);

    static QSet<QString> qtWithoutTr(const QString &distDir = DISTRO_DIR);
    static QSet<QString> qtWebEngine(const QString &distDir = DISTRO_DIR);
};

#endif // MODULESQT514_H
