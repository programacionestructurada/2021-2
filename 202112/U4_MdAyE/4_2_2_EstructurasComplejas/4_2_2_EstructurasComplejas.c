Suppose I have two simple structures:

  struct Point{

        double x;
        double y;

    };

    struct Err{

        double xx;
        double xy;
        double yy;

    };

I have two options to define complex structures:

OPTION 1 - DIRECT

struct Measure {

    Point P;
    Err E;

};

struct State {

    Measure Pos;
    Measure Vel;
    Measure Acc;

};

OPTION 2 - POINTERS

struct PMeasure {

    Point *P;
    Err *E;

};

struct PState {

    Measure *Pos;
    Measure *Vel;
    Measure *Acc;

};

What are the pros and cons for these two options ?







/**
REF:
https://stackoverflow.com/questions/51892418/
how-to-define-complex-structures-in-c/51892736#51892736
*/
