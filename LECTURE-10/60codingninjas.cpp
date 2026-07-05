// find triplets of the given number with the given number is K:

//  Find All Triplets With Zero Sum

vector<vector<int>> findTriplets(vector<int>arr, int n) {
	vector < vector<int> ans;

	for(int i=0; i<arr.size(); i++){
		for(int j=i+1; j<arr.size(); j++){
			for(int k=j+1; k<arr.size(); k++){
				if(arr[i] + arr[j]+ arr[k] == 0){


				
            	vector<int> temp = {arr[i], arr[j], arr[k]};
                sort(temp.begin(), temp.end());
                ans.push_back(temp);	
				}
			}
		}
	}
   sort(ans.begin(), ans.end());
   return ans;
}





