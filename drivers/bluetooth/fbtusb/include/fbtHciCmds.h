#ifndef _FBT_HCI_COMMANDS_H
#define _FBT_HCI_COMMANDS_H

#include "fbtHciOpcodes.h"
#include "fbtHciSizes.h"

#include "fbtHciCmdStructs.h"
#include "fbtHciParms.h"

// Utility macro to build a command CMD from ints constituent OCF/OGF
#define FBT_HCI_CMD(nOCF, nOGF) ((unsigned short) nOCF + (unsigned short)(nOGF << 10))

// HCI Command CMDs
// Link control CMDs
#define FBT_HCI_CMD_INQUIRY								FBT_HCI_CMD(FBT_HCI_OCF_INQUIRY, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_INQUIRY_CANCEL						FBT_HCI_CMD(FBT_HCI_OCF_INQUIRY_CANCEL, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_PERIODIC_INQUIRY_MODE				FBT_HCI_CMD(FBT_HCI_OCF_PERIODIC_INQUIRY_MODE, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_EXIT_PERIODIC_INQUIRY_MODE			FBT_HCI_CMD(FBT_HCI_OCF_EXIT_PERIODIC_INQUIRY_MODE, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_CREATE_CONNECTION					FBT_HCI_CMD(FBT_HCI_OCF_CREATE_CONNECTION, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_DISCONNECT							FBT_HCI_CMD(FBT_HCI_OCF_DISCONNECT, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_ADD_SCO_CONNECTION					FBT_HCI_CMD(FBT_HCI_OCF_ADD_SCO_CONNECTION, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_ACCEPT_CONNECTION_REQUEST			FBT_HCI_CMD(FBT_HCI_OCF_ACCEPT_CONNECTION_REQUEST, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_REJECT_CONNECTION_REQUEST			FBT_HCI_CMD(FBT_HCI_OCF_REJECT_CONNECTION_REQUEST, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_LINK_KEY_REQUEST_REPLY				FBT_HCI_CMD(FBT_HCI_OCF_LINK_KEY_REQUEST_REPLY, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_LINK_KEY_REQUEST_NEGATIVE_REPLY		FBT_HCI_CMD(FBT_HCI_OCF_LINK_KEY_REQUEST_NEGATIVE_REPLY, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_PIN_CODE_REQUEST_REPLY				FBT_HCI_CMD(FBT_HCI_OCF_PIN_CODE_REQUEST_REPLY, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_PIN_CODE_REQUEST_NEGATIVE_REPLY		FBT_HCI_CMD(FBT_HCI_OCF_PIN_CODE_REQUEST_NEGATIVE_REPLY, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_CHANGE_CONNECTION_PACKET_TYPE		FBT_HCI_CMD(FBT_HCI_OCF_CHANGE_CONNECTION_PACKET_TYPE, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_AUTHENTICATION_REQUESTED			FBT_HCI_CMD(FBT_HCI_OCF_AUTHENTICATION_REQUESTED, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_SET_CONNECTION_ENCRYPTION			FBT_HCI_CMD(FBT_HCI_OCF_SET_CONNECTION_ENCRYPTION, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_CHANGE_CONNECTION_LINK_KEY			FBT_HCI_CMD(FBT_HCI_OCF_CHANGE_CONNECTION_LINK_KEY, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_MASTER_LINK_KEY						FBT_HCI_CMD(FBT_HCI_OCF_MASTER_LINK_KEY, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_REMOTE_NAME_REQUEST					FBT_HCI_CMD(FBT_HCI_OCF_REMOTE_NAME_REQUEST, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_READ_REMOTE_SUPPORTED_FEATURES		FBT_HCI_CMD(FBT_HCI_OCF_READ_REMOTE_SUPPORTED_FEATURES, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_READ_REMOTE_VERSION_INFORMATION		FBT_HCI_CMD(FBT_HCI_OCF_READ_REMOTE_VERSION_INFORMATION, FBT_HCI_OGF_LINK_CONTROL)
#define FBT_HCI_CMD_READ_CLOCK_OFFSET					FBT_HCI_CMD(FBT_HCI_OCF_READ_CLOCK_OFFSET, FBT_HCI_OGF_LINK_CONTROL)

// Link policy CMDs
#define FBT_HCI_CMD_HOLD_MODE					FBT_HCI_CMD(FBT_HCI_OCF_HOLD_MODE, FBT_HCI_OGF_LINK_POLICY)
#define FBT_HCI_CMD_SNIFF_MODE                  FBT_HCI_CMD(FBT_HCI_OCF_SNIFF_MODE, FBT_HCI_OGF_LINK_POLICY)
#define FBT_HCI_CMD_EXIT_SNIFF_MODE             FBT_HCI_CMD(FBT_HCI_OCF_EXIT_SNIFF_MODE, FBT_HCI_OGF_LINK_POLICY)
#define FBT_HCI_CMD_PARK_MODE                   FBT_HCI_CMD(FBT_HCI_OCF_PARK_MODE, FBT_HCI_OGF_LINK_POLICY)
#define FBT_HCI_CMD_EXIT_PARK_MODE              FBT_HCI_CMD(FBT_HCI_OCF_EXIT_PARK_MODE, FBT_HCI_OGF_LINK_POLICY)
#define FBT_HCI_CMD_QOS_SETUP                   FBT_HCI_CMD(FBT_HCI_OCF_QOS_SETUP, FBT_HCI_OGF_LINK_POLICY)
#define FBT_HCI_CMD_ROLE_DISCOVERY              FBT_HCI_CMD(FBT_HCI_OCF_ROLE_DISCOVERY, FBT_HCI_OGF_LINK_POLICY)
#define FBT_HCI_CMD_SWITCH_ROLE                 FBT_HCI_CMD(FBT_HCI_OCF_SWITCH_ROLE, FBT_HCI_OGF_LINK_POLICY)
#define FBT_HCI_CMD_READ_LINK_POLICY_SETTINGS	FBT_HCI_CMD(FBT_HCI_OCF_READ_LINK_POLICY_SETTINGS, FBT_HCI_OGF_LINK_POLICY)
#define FBT_HCI_CMD_WRITE_LINK_POLICY_SETTINGS	FBT_HCI_CMD(FBT_HCI_OCF_WRITE_LINK_POLICY_SETTINGS, FBT_HCI_OGF_LINK_POLICY)

// Host controller & baseband command CMDs
#define FBT_HCI_CMD_SET_EVENT_MASK                            FBT_HCI_CMD(FBT_HCI_OCF_SET_EVENT_MASK, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_RESET                                     FBT_HCI_CMD(FBT_HCI_OCF_RESET, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_SET_EVENT_FILTER                          FBT_HCI_CMD(FBT_HCI_OCF_SET_EVENT_FILTER, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_FLUSH                                     FBT_HCI_CMD(FBT_HCI_OCF_FLUSH, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_PIN_TYPE                             FBT_HCI_CMD(FBT_HCI_OCF_READ_PIN_TYPE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_PIN_TYPE                            FBT_HCI_CMD(FBT_HCI_OCF_WRITE_PIN_TYPE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_CREATE_NEW_UNIT_KEY                       FBT_HCI_CMD(FBT_HCI_OCF_CREATE_NEW_UNIT_KEY, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_STORED_LINK_KEY                      FBT_HCI_CMD(FBT_HCI_OCF_READ_STORED_LINK_KEY, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_STORED_LINK_KEY                     FBT_HCI_CMD(FBT_HCI_OCF_WRITE_STORED_LINK_KEY, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_DELETE_STORED_LINK_KEY                    FBT_HCI_CMD(FBT_HCI_OCF_DELETE_STORED_LINK_KEY, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_CHANGE_LOCAL_NAME                         FBT_HCI_CMD(FBT_HCI_OCF_CHANGE_LOCAL_NAME, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_LOCAL_NAME                           FBT_HCI_CMD(FBT_HCI_OCF_READ_LOCAL_NAME, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_CONNECTION_ACCEPT_TIMEOUT            FBT_HCI_CMD(FBT_HCI_OCF_READ_CONNECTION_ACCEPT_TIMEOUT, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_CONNECTION_ACCEPT_TIMEOUT           FBT_HCI_CMD(FBT_HCI_OCF_WRITE_CONNECTION_ACCEPT_TIMEOUT, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_PAGE_TIMEOUT                         FBT_HCI_CMD(FBT_HCI_OCF_READ_PAGE_TIMEOUT, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_PAGE_TIMEOUT                        FBT_HCI_CMD(FBT_HCI_OCF_WRITE_PAGE_TIMEOUT, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_SCAN_ENABLE                          FBT_HCI_CMD(FBT_HCI_OCF_READ_SCAN_ENABLE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_SCAN_ENABLE                         FBT_HCI_CMD(FBT_HCI_OCF_WRITE_SCAN_ENABLE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_PAGE_SCAN_ACTIVITY                   FBT_HCI_CMD(FBT_HCI_OCF_READ_PAGE_SCAN_ACTIVITY, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_PAGE_SCAN_ACTIVITY                  FBT_HCI_CMD(FBT_HCI_OCF_WRITE_PAGE_SCAN_ACTIVITY, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_INQUIRY_SCAN_ACTIVITY                FBT_HCI_CMD(FBT_HCI_OCF_READ_INQUIRY_SCAN_ACTIVITY, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_INQUIRY_SCAN_ACTIVITY               FBT_HCI_CMD(FBT_HCI_OCF_WRITE_INQUIRY_SCAN_ACTIVITY, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_AUTHENTICATION_ENABLE                FBT_HCI_CMD(FBT_HCI_OCF_READ_AUTHENTICATION_ENABLE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_AUTHENTICATION_ENABLE               FBT_HCI_CMD(FBT_HCI_OCF_WRITE_AUTHENTICATION_ENABLE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_ENCRYPTION_MODE                      FBT_HCI_CMD(FBT_HCI_OCF_READ_ENCRYPTION_MODE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_ENCRYPTION_MODE                     FBT_HCI_CMD(FBT_HCI_OCF_WRITE_ENCRYPTION_MODE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_CLASS_OF_DEVICE                      FBT_HCI_CMD(FBT_HCI_OCF_READ_CLASS_OF_DEVICE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_CLASS_OF_DEVICE                     FBT_HCI_CMD(FBT_HCI_OCF_WRITE_CLASS_OF_DEVICE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_VOICE_SETTING                        FBT_HCI_CMD(FBT_HCI_OCF_READ_VOICE_SETTING, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_VOICE_SETTING                       FBT_HCI_CMD(FBT_HCI_OCF_WRITE_VOICE_SETTING, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_AUTOMATIC_FLUSH_TIMEOUT              FBT_HCI_CMD(FBT_HCI_OCF_READ_AUTOMATIC_FLUSH_TIMEOUT, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_AUTOMATIC_FLUSH_TIMEOUT             FBT_HCI_CMD(FBT_HCI_OCF_WRITE_AUTOMATIC_FLUSH_TIMEOUT, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_NUM_BROADCAST_RETRANSMISSIONS        FBT_HCI_CMD(FBT_HCI_OCF_READ_NUM_BROADCAST_RETRANSMISSIONS, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_NUM_BROADCAST_RETRANSMISSIONS       FBT_HCI_CMD(FBT_HCI_OCF_WRITE_NUM_BROADCAST_RETRANSMISSIONS, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_HOLD_MODE_ACTIVITY                   FBT_HCI_CMD(FBT_HCI_OCF_READ_HOLD_MODE_ACTIVITY, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_HOLD_MODE_ACTIVITY                  FBT_HCI_CMD(FBT_HCI_OCF_WRITE_HOLD_MODE_ACTIVITY, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_TRANSMIT_POWER_LEVEL                 FBT_HCI_CMD(FBT_HCI_OCF_READ_TRANSMIT_POWER_LEVEL, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_SCO_FLOW_CONTROL_ENABLE              FBT_HCI_CMD(FBT_HCI_OCF_READ_SCO_FLOW_CONTROL_ENABLE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_SCO_FLOW_CONTROL_ENABLE             FBT_HCI_CMD(FBT_HCI_OCF_WRITE_SCO_FLOW_CONTROL_ENABLE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_SET_HOST_CONTROLLER_TO_HOST_FLOW_CONTROL  FBT_HCI_CMD(FBT_HCI_OCF_SET_HOST_CONTROLLER_TO_HOST_FLOW_CONTROL, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_HOST_BUFFER_SIZE                          FBT_HCI_CMD(FBT_HCI_OCF_HOST_BUFFER_SIZE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_HOST_NUMBER_OF_COMPLETED_PACKETS          FBT_HCI_CMD(FBT_HCI_OCF_HOST_NUMBER_OF_COMPLETED_PACKETS, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_LINK_SUPERVISION_TIMEOUT             FBT_HCI_CMD(FBT_HCI_OCF_READ_LINK_SUPERVISION_TIMEOUT, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_LINK_SUPERVISION_TIMEOUT            FBT_HCI_CMD(FBT_HCI_OCF_WRITE_LINK_SUPERVISION_TIMEOUT, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_NUMBER_OF_SUPPORTED_IAC              FBT_HCI_CMD(FBT_HCI_OCF_READ_NUMBER_OF_SUPPORTED_IAC, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_CURRENT_IAC_LAP                      FBT_HCI_CMD(FBT_HCI_OCF_READ_CURRENT_IAC_LAP, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_CURRENT_IAC_LAP                     FBT_HCI_CMD(FBT_HCI_OCF_WRITE_CURRENT_IAC_LAP, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_PAGE_SCAN_PERIOD_MODE                FBT_HCI_CMD(FBT_HCI_OCF_READ_PAGE_SCAN_PERIOD_MODE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_PAGE_SCAN_PERIOD_MODE               FBT_HCI_CMD(FBT_HCI_OCF_WRITE_PAGE_SCAN_PERIOD_MODE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_READ_PAGE_SCAN_MODE                       FBT_HCI_CMD(FBT_HCI_OCF_READ_PAGE_SCAN_MODE, FBT_HCI_OGF_CONTROL_BASEBAND)
#define FBT_HCI_CMD_WRITE_PAGE_SCAN_MODE                      FBT_HCI_CMD(FBT_HCI_OCF_WRITE_PAGE_SCAN_MODE, FBT_HCI_OGF_CONTROL_BASEBAND)

// Informational parameters CMDs
#define FBT_HCI_CMD_READ_LOCAL_VERSION_INFORMATION         FBT_HCI_CMD(FBT_HCI_OCF_READ_LOCAL_VERSION_INFORMATION, FBT_HCI_OGF_INFORMATIONAL_PARAMETERS)
#define FBT_HCI_CMD_LOCAL_SUPPPROTED_FEATURES              FBT_HCI_CMD(FBT_HCI_OCF_LOCAL_SUPPPROTED_FEATURES, FBT_HCI_OGF_INFORMATIONAL_PARAMETERS)
#define FBT_HCI_CMD_READ_BUFFER_SIZE                       FBT_HCI_CMD(FBT_HCI_OCF_READ_BUFFER_SIZE, FBT_HCI_OGF_INFORMATIONAL_PARAMETERS)
#define FBT_HCI_CMD_READ_COUNTRY_CODE                      FBT_HCI_CMD(FBT_HCI_OCF_READ_COUNTRY_CODE, FBT_HCI_OGF_INFORMATIONAL_PARAMETERS)
#define FBT_HCI_CMD_READ_BD_ADDR                           FBT_HCI_CMD(FBT_HCI_OCF_READ_BD_ADDR, FBT_HCI_OGF_INFORMATIONAL_PARAMETERS)

// Status parameters CMDs
#define FBT_HCI_CMD_READ_FAILED_CONTACT_COUNTER            FBT_HCI_CMD(FBT_HCI_OCF_READ_FAILED_CONTACT_COUNTER, FBT_HCI_OGF_STATUS_PARAMETERS)
#define FBT_HCI_CMD_RESET_FAILED_CONTACT_COUNTER           FBT_HCI_CMD(FBT_HCI_OCF_RESET_FAILED_CONTACT_COUNTER, FBT_HCI_OGF_STATUS_PARAMETERS)
#define FBT_HCI_CMD_GET_LINK_QUALITY                       FBT_HCI_CMD(FBT_HCI_OCF_GET_LINK_QUALITY, FBT_HCI_OGF_STATUS_PARAMETERS)
#define FBT_HCI_CMD_READ_RSSI                              FBT_HCI_CMD(FBT_HCI_OCF_READ_RSSI, FBT_HCI_OGF_STATUS_PARAMETERS)

// Testing CMDs
#define FBT_HCI_CMD_READ_LOOPBACK_MODE                     FBT_HCI_CMD(FBT_HCI_OCF_READ_LOOPBACK_MODE, FBT_HCI_OGF_TESTING)
#define FBT_HCI_CMD_WRITE_LOOPBACK_MODE                    FBT_HCI_CMD(FBT_HCI_OCF_WRITE_LOOPBACK_MODE, FBT_HCI_OGF_TESTING)
#define FBT_HCI_CMD_ENABLE_DEVICE_UNDER_TEST_MODE          FBT_HCI_CMD(FBT_HCI_OCF_ENABLE_DEVICE_UNDER_TEST_MODE, FBT_HCI_OGF_TESTING)

// Packet Boundry Flags (ORed into the upper 8 bits of the connection handle)
#define FBT_HCI_PACKET_BOUNDRY_FIRST         0x20
#define FBT_HCI_PACKET_BOUNDRY_NEXT          0x10

// HCI header types
#define FBT_HCI_SYNC_HCI_COMMAND_PACKET        0x01
#define FBT_HCI_SYNC_ACL_DATA_PACKET           0x02
#define FBT_HCI_SYNC_SCO_DATA_PACKET           0x03
#define FBT_HCI_SYNC_HCI_EVENT_PACKET          0x04

// Packet types for use in CreateConnection
#define FBT_HCI_PACKET_TYPE_DM1	0x0008	// 1 time slot, 1-18 bytes of data, FEC encoded
#define FBT_HCI_PACKET_TYPE_DH1	0x0010	// 1 time slot, 1-28 bytes of data, not FEC encoded

#define FBT_HCI_PACKET_TYPE_DM3	0x0400	// 3 time slots, 2-123 bytes of data, FEC encoded
#define FBT_HCI_PACKET_TYPE_DH3	0x0800	// 3 time slots, 2-185 bytes of data, not FEC encoded

#define FBT_HCI_PACKET_TYPE_DM5	0x4000	// 5 time slots, 2-226 bytes of data, FEC encoded
#define FBT_HCI_PACKET_TYPE_DH5	0x8000	// 3 time slots, 2-341 bytes of data, not FEC encoded

// LAP codes for use in Inquiry
#define FBT_HCI_LAP_GIAC	0x9E8B33
#define FBT_HCI_LAP_LIAC	0x9E8B00

// Link Types
#define FBT_HCI_LINK_TYPE_SCO          0x00
#define FBT_HCI_LINK_TYPE_ACL          0x01

// Maximum number of each type of handle
#define FBT_HCI_MAX_ALLOWED_ACL_HANDLES        32
#define FBT_HCI_MAX_ALLOWED_SCO_HANDLES        4

#endif // _FBT_HCI_COMMANDS_H