//
// Created by 阮颖 on 2019/4/4.
//
#include <iostream>
#include <cstdlib>
#include "Myqueue.cpp"
using namespace std;

class simulator{

    int arrivalLow;
    int arrivalHigh;
    int serviceTimeLow;
    int serviceTimeHigh;
    int customNum;

public:
    simulator();
    int avgWaitTime() const;
};

simulator::simulator() {

    cout << "";
}

int simulator::avgWaitTime() const {

    int currentTime = 0;
    int totalWaitTime = 0;
    int eventTime;
    linkQueue<int> customerQueue;

    for (int i = 0; i < currentTime; ++i) {
        currentTime += arrivalLow + (arrivalHigh - arrivalLow + 1) * rand()/(RAND_MAX + 1);
        customerQueue.enQueue(currentTime);
    }

    currentTime = 0;
    while (!customerQueue.isEmpty()){

        eventTime = customerQueue.deQueue();
        if (eventTime < currentTime)
            totalWaitTime += currentTime - eventTime;
        else currentTime = eventTime;
        currentTime += serviceTimeLow + (serviceTimeHigh - serviceTimeLow)*rand()/(RAND_MAX + 1);
    }
    return totalWaitTime/currentTime;
}
