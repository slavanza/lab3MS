#include "algorithm.h"
#include <QDebug>


algorithmRealization::algorithmRealization()
{

}

void algorithmRealization::basicCalc()
{

    x.clear();
    random_F.clear();
    D=0;
    M=0;

    QTime midnight(0,0,0);
    qsrand(midnight.secsTo(QTime::currentTime()));

    for(int i=0; i<size ; ++i) {
        x << generateNumber(qrand()/(double)RAND_MAX);
        random_F << (i+1)/(double)size;
    }

//    for(int i=0; i<100000 ;++i)
//        analytic_F << tan(i/100000.);

    qSort(x);

    for(int i=0 ; i<size ; ++i) {
        M+=random_F[i]*x[i];
    }
    M/=size;

    for(int i=0 ; i<size ; ++i) {
        D+=pow(x[i]-M, 2);
    }
    D/=size-1;

    double delta = 0;
    for(int i=0; i<size ; ++i) {
        double fun;
        if(x[i] <= 0.5)
            fun=x[i]+0.5;
        else
            fun=-pow(x[i], 2)/2+x[i]+0.5;
        double tmp=fabs(random_F[i]-fun/*tan(x[i]/2)*/);
        if(tmp > delta)
            delta=tmp;

//        qDebug() << tmp;
    }

    mark=delta*sqrt((double)size);

//    qDebug() << mark;

}

double algorithmRealization::generateNumber(double xi)
{
    if(xi <= 0.5)
        return xi-0.5;
    else
        return 1 - sqrt(2 - 2*xi);
    //return 2*atan(xi);
}
