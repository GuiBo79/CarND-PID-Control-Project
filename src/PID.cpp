#include "PID.h"
#include <math.h>



//using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    PID::Kp = Kp;
    PID::Ki = Ki;
    PID::Kd = Kd;
    
}

void PID::UpdateError(double cte) {
    
    PID::p_error = cte;
    PID::d_error = cte - PID::prev_cte;
    PID::i_error += cte;
    
}


double PID::TotalError(double cte, double i) {
    
    PID::total_error += pow(cte,2);
    
}

