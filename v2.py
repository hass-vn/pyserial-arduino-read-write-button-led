import serial
ser = serial.Serial('/dev/ttyUSB1', baudrate=9600)
while True:
    state = int(ser.readline().decode())
    if state == 1:
        print('ok')
        ser.write('1'.encode())


#        ser.write('1'.encode())