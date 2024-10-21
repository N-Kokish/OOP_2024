#ifndef FLY_H
#define FLY_H

#include <QMainWindow>
#include <QLabel>
#include <QMouseEvent>
#include <QEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class Fly;
}
QT_END_NAMESPACE

class Fly : public QMainWindow
{
    Q_OBJECT

public:
    Fly(QWidget *parent = nullptr);
    ~Fly();

protected:
    bool event(QEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void Winer(int flyX,int flyY,int pastkaX,int pastkaY);
    void LvlFly(int distanceX, int distanceY);
    void SkinMuha(int m_number_winer);
private:
    Ui::Fly *ui;
    QPixmap flyPixmap;
    QPixmap pastkaPixmap;
    QPixmap m_flyPixmapNew;
    int m_flyX, m_flyY;
    int m_pastkaX, m_pastkaY;
    int m_number_winer;

};
#endif // FLY_H
