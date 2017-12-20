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
    PID::p_error = 0;
    PID::i_error = 0;
    PID::d_error = 0;
    PID::total_error = 0;
    
}

void PID::UpdateError(double cte) {
    
    PID::d_error = cte - PID::p_error;
    PID::p_error = cte;
    PID::i_error += cte;
    
}


double PID::TotalError() {
    
    return -Kp*p_error - Kd*d_error -Ki*i_error;
    
}

