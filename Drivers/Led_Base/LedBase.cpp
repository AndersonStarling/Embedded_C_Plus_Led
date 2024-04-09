#include <cstdint>
#include "stm32f4xx.h"
#include "Mcal_Name_Space.hpp"
#include "LedBase.hpp"

/* empty de-contructor */
Led_Base::~Led_Base(){ }

/* constructor */
Led_Base::Led_Base() : led_on(false) {}
