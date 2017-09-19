#pragma once

#define NUM_PARTICLES_PER_OBJECT_MAP 5000

#define NUM_COMBINED_STATE_PARTICLES 1

#define INVALID_RATIO_REPLACEMENT_VALUE 1.0 / NUM_PARTICLES_PER_OBJECT_MAP / 100

#define BYTES_PER_COLOR 13
#define BYTES_PER_POINT 17

#define BYTES_PER_MESSAGE(NUM_OBJECTS) (NUM_OBJECTS * BYTES_PER_COLOR) + (NUM_OBJECTS * NUM_PARTICLES_PER_OBJECT_MAP * BYTES_PER_POINT * NUM_COMBINED_STATE_PARTICLES)

#define ABSOLUTE_MAXIMUM_COVARIANCE 500.0

#define FRACTION_ANYWHERE 0.01

// Minimum depth of all mission elements.

#define MIN_DEPTH 0.1

// Maximum depth of all mission elements.

#define MAX_DEPTH 5.0

#define CONTINUITY_DEWEIGHTING_EXPONENT 1.0
