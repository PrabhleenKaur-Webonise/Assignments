PRABHLEEN KAUR

CONCURRENCY AND PARALLELISM ASSIGNMENT

AIM: Need to implement a dining philosopher problem using synchronization like mutex or semaphores.

DINING PHILOSOPHER PROBLEM:

    • It states that there are 5 philosophers sharing a circular table and they eat and think alternatively. 
    • There is a bowl of rice for each of the philosophers and 5 chopsticks.
    • A philosopher needs both their right and left chopstick to eat. A hungry philosopher may only eat if there are both chopsticks available. Otherwise a philosopher puts down their chopstick and begin thinking again.
    • It is a classic synchronization problem which is used to evaluate situations where there is a need of allocating multiple resources to multiple processes

SOLUTION:

    • From the problem statement, it is clear that a philosopher can think for an indefinite amount of time, but when a philosopher starts eating, he/ she has to stop at some point of time
    • The philosopher is in an endless cycle of thinking and eating
    • When a philosopher wants to eat the rice, wait for the chopstick at his left and picks up that chopstick. Then waits for the right chopstick to be available, and then picks it too.
    • After eating, puts both the chopsticks down
    • Correctness properties it needs to satisfy are :
        ◦ Mutual Exclusion Principle– No two Philosophers can have the two forks simultaneously.
        ◦ Free from Deadlock–Each philosopher can get the chance to eat in a certain finite time.
        ◦ Free from Starvation –When few Philosophers are waiting then one gets a chance to eat in a while.

    • No strict Alternation.
    • Proper utilization of time.
    • A solution of the Dining Philosophers Problem is to use a semaphore to represent a chopstick. A chopstick can be picked up by executing a wait operation on the semaphore and released by executing a signal semaphore. 
    • Initially the elements of the chopstick are initialized to 1 as the chopsticks are on the table and not picked up by a philosopher.
    • The idea is to find a solution so that none of the philosophers would starve, i.e. never have the chance to acquire the forks necessary for him to eat.

