import serial
ser = serial.Serial('/dev/tty.usbserial-14130',9600)

while True:
    val=input("Enter a number: ")

    if val=='1':
        ser.write(b'H')
        print(val)
    elif val=='0':
        ser.write(b'L')
        print(val)

