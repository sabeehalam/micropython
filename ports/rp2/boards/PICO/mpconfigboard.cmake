# cmake file for Raspberry Pi Pico
set(PICO_BOARD wiznet_w5100s_evb_pico)
set(MICROPY_PY_NETWORK_WIZNET5K W5500)
set(MICROPY_PY_LWIP 1)
set(MICROPY_FROZEN_MANIFEST ${MICROPY_BOARD_DIR}/manifest.py)
