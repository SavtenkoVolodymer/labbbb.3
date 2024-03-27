
#ifndef LAB_VIPCLIENT_H
#define LAB_VIPCLIENT_H

#include <iostream>
using namespace std;

class VipClient  {
private:
    double discount;
public:
    VipClient();
    VipClient(double newdiscount);
    ~VipClient () {};

    double getDiscount();

};


#endif //LAB_VIPCLIENT_H
