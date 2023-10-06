#include <iostream>
#include "pid.hpp"

int main() {

    PIDController pidController(0.1, 0.01, 0.5);


    double setpoint = 100.0;
    double actualVelocity = 50.0;
    double control_output;

    for (int i = 0; i<10; i++){
      control_output = pidController.compute(setpoint, actualVelocity);
      actualVelocity += control_output;
    }

    std::cout << "Control Output: " << control_output << std::endl;

    return 0;
}
