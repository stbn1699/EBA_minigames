#include <QApplication>
#include <QTextEdit>
#include <QtGui>
#include <QPushButton>
#include <QVBoxLayout>

class Notepad : public QWidget
{
    Q_OBJECT

public:
    Notepad();

private slots:
    void quit();

private:
    QTextEdit *textEdit;
    QPushButton *quitButton;
};



int main(int argv, char **args)
{

    Notepad::Notepad()
    {
        textEdit = new QTextEdit;
        quitButton = new QPushButton(tr("Quit"));

        connect(quitButton, SIGNAL(clicked()), this, SLOT(quit()));

        QVBoxLayout *layout = new QVBoxLayout;
        layout->addWidget(textEdit);
        layout->addWidget(quitButton);

        setLayout(layout);

        setWindowTitle(tr("Notepad"));
    }

    return app.exec();
}