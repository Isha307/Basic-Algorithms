from threading import Thread
import time
counter = 0
def increase_counter(x):
    global counter
    cnt = counter
    cnt += x
    time.sleep(0.5)
    counter = cnt
    
if __name__ == "__main__":
    t1 = Thread(target=increase_counter, args=(20, ))
    t2 = Thread(target=increase_counter, args=(10, ))
    t1.start()
    t2.start()
    t1.join()
    t2.join()
    print(counter)
