import sys

if len(sys.argv) < 2:
	print "Mising arguments"
else: 
	for i in range(int(sys.argv[1])+1):
		print "Testing {} times ...".format(i)
