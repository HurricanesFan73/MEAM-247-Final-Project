.# MEAM-247-Final-Project
Contraption to Apply 3kg of Normal Load on a Load Cell (Uses a Servo, Load Cell, 2 Potentiometer Joystick, an op-amp array, and Arduino Uno)

This code takes a voltage signal from the joystick and maps it to a degree angle from 0 to 180 and then tells the servo to go to that angle. It continuously prints the angle command to the servo, the actual servo's position in degrees, value of the voltage signal from the joystick, and the amplified signal of the load cell (after going through 3 op amps). The printed load is only passed after the load cell signal has been converted to grams through a conversion formula based on two known weights and their relative voltage signals produced by the op-amp when the load cell is measuring said weights. 
