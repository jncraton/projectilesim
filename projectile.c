#include <stdio.h>
#include <stdlib.h>

// Initialize constants
const double step_size = .001;
const double g = -10;

// Adds the components of one vector to another
void add_vec(double* x1, double* y1, double* x2, double* y2) {
  *x1 += *x2 * step_size;
  *y1 += *y2 * step_size;
}

// Runs a single step in our simulation
//
// This will update our simulation state (position, velocity, acceleration)
void run_step(double* rx, double* ry, double* vx, double* vy, double* ax, double* ay) {
  // Update velocities from acceleration values
  add_vec(vx, vy, ax, ay);

  // Update positions using new velocities
  add_vec(rx, ry, vx, vy);
}

void main(int argc, char** argv) {
  double rx = 0, ry = 0;
  double ax = 0, ay = g;
  double vx, vy, time;

  // Display usage if we aren't given proper parameters
  if (argc != 3) {
    printf("Usage: projectile {vx} {vy}\n");
    exit(1);
  }

  // Convert parameters to doubles
  vx = atof(argv[1]);
  vy = atof(argv[2]);

  // Run our simulation
  for (time = 0; ry >= 0; time += step_size) {
    run_step(&rx, &ry, &vx, &vy, &ax, &ay);
  }

  // Print results
  printf("Traveled %.01f meters in %.02f seconds\n", rx, time);
}
