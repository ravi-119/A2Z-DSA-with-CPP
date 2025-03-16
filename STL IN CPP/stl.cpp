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


    vector <int>::iterator it = v.end();
    vector <int>::iterator it = v.rend();
    vector <int>::iterator it = v.rbegin();


    cout<< v[0] << " " << v.at(0);
    cout<< v.back() << " ";


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
    vector<int>v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}


    



}