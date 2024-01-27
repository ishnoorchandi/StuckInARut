#include <iostream>

using namespace std;

int main(){
    
    int n = 0;
    cin >> n;
    string direction[50] = {""};
    double x[50] = {0};
    double y[50] = {0};
    //double cells[1000000000];
    int k = 0;
    int l = 0;

    for(int j=0; j < n; j++)
    {
        cin >> direction[j] >> x[j] >> y[j];
    }

    bool loopbreak = false;

    for(int a = 0; a < n; a++)
    {
        loopbreak = false;

        if (direction[a] == "E")
        for(int b = 0; b < n; b++)
        {
            if (direction[b] == "N")
            {
                if (x[a] < x[b] && y[a] > y[b])
                {
                    for(k = 0; k < 49; k++)
                    {
                        if(x[a] + k == x[b])
                        {
                            cout << "Intersection point X: " << k << "\n";
                            
                            loopbreak = true;
                            break;
                        }
                    }
                    for(l = 0; l < 49; l++)
                    {
                        if(y[b] + l == y[a])
                        {
                            cout << "Intersection point Y: " << l << "\n";
                            
                            loopbreak = true;
                            break;
                        }
                    }

                    if(loopbreak)
                    {
                        if (l > k)
                        {
                            cout << "First Y Cow: " << l-1 << "\n";
                        }
                        else if (k > l ) 
                        {
                            cout << "First X Cow: " << k-1 << "\n";
                        }
                    }
                    else
                    {
                        cout << "infinite\n";
                    }

                }
            }
            if (loopbreak)
            break;
        }
        cout << "At end - outer loop\n";
        if (loopbreak)
            break;
    }
       // SECOND TIME  
    
    for(int a = 0; a < n; a++)
    {
        loopbreak = false;
        if (direction[a] == "N")
        for(int b = 0; b < n; b++)
        {
            if (direction[b] == "E")
            {
                if (x[a] > x[b] && y[a] < y[b])
                {
                    for(k = 0; k < 1000; k++)
                    {
                        if(y[a] + k == y[b])
                        {
                            cout << "Intersection point Y: " << k << "\n";
                            
                            loopbreak = true;
                            break;
                        }
                    }
                    for(l = 0; l < 1000; l++)
                    {
                        if(x[b] + l == x[a])
                        {
                            cout << "Intersection point X: " << l << "\n";
                            
                            loopbreak = true;
                            break;
                        }
                    }

                    if(loopbreak)
                    {
                        if (l > k)
                        {
                            cout << "First Y Cow: " << l-1 << "\n";
                        }
                        else if (k > l ) 
                        {
                            cout << "First X Cow: " << k-1 << "\n";
                        }
                    }
                    else
                    {
                        cout << "infinite\n";
                    }

                }
            }
            if (loopbreak)
            break;
        }
        if (loopbreak)
            break;
    }
         

    }
    
