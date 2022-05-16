long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        if (m == 0 || n == 0)
        return 0;
          if (n < m)
        return -1;
  
        sort(a.begin(),a.end());
        long long min_diff = INT_MAX;
        for(int i=0;i+m-1<n;i++)
        {
            long long diff = a[i + m - 1] - a[i];
            if(diff<min_diff)
             min_diff = diff;
        }
        
        return min_diff;
        }
