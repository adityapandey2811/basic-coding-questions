int maxMeetings(int start[], int end[], int n)
    {
        int i,k,count=1;
        vector<pair<int,int>> v;
        for(i=0;i<n;i++){
            v.push_back(make_pair(end[i],start[i]));
        }
        sort(v.begin(),v.end());
        k = v[0].first;
        for(i=1;i<n;i++){
            if(v[i].second > k){
                count++;
                k = v[i].first;
            }
        }
        return count;
    }
