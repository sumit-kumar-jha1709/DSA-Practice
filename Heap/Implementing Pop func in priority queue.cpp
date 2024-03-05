int pop(vector<int> &heap)
{
    // Write you code here.
    int size=heap.size();
    if(size==0) return -1;

    int maxi=INT_MIN;
    int position=0;

    for(int i=0; i<size; i++)
    {
        if(heap[i]>maxi)
        {
            maxi=heap[i];
            position=i;
        }
    }
    heap.erase(heap.begin()+position);

    return maxi;


}

// Code Snippet of the push function: 
//
//     void push(vector<int> &heap, int x)
//     {
//           heap.push_back(x);
//
//            // Posistion of the current inserted element.
//            int pos=heap.size()-1;
//
//            // Shifting the element up until it reaches the top most node if it is larger than its parent.
//            while(pos>0)
//            {
//                int parent = (pos-1)/2;
//                if(heap[pos] > heap[parent])
//                {
//                    swap(heap[parent],heap[pos]);
//                    pos=parent;
//               }
//              else
//              {
//                  // As parent is larger the element now is in its correct position. 
//                  break;
//              }
//          }
//      }