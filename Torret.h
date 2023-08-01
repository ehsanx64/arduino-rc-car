#ifndef TORRET_DEFINED
#define TORRET_DEFINED

#define STEP_VAL 1

#define X_PIN A7                // X-axis pin
#define X_VAL 1
#define X_MAX 200
#define X_MIN -200

#define Y_PIN A6                // Y-axis 
#define Y_VAL 2
#define Y_MAX 140
#define Y_MIN 0

void torret_setup();
void torret_loop();
#endif
