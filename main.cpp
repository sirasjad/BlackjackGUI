#include "blackjack.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Blackjack gui;
    gui.show();

    return a.exec();
}
