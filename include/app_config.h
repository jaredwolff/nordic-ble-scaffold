#ifndef SETUP_H
#define SETUP_H

#include "app_util.h"

#define DEVICE_NAME "Scafolding"         /**< Name of device. Will be included in the advertising data. */
#define MANUFACTURER_NAME "Circuit Dojo" /**< Manufacturer. Will be passed to Device Information Service. */
#define APP_ADV_INTERVAL 300             /**< The advertising interval (in units of 0.625 ms. This value corresponds to 187.5 ms). */
#define APP_ADV_DURATION 0               /**< The advertising duration (180 seconds) in units of 10 milliseconds. */
#define APP_BLE_CONN_CFG_TAG 1           /**< A tag identifying the SoftDevice BLE configuration. */

#define MIN_CONN_INTERVAL MSEC_TO_UNITS(100, UNIT_1_25_MS) /**< Minimum acceptable connection interval (0.1 seconds). */
#define MAX_CONN_INTERVAL MSEC_TO_UNITS(200, UNIT_1_25_MS) /**< Maximum acceptable connection interval (0.2 second). */
#define SLAVE_LATENCY 0                                    /**< Slave latency. */
#define CONN_SUP_TIMEOUT MSEC_TO_UNITS(4000, UNIT_10_MS)   /**< Connection supervisory timeout (4 seconds). */

// PB Related
#define BLE_PB_ENABLED true
#define BLE_PB_CONFIG_LOG_ENABLED true
#define BLE_PB_BLE_OBSERVER_PRIO 2

// PB Collector
#define BLE_PB_C_ENABLED true
#define BLE_PB_C_BLE_OBSERVER_PRIO 2
#define BLE_PB_C_CONFIG_LOG_ENABLED true

// Log Config
#define BLE_PB_CONFIG_LOG_LEVEL 3
#define BLE_PB_CONFIG_INFO_COLOR 0
#define BLE_PB_CONFIG_DEBUG_COLOR 3
#define PM_LOG_LEVEL 2

// Security Configuration
// TODO: update these for best security
#define SEC_PARAM_BOND 1                               /**< Perform bonding. */
#define SEC_PARAM_MITM 0                               /**< Man In The Middle protection required. */
#define SEC_PARAM_LESC 0                               /**< LE Secure Connections enabled. */
#define SEC_PARAM_KEYPRESS 0                           /**< Keypress notifications not enabled. */
#define SEC_PARAM_IO_CAPABILITIES BLE_GAP_IO_CAPS_NONE /**< No I/O capabilities. */
#define SEC_PARAM_OOB 0                                /**< Out Of Band data not available. */
#define SEC_PARAM_MIN_KEY_SIZE 7                       /**< Minimum encryption key size. */
#define SEC_PARAM_MAX_KEY_SIZE 16                      /**< Maximum encryption key size. */

// Gatt Queue related
#define NRF_BLE_GQ_ENABLED 1
#define NRF_BLE_GQ_QUEUE_SIZE 4
#define NRF_BLE_GQ_DATAPOOL_ELEMENT_SIZE 20
#define NRF_BLE_GQ_DATAPOOL_ELEMENT_COUNT 8
#define NRF_BLE_GQ_GATTC_WRITE_MAX_DATA_LEN 16
#define NRF_BLE_GQ_GATTS_HVX_MAX_DATA_LEN 16

// Scan related
#define NRF_BLE_SCAN_ENABLED 1
#define NRF_BLE_SCAN_BUFFER 255
#define NRF_BLE_SCAN_NAME_MAX_LEN 32
#define NRF_BLE_SCAN_SHORT_NAME_MAX_LEN 32
#define NRF_BLE_SCAN_SCAN_INTERVAL 160
#define NRF_BLE_SCAN_SCAN_DURATION 0
#define NRF_BLE_SCAN_SCAN_WINDOW 80
#define NRF_BLE_SCAN_MIN_CONNECTION_INTERVAL 7.5
#define NRF_BLE_SCAN_MAX_CONNECTION_INTERVAL 30
#define NRF_BLE_SCAN_SLAVE_LATENCY 0
#define NRF_BLE_SCAN_SUPERVISION_TIMEOUT 4000
// TODO: default to CODED PHY
#define NRF_BLE_SCAN_SCAN_PHY 1

#define NRF_BLE_SCAN_FILTER_ENABLE 1
#define NRF_BLE_SCAN_UUID_CNT 2
#define NRF_BLE_SCAN_NAME_CNT 1
#define NRF_BLE_SCAN_SHORT_NAME_CNT 0
#define NRF_BLE_SCAN_ADDRESS_CNT 8
#define NRF_BLE_SCAN_APPEARANCE_CNT 0

// Discovery
#define BLE_DB_DISCOVERY_ENABLED 1

// Queue
#define NRF_QUEUE_ENABLED 1

#endif //SETUP_H