class Student{
    private:
    int rollNo;
    int hight;
    int weight;
    public:
    // Destuctor
    ~Student()
    {
        cout<<"Distructor is called"<<endl;
    }
    //Defalult constructer
    Student()
    {
        cout<<"Hello i am Constructert"<<endl;
    }
    // Parametrised Constructer
    Student(int rollNo)
    {
        cout<<"Parametrised constructer is called"<<endl;
        this->rollNo = rollNo;
    }
    Student(int rollNo,int weight)
    {
        cout<<"3rd constructor is called"<<endl;
        this->rollNo = rollNo;
        this->weight = weight;
    } 
     Student(int rollNo,int weight,int hight)
    {
        cout<<"4rd constructor is called"<<endl;
        this->rollNo = rollNo;
        this->weight = weight;
        this->hight = hight;
    }
    void display()
    {
        cout<<rollNo<<" "<<hight<<" "<<weight<<endl;
    }
    void setRoll(int r)
    {
        rollNo = r;
    }
    void setHight(int h)
    {
        hight = h;
    }
    void setWeight(int weight1)
    {
        weight =weight1;
    }
   
};