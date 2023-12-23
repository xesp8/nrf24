#ifndef __x8_nrf24_h__
#define __x8_nrf24_h__

#include "driver/spi.h"
#include "esp_err.h"

#define NRF_CMD_R_REGISTER 0x00
#define NRF_CMD_W_REGISTER 0x01

#define NRF_REG_CONFIG          0x00
#define NRF_REG_EN_AA           0x01
#define NRF_REG_EN_RXADDR       0x02
#define NRF_REG_SETUP_AW        0x03
#define NRF_REG_SETUP_RETR      0x04
#define NRF_REG_RF_CH           0x05
#define NRF_REG_RF_SETUP        0x06
#define NRF_REG_STATUS          0x07
#define NRF_REG_OBSERVE_TX      0x08
#define NRF_REG_RPD             0x09
#define NRF_REG_RX_ADDR_P0      0x0A
#define NRF_REG_RX_ADDR_P1      0x0B
#define NRF_REG_RX_ADDR_P2      0x0C
#define NRF_REG_RX_ADDR_P3      0x0D
#define NRF_REG_RX_ADDR_P4      0x0E
#define NRF_REG_RX_ADDR_P5      0x0F
#define NRF_REG_TX_ADDR         0x10
#define NRF_REG_RX_PW_P0        0x11
#define NRF_REG_RX_PW_P1        0x12
#define NRF_REG_RX_PW_P2        0x13
#define NRF_REG_RX_PW_P3        0x14
#define NRF_REG_RX_PW_P4        0x15
#define NRF_REG_RX_PW_P5        0x16
#define NRF_REG_FIFO_STATUS     0x17
#define NRF_REG_DYNPD           0x1C
#define NRF_REG_FEATURE         0x1D

/*
R_RX_PAYLOAD 0110 0001
W_TX_PAYLOAD 1010 0000
FLUSH_TX 1110 0001
FLUSH_RX 1110 0010
REUSE_TX_PL 1110 0011
R_RX_PL_WIDa 0110 0000
W_ACK_PAYLOADa 1010 1PPP
W_TX_PAYLOAD_NO_ACK 1011 0000
NOP 1111 1111
*/

esp_err_t nrf24_read_reg(spi_host_t spi, uint8_t reg, uint8_t *val);
esp_err_t nrf24_write_reg(spi_host_t spi, uint8_t reg, uint8_t val);

#endif