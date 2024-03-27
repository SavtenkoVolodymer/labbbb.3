
#include "VipClient.h"



VipClient::VipClient()
        : VipClient (0){}
VipClient::VipClient (double newdiscount)
        :discount {newdiscount} {}


double VipClient:: getDiscount () {
    return discount;
}