# OilSense

## LSE BYPASS option
- true if external 32.768 kHz clock signal is on OSC_IN pin
- false if using standard 32.768 kHz quartz crystal as the LSE clock source

## TODO
- CFUN=1/CFUN=4 einbauen/testen

## Checklist

[] Check softdog watchdog
[] Check message content
[] Check tr_info output

[x] Dismount antenna during ***network*** connect
  [x] force no connection
  [x] Check error message

[] Dismount antenna during ***stack*** connect
  []


## Deployment
[] Change debug level
[] Change device ID
[] Config LPConfig.hpp


### Function test
- Insert SIM card
- Set code to Cellular Config Mode and upload

### Update Firmware
- 

### Change ICCID in data base


## CAN bus
* very good CANBus example includeing interrupts and mailboxes (https://forums.mbed.com/t/api-can-lose-messages/15638)
* CANBus bug with RX interrupts (https://github.com/ARMmbed/mbed-os/issues/6714)
  Workaround seems to work but we keep polling for now
