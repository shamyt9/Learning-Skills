import threading as t
class Example:
   def printG(self):
     for i in range(5):
       print("Hello, World!")
for i in range(5):
   print("Hello")   
e1=Example()
t1=t.Thread(target=e1.printG)  
t1.start()   
    