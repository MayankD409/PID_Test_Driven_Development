/**
 * @file pid.cpp
 * @brief Implementation file for PIDController class
 */

#include "pid.hpp"

/**
 * @brief Constructor for PIDController class.
 * @param kp Proportional gain
 * @param ki Integral gain
 * @param kd Derivative gain
 */
PIDController::PIDController(double kp, double ki, double kd)
    : Kp(kp), Ki(ki), Kd(kd), integral(0.0), previousError(0.0) {}

/**
 * @brief Setter method to update the proportional gain (Kp).
 * @param kp New proportional gain value
 */
void PIDController::setKp(double kp) {
    Kp = kp;
}

/**
 * @brief Setter method to update the integral gain (Ki).
 * @param ki New integral gain value
 */
void PIDController::setKi(double ki) {
    Ki = ki;
}

/**
 * @brief Setter method to update the derivative gain (Kd).
 * @param kd New derivative gain value
 */
void PIDController::setKd(double kd) {
    Kd = kd;
}

/**
 * @brief Compute method to calculate PID control output based on setpoint and actual velocity.
 * @param setpoint Desired setpoint value
 * @param actualVelocity Current actual velocity value
 * @return PID control output
 */
double PIDController::compute(double setpoint, double actualVelocity) {
    // Calculate the error
    double error = setpoint - actualVelocity;

    // Calculate the integral of the errors
    integral += error;

    // Calculate the derivative of the error
    double derivative = error - previousError;

    // Compute the PID control output
    double output = Kp * error + Ki * integral + Kd * derivative;

    // Update the previous error
    previousError = error;

    return output;
}


/**
 * @brief Getter method to retrieve the proportional gain (Kp).
 * @return Proportional gain value
 */
double PIDController::getKp() const {
    return Kp;
}

/**
 * @brief Getter method to retrieve the integral gain (Ki).
 * @return Integral gain value
 */
double PIDController::getKi() const {
    return Ki;
}

/**
 * @brief Getter method to retrieve the derivative gain (Kd).
 * @return Derivative gain value
 */
double PIDController::getKd() const {
    return Kd;
}
