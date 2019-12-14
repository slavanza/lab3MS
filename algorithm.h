#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <QMainWindow>
#include <QTime>
#include <cmath>

class algorithmRealization {
public:
    int size;
    QVector<double> x, random_F;
    double M, D, mark;

    algorithmRealization();

    void basicCalc();
private:
    double generateNumber(double xi);
};

#endif // ALGORITHM_H
