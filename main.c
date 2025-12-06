#include <stdio.h>
#include <math.h>

// EPS angle-based control example
int main() {
    double desired_angle_deg = 10.0; // target angle from driver input
    double current_angle_deg = 0.0; // measured angle

    // Simple proportional controller
    double kp = 0.5;

    for (int i = 0; i < 50; i++) {
        double error = desired_angle_deg - current_angle_deg;
        double control_signal = kp * error;

        // send control_signal to EPS actuator (placeholder)
        printf("Control signal: %f for error: %f\n", control_signal, error);

        // update current angle (simulate)
        current_angle_deg += control_signal * 0.1;
    }

    return 0;
}
