/*
 * Author: Jonathan Baird
 * Date: 2/20/2017
 * Purpose: Cosmos Video Game
*/

#ifndef LEVELTWO_H
#define LEVELTWO_H

#include <QGraphicsScene>
#include <QTimer>
#include <QAbstractAnimation>
#include <QDebug>

class QGraphicsPixmapItem;
class QPropertyAnimation;

class BackgroundItem;
class Player;

class Platform;
class QScrollBar;


class LevelTwo : public QGraphicsScene
{
    Q_OBJECT
    Q_PROPERTY(qreal jumpFactor READ jumpFactor WRITE setJumpFactor NOTIFY jumpFactorChanged)
public:
    explicit LevelTwo(QScrollBar* s, QObject *parent = 0);
    void timerEvent(QTimerEvent *);
    qreal jumpFactor() const;
    void setJumpFactor(const qreal &jumpFactor);
    void sendSignalTwo();

protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private slots:
    void movePlayer();
    void jumpPlayer();
    void fallPlayer();
    void checkTimer();

    bool handleCollisionWithPlatform();

    QGraphicsItem* collidingPlatforms();
    void jumpStatusChanged(QAbstractAnimation::State newState, QAbstractAnimation::State oldState);


signals:
    void jumpFactorChanged(qreal);
    //void playSound(QString);
     void endLevelTwo();

private:
    void initPlayField();

    int m_velocity;
    int m_skippedMoving;
    qreal m_groundLevel;
    qreal m_minX;
    qreal m_maxX;
    QTimer m_timer;
    QTimer mFallTimer;
    QPropertyAnimation *m_jumpAnimation;
    qreal m_jumpFactor;
    int m_jumpHeight;
    int m_fieldWidth;


    Player *m_player;
    Platform *m_Platform;

    BackgroundItem *m_Background;
    BackgroundItem *m_Scene;
    BackgroundItem *m_ground;

    QGraphicsItem *m_platform;

    QGraphicsItem *platform;
    QScrollBar *scroll;

    Platform *p1;
    Platform *p2;


};
#endif // LEVELTWO_H
