#include "Notepad/notepad.h"
#include <Notepad/ui_notepad.h>

int main(int argc, char *argv[])
{
    QApplication EditorApp(argc, argv);
    Notepad Editor;
    Editor.show();

    return EditorApp.exec();
}