template<class DataType>
struct DNode
{
    DataType Value;
    DNode<DataType> *Next;

    DNode(DataType NextValue, DNode<DataType> *NextElem) : Value{ NextValue }, Next{ NextElem } {}
    DNode(DataType NextValue) : Value{ NextValue }, Next{ nullptr } {}
    
    ~DNode() {std::cout << "Node with Value: " << Value << "destroyed" << "\n"; }
};