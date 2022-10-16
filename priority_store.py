#201251
import simpy

def production(env, store):
    for i in [simpy.PriorityItem('1','mobile'), simpy.PriorityItem('1','car') , simpy.PriorityItem('1','laptop')]:
        print(f"production started for product {i}",end="\n\n")        
        yield env.timeout(1)
        yield store.put(i)
        print(f"Item {i} stored into the store at {env.now}",end="\n\n")




def consumer(env,store):
    while 1:
        print(f"Consumer requestd item at {env.now}")
        yield env.timeout(3)
        item = yield store.get()
        print(f"Customer get product {item} at {env.now}",end="\n\n")

        




env = simpy.Environment()
str = simpy.PriorityStore(env, capacity=3)
env.process(production(env,str))
env.process(consumer(env,str))
env.run(until = 10)
print('201251')
