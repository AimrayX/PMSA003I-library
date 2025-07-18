#ifndef _PMSA003I_DEFS_H_
#define _PMSA003I_DEFS_H_

//registers
#define PMSA003I_REG_START_CHAR1    0x00//0x42(fixed)
#define PMSA003I_REG_START_CHAR2    0x01//0x4d(fixed)
#define PMSA003I_REG_FRAME_LENGTH_H 0x02
#define PMSA003I_REG_FRAME_LENGTH_L 0x03
#define PMSA003I_REG_DATA1_H        0x04
#define PMSA003I_REG_DATA1_L        0x05
#define PMSA003I_REG_DATA2_H        0x06
#define PMSA003I_REG_DATA2_L        0x07
#define PMSA003I_REG_DATA3_H        0x08
#define PMSA003I_REG_DATA3_L        0x09
#define PMSA003I_REG_DATA4_H        0x0A
#define PMSA003I_REG_DATA4_L        0x0B
#define PMSA003I_REG_DATA5_H        0x0C
#define PMSA003I_REG_DATA5_L        0x0D
#define PMSA003I_REG_DATA6_H        0x0E
#define PMSA003I_REG_DATA6_L        0x0F
#define PMSA003I_REG_DATA7_H        0x10
#define PMSA003I_REG_DATA7_L        0x11
#define PMSA003I_REG_DATA8_H        0x12
#define PMSA003I_REG_DATA8_L        0x13
#define PMSA003I_REG_DATA9_H        0x14
#define PMSA003I_REG_DATA9_L        0x15
#define PMSA003I_REG_DATA10_H       0x16
#define PMSA003I_REG_DATA10_L       0x17
#define PMSA003I_REG_DATA11_H       0x18
#define PMSA003I_REG_DATA11_L       0x19
#define PMSA003I_REG_DATA12_H       0x1A
#define PMSA003I_REG_DATA12_L       0x1B
#define PMSA003I_REG_DATA13_H       0x1C
#define PMSA003I_REG_DATA13_L       0x1D
#define PMSA003I_REG_CHECK_H1        0x16
#define PMSA003I_REG_CHECK_H2        0x17

//particle sizes
#define PMSA003I_PM_0_3  0x00
#define PMSA003I_PM_0_5  0x01
#define PMSA003I_PM_1_0  0x02
#define PMSA003I_PM_2_5  0x03
#define PMSA003I_PM_5_0  0x04
#define PMSA003I_PM_10_0 0x05

//working states
#define PMSA003I_WS_SLEEP  0x00
#define PMSA003I_WS_NORMAL 0x01

#define PMSA003I_I2C_ADDR   0x12

#define PMSA003I_READ_ERROR ((uint16_t)(-1))

#endif