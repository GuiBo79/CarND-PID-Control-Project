#ifndef PID_H
#define PID_H



class PID {
public:
  /*
   * Controls
  */
    
  bool use_twiddle;
    
    
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;
  double prev_cte;
  double total_error = 0;
  
    
    
    
    

  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);
  
  /*
  * Calculate the total PID error.
  */
  double TotalError(double cte, double i);
};

#endif /* PID_H */
