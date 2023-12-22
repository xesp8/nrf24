#ifndef __x8_nrf24_h__
#define __x8_nrf24_h__

#include "driver/spi.h"
#include "esp_err.h"

#define NRF_CMD_R_REGISTER 0x00
#define NRF_CMD_W_REGISTER 0x01

#define NRF_REG_CONFIG 0x00
#define NRF_REG_SETUP_RETR 0x04

esp_err_t nrf24_read_reg(spi_host_t spi, uint8_t reg, uint8_t *val);
esp_err_t nrf24_write_reg(spi_host_t spi, uint8_t reg, uint8_t val);

#endif