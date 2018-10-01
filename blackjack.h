#ifndef BLACKJACK_H
#define BLACKJACK_H

#include <QMainWindow>

namespace Ui{
    class Blackjack;
}

class Blackjack : public QMainWindow{
    Q_OBJECT

public:
    explicit Blackjack(QWidget *parent = nullptr);
    ~Blackjack();

private:
    Ui::Blackjack *ui;
};

#endif
