#include <QPainter.h>
#include <qstyleoption.h>
#include "fenetreprincipale.h"

FenetrePrincipale::FenetrePrincipale(QWidget *parent) :
    QMainWindow(parent)
{
    this->setObjectName("fenetre_principale");
    this->setMonStyle();
}

FenetrePrincipale::~FenetrePrincipale()
{
    delete this;
}

void FenetrePrincipale::setMonStyle()
{
    QString str(
        "#fenetre_principale {"
                "background: rgb(26, 26, 26);"
        "}"
    );

    this->setStyleSheet(str);

}
