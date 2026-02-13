// Last updated: 2/13/2026, 12:56:33 PM
class ProductOfNumbers {
public:
vector <int> prefix;
    ProductOfNumbers() 
    {
        prefix.push_back(1);
    }
    
    void add(int num) 
    {
        if(num == 0)
        {
            prefix.clear();
            prefix.push_back(1);
            return;
        }
        prefix.push_back(prefix.back()*num);
    }
    
    int getProduct(int k) 
    {
        if(k >= prefix.size())
            return 0;
        return prefix.back()/ prefix[prefix.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */