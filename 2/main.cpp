#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

void lab1()
{
    int num1; // -21474836417 - 2147483647, 32 bit
    int num2;
    char num3; // 0-255, 8 bit
    char num4;
    string num5; //2^67
    string num6;
    bool num7; //0-1, 1
    bool num8;
    double num9; // 15 цифр, 64 bit
    double num10;
    float num11; // 7 цифр, 32 bit
    float num12;
    unsigned int num13; // 0-4294967295, 32 bit
    unsigned int num14;
    short num15; //-32768 - 32767, 16 bit
    short num16;
    long long num17; // -9223372036854775807 - 9223372036854775807, 64 bit
    long long num18;
    cout<<"Введите целочисленные значения: ";
    cin>>num1>>num2;
    cout<< "num1*num2 = ";
    cout<<num1*num2;
    cout<<endl<<"Введите символьные значения значения: ";
    cin>>num3>>num4;
    cout<< "num3+num4 = ";
    cout<<num3+num4;
    cout<<endl<<"Введите строковые значения значения: ";
    cin>>num5>>num6;
    cout<< "num5+num6 = ";
    cout<<num5+num6;
    cout<<endl<<"Логические значения значения: ";
    cin>>num7>>num8;
    cout<< "num7+num8 = ";
    cout<<num7+num8;
    cout<<endl<<"Введите double значения значения: ";
    cin>>num9>>num10;
    cout<<"num9/num10 = "<<num9/num10;
    cout<<endl<<"Введите float значения значения: ";
    cin>>num11>>num12;
    cout<<"num11*num12 = "<<num11*num12;
    cout<<endl<<"Введите uns int значения значения: ";
    cin>>num13>>num14;
    cout<<"num13-num14 = "<<num13-num14;
    cout<<endl<<"Введите short значения значения: ";
    cin>>num15>>num16;
    cout<<"num15-num16 = "<<num15-num16;
    cout<<endl<<"Введите long long значения значения: ";
    cin>>num17>>num18;
    cout<<"num17+num18 = "<<num17+num18;
}

void lab2()
{
    int a, b, c;
    cout<<"Введите стороны параллепипида: ";
    cin>>a>>b>>c;
    cout<<"Объем прямоугольного параллепипида = "<<a*b*c;
}

void lab3()
{
    int num, i;
    cout<<"введите число: ";
    cin>>num;
    cout<<"i бит равен ";
    cin>>i;
    cout<<num<<endl;
    num |= (1<<i);
    cout<<num;
}

void lab4()
{
    cout<<"Номер 1:\n";

    int a, b, c;
    cout<<"Числа a, b, c = ";
    cin>>a;
    cin>>b;
    cin>>c;
    if (a < b && b < c)
    {
        cout<<"c-b-a = "<<c-b-a;
    }
    else if (a%c==0)
    {
        cout<<"a/c+b = "<<a/c+b;
    }
    else
    {
        cout<<"a+b+c = "<<a+b+c;
    }

    cout<<"\nномер 2:\n";

    int n;
    cout<<"введите код товара: ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"хлеб";
        break;
    case 2:
        cout<<"молоко";
        break;
    case 3:
        cout<<"сахар";
        break;
    case 4:
        cout<<"соль";
        break;
    case 5:
        cout<<"яйца";
        break;
    default:
        cout<<"Неправильно выбран код товара";
        break;
    }

    cout<<"\nномер 3:\n";

    bool x;
    cout<<"Введите значение: ";
    cin>>x;
    if (x)
    {
        cout<<"Negative number";
    }
    else
    {
        cout<<"positive number";
    }
}

void lab5()
{
    cout<<"Номер1\n";

    double nums[10]{-124.345, -4.0, 44.12515, -6624.153, 746.0, -67.0, 55.0, 0.124, -0.124, 124.0};
    double mult = 1.0;
    double min = nums[0];
    int number = 0;
    for (int i = 0; i < size(nums); i++)
    {
        double n = floor(nums[i]);
        if(nums[i] - n != 0 && nums[i] < 0)
        {
            cout<<nums[i]<<endl;
            mult = mult * nums[i];
            cout<<"цикл "<<i<<"mult "<< std::setprecision(14) << std::fixed << mult<<endl;
            if (nums[i] < min)
            {
                min = nums[i];
                number = i;
            }
        }
    }
    cout<<"Произведение = "<< std::setprecision(14) << std::fixed << mult<<"\nНаименьшее число = "<<min<<"\nНомер = "<<number;

    cout<<"\nНомер2\n";

    string num;
    cout<<"введите число: ";
    cin>>num;
    int minn = (int)num[0];
    for (int i = 0; i < size(num); i++)
    {
        cout<<min<<endl<<num[i];
        if ((int)num[i] < minn)
        {
            minn = (int)num[i];
        }
    }
    cout<<"наименьшая цифра = "<<minn;
}



int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    cout<<"Лабораторная номер ";
    cin>>a;
    if(a == 1)
    {
        lab1();
    }
    else if(a == 2)
    {
        lab2();
    }
    else if(a == 3)
    {
        lab3();
    }
    else if(a==4)
    {
        lab4();
    }
    else
    {
        lab5();
    }
    return 0;
}