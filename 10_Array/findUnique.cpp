// Sample Input 1 : 1 7 2 3 1 6 3 6 2 
// Sample Output 1 : 1 
// Explanation : The array is[2, 3, 1, 6, 3, 6, 2].
// Here, the numbers 2, 3, and 6 are present twice, and the number 1 is present only once.So, the unique number in this array is 1.

    // int findUnique(int *arr, int size)
    // {
    //     //Write your code here
    //     int ans = 0;
    //     for(int i = 0; i<size ; i++){
    //         ans = ans^arr[i];
    //     }
    //     return  ans;
    // }


// problem 2 Intersection in 2 array

// #include<vector>
// using namespace std;
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	int i = 0, j = 0;
//     vector<int> ans;
//     while(i<n && j<m) {
    
//     if(arr1[i]==arr2[j])
//     {
//     	ans.push_back(arr1[i]);
//         i++;
//         j++;
//     }
//     else if (arr1[i] < arr2[j]) {
//   		i++;
//     }
//     else
//     {
//     	j++;
//     }
    
//     }
//     return ans;
// }