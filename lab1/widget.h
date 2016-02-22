#ifndef WIDGET_H
#define WIDGET_H
#include <QtGui/QWidget>
#include <QtGui/QLineEdit>
#include <QtGui/QGroupBox>

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QGroupBox *groupBox;
    QLineEdit *sayEdit;
private slots:
    void say();
};

#endif // WIDGET_H
