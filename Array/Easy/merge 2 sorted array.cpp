vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here


    // int i=0,j=0; //pointers
    // vector<int> unions; //Union vector
    // int n=a.size();//size of vector a
    // int m=b.size();//size of vector b

    // while(i<n && j<m){
    //     if(a[i]<=b[j])
    //     {
    //         if(unions.size()==0||unions.back()!=a[i])
    //         {
    //             unions.push_back(a[i]);
    //             i++;
    //         }     
    //     }
    //     else{
    //         if(unions.size()==0 || unions.back()!=b[j])
    //         {
    //             unions.push_back(b[j]);
    //             j++;
    //         }
    //     }
    // }
    // while(i<n)
    // {
    //     if(unions.back()!=a[i])
    //     {
    //         unions.push_back(a[i]);
    //         i++;
    //     }
    // }
    // while(j<m)
    // {
    //     if(unions.back()!=b[j])
    //     {
    //         unions.push_back(b[j]);
    //         j++;
    //     }
    // }

    // return unions;

    /*
    
    Above written code has the time complexity of O(n+m) however still rejected by coding ninjas's CodeStudio.
    
    */

    for(int i=0; i<b.size(); i++){

       a.push_back(b[i]);

    }
 
   sort(a.begin(), a.end());

    vector<int> ans;

   for(int i=1; i<a.size()+1; i++){

       if(a[i] != a[i-1]){

           ans.push_back(a[i-1]);

       }

   }

   return ans;

/*

    Above written code has time complexity of o(n)+o(mlogm)+o(m) but still accepted by coding studios.

*/
}