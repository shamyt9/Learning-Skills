from threading import Thread
def displayNum(n,msg):
  for num in range(1,n):
    print(msg)
def display(n):
     for num in range(1,n):
      print(num) 
t1=Thread(target=displayNum,args=(6,"Hello"))
t1.start()    
t2=Thread(target=display,args=(6,))
t2.start()
    
