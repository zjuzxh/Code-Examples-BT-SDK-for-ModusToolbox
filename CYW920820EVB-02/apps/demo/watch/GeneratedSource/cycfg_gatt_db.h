/***************************************************************************//**
* File Name: app_gatt_db.h
* Version: 1.1
*
* Description:
* Definitions for constants used in the device's GATT database and function
* prototypes.
* This file should not be modified. It was automatically generated by
* Bluetooth Configurator 1.1.0 build 89.
*
********************************************************************************
* Copyright 2019, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef __GATT_DATABASE_H__
#define __GATT_DATABASE_H__

#define __UUID_SERVICE_GENERIC_ACCESS               0x1800u
#define __UUID_CHARACTERISTIC_DEVICE_NAME           0x2A00u
#define __UUID_CHARACTERISTIC_APPEARANCE            0x2A01u
#define __UUID_SERVICE_GENERIC_ATTRIBUTE            0x1801u
#define __UUID_SERVICE_BATTERY                      0x180Fu
#define __UUID_CHARACTERISTIC_BATTERY_LEVEL         0x2A19u
#define __UUID_SERVICE_DEVICE_INFORMATION           0x180Au
#define __UUID_CHARACTERISTIC_MANUFACTURER_NAME_STRING    0x2A29u
#define __UUID_CHARACTERISTIC_MODEL_NUMBER_STRING    0x2A24u
#define __UUID_CHARACTERISTIC_FIRMWARE_REVISION_STRING    0x2A26u
#define __UUID_CHARACTERISTIC_SOFTWARE_REVISION_STRING    0x2A28u

/* Service Generic Access */
#define HDLS_GAP                                    0x0001u
/* Characteristic Device Name */
#define HDLC_GAP_DEVICE_NAME                        0x0002u
#define HDLC_GAP_DEVICE_NAME_VALUE                  0x0003u
/* Characteristic Appearance */
#define HDLC_GAP_APPEARANCE                         0x0004u
#define HDLC_GAP_APPEARANCE_VALUE                   0x0005u

/* Service Generic Attribute */
#define HDLS_GATT                                   0x0006u

/* Service Battery */
#define HDLS_BAS                                    0x0007u
/* Characteristic Battery Level */
#define HDLC_BAS_BATTERY_LEVEL                      0x0008u
#define HDLC_BAS_BATTERY_LEVEL_VALUE                0x0009u

/* Service Device Information */
#define HDLS_DIS                                    0x000Au
/* Characteristic Manufacturer Name String */
#define HDLC_DIS_MANUFACTURER_NAME_STRING           0x000Bu
#define HDLC_DIS_MANUFACTURER_NAME_STRING_VALUE     0x000Cu
/* Characteristic Model Number String */
#define HDLC_DIS_MODEL_NUMBER_STRING                0x000Du
#define HDLC_DIS_MODEL_NUMBER_STRING_VALUE          0x000Eu
/* Characteristic Firmware Revision String */
#define HDLC_DIS_FIRMWARE_REVISION_STRING           0x000Fu
#define HDLC_DIS_FIRMWARE_REVISION_STRING_VALUE     0x0010u
/* Characteristic Software Revision String */
#define HDLC_DIS_SOFTWARE_REVISION_STRING           0x0011u
#define HDLC_DIS_SOFTWARE_REVISION_STRING_VALUE     0x0012u

/* External Lookup Table Entry */
typedef struct
{
    uint16_t handle;
    uint16_t max_len;
    uint16_t cur_len;
    uint8_t  *p_data;
} gatt_db_lookup_table_t;

/* External definitions */
extern const uint8_t  gatt_database[];
extern const uint16_t gatt_database_len;
extern gatt_db_lookup_table_t app_gatt_db_ext_attr_tbl[];
extern const uint16_t app_gatt_db_ext_attr_tbl_size;
extern uint8_t app_gap_device_name[];
extern const uint16_t app_gap_device_name_len;
extern uint8_t app_gap_appearance[];
extern const uint16_t app_gap_appearance_len;
extern uint8_t app_bas_battery_level[];
extern const uint16_t app_bas_battery_level_len;
extern uint8_t app_dis_manufacturer_name_string[];
extern const uint16_t app_dis_manufacturer_name_string_len;
extern uint8_t app_dis_model_number_string[];
extern const uint16_t app_dis_model_number_string_len;
extern uint8_t app_dis_firmware_revision_string[];
extern const uint16_t app_dis_firmware_revision_string_len;
extern uint8_t app_dis_software_revision_string[];
extern const uint16_t app_dis_software_revision_string_len;

#endif /* __GATT_DATABASE_H__ */
