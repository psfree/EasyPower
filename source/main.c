#include <string.h>

#include "i2c.h"

#include "max77620.h"


int main()
{
    i2c_send_byte(I2C_5, MAX77620_I2C_ADDR, MAX77620_REG_ONOFFCNFG1, MAX77620_ONOFFCNFG1_PWR_OFF);
    return 0;
}
