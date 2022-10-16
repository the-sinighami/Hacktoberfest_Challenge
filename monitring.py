import simpy
from random import*
import matplotlib.pyplot as plt


data0 = []
data1 = []

def car(env):
    while True:
        print('Start parking at %d' %env.now)
        parking_duration = randint(0,5)
        yield env.timeout(parking_duration)
        data0.append(env.now)
        
        print('Start driving at %d' %env.now)
        trip_duration = randint(0,5)
        yield env.timeout(trip_duration)
        data1.append(env.now)        
        
env = simpy.Environment()
env.process(car(env))
env.run(until = 15)

print("Parking arrival time", end="")
print(data0)

print("Parking leaving time", end="")
print(data1)

l = min(len(data0),len(data1))

for i in range(l) :
    plt.bar(data0[i], height=1, width=(data1[i] - data0[i]), color='green', align='edge')
    if (i+1) <= l :
        plt.bar(data1[i], height=1, width=(data0[i+1]-data1[i]) , color='orange', align='edge')
plt.show()