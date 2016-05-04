#ifndef CONTROL
#define CONTROL

#include "Processor/ControlSimple/ProcessorMulti/NoEdit/ProcessorMulti_Processor_ControlSimple_PrivFunc.h"

void generateControlCmd(ProcessorMulti_Processor_ControlSimple_Vars* vars,
                        double sx, double sy,
                        double hx, double hy,
                        double tx, double ty);

#endif // CONTROL

