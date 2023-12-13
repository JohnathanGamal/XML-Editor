#ifndef XML_EDITOR_H
#define XML_EDITOR_H

#include <QMainWindow>
#include "ui_xml_editor.h"
#include "codeeditor.h"
#include <QFile>
#include <Qdir>
#include <QDebug>
#include <QString>
#include <QTextStream>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui {
class XML_Editor;
}
QT_END_NAMESPACE

class XML_Editor : public QMainWindow
{
    Q_OBJECT

public:
    XML_Editor(QWidget *parent = nullptr);
    ~XML_Editor();

private slots:
    void on_pushButton_clicked();

private:
    Ui::XML_Editor *ui;
};
#endif // XML_EDITOR_H