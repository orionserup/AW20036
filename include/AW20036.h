/**
 * @file AW20036.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

#ifndef AW20036_H
#define AW20036_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#define AW20036_MAX_LED 0x35

/// @brief 
typedef enum AW20036PAGE {

    AW20036_FUNCTION_PAGE           = 0x00,
    AWS20036_DIM_CURR_PAGE          = 0x01,
    AW20036_FADE_CURR_PAGE          = 0x02,
    AW20036_PATTERN_SEL_PAGE        = 0x03,
    AW20036_DIM_FADE_PAGE           = 0x04,
    AW20036_DIM_PATTERN_FADE_PAGE   = 0x05

} AW20036Page;

#define AW20036_PAGE_SELECT 0xF0

/// @brief 
typedef enum AW20036FUNCTION {

    AW20036_ID      = 0x00,
    AW20036_SLPCR   = 0x01,
    AW20036_RSTR    = 0x02,
    AW20036_GCCR    = 0x03,
    AW20036_FCD     = 0x04,
    AW20036_CLKSYS  = 0x05,
    AW20036_FLTCFG1 = 0x09,
    AW20036_FLTCFG2 = 0x0A,
    AW20036_ISRFLT  = 0x0B,
    AW20036_LEDON0  = 0x31,
    AW20036_LEDON1  = 0x32,
    AW20036_LEDON2  = 0x33,
    AW20036_LEDON3  = 0x34,
    AW20036_LEDON4  = 0x35,
    AW20036_LEDON5  = 0x36,
    AW20036_PATCR   = 0x43,
    AW20036_FADEH0  = 0x44,
    AW20036_FADEH1  = 0x45,
    AW20036_FADEH2  = 0x46,
    AW20036_FADEL0  = 0x47,
    AW20036_FADEL1  = 0x48,
    AW20036_FADEL2  = 0x49,
    AW20036_PAT0T0  = 0x4A,
    AW20036_PAT0T1  = 0x4B,
    AW20036_PAT0T2  = 0x4C,
    AW20036_PAT0T3  = 0x4D,
    AW20036_PAT1T0  = 0x4E,
    AW20036_PAT1T1  = 0x4F,
    AW20036_PAT1T2  = 0x50,
    AW20036_PAT1T3  = 0x51,
    AW20036_PAT2T0  = 0x52,
    AW20036_PAT2T1  = 0x53,
    AW20036_PAT2T2  = 0x54,
    AW20036_PAT2T3  = 0x55,
    AW20036_PAT0CFG = 0x56,
    AW20036_PAT1CFG = 0x57,
    AW20036_PAT2CFG = 0x58,
    AW20036_PATGO   = 0x59,
    AW20036_SIZE    = 0x80

} AW20036Function;

/// @brief 
typedef enum AW20036CURRENT {

    AW20036_CURRENT_10MA    = 0x0,
    AW20036_CURRENT_20MA    = 0x1,
    AW20036_CURRENT_30MA    = 0x2,
    AW20036_CURRENT_40MA    = 0x3,
    AW20036_CURRENT_60MA    = 0x4,
    AW20036_CURRENT_80MA    = 0x5,
    AW20036_CURRENT_120MA   = 0x6,
    AW20036_CURRENT_160MA   = 0x7,
    AW20036_CURRENT_3_3MA   = 0x8,
    AW20036_CURRENT_6_7MA   = 0x9,
    AW20036_CURRENT_13_3MA  = 0xB,
    AW20036_CURRENT_26_7MA  = 0xD,
    AW20036_CURRENT_53_3MA  = 0xF

} AW20036Current;

/// @brief 
typedef enum AW20036TIME {

    AW20036_TIME_0MS    = 0x0,
    AW20036_TIME_40MS   = 0x0,
    AW20036_TIME_130MS  = 0x1,
    AW20036_TIME_260MS  = 0x2,
    AW20036_TIME_380MS  = 0x3,
    AW20036_TIME_510MS  = 0x4,
    AW20036_TIME_770MS  = 0x5,
    AW20036_TIME_1040MS = 0x6,
    AW20036_TIME_1600MS = 0x7,
    AW20036_TIME_2100MS = 0x8,
    AW20036_TIME_2600MS = 0x9,
    AW20036_TIME_3100MS = 0xA,
    AW20036_TIME_4200MS = 0xB,
    AW20036_TIME_5200MS = 0xC,
    AW20036_TIME_6200MS = 0xD,
    AW20036_TIME_7300MS = 0xE,
    AW20036_TIME_8300MS = 0xF

} AW20036Time;

/// @brief 
typedef enum AW20036ADDRESS {

    AW20036_AD_VDD  = 0x3B,
    AW20036_AD_GND  = 0x3A,
    AW20036_AD_SCL  = 0x38,
    AW20036_AD_SDA  = 0x39

} AW20036Address;

/// @brief 
typedef enum AW20036LOOPSTART {

    AW20036_LOOP_START_T1 = 0x0,
    AW20036_LOOP_START_T2 = 0x1,
    AW20036_LOOP_START_T3 = 0x2,
    AW20036_LOOP_START_T4 = 0x3

} AW20036LoopStart;

/// @brief 
typedef struct AW20036LEDEN {

    uint8_t en0_5   : 6;
    uint8_t en6_11  : 6;
    uint8_t en12_17 : 6;
    uint8_t en18_23 : 6;
    uint8_t en24_29 : 6;
    uint8_t en30_25 : 6;

} AW20036LEDEnable;

typedef struct AW20036DIMFADE {

    uint8_t dim: 6;
    uint8_t fade;

} AW20036DimFade;

typedef struct AW20036PATDIMFADE {

    uint8_t pattern: 2;
    uint8_t dim: 6;
    uint8_t fade;

} AW20036PatDimFade;

/// @brief 
typedef struct AW20036HAL {

    /// @brief Writes to a device register from an I2C Master
    uint32_t (*i2c_reg_write)(const uint8_t s_addr, const uint8_t reg, const void* const data, const uint32_t size);

    /// @brief Reads from a device register from an I2C Master
    uint32_t (*i2c_reg_read)(const uint8_t s_addr, const uint8_t reg, void* const output, const uint32_t size);

} AW20036HAL;

/// @brief 
typedef struct AW20036 {

    AW20036HAL hal;
    AW20036Address addr;
    AW20036Page curr_page;

} AW20036;

/**
 * @brief 
 * 
 * @param hal 
 * @param addr 
 * @return AW20036* 
 */
AW20036* AW20036Init(const AW20036HAL* const hal, const AW20036Address addr);

/**
 * @brief 
 * 
 * @param dev 
 */
void AW23006Deinit(AW23006* const dev);

/**
 * @brief 
 * 
 * @param dev 
 * @param page 
 * @return uint32_t 
 */
uint32_t AW23006SelectPage(const AW23006* const dev, const AW20036Page page);

/**
 * @brief 
 * 
 * @param dev 
 * @return uint32_t 
 */
uint32_t AW20036SWReset(const AW20036* const dev);

/**
 * @brief 
 * 
 * @param dev 
 * @param en 
 * @return uint32_t 
 */
uint32_t AW20036EnableLEDs(const AW20036* const dev, const AW23006LEDEnable* const en);

/**
 * @brief 
 * 
 * @param dev 
 * @return uint32_t 
 */
uint32_t AW20036EnableAllLEDs(const AW20036* const dev);

/**
 * @brief 
 * 
 * @param dev 
 * @param led_low 
 * @param led_high 
 * @param fade 
 * @return uint32_t 
 */
uint32_t AW20036WriteLEDsFade(const AW20036* const dev, const uint8_t led_low, const uint8_t led_high, const uint8_t* const fade);

/**
 * @brief 
 * 
 * @param dev 
 * @param led 
 * @param fade 
 * @return uint32_t 
 */
uint32_t AW20036WriteLEDFade(const AW20036* const dev, const uint8_t led, const uint8_t fade);

/**
 * @brief 
 * 
 * @param dev 
 * @param led 
 * @param dim 
 * @return uint32_t 
 */
uint32_t AW20036WriteLEDDIM(const AW20036* const dev, const uint8_t led, const uint8_t dim);

#endif // include guard