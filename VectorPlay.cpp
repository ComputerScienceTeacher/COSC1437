#include <vector>
#include <iostream>

using namespace std;

void printVector(vector<int> stdVector);
vector<int> initializeVector(int vectorSize);
long sumVector(long sum, vector<int> myVector);
void capacityMethods(vector<int> myVector);
void modifierMethods(vector<int> myVector);
void elementAccess(vector<int> myVector);
void iteratorMethods(vector<int> myVector);

int main()
{
    vector<int> myVector;
    myVector = initializeVector(20);
    // cout << "the sum of my array is: " << sumVector(0, myVector) << endl;
    //capacityMethods(myVector);
    //modifierMethods(myVector);
    //elementAccess(myVector);
    iteratorMethods(myVector);
    return 0;
}

void iteratorMethods(vector<int> myVector)
{
     // begin(): Returns an iterator pointing to the first element in the vector
    cout << "First element (using begin()): " << *myVector.begin() << endl;

    // end(): Returns an iterator pointing to the theoretical element that follows the last element in the vector
    cout << "Element after the last (using end()): " << *(myVector.end()) << endl;

    // rbegin(): Returns a reverse iterator pointing to the last element in the vector (reverse beginning)
    cout << "Last element (using rbegin()): " << *myVector.rbegin() << endl;

    // rend(): Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (reverse end)
    cout << "Element before the first (using rend()): " << *(myVector.rend()) << endl;

    // cbegin(): Returns a constant iterator pointing to the first element in the vector
    cout << "First element (using cbegin()): " << *myVector.cbegin() << endl;

    // cend(): Returns a constant iterator pointing to the theoretical element that follows the last element in the vector
    cout << "Element after the last (using cend()): " << *(myVector.cend()) << endl;

    // crbegin(): Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning)
    cout << "Last element (using crbegin()): " << *myVector.crbegin() << endl;

    // crend(): Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (reverse end)
    cout << "Element before the first (using crend()): " << *myVector.crend() << endl;
}


void elementAccess(vector<int> myVector)
{
    // reference operator []: Returns a reference to the element at position ‘g’ in the vector
    cout << "Element at position 2 (using []): " << myVector[2] << endl;

    // at(g): Returns a reference to the element at position ‘g’ in the vector
    cout << "Element at position 3 (using at()): " << myVector.at(3) << endl;

    // front(): Returns a reference to the first element in the vector
    cout << "First element (using front()): " << myVector.front() << endl;

    // back(): Returns a reference to the last element in the vector
    cout << "Last element (using back()): " << myVector.back() << endl;

    // data(): Returns a direct pointer to the memory array used internally by the vector to store its owned elements
    int* ptr = myVector.data();
    cout << "Contents of vector using data(): ";
    for (size_t i = 0; i < myVector.size(); ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

/*
 *These methods are used to work with the capactity of the vector
 */
void capacityMethods(vector<int> myVector)
{
    // size(): Returns the number of elements in the vector.
    cout << "Initial size of vector: " << myVector.size() << endl;

    // max_size(): Returns the maximum number of elements that the vector can hold.
    cout << "Max size of vector: " << myVector.max_size() << endl;

    // reserve(): Requests that the vector capacity be at least enough to contain n elements.
    int n = 10;
    myVector.reserve(n);

    // capacity(): Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    cout << "Capacity of vector after reserving space for " << n << " elements: " << myVector.capacity() << endl;

    cout << "These are the elements of the current vector: ";
    printVector(myVector);
    
    // resize(): Resizes the container so that it contains ‘n’ elements.
    int newSize = 5;
    myVector.resize(newSize);

    // size() after resizing
    cout << "Size of vector after resizing to " << newSize << " elements: " << myVector.size() << endl;

    // empty(): Returns whether the container is empty.
    cout << "Is vector empty? " << (myVector.empty() ? "Yes" : "No") << endl;

    cout << "These are the elements of the current vector: ";
    printVector(myVector);

    // shrink_to_fit(): Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    myVector.shrink_to_fit();
    cout << "Capacity of vector after shrinking to fit size: " << myVector.capacity() << endl;
}

void modifierMethods(vector<int> myVector)
{
    // assign(): Assigns new value to the vector elements by replacing old ones
    myVector.assign({6, 7, 8});
    cout << "Vector after assign(): ";
    printVector(myVector);

    // push_back(): Pushes elements into the vector from the back
    myVector.push_back(9);
    cout << "Vector after push_back(): ";
    printVector(myVector);

     // pop_back(): Removes element from the back of the vector
    myVector.pop_back();
    cout << "Vector after pop_back(): ";
    printVector(myVector);

    // insert(): Inserts new elements before the element at the specified position
    myVector.insert(myVector.begin() + 2, 10);
    cout << "Vector after insert(): ";
    printVector(myVector);

    // erase(): Removes element from specified position
    myVector.erase(myVector.begin() + 1);
    cout << "Vector after erase(): ";
    printVector(myVector);

    // Declare and initialize another vector
    vector<int> anotherVector = {11, 12, 13};

    // swap(): Swaps contents of two vectors
    myVector.swap(anotherVector);
    cout << "Vector after swap(): ";
    printVector(myVector);

    cout << "Another vector after swap(): ";
    printVector(anotherVector);

    // clear(): Removes all elements of the vector
    anotherVector.clear();

    cout << "Another vector after clear(): ";
    printVector(anotherVector);

    // emplace(): Inserts new element at position
    myVector.emplace(myVector.begin() + 1, 14);

    cout << "Vector after emplace(): ";
    printVector(myVector);

    // emplace_back(): Inserts new element at the end
    myVector.emplace_back(15);

    cout << "Vector after emplace_back(): ";
    printVector(myVector);



}

void printVector(vector<int> myVector)
{
    for(auto item : myVector)
    {
        cout << item << " ";
    }
    cout << endl;
}

void printVector(vector<string> myVector)
{
    for(auto item : myVector)
    {
        cout << item << " ";
    }
    cout << endl;
}

long sumVector(long sum, vector<int> myVector) { 
    if (myVector.empty()) {
        return sum;
    }
    sum += myVector.back();
    myVector.pop_back();
    return sumVector(sum, myVector);
}

vector<int> initializeVector(int vectorSize)
{
    vector<int> intVector;
    srand(time(0));
    for (int i = 0; i<vectorSize; i ++)
    {   
        intVector.push_back((rand()%100)+1);
    }

    printVector(intVector);
    return intVector;
}