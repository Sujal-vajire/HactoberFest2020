#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Sep 19 13:21:37 2019

@author: i-flix3
"""

import math
sum_Fx=0
sum_Fy=0
alpha=0
Ques1=int(input("How many number of forces do you have = "))
#x-axis=0
#y-axis=1
a=alpha

print("Now please enter the values of respective forces.")

for i in range(0,Ques1):
    M=int(input("Please enter the magnitude in newton =  ")) 
    theta=int(input("Please enter the angle in degree = "))
    Quad=int(input("Please enter the Quadrant in which the force lies = "))
    R=int(input("Please enter whether the angle is with x-axis or y-axis = "))
    
    if Quad == 1:
        if R==0:
            angle=theta
        else :
            angle=90-theta
    elif Quad==2 :
        if R==0:
            angle=180-theta
        else :
            angle=90+theta
    elif Quad==3:
        if R==0:
            angle=180+theta
        else :
            angle=270-theta
    elif Quad==4:
        if R==0:
            angle=360-theta
        else :
            angle=270+theta
    
    Ax=M*math.cos((math.pi/180)*angle)
    Ay=M*math.sin((math.pi/180)*angle)
    sum_Fx=(sum_Fx+Ax)
    sum_Fy=(sum_Fy+Ay)
    Resultant=math.sqrt((sum_Fx)**2+(sum_Fy)**2)
    a=math.atan((sum_Fy/sum_Fx))                       #R
    a=a*(180.0/math.pi)                                #D
    
    if a<0:
        a=a*(-1)
    else:
        a=a
    
if (sum_Fx<=math.e**11):
    print("summation_Fx=",0)
if (sum_Fy<=math.e**11):
    print("summation_Fy=",0)
    
    
sum_Fx=round(sum_Fx,3)
sum_Fy=round(sum_Fy,3)
Resultant=round(Resultant,3)
a=round(a,3)        
print('summation_Fx=', sum_Fx)
print("summation_Fy=",sum_Fy)
print("Resultant",Resultant)
print("a=",a)

if (theta==0 and sum_Fx==0):
    print("Resultant is along Y-axis")
if (theta==0 and sum_Fy==0):
    print("Resultant is along X-axis.")

if sum_Fx>0 and sum_Fy>0:
    print("Resultant Is in First Quadrant.")
if sum_Fx<0 and sum_Fy>0:
    print("Resultant Is in Second Quadrant.")
if sum_Fx<0 and sum_Fy<0:
    print("Resultant Is in Third Quadrant.")
if sum_Fx>0 and sum_Fy<0:
    print("Resultant Is in Fourth Quadrant.")