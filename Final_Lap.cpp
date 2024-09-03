// #include<bits/stdc++.h> 
// using namespace std ; 

// int majElement(vector<int>& arr , int n ){
//     map<int, int> mpp; 

//     for(int i = 0 ; i< n ; i++){
//         mpp[arr[i]]++;
//     }

//     for(auto it: mpp){
//         if(it.second > n/2){
//             return it.first;
//         }
//     }
//     return -1; 
// }

// int main(){

//     int n ; cin>>n ; 
//     vector<int> arr(n);

//    for(int i = 0 ; i< n ; i++){
//     cin>>arr[i];
//    }

//    int result = majElement(arr,n);
//    cout<<result<<endl ;
//     return 0 ; 
// }



// //  Q 2: Max subaaray sum


// #include<bits/stdc++.h> 
// using namespace std ; 

// int maxSubArraySum(vector<int>& arr , int n ){

//     int max = INT_MIN ; 
//     int sum = 0 ; 

//     for(int i = 0 ; i< n ; i++){
//         sum+= arr[i];

//         if(sum>arr[i]){
//             max = sum ; 
//         }

//         if(sum<0){
//             sum = 0 ; 
//         }
//     }
//     return max ; 
// }

// int main(){
//     int n ; cin>>n ; 

//     vector<int> arr(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }
//     int result = maxSubArraySum(arr,n);
//     cout<<result<<endl ; 
//     return 0 ; 
// }



//  // Q3: stock buy and sell 

// #include<bits/stdc++.h> 
// using namespace std ; 

// int stockBuyAndSell(vector<int>& arr , int n ){
//     int minPrice = INT_MAX; 
//     int maxProfit = 0 ; 

//     for(int i = 0 ; i< n ; i++){
//         int minPrice = min(minPrice , arr[i]);
//         maxProfit = max(maxProfit, arr[i]-minPrice);
//     }
//     return maxProfit; 
// }

// int main(){
//     int n ; cin>>n ; 

//     vector<int> arr(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }
//     int result = stockBuyAndSell(arr,n);
//     cout<<result<<endl ; 
//     return 0 ; 
// }



// #include<bits/stdc++.h> 
// using namespace std ; 

// vector<int> positiveNegative(vector<int>& arr , int n ){

//     vector<int> pos ; 
//     vector<int> neg ; 
    
//     for(int i=0;i<n;i++){
      
//       if(arr[i]>0) pos.push_back(arr[i]);
//       else neg.push_back(arr[i]);
      
//     }

//     for (int i = 0 ; i < n/2 ; i++){

//         arr[2*i] = pos[i];
//         arr[2*i+1] = neg[i];
//     }

//     return arr ; 


// }

// int main(){
//     int n ; cin>>n ; 

//     vector<int> arr(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }
//     vector<int> ans = positiveNegative(arr,n);
  
//     for (int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }
//     return 0 ; 
// }




//  Leaders in An Array


// #include<bits/stdc++.h>
// using namespace std ; 

// vector<int> printLeaders(vector<int>& arr , int n ){


//     vector<int> ans ; 

//     int max = arr[n-1] ; 
//     ans.push_back(arr[n-1]);

//     for(int i = n-2 ; i >= 0 ; i--){
//         if(arr[i]> max){
//             ans.push_back(arr[i]);
//             max = arr[i];
//         }
        
//     }
//     return ans ; 
// }

// int main(){

//     int n ; cin>>n ; 

//     vector<int> arr(n);

//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }

//     vector<int> result = printLeaders(arr,n);

//     for(int i = 0 ; i< result.size() ; i++){
//         cout<<result[i]<<endl ; 
//     }
//     return 0 ; 
// }



// longest Consective Sequence 

// #include <bits/stdc++.h> 
// using namespace std; 

// vector<int> longestSeq(vector<int>& arr, int n) {
//     if (n == 0) return {};

//     sort(arr.begin(), arr.end());  // Sort the array to ensure consecutive elements are adjacent

//     int lastsmaller = INT_MIN;  // Initialize with a value that is not in the array
//     vector<int> ans;  // To store the longest sequence of consecutive numbers
//     vector<int> temp;  // To store the current sequence of consecutive numbers

//     temp.push_back(arr[0]);  // Start the first sequence with the first element
//     lastsmaller = arr[0];  // Set the first element as the "lastsmaller"

//     for (int i = 1; i < n; i++) {
//         if (arr[i] == lastsmaller + 1) {  // Check if the current element is consecutive
//             temp.push_back(arr[i]);
//             lastsmaller = arr[i];  // Update the lastsmaller value to the current element
//         } else if (arr[i] != lastsmaller) {  // If the sequence is broken
//             break;  // Exit the loop
//         }
//     }

//     if (temp.size() > ans.size()) {
//         ans = temp;  // Assign the longest sequence found so far
//     }

//     return ans;  // Return the longest sequence
// }

// int main() {
//     int n; 
//     cin >> n; 

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<int> result = longestSeq(arr, n);

//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] <<" "; 
//     }
    
//     return 0; 
// }


// //  subarray with sum k 



// #include<bits/stdc++.h> 
// using namespace std ; 

// int subarraySum(vector<int>& arr , int k){
//     int n = arr.size();
//     int prefixsum = 0 ; 
//     int cnt = 0 ; 


//     map<int,int> mpp;

//     for(int i = 0 ; i< n ; i++){
//         prefixsum +=arr[i];
//         int remove = prefixsum-k;
//         cnt = mpp[remove];
//     }
//     mpp[prefixsum] +=1 ; 
//     return cnt ; 
// }

// int main(){
//     int n ; cin>>n ; 

//     int k ; cin>>k ; 

//     vector<int> arr(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }

//     int result = subarraySum(arr,k);
//     cout<<result<<endl; 
//     return 0 ; 
// }

// // Longest subarray sum sum with K 

// #include<bits/stdc++.h>
// using namespace std ; 

// int maxLen(vector<int>& arr , int k){
//     int n = arr.size();

//     int left = 0 ; 
//     int right = 0 ;
//     int sum = 0 ;  
//     int maxLen = 0 ; 

//     while(right<n){
//         sum += arr[right];

//         while(sum > k && left <= right){
//             sum -= arr[left];
//             left++;
//         }
//         if(sum == k){
//             maxLen = max(maxLen, right-left +1);
//         }
//         right++;
//     }
//     return maxLen;
    
// }

// int main(){

//     int n ; cin>>n ; 
//     int k ; cin>>k ; 

//     vector<int> arr(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }

//     int result = maxLen(arr,k);
//     cout<<result<<endl ; 
//     return 0 ; 

// }


// // left rotate array by one place 

// #include<bits/stdc++.h> 
// using namespace std ; 

// vector<int> leftrotate(vector<int>& arr , int n ){
//     int temp = arr[0];
//     for(int i = 0 ; i< n ; i++){
//         arr[i]=arr[i+1];
//     }
//     arr[n-1]= temp;
//     return arr ; 
// }
// int main(){

//     int n ; 
//     cin>>n ; 

//     vector<int> arr(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }

//     vector<int> result = leftrotate(arr,n);
//     for(int i = 0 ; i< n ; i++){
//         cout<<result[i]<<endl;
//     }

//     return 0 ; 
// }



//  reverse array by K places 


// #include<bits/stdc++.h> 
// using namespace std ; 

// void Reverse(vector<int>& arr , int start , int end ){
//     while(start<end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp ; 
//         start++ ; 
//         end-- ; 
//     } 
// }

// vector<int> leftrotatebykplace(vector<int>& arr , int n , int k){
   
//     k = k % n;
    
//     Reverse(arr , 0 , k-1);
//     Reverse(arr , k, n-1);
//     Reverse(arr , 0 , n-1);

//     return arr ; 
    
// }
// int main(){
//     int n ; cin>>n ; 
//     int k ; cin>>k ; 

//     vector<int> arr(n);
//     for(int i = 0 ; i < n ; i++){
//         cin>>arr[i];
//     }

//     vector<int> result = leftrotatebykplace(arr ,n, k);
//     for(int i = 0 ; i< n ; i++){
//         cout<<result[i]<<endl;
//     }
//     return 0 ; 
// }



// // 2 SUM 

// #include<bits/stdc++.h> 
// using namespace std ; 

// bool twoSum(vector<int>&arr, int n , int k){
//     sort(arr.begin(),arr.end());
//     int start = 0 ; 
//     int end = n-1 ; 
//     while(start < end){
//         int sum = arr[start]+arr[end];
//         if(sum==k){
//             return true ; 
            
//         } 
//         else if(sum > k){
//             start++ ; 
//         }
//         else{
//             end-- ; 
//         }
//     }
//     return false ;      
        
// }

// bool twoSum(vector<int>& arr, int n, int k) {
//     sort(arr.begin(), arr.end());
//     int start = 0; 
//     int end = n - 1; 

//     while(start < end) {
//         int sum = arr[start] + arr[end];
//         if(sum == k) {
//             return true; 
//         } else if(sum < k) {
//             start++; 
//         } else {
//             end--; 
//         }
//     }
//     return false; 
// }

// int main(){

//     int n ; cin>>n ; 

//     int k ; cin>>k ; 

//     vector<int> arr(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }

//     bool result = twoSum(arr, n, k);
//     cout<<result<<endl ; 
//     return 0 ; 
// }



// //  Rotate Matrix by 90 

// #include<bits/stdc++.h>
// using namespace std ; 

// void rotate(vector < vector < int >> & matrix){
    
//     int n = matrix.size();


//     // phele transpose nikal liya 
//     for (int i = 0 ; i< n ; i++){
//         for(int j = i ; j< n ; j++){
//             swap(matrix[i][j] , matrix[j][i]);
//         }
//     }

//     // ab reverse kar do 

//     for(int i = 0 ; i< n ; i++){
//         // reverse(matrix[i].begin(), matrix[i].end());
//         reverse(matrix[i].begin(), matrix[i].end());
//     }

  
// }

// int main(){

//     int n ; cin>>n ;
    

//     vector<vector<int>> matrix(n , vector<int>(n));

//     for(int i = 0 ; i< n ; i++){
//         for(int j = 0 ; j < n ; j++){
//             cin>>matrix[i][j];
//         }
//     }
//     rotate(matrix);


//     for(int i = 0 ; i< n ; i++){
//         for(int j = 0 ; j< n ; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl ;
//     }

//     return 0 ; 
// }


// #include<bits/stdc++.h> 
// using namespace std ;

// vector<int> majorityElement(vector<int> arr , int n ){

//     map<int,int> mpp ; 
//     int mini = int(n/3)+1 ;

//     vector<int> ans ; 

//     for(int i = 0 ; i< n ; i++){
//         mpp[arr[i]]++;

//         if(mpp[arr[i]]== mini){
//             ans.push_back(arr[i]);
//         }
//         if(ans.size() == 2) break ;     
//     }
//     return ans ;
// }


// int main(){

//     int n ; cin>> n ; 

//     vector<int> arr(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }

//     vector<int> result = majorityElement(arr,n);

//     for(int i : result){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0 ; 
// }


// // largest Subarray with 0 sum 


// #include<bits/stdc++.h>
// using namespace std ; 



// int main(){

//     int n ; cin>>n 
//     vector<int> arr(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }
//     int result = largestsub(arr , n);
//     cout<<result<<endl ; 
//     return 0 ; 
// }




// //  merger overlapping interval 

// #include<bits/stdc++.h>
// using namespace std ; 


// class solution{
// public: 

//     vector<int> mergeIntervals(vector<int>& arr){

//         int n = arr.size();

//         vector<int> ans ; 

//         sort(arr.begin(), arr.end());

//         for(int i = 0 ; i< n ; i++){
//             if(ans.empty() || arr[i][0]> ans.back()[1]){
//                 ans.push_back(arr[i][0]);
//             }
//             else{
//                 ans.back()[1] = max(ans.back()[1] , arr[i][1]); 
//             }

//         }
//         return ans ; 
//     }


// }



// vector<int> mergeIntervals(vector<int> & arr){
//     int n = arr.size();

//     vector<int> ans ; 

//     sort(arr.begin(), arr.end());

//     for(int i 0 ; i< n ; i++){
//         if(ans.empty() || ans[i][0] > arr(0)[1] ){
//             ans.push_back(arr[i]);
//         }
//         else{
//             ans.back()[1] = max(ans.back()[1], arr[i][0]);
//         }
//     }
//     return ans ; 
// }




// //  Merge two sorted Arrays 

// #include<bits/stdc++.h>
// using namespace std ; 

// vector<int> mergedIntervals(vector<int>& arr1 , vector<int>& arr2){

//     int n = arr1.size();
//     int m = arr2.size();

//     int i = 0;
//     int j = 0;

//     vector<int> ans ; 

//     while(  i < arr1.size() &&  j<<arr2.size()){
//         if(arr1[i]< arr2[j]){
//             ans.push_back(arr1[i]);
//             i++;
//         }
//         else{
//             ans.push_back(arr2[j]);
//         }

//     }
//     while(i < arr1.size()){
//         ans.push_back(arr1[i]);
//         i++;
//     }

//     while( j<arr2.size()){
//         ans.push_back(arr2[j]);
//         j++;
//     }

//     return ans ; 

// }

// int main(){
//     int n ; cin>>n ; 
//     int m ; cin>>m ;

//     vector<int> arr1(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr1[i];
//     }

//     vector<int> arr2(m);
//     for(int j = 0 ; j < m ; j++){
//         cin>>arr2[j];
//     }

//     vector<int> result = mergedIntervals(arr1 , arr2);
//     for(int i = 0 ; i< 0 ; i++){
//         cout<<result[i]<<" ";
//         cout<<endl ; 
//     }
//     return 0 ; 

// }


// #include<bits/stdc++.h>
// using namespace std ; 




// pair<int, int> missRepeat(vector<int>& arr, int n) {

//     int hash[n + 1] = {0};

//     for(int i = 0; i < n; i++) {
//         hash[arr[i]]++;
//     }

//     int missing = -1; 
//     int repeating = -1; 

//     for(int i = 1; i <= n; i++) {  
//         if(hash[i] == 2) repeating = i; 
//         else if(hash[i] == 0) missing = i; 
//         if(repeating != -1 && missing != -1) {
//             break; 
//         }
//     }

//     return {repeating, missing};  
// }
// int main(){
//     int n ; cin>>n ;

//     vector<int> arr(n);

//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }

//     pair<int,int> result = missRepeat(arr ,n);
//     cout<<result.first<<" "<<result.second<<endl;

//     return 0 ; 

// }



// //  Reverses Pair

// #include<bits/stdc++.h>
// using namespace std ; 

// int  reversePair(vector<int>& arr){
//     int n = arr.size();

//     int cnt = 0 ; 
//     for(int i = 0 ; i< n ;i++){
//         int j = i+1 ; 
//         if(arr[i]>  2* arr[j]){
//             cnt++;
//         }
//     }
//     return cnt ; 
// }

// int main(){
//     int n ; cin>>n ; 

//     vector<int> arr(n);
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }

//     int result = reversePair(arr);
//     cout<<result ; 
//     return 0 ; 

// }




#include <bits/stdc++.h>
using namespace std;

int numberOfInversions(vector<int>&arr, int n) {

   
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        // int j = i+1 ; 
        // if(arr[i]>arr[j]){
        //     cnt++ ; 
        // }
        for(int j = i+1 ; j< n ; j++){
            if(arr[i]> arr[j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int n ; cin>>n ; 

    vector<int> arr(n);

    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }

    int result = numberOfInversions(arr , n);
    cout<<result<<endl ; 
}
