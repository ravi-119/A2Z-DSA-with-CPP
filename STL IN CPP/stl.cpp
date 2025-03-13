// Pairs
void expalinPairs(){
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};

    cout << p.first << " " << p.second.first << " " << p.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};

    cout << arr[1].second; 
}
