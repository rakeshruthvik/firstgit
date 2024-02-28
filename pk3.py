import time

start_time = time.time()
for i in range(1, 100000000):
    print(i)
end_time = time.time()

print("Elapsed time:", end_time - start_time, "seconds")

