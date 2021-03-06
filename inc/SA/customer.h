
#ifndef SA_CUSTOMER_H_
#define SA_CUSTOMER_H_

#include <iostream>
#include<cstring>
using namespace std;
class SACustomer
{
     private :
     	  int mCustID;
          int mSatisfaction;
          double mMoney;
          int mTickets;
          int mHunger;
          int mStamina;
          int mNausea;
          int mPatience;
          string mFavoriteFood;
          int mThrillSeeking;
		  bool mBusy;
		  bool mQueue;
     public :
          SACustomer();
          SACustomer(int);
          ~SACustomer();
          void setMSatisfaction(int);
          int getMSatisfaction();
          void setMMoney(int);
          int getMMoney();
          void setMTickets(int);
          int getMTickets();
          void setMHunger (int);
          int getMHunger();
          void setMStamina (int);
          int getMStamina();
          void setMNausea (int);
          int getMNausea();
          void setMPatience (int);
          int getMPatience();
          void setMBusy(bool);
          bool getMBusy();
          void setMQueue(bool);
          bool getMQueue();    
};
#endif  // SA_CUSTOMER_H_
