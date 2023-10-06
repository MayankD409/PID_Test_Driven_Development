#include "pid.hpp"

PIDController::PIDController(double kp, double ki, double kd)
    : Kp(kp), Ki(ki), Kd(kd), integral(0.0), previousError(0.0) {}

void PIDController::setKp(double kp) {
    Kp = kp;
}

void PIDController::setKi(double ki) {
    Ki = ki;
}

void PIDController::setKd(double kd) {
    Kd = kd;
}

// Stub implementation of the compute method (returns a constant value)
double PIDController::compute(double setpoint, double actualVelocity) {
    return 0.0;  // Placeholder value, replace with actual logic
}

// Getter methods for PID gains
double PIDController::getKp() const {
    return Kp;
}

double PIDController::getKi() const {
    return Ki;
}

double PIDController::getKd() const {
    return Kd;
}
