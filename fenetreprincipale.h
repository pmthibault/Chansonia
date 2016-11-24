#ifndef FENETREPRINCIPALE_H
#define FENETREPRINCIPALE_H

#include <QMainWindow>

class FenetrePrincipale : public QMainWindow
{
    Q_OBJECT
    
public:
    FenetrePrincipale(QWidget *parent = 0);
    ~FenetrePrincipale();
    
private:
    void setMonStyle();
};

#endif // FENETREPRINCIPALE_H
