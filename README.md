# Harmonic-motion-Ansys-Fluent-UDF
UDF stands for User-Defined Function, which is a way to customize and extend the functionality of Fluent, a computational fluid dynamics (CFD) software.
This UDF implements a time-dependent velocity profile for a boundary condition in Fluent. The velocity profile is given by the following equation:

$$v(t) = \theta_{max} \omega \cos(\omega t)$$

where $v(t)$ is the velocity at time $t$, $\theta_{max}$ is the maximum angular displacement in radians, and $\omega$ is the angular frequency in radians per second. The UDF uses the following constants:

•  Freq: The frequency of the oscillation in hertz, which is equal to 3.95662518 Hz.

•  angular_freq: The angular frequency in radians per second, which is equal to 2.0M_PIFreq.

•  tetmax: The maximum angular displacement in radians, which is equal to 90.0*M_PI/180.

The UDF uses the DEFINE_PROFILE macro to assign the velocity profile to a face zone. The macro takes three arguments: the name of the UDF (velocity_profile), the thread pointer (t), and the direction index (i). The UDF loops over all the faces in the face zone and sets the velocity component (F_PROFILE) to the value of the cosine function evaluated at the current time (CURRENT_TIME). The UDF must be compiled and hooked to the appropriate boundary condition before running the simulation.

Refrences:
•	N. Shirani and D. Toghraie, “Numerical investigation of transient mixed convection of nanofluid in a cavity with non-Darcy porous inner block and rotating cylinders with harmonic motion,” Sci. Rep., vol. 11, no. 1, p. 17281, 2021, doi: 10.1038/s41598-021-96733-6. 
•	N. Shirani, D. Toghraie, M. Zarringhalam, and M. Afrand, “Numerical simulation of transient mixed convection of water–Cu nanofluid in a square cavity with multiple rotating cylinders having harmonic motion,” J. Therm. Anal. Calorim., 2020. 
•	N. Shirani, D. Toghraie, and S. Rostami, “Comparative study of mixed convection heat transfer of water–Cu nanofluid in an enclosure having multiple rotating circular cylinders with different configurations and considering harmonic cylinders rotation,” J. Therm. Anal. Calorim., 2020. 
