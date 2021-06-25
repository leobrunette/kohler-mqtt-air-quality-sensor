# kohler-mqtt-air-quality-sensor
This repository ontains the current firmware, kicad diagram, and mounting plate.
The current state of the device is functional to the point of the prototyping. Where the Arduino Micro communicates with the Honeywell Particle Sensor and sends that data over I2C to the ESP2866 through the logic level converter. However the firmware on the ESP8266 needs to be finished to retrieve the data from the SGP30 over I2C and to connect to the MQTT server and start putting out data.
### Note: The Molex connector to the Honeywell Particle Sensor is extremely fragile. I currently have the board mounted to the old mounting plate to keep it stable while the other mounting plate is made. This molex connecter should be remade so that it does not cause issues down the line.
The google sheet kohler-air-quality is up to date with hours and parts.
