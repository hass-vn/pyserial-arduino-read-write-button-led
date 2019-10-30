import serial
ser = serial.Serial('/dev/ttyUSB1', baudrate=9600)#change your port win 'com' linux '/dev/tty...'
while True:
    state = int(ser.readline().decode())
    if state == 1:
        print('ok')
        ser.write('1'.encode())


#        ser.write('1'.encode())
