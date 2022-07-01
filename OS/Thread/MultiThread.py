from threading import Thread
from time import *

class hello(Thread):
    def run(self):
        for i in range(5):
            print("hello")
            sleep(1)
        
class hii(Thread):
    def run(self):
        for i in range(5):
            print("hii")
            sleep(1)
        
t1=hello()
t2=hii()
t1.start()
t2.start()

t1.join()
t2.join()

print("bye") #main thread call
