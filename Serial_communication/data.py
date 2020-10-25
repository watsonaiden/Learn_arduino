import serial
import time
import struct

ser = serial.Serial('COM3', 9600)
ser.close()
ser.open()
time.sleep(.5)
iterations = 0
while True:
    if ser.inWaiting() > 0:
        print('recv', ser.readline())
    if ser.is_open:
        print("attempted send")
        if iterations % 2 == 0:
            ser.write('1'.encode())
        else:
            ser.write('0'.encode())
        iterations += 1
    time.sleep(.5)
