#ifndef ADMINPORTAL_H
#define ADMINPORTAL_H

#include <QWidget>
#include <vector>
#include "Winery.h"
#include "newwine.h"

vector<Winery> ReadFile(QString fileName);
void WriteFile(QString fileName, vector<Winery>* WineryVector);

namespace Ui {
class AdminPortal;
}

class AdminPortal : public QWidget
{
    Q_OBJECT

public:
    explicit AdminPortal(QWidget *parent = 0);
    explicit AdminPortal(QWidget *parent, vector<Winery> newVector);
    ~AdminPortal();

private slots:
    void on_editList_clicked();
    void RereadList();

    void on_pushButton_clicked();

private:
    void SetListItems();

    Ui::AdminPortal *ui;
    vector<Winery> WineryVector;
};

#endif // ADMINPORTAL_H
