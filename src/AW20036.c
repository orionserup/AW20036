/**
 * @file AW20036.c
 * @author Orion Serup (oserup@proton.me)
 * @brief Contains the Implementation of the AW20036 Functionality
 * @version 0.1
 * @date 2022-12-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/AW20036.h"

// ------------------------------------------- Init and Deinit --------------------------------------- //

AW20036* AW20036Init(AW20036* const dev, const AW20036HAL* const hal, const AW20036Address addr, const uint8_t num_columns) {

}


void AW23006Deinit(AW20036* const dev) {



}

// --------------------------------------------- Basic Helper Functions ---------------------------------------- //

uint8_t AW23006SelectPage(const AW20036* const dev, const AW20036Page page) {


}

/**
 * @brief 
 * 
 * @param sleep 
 * @return uint8_t 
 */
uint8_t AW20036SetSleep(const bool sleep);

/**
 * @brief 
 * 
 * @param dev 
 * @return uint8_t 
 */
uint8_t AW20036SWReset(const AW20036* const dev);

/**
 * @brief 
 * 
 * @param dev 
 * @return uint8_t 
 */
uint8_t AW20036ClearLEDs(const AW20036* const dev);

/**
 * @brief 
 * 
 * @param dev 
 * @return uint8_t 
 */
uint8_t AW20036ReadID(const AW20036* const dev);

// ----------------------------------------- Configuration Functions ---------------------------------------------- //

/**
 * @brief 
 * 
 * @param dev 
 * @param config 
 * @return uint8_t 
 */
uint8_t AW20036ConfigFaultDet(const AW20036* const dev, const AW20036FaultConfig config);

/**
 * @brief 
 * 
 * @param dev 
 * @param clkio_out 
 * @param use_clkio 
 * @return uint8_t 
 */
uint8_t AW20036ConfigClock(const AW20036* const dev, const bool clkio_out, const bool use_clkio);

/**
 * @brief 
 * 
 * @param dev 
 * @param f_width 
 * @param max_current 
 * @param all_on 
 * @return uint8_t 
 */
uint8_t AW20036WriteConfig(const AW20036* const dev, const AW20036FadeWidth f_width, const AW20036Current max_current, const bool all_on)

// ----------------------------------------------- Pattern Functions ------------------------------------------ //

/**
 * @brief 
 * 
 * @param dev 
 * @param pattern 
 * @param pattern 
 * @return uint8_t 
 */
uint8_t AW20036PatternConfigure(const AW20036* const dev, const uint8_t pattern, const AW20036Pattern* const pattern);

/**
 * @brief 
 * 
 * @param dev 
 * @param pattern 
 * @return uint8_t 
 */
uint8_t AW20036StartPattern(const AW20036* const dev, const uint8_t pattern);

/**
 * @brief 
 * 
 * @param dev 
 * @param state 
 * @return uint8_t 
 */
uint8_t AW20036PatternsSetState(const AW20036* const dev, const AW20036PatternsState state);

// --------------------------------------------------- LED State State Setting Functions ---------------------------------------------- //

/**
 * @brief 
 * 
 * @param dev 
 * @param en 
 * @return uint8_t 
 */
uint8_t AW20036SetLEDsState(const AW20036* const dev, const AW20036LEDState* const state);

/**
 * @brief 
 * 
 * @param dev 
 * @return uint32_t 
 */
uint8_t AW20036EnableAllLEDs(const AW20036* const dev);

// --------------------------------------------------- LED Value Setting Functions ------------------------------------------ //

/**
 * @brief 
 * 
 * @param dev 
 * @param led 
 * @param fade 
 * @return uint8_t 
 */
uint8_t AW20036WriteLEDFade(const AW20036* const dev, const uint8_t led, const uint8_t fade);

/**
 * @brief 
 * 
 * @param dev 
 * @param led 
 * @param dim 
 * @return uint8_t 
 */
uint8_t AW20036WriteLEDDim(const AW20036* const dev, const uint8_t led, const uint8_t dim);

/**
 * @brief 
 * 
 * @param dev 
 * @param led 
 * @param fade 
 * @return uint8_t 
 */
uint8_t AW20036WriteLEDPat(const AW20036* const dev, const uint8_t led, const uint8_t pattern);

// --------------------------------------------------- LEDs Value Setting Function ------------------------------------------- //

/**
 * @brief 
 * 
 * @param dev 
 * @param led_low 
 * @param led_high 
 * @param fade 
 * @return uint8_t 
 */
uint8_t AW20036WriteLEDsFade(const AW20036* const dev, const uint8_t led_low, const uint8_t led_high, const uint8_t* const fade);

/**
 * @brief 
 * 
 * @param dev 
 * @param led_low 
 * @param led_high 
 * @param dim_fade 
 * @return uint8_t 
 */
uint8_t AW20036WriteLEDsFade(const AW20036* const dev, const uint8_t led_low, const uint8_t led_high, const AW20036DimFade* const dim_fade);

/**
 * @brief 
 * 
 * @param dev 
 * @param led_low 
 * @param led_high 
 * @param pat_dim_fade 
 * @return uint8_t 
 */
uint8_t AW20036WriteLEDsPatDimFade(const AW20036* const dev, const uint8_t led_low, const uint8_t led_high, const AW20036PatDimFade* const pat_dim_fade);


// --------------------------------------------------------- Low Level Exposed API ------------------------------------------- //

/**
 * @brief 
 * 
 * @param dev 
 * @param addr 
 * @param data 
 * @param size 
 * @return uint8_t 
 */
uint8_t AW20036WriteData(const AW20036* const dev, const uint8_t addr, const void* const data, const uint8_t size);

/**
 * @brief 
 * 
 * @param dev 
 * @param addr 
 * @param output 
 * @param size 
 * @return uint8_t 
 */
uint8_t AW20036ReadData(const AW20036* const dev, const uint8_t addr, void* const output, const uint8_t size);