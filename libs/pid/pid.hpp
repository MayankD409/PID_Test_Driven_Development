#pragma once

/**
 * @brief PIDController class implements a Proportional-Integral-Derivative controller.
 */
class PIDController {
private:
    double Kp;              /**< Proportional gain */
    double Ki;              /**< Integral gain */
    double Kd;              /**< Derivative gain */
    double integral;        /**< Integral of errors */
    double previousError;   /**< Previous error value */

public:
    /**
     * @brief Constructor for PIDController class.
     * @param kp Proportional gain
     * @param ki Integral gain
     * @param kd Derivative gain
     */
    PIDController(double kp, double ki, double kd);

    /**
     * @brief Setter method for Proportional gain (Kp).
     * @param kp Proportional gain value to be set.
     */
    void setKp(double kp);

    /**
     * @brief Setter method for Integral gain (Ki).
     * @param ki Integral gain value to be set.
     */
    void setKi(double ki);

    /**
     * @brief Setter method for Derivative gain (Kd).
     * @param kd Derivative gain value to be set.
     */
    void setKd(double kd);

    /**
     * @brief Getter method for Proportional gain (Kp).
     * @return Proportional gain value.
     */
    double getKp() const;

    /**
     * @brief Getter method for Integral gain (Ki).
     * @return Integral gain value.
     */
    double getKi() const;

    /**
     * @brief Getter method for Derivative gain (Kd).
     * @return Derivative gain value.
     */
    double getKd() const;

    /**
     * @brief Compute method calculates the control output based on the given setpoint and actual velocity.
     * @param setpoint Desired setpoint value.
     * @param actualVelocity Actual velocity value.
     * @return Control output calculated by the PID controller.
     */
    double compute(double setpoint, double actualVelocity);
};
