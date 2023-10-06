# pragma once

class PIDController {
private:
    double Kp;              // Proportional gain
    double Ki;              // Integral gain
    double Kd;              // Derivative gain
    double integral;        // Integral of errors
    double previousError;   // Previous error value

public:
    // Constructor
    PIDController(double kp, double ki, double kd);

    // Setters for PID gains
    void setKp(double kp);
    void setKi(double ki);
    void setKd(double kd);

    // Getter methods for PID gains
    double getKp() const;
    double getKi() const;
    double getKd() const;

    //compute method
    double compute(double setpoint, double actualVelocity);
};

