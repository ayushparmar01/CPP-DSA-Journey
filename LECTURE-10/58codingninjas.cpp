//  Intersection Of Two Sorted Arrays
// time complexity is more

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;

	for(int i=0; i<n; i++){
		int element = arr1[i];

			for(int j=0; j<m; j++){
                if(element < arr2[j])
                break;
				if(element == arr2[j]){
					ans.push_back(element);
					arr2[j] = -11452;
					break;
				}
			}
	}

	return ans;
}


// time complexity is less.

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0; j=0; 
	vector<int> ans;  // to store the answer
	while(i<n && j<m){

		if(arr1[i] == arr2[j]){

			ans.push_back(arr[i]);
			i++;
			j++;
		}
		else if (arr[i] < arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
}