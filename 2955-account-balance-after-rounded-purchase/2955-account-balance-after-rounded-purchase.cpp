class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        if(purchaseAmount%10!=0 && purchaseAmount%5==0){
            purchaseAmount+=5;
        }
        else if (purchaseAmount%10>5){
            purchaseAmount+=(10-purchaseAmount%10);
        }
        else if (purchaseAmount %10 <5){
            purchaseAmount-=purchaseAmount%10;
        }
        return (100-purchaseAmount);
    }
};