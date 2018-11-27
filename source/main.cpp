#include <string.h>
#include <stdio.h>

#include <switch.h>

int main()
{
    sdmmc_storage_t sd_storage;
    f_mount(NULL, "", 1);
	sdmmc_storage_end(&sd_storage);
    #ifdef MENU_LOGO_ENABLE
	    free(Kc_MENU_LOGO);
    #endif
    i2c_send_byte(I2C_5, MAX77620_I2C_ADDR, MAX77620_REG_ONOFFCNFG1, MAX77620_ONOFFCNFG1_PWR_OFF);
    return 0;
}
