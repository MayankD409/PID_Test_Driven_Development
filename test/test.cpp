#include <gtest/gtest.h>
#include "pid.hpp"

TEST(PIDControllerTest, ComputeTest) {
    // Initialize a PID controller with specific gains
    PIDController pidController(0.1, 0.01, 0.5);

    // Set a target setpoint and actual velocity
    double setpoint = 100.0;
    double actualVelocity = 50.0;

    // Call the compute method to calculate new velocity
    double newVelocity = pidController.compute(setpoint, actualVelocity);

    // Assert that the new velocity is within a certain tolerance of the expected value
    // Replace the expectedValue with the actual expected value based on your PID control logic
    double expectedValue = 0.0;  // Replace with the actual expected value
    double tolerance = 0.001;    // Tolerance for floating-point comparison

    EXPECT_NEAR(newVelocity, expectedValue, tolerance);
}

TEST(PIDControllerTest, SetAndGetGainsTest) {
    // Initialize a PID controller with default gains
    PIDController pidController(0.0, 0.0, 0.0);

    // Set new gains using setter methods
    pidController.setKp(0.2);
    pidController.setKi(0.02);
    pidController.setKd(0.8);

    // Get the gains using getter methods
    double kp = pidController.getKp();
    double ki = pidController.getKi();
    double kd = pidController.getKd();

    // Assert that the retrieved gains match the set values
    EXPECT_DOUBLE_EQ(kp, 0.2);
    EXPECT_DOUBLE_EQ(ki, 0.02);
    EXPECT_DOUBLE_EQ(kd, 0.8);
}