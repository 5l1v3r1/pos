#include <QDebug>

#include "SettingsWindow.h"
#include "ui_settingswindow.h"

SettingsWindow::SettingsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);
    ui->lineEditTicketSectionSeparatorChar->setMaxLength(1);
}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}

QString SettingsWindow::getRestaurantName()
{
    return ui->lineEditRestaurantName->text();
}

QString SettingsWindow::getRestaurantAddress()
{
    return ui->lineEditRestaurantAddress->text();
}

QString SettingsWindow::getFooterMessage()
{
    return ui->lineEditFooterMessage->text();
}

QChar SettingsWindow::getTicketSectionCharSeparator()
{
    return ui->lineEditTicketSectionSeparatorChar->text().at(0);
}

void SettingsWindow::setRestaurantName(QString restaurantName)
{
    this->ui->lineEditRestaurantName->setText(restaurantName);
}

void SettingsWindow::setRestaurantAddress(QString restaurantAddress)
{
    this->ui->lineEditRestaurantAddress->setText(restaurantAddress);
}

void SettingsWindow::setFooterMessage(QString footerMessage)
{
    this->ui->lineEditFooterMessage->setText(footerMessage);
}

void SettingsWindow::setTicketSectionCharSeparator(QChar c)
{
    this->ui->lineEditTicketSectionSeparatorChar->setText(c);
}

void SettingsWindow::on_checkBoxFullScreen_stateChanged(int state)
{
    if (this->ui->checkBoxFullScreen->isChecked())
    {
        qDebug() << "Fullscreen application";
    }
    else
    {
        qDebug() << "Maximized application";
    }
}

bool SettingsWindow::isFullScreen()
{
    return this->ui->checkBoxFullScreen->isChecked();
}

void SettingsWindow::setFullScreen(bool value)
{
    this->ui->checkBoxFullScreen->setChecked(value);
}