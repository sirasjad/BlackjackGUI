#include "blackjack.h"
#include "ui_blackjack.h"

Blackjack::Blackjack(QWidget *parent) : QMainWindow(parent), ui(new Ui::Blackjack){
    ui->setupUi(this);
}

Blackjack::~Blackjack(){
    delete ui;
}
