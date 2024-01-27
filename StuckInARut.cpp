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

        cout << "Here 1\n";
        if (direction[a] == "E")
        for(int b = 0; b < n; b++)
        {
           // cout << "Here 2 - " << direction[a] << "Dir - " << direction[b] << "\n";
            if (direction[b] == "N")
            {
                cout << "Here 2.5\n";

                if (x[a] < x[b] && y[a] > y[b])
                {
                    for(k = 0; k < 49; k++)
                    {
                        cout << "Here 3 - k\n";
                        if(x[a] + k == x[b])
                        {
                            cout << "Intersection point X: " << k << "\n";
                            // cout << "Here 4";
                            
                            loopbreak = true;
                            break;
                        }
                    }
                    for(l = 0; l < 49; l++)
                    {
                        cout << "Here 5 - l\n";
                        if(y[b] + l == y[a])
                        {
                            cout << "Intersection point Y: " << l << "\n";
                            // cout << "Here 6";
                            
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
       // cout << "Here 1\n";
        if (direction[a] == "N")
        for(int b = 0; b < n; b++)
        {
           // cout << "Here 2 - " << direction[a] << "Dir - " << direction[b] << "\n";
            if (direction[b] == "E")
            {
               // cout << "Here 2.5\n";

                if (x[a] > x[b] && y[a] < y[b])
                {
                    for(k = 0; k < 1000; k++)
                    {
                        //cout << "Here 3";
                        if(y[a] + k == y[b])
                        {
                            cout << "Intersection point Y: " << k << "\n";
                            // cout << "Here 4";
                            
                            loopbreak = true;
                            break;
                        }
                    }
                    for(l = 0; l < 1000; l++)
                    {
                        //cout << "Here 5";
                        if(x[b] + l == x[a])
                        {
                            cout << "Intersection point X: " << l << "\n";
                            // cout << "Here 6";
                            
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
    
