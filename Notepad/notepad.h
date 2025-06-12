#include <QMainWindow>
#include <QFileDialog>
#include <QmessageBox>
#include <QFontDialog>
#include <QTextCharFormat>
#include <iostream>
#include <QColorDialog>
namespace Ui {
    class Notepad;
}


class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:
    void newDocument();
    void open();
    void save();
    void saveAs();
    void print();
    void exit();
    void copy();
    void cut();
    void paste();
    void undo();
    void redo();
    void selectFont();
    void setFontBold(bool bold);
    void setFontUnderline(bool underline);
    void setFontItalic(bool italic);
    void setFontColor();
    void about();
private:
    Ui::Notepad *ui;
    QString currentFile;
};