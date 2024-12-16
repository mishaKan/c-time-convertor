#include <iostream>

float gettime(float data,std::string starttype,std::string endtype);
void timeConvertorHelp();
float gettime(float data,std::string starttype,std::string endtype)
{
    float output;
    if(starttype == "s")
    {
        if(endtype == "m")
        {
            output = data/60;
        }
        else if(endtype == "h")
        {
            output = data/(60 * 60);
        }
        else if(endtype == "d")
        {
            output = data/(60 * 60 * 24);
        }
        else if(endtype == "y")
        {
            output = data/(60 * 60 * 24 * 365);
        }
    }
    else if(starttype == "m")
    {
        if(endtype == "s")
        {
            output = data*60;
        }
        else if(endtype == "h")
        {
            output = data/(60);
        }
        else if(endtype == "d")
        {
            output = data/(60* 24);
        }
        else if(endtype == "y")
        {
            output = data/(60 * 24 * 365);
        }
    }
    else if(starttype == "h")
    {
        if(endtype == "s")
        {
            output = data*(60*60);
        }
        else if(endtype == "m")
        {
            output = data*(60);
        }
        else if(endtype == "d")
        {
            output = data/24;
        }
        else if(endtype == "y")
        {
            output = data/(24 * 365);
        }
    }
    else if(starttype == "d")
    {
        if(endtype == "s")
        {
            output = data*(60*60*24);
        }
        else if(endtype == "m")
        {
            output = data*(60*24);
        }
        else if(endtype == "h")
        {
            output = data*24;
        }
        else if(endtype == "y")
        {
            output = data/(365);
        }
    }
    else if(starttype == "y")
    {
        if(endtype == "d")
        {
            output = data*365;
        }
        else if(endtype == "h")
        {
            output = data*(365*24);
        }
        else if(endtype == "m")
        {
            output = data*(365*60*24);
        }
        else if(endtype == "s")
        {
            output = data*(365*60*60*24);
        }
    }
    else
    {
        stdd::cout << "type not supported" << "\n";
    }
    return(output);
}
void timeConvertorHelp()
{
    std::cout<<"gettime(float,string,string)"<<"\n";
    std::cout<<"types - s,m,h,d,y"<<"\n";
    std::cout<<"remember, we are for clean code. Write in a readable manner.)"<<"\n";
}
