#include "x8_nrf24.h"
#include "x8_spi.h"

esp_err_t nrf24_read_reg(spi_host_t spi, uint8_t reg, uint8_t *val)
{
    return spi_transfer(spi, &reg, 1, val, 1);
}

esp_err_t nrf24_write_reg(spi_host_t spi, uint8_t reg, uint8_t val)
{
    uint8_t mosi[2] = {(NRF_CMD_W_REGISTER << 5) | reg, val};
    return spi_transfer(spi, mosi, 2, NULL, 0);
}