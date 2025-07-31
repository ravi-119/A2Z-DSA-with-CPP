// Pairs
void expalinPairs(){
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};

    cout << p.first << " " << p.second.first << " " << p.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};

    cout << arr[1].second; 
}


// Vector
void expalinVector(){

    Vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    Vector<pair<int, int>>vec;

    v.push_back({1, 2});
    v.emplace_back(1, 2);

    Vector<int> v(5, 100); // 5 elements with value 100
    Vector<int> v(5); // 5 elements with value 0

    Vector<int> v1(5, 20);
    Vector<int> v2(v1); // copy of v1


    vector <int>::iterator it = v.begin();
    it ++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";


    vector <int>::iterator it = v.end(); // points to the next of the last element      
    vector <int>::iterator it = v.rend(); // points to the previous of the first element
    vector <int>::iterator it = v.rbegin(); // points to the last element


    cout<< v[0] << " " << v.at(0); // v[0] is faster than v.at(0)
    cout<< v.back() << " "; // returns the last element 


    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }   

    for (auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for (auto it : v){
        cout << it << " ";
    }   


    // {10, 20, 30, 40, 50}
    v.erase(v.begin() + 2); // {10, 20, 40, 50}

    // {10, 20, 30, 40, 50}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 50}


    // Insert Function in Vector
    vector<int>v(2, 100); // {100, 100}  // 2 elements with value 100
    v.insert(v.begin(), 300); // {300, 100, 100} // insert 300 at the beginning
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100} // insert 2 elements of 10 at the position v.begin() + 1

    v.size(); // returns the number of elements in the vector // O(1)       
    v.pop_back(); // removes the last element

    v1.swap(v2); // swaps the elements of v1 and v2
    v.clear(); // removes all the elements from the vector // O(n)

    // Check if vector is empty
    if (v.empty()){
        cout << "Vector is empty";
    }
        
}

void explainlist(){
    list<int> ls;

    ls.push_back(2); // {2} 
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(3); // {3, 5, 2, 4}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap 

    
}


void expalinDeque(){
    deque<int> dq;

    dq.push_back(2); // {2}
    dq.emplace_back(4); // {2, 4}

    dq.push_front(5); // {5, 2, 4}
    dq.emplace_front(3); // {3, 5, 2, 4}

    dq.pop_back(); // {2, 4}            
    dq.pop_front(); // {4}

    dq.back(); // 4
    dq.front(); // 4

    // rest functions same as vector    
    // begin, end, rbegin, rend, clear, insert, size, swap 

    // random access is possible
}


void explainStack(){
    stack<int> st;

    st.push(1); // {1}
    st.push(2); // {1, 2}
    st.push(3); // {1, 2, 3}
    st.emplace(5); // {1, 2, 3, 5}

    cout << st.top(); // 3  
    st.pop(); // {1, 2}

    cout << st.top(); // 2  

    cout << st.size(); // 2

    // check if stack is empty
    if (st.empty()){}

    stack<int> st1, st2;
    st1.swap(st2);  

}



void expainQueue(){
    queue<int> q;

    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // {1, 2, 9}
    
    cout << q.back(); // 9

    cout << q.front(); // 1

    q.pop(); // {2, 9}

    cout << q.front(); // 2
    
    // size swap empty same as stack

    queue<int> q1, q2;
    q1.swap(q2);

    // swap(q1, q2);

    // print the queue
    while (!q.empty()){
}

void expianPQ(){
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(9); // {2, 5, 8, 9}

    cout << pq.top(); // 9

    pq.top(); // 9
    pq.pop(); // {2, 5, 8}

    cout << pq.top(); // 8

    // size swap empty same as stack

    // minimum priority queue
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(9); // {2, 5, 8, 9}

    cout << pq.top(); // 2      

}


void expalinSet(){
    set<int> st;

    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // functionality of insert in vector can be used also, that only increases
    // efficiency

    // begin, end, rbegin, rend, size, swap, empty are same as vector
    // empty() and swap() are same as those of above 

    auto it = st.find(3); // {1, 2, 3, 4}

    auto it = st.find(6); // {1, 2, 3, 4}

    // {1, 2, 3, 4, 5}
    st.erase(5); // erases 5 // takes logarithmic time


    // {1, 2, 3, 4, 5}
    st.erase(5); // erases 5 // takes logarithmic time

    int cnt = st.count(2); // 1

    // lower_bound() and upper_bound() function works in the same way as it does in vector
    // it does not work in unordered_set

    auto it = st.lower_bound(2); // {1, 2, 3, 4}

    auto it = st.upper_bound(2); // {1, 2, 3, 4}

    auto it = st.upper_bound(4); // {1, 2, 3, 4}

    auto it = st.upper_bound(6); // {1, 2, 3, 4}

    auto it = st.lower_bound(2); // {1, 2, 3, 4}    



    
    
}


void explainMultiSet(){
    multiset<int> ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's are erased

    int cnt = ms.count(1); // 3

    // lower_bound() and upper_bound() function works in the same way as it does in vector
    // it does not work in unordered_set

    auto it = ms.lower_bound(2); // {1, 1, 1}

    auto it = ms.upper_bound(2); // {1, 1, 1}

    auto it = ms.upper_bound(4); // {1, 1, 1} 
    
}    


void expalinUSet(){
    unordered_set<int> st;

    // lower_bound() and upper_bound() function works in the same way as it does in vector
    // it does not work in unordered_set

    auto it = st.lower_bound(2); // {1, 2, 3, 4}

    auto it = st.upper_bound(2); // {1, 2, 3, 4}
}

void explainMap(){
    map<int, int> mp;

    map<int, pair<int, int>> mp;

    map<pair<int, int>, int> mp;

    mp[1] = 2;
    mp.emplace({3, 1});

    mp.insert({2, 4});
    {
        {1, 2}
        {2, 4}
        {3, 1}
    }

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1]; // 2
    cout << mp[5]; // 0 

    auto it = mp.find(3); // {3, 1}

    auto it = mp.find(5); // {3, 1}

    auto it = mp.lower_bound(2); // {1, 2}

    auto it = mp.upper_bound(2); // {3, 1}


    mp.erase(1); // erases 1

    mp.erase(mp.begin()); // erases the first element
    // map is an associative container that stores elements in a key-value pair
    // key is unique and sorted
    // value is not unique and not sorted
    
}

void explainMultiMap(){
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}


void explainUnorderedMap(){
    // same as set and unordered_set, only mpp[key] cannot be used here
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second){
        return true;
    } else if(p1.second > p2.second){
        return false;
    } else{
        if(p1.first > p2.first){
            return true;
        }
    }
    return false;
}

bool comp(pair<int, int> p1, pair<int, int> p2 ){
    if(p1.second < p2.second){
        return true;
    } else if(p1.second > p2.second){
        return false;
    } else{
        if(p1.first > p2.first){}
    }
}



void explainExtra(){
    sort(a, a + n);
    sort(a + 2, a + 4);

    sort(a, a + n, greater<int>());

    sort(a, a + n, comp);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    sort(a, a+n, comp);
    // sort it according to second element
    // if second element is same, then sort it according to first element in descending

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long num = 1664525;
    int cnt = __builtin_popcountll(num);

    string s = "123";
    sort(s.begin(), s.end());

    do{
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
    
}

 