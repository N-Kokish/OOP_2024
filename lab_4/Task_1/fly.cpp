#include "fly.h"
#include "ui_fly.h"

Fly::Fly(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Fly)
    , m_flyX(400)
    , m_flyY(300)
    , m_pastkaX(50)
    , m_pastkaY(50)
    , m_number_winer(0)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: lightblue;");

    QPixmap flyPixmap("D:/test/lab4/Task_1/muha.png");
    m_flyPixmapNew.load("D:/test/lab4/Task_1/muha2.png");
    QPixmap pastkaPixmap("D:/test/lab4/Task_1/pastka.jpg");
    flyPixmap = flyPixmap.scaled(120, 120, Qt::KeepAspectRatio);
    ui->l_muha->setPixmap(flyPixmap);
    ui->l_muha->move(m_flyX, m_flyY);
    flyPixmap = pastkaPixmap.scaled(120, 120, Qt::KeepAspectRatio);
    ui->l_pastka->setPixmap(pastkaPixmap);
    ui->l_pastka->move(m_pastkaX, m_pastkaY);
    this->setMouseTracking(true);
    ui->centralwidget->setMouseTracking(true);
    ui->l_muha->setMouseTracking(true);
}

Fly::~Fly()
{
    delete ui;
}
bool Fly::event(QEvent *event)
{
    if (event->type() == QEvent::MouseMove) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        mouseMoveEvent(mouseEvent);
        return true;
    }

    return QMainWindow::event(event); // Обработка других событий
}

void Fly::mouseMoveEvent(QMouseEvent *event)
{
    int cursorX = event->position().x();;
    int cursorY = event->position().y();
    int distanceX = cursorX - (m_flyX + 60);
    int distanceY = cursorY - (m_flyY + 60);
    LvlFly(distanceX, distanceY);
    if (m_flyX < 0) m_flyX = 0;
    if (m_flyY < 0) m_flyY = 0;
    if (m_flyX > width() - 120) m_flyX = width() - 120;
    if (m_flyY > height() - 120) m_flyY = height() - 120;
    Winer(m_flyX,m_flyY,m_pastkaX,m_pastkaY);
    ui->l_muha->move(m_flyX, m_flyY);
}

void Fly::Winer(int flyX, int flyY, int pastkaX, int pastkaY)
{
    int distanceX = (pastkaX+60) - (flyX + 60);
    int distanceY = (pastkaY+60) - (flyY + 60);
    if (abs(distanceX)<50 && abs(distanceY) < 60){
        m_number_winer=m_number_winer+1;
        if (m_number_winer == 21) {
            ui->l_winer->setText(QString("WINER "));
            ui->l_winer1->setText(QString("Ну все, я втомилася, давай на цьому завершимо!"));
        }
        ui->lcdN->display(m_number_winer);
        this->m_flyX=400;
        this->m_flyY=300;
        ui->l_muha->move(this->m_flyX, this->m_flyY);
        ui->l_winer1->move(this->m_flyX, this->m_flyY-50);
        SkinMuha(m_number_winer);
    }
    /*else{
        ui->l_winer->setText(QString("ДАВАЙ ТИ ЗМОЖЕШ!"));
    }*/
}

void Fly::LvlFly(int distanceX, int distanceY)
{
    switch (m_number_winer) {
    case 0:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = m_flyX + distanceX / 20;
            m_flyY = m_flyY + distanceY / 20;
        }
        break;

    case 1:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = m_flyX - distanceX / 20;
            m_flyY = m_flyY - distanceY / 20;
        }
        break;

    case 2:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = m_flyX - distanceX / 3;
            m_flyY = m_flyY - distanceY / 3;
        }
        break;
    case 3:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = m_flyX - distanceX / 20 + 10 * sin(m_flyY / 50);
            m_flyY = m_flyY - distanceY / 20;
        }
        break;
    case 4:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = m_flyX - distanceX / 20 + 5 * cos(m_flyY / 50);
            m_flyY = m_flyY - distanceY / 20 + 5 * sin(m_flyX / 50);
        }
        break;
    case 5:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = m_flyX - distanceX / 20 + 5 * sin(m_flyY / 50);
            m_flyY = m_flyY - distanceY / 20 + 5 * cos(m_flyX / 50);
        }
        break;
    case 6:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = m_flyX - distanceX / 20 + (rand() % 11 - 5);
            m_flyY = m_flyY - distanceY / 20 + (rand() % 11 - 5);
        }
        break;
    case 7:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = m_flyX - distanceX / 20 + (rand() % 21 - 10);
            m_flyY = m_flyY - distanceY / 20 + (rand() % 21 - 10);
        }
        break;
    case 8:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = m_flyX - distanceX / 20 + (rand() % 2 - 1);
            m_flyY = m_flyY - distanceY / 20 + (rand() % 2 - 1);
        }
        break;
    case 9:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = m_flyX - distanceX / 20 + (rand() % 51 - 25);
            m_flyY = m_flyY - distanceY / 20 + (rand() % 51 - 25);
        }
        break;
    case 10:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/ 20  + (rand() % 51 - 25)/ 20);
            m_flyY = (m_flyY - distanceY/ 20  + (rand() % 51 - 25)/ 20);
        }
        break;
    case 11:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/ 20  + (rand() % 51 - 25)/ 0.9);
            m_flyY = (m_flyY - distanceY/ 20  + (rand() % 51 - 25)/ 0.9);
        }
        break;
    case 12:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/ 20  + (rand() % 51 - 25)/ 0.6);
            m_flyY = (m_flyY - distanceY/ 20  + (rand() % 51 - 25)/ 0.6);
        }
        break;
    case 13:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/ 20  + (rand() % 51 - 25)/ 0.3);
            m_flyY = (m_flyY - distanceY/ 20  + (rand() % 51 - 25)/ 0.3);
        }
        break;
    case 14:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/ 20  + (rand() % 51 - 25)/ 0.2);
            m_flyY = (m_flyY - distanceY/ 20  + (rand() % 51 - 25)/ 0.2);
        }
        break;
    case 15:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/ 20  + (rand() % 51 - 25)/ 0.1);
            m_flyY = (m_flyY - distanceY/ 20  + (rand() % 51 - 25)/ 0.1);
        }
        break;
    case 16:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/ 20  + (rand() % 51 - 25))/20;
            m_flyY = (m_flyY - distanceY/ 20  + (rand() % 51 - 25))/20;
        }
        break;
    case 17:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/  (10 + rand() % 10)  + (rand() % 51 - 25));
            m_flyY = (m_flyY - distanceY/  20  + (rand() % 51 - 25));
        }
        break;
    case 18:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/  20  + (rand() % 51 - 25));
            m_flyY = (m_flyY - distanceY/  (10 + rand() % 10)  + (rand() % 51 - 25));
        }
        break;

    case 19:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/  (10 + rand() % 10)  + (rand() % 51 - 25));
            m_flyY = (m_flyY - distanceY/  (10 + rand() % 10)  + (rand() % 51 - 25));
        }
        break;
    case 20:
        if (abs(distanceX) < 100 && abs(distanceY) < 100) {
            m_flyX = (m_flyX - distanceX/ 40  + (rand() % 51 - 25)/ 20);
            m_flyY = (m_flyY - distanceY/ 40  + (rand() % 51 - 25)/ 20);
        }
        if (rand() % 5 == 0) { // 20% пасивка-ульта
            m_flyX += (rand() % 81 - 40);
            m_flyY += (rand() % 81 - 40);
        }
        break;
    default:

        break;
    }
}

void Fly::SkinMuha(int m_number_winer)
{
    if (m_number_winer == 5) {
        m_flyPixmapNew.load("D:/test/lab4/Task_1/muha2.png");
        ui->l_muha->setPixmap(m_flyPixmapNew.scaled(120, 120, Qt::KeepAspectRatio));
    }
    if (m_number_winer == 10) {
        m_flyPixmapNew.load("D:/test/lab4/Task_1/muha4.png");
        ui->l_muha->setPixmap(m_flyPixmapNew.scaled(120, 120, Qt::KeepAspectRatio));
    }
    if (m_number_winer == 15) {
        m_flyPixmapNew.load("D:/test/lab4/Task_1/muha5.png");
        ui->l_muha->setPixmap(m_flyPixmapNew.scaled(120, 120, Qt::KeepAspectRatio));
    }
    if (m_number_winer == 21) {
        m_flyPixmapNew.load("D:/test/lab4/Task_1/muha6.png");
        ui->l_muha->setPixmap(m_flyPixmapNew.scaled(120, 120, Qt::KeepAspectRatio));
    }
}
