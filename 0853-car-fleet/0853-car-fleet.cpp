class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector <pair <int, int>> car;
        for(int i = 0; i < speed.size(); i++)
            car.push_back({position[i], speed[i]});

        sort(car.rbegin(), car.rend());

        int fleet = 0;
        double prev = 0;
        for(auto val : car)
        {
            double time = (double)(target - val.first)/val.second;
            if(time > prev)
            {
                fleet++;
                prev = time;
            }
        }

        return fleet;
    }
};