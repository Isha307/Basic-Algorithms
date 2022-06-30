from threading import Thread, Lock
import time


counter = 0
def increase_counter(x,lock):
    lock.acquire()
    global counter
    cnt = counter
    cnt += x
    time.sleep(0.5)
    counter = cnt
    lock.release()
    
if __name__ == "__main__":
    lock = Lock()
    t1 = Thread(target=increase_counter, args=(20,lock ))
    t2 = Thread(target=increase_counter, args=(10,lock ))
    t1.start()
    t2.start()
    t1.join()
    t2.join()
    print(counter)
