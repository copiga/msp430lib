#ifndef GPIO_H
#define GPIO_H

#define GPIOSetOutput(base, bit) base|=bit
#define GPIOOn(base, bit) base|=bit
#define GPIOOff(base, bit) base&=~bit
#define GPIOToggle(base, bit) base^=bit

#endif
