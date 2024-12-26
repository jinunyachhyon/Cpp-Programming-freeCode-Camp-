#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <array>

struct Calibration {
    std::array<std::array<double, 4>, 3> P2; // Projection matrix P2
    std::array<std::array<double, 4>, 3> P3; // Projection matrix P3
    std::array<std::array<double, 3>, 3> R0; // Rotation matrix R0
    std::array<std::array<double, 4>, 3> Tr_velo_to_cam; // Transformation matrix Tr_velo_to_cam
    double c_u, c_v, f_u, f_v, b_x, b_y; // Intrinsic parameters

    Calibration(const std::string& filepath) {
        readCalibrationFile(filepath);
    }

    void readCalibrationFile(const std::string& filepath) {
        std::ifstream file(filepath);
        if (!file.is_open()) {
            std::cerr << "Failed to open calibration file: " << filepath << std::endl;
            return;
        }

        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string key;
            iss >> key;

            if (key == "P2:") {
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        iss >> P2[i][j];
                    }
                }
            } else if (key == "P3:") {
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        iss >> P3[i][j];
                    }
                }
            } else if (key == "R0_rect:") {
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        iss >> R0[i][j];
                    }
                }
            } else if (key == "Tr_velo_to_cam:") {
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        iss >> Tr_velo_to_cam[i][j];
                    }
                }
            }
        }

        // Calculate intrinsic parameters from P2
        c_u = P2[0][2];
        c_v = P2[1][2];
        f_u = P2[0][0];
        f_v = P2[1][1];
        b_x = P2[0][3] / (-f_u);
        b_y = P2[1][3] / (-f_v);

        file.close();
    }
};

int main() {
    Calibration calib("calib.txt");

    // Access calibration data
    std::cout << "c_u: " << calib.c_u << std::endl;
    std::cout << "c_v: " << calib.c_v << std::endl;
    std::cout << "f_u: " << calib.f_u << std::endl;
    std::cout << "f_v: " << calib.f_v << std::endl;
    std::cout << "b_x: " << calib.b_x << std::endl;
    std::cout << "b_y: " << calib.b_y << std::endl;

    return 0;
}
