#ifndef __OTP_FLASH_H__
#define __OTP_FLASH_H__

#include <linux/i2c.h>

#define BOOT_DATA_START_REG (0x8000)
#define BOOT_DATA_END_REG (0x9FFF)
#define BOOT_DATA_WRITE_LEN (BOOT_DATA_END_REG - BOOT_DATA_START_REG + 1)

struct otp_flash;
struct otp_flash *otp_flash_init_ar0234(struct device *dev);
u16 otp_flash_get_checksum_ar0234(struct otp_flash *instance);
size_t otp_flash_read_ar0234(struct otp_flash *instance, u8 *data, int addr, size_t len);
size_t otp_flash_get_pll_length_ar0234(struct otp_flash *instance);
size_t otp_flash_get_pll_section_ar0234(struct otp_flash*instance, u8 *data);

#endif
