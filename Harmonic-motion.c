#include "udf.h"
#define Freq 3.95662518 // Frequency in hertz
#define angular_freq 2.0M_PIFreq // Angular frequency in radians per second
#define tetmax 90.0*M_PI/180 // Maximum angular displacement in radians
DEFINE_PROFILE(velocity_profile,t,i)
{
real time = CURRENT_TIME; // Get current time
face_t f; // Declare face variable
begin_f_loop(f,t) // Loop over faces in face zone t
{
	F_PROFILE(f,t,i) = tetmax*angular_freq*cos(angular_freq*time);
}
	end_f_loop(f,t)
}
