# Isotope Decay Simulator

Basic engineering tool written in C++ for calculating radioactive decay. 

The program calculates the remaining mass of a sample and its activity over time based on the half-life constant (T 1/2). It was created to practice implementing physics formulas into functional code.

Technical details:
- Language: C++
- Formula used: N(t) = N0 * exp(-lambda * t)
- Lambda calculation: ln(2) / half-life

How to use:
1. Compile main.cpp using any C++ compiler (g++ main.cpp -o sim)
2. Run the executable
3. Provide initial mass, half-life and time elapsed when prompted

The code handles basic input for mass and time to provide results used in nuclear physics problems.
