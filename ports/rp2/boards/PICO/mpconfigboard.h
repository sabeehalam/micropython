// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "Raspberry Pi Pico"
#define MICROPY_HW_FLASH_STORAGE_BYTES          (1408 * 1024)

// Enable networking.
#define MICROPY_PY_NETWORK                (1)

// Wiznet HW config.
#define MICROPY_HW_WIZNET_SPI_ID          (1)
#define MICROPY_HW_WIZNET_SPI_BAUDRATE    (20 * 1000 * 1000)
#define MICROPY_HW_WIZNET_SPI_SCK         (10)
#define MICROPY_HW_WIZNET_SPI_MOSI        (11)
#define MICROPY_HW_WIZNET_SPI_MISO        (12)
#define MICROPY_HW_WIZNET_PIN_CS          (13)
#define MICROPY_HW_WIZNET_PIN_RST         (15)
// Connecting the INTN pin enables RECV interrupt handling of incoming data.
#define MICROPY_HW_WIZNET_PIN_INTN        (21)
