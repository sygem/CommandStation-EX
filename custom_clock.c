#include "stm32f4xx_hal.h"

#ifdef __cplusplus
extern "C" {
#endif

void SystemClock_Config(void) {
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    // 1. Enable power interface clock and configure voltage scaling
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    // 2. Initialize the HSI (Internal High-Speed) Oscillator and its PLL
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
    RCC_OscInitStruct.PLL.PLLM = 16;           // HSI is 16MHz. 16MHz / 16 = 1MHz base for PLL
    RCC_OscInitStruct.PLL.PLLN = 336;          // 1MHz * 336 = 336MHz
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2; // 336MHz / 2 = 168MHz Core System Clock
    RCC_OscInitStruct.PLL.PLLQ = 7;            // 336MHz / 7 = 48MHz (Perfect for USB/SDIO clocking)
    HAL_RCC_OscConfig(&RCC_OscInitStruct);

    // 3. Initialize the CPU, AHB, and APB buses clocks using the PLL output
    RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | 
                                   RCC_CLOCKTYPE_PCLK1  | RCC_CLOCKTYPE_PCLK2);
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;  // HCLK = 168MHz
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;   // PCLK1 = 42MHz (Max allowed)
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;   // PCLK2 = 84MHz (Max allowed)
    
    HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5);
}

#ifdef __cplusplus
}
#endif