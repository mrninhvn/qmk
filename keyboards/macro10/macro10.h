#pragma once

#ifndef KEYBOARDS_MACRO10_H_
#define KEYBOARDS_MACRO10_H_

#include "quantum.h"

#define LAYOUT(\
    K00, K01, K02, K03, \
    K04, K05, K06, K07, \
    K08, K09, K10, K11  \
) \
{ \
    { K00, K01, K02, K03 }, \
    { K04, K05, K06, K07 }, \
    { K08, K09, K10, K11 } \
}
#endif
