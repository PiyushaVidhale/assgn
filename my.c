import os
import sys

f = open("r_test", "r")
line = f.readline()
while line:
	if "good" in line :
		print("correct output")
	else :
		print("ERROR")

