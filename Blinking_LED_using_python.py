
import time
import serial
from serial import Serial
ser=serial.Serial('COM4',9600)
while True:
    ser.write('a'.encode('utf-8'))
    time.sleep(2)
    ser.write('b'.encode('utf-8'))
    time.sleep(2)

