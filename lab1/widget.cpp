#include <QtGui>
#include "widget.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    sayEdit = new QLineEdit();
    QPushButton *sayButton = new QPushButton("Say");
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(sayEdit);
    layout->addWidget(sayButton);
    groupBox = new QGroupBox("Group1");
    groupBox->setLayout(layout);
    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addWidget(groupBox);
    setLayout(mainLayout);
    connect(sayButton, SIGNAL(clicked()), this, SLOT(say()));
}
void Widget::say()
{
    QMessageBox::information(this, "Say message", sayEdit->text(),
                             QMessageBox::Ok);
}

Widget::~Widget()
{

}
