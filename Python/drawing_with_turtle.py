import turtle

sayeed= turtle.Turtle()
sayeed.speed(0)
sayeed.color("dark blue")

def square(length, angle):
	for i in range(4):		
		sayeed.forward(length)
		sayeed.right(angle)

    
for i in range(500):
	square(100, 90)
	sayeed.right(11)



turtle.done()