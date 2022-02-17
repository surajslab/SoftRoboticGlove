


import serial
from vpython import *

finger =  cylinder(length=20,color=color.red ,radius=5,pos=vector(1,0,0),up=vector(1,0,0))
degreelabel=  label(text="Degree of Rotation : ",pos=finger.pos,height=16,yoffset = 100,xoffset = 100)

data = serial.Serial('COM4',9600)

while(True):
	val=data.readline().decode()
	print(val)
	degreelabel.text= "Degree of Rotation : "+str(int(val))+'^'
	finger.length=int(val)

