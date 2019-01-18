import serial
import urllib.request
import time
ArduinoSerial = serial.Serial('/dev/ttyACM0',9600)
time.sleep(2)
while 1:
	x=ArduinoSerial.readline()
	a=str(x)
	s=[]
	s=a.split()
	print(s)
	url="https://api.thingspeak.com/update?api_key=JTBJZPBAOSVRE4DH&field1={0}&field2={0}".format(s[1]).format(s[2])
	data=urllib.request.urlopen(url)
	print(data)
	
