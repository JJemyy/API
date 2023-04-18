/*
.
.
Written by :: Momen Jamal ==> JJemy
Copyright :: 2023
.
E-mail :: https://www.facebook.com/profile.php?id=100086456622971
.
.
*/

#pragma once

#include <iostream>
#include <fstream>

using namespace std;

ofstream file;

namespace api 
{

////////////////////////////__QR-Function__//////////////////////////////////

    void qr(string chl="https://www.facebook.com/profile.php?id=100086456622971")
    {

        char name[] = "QR-Code.hta";  //File Name

        file.open(name);  //mkdir

        file<<"<head> <title>QR-code</title> </head>\n";
        file<<"<center> <img src=\"https://chart.apis.google.com/chart?cht=qr&chs=300x300&chl="<<chl<<" \"> </center>\n";
        file<<"<script> window.resizeTo(400,390); </script>\n";
    }

///////////////////////////__guitts-Function__////////////////////////////////////

    void guitts(int rate=-2)
    {

        char Name[] = "guitts.vbs";

        file.open(Name);

            file<<"set sp= createobject(\"sapi.spvoice\") \n";
            file<<"set sp.voice = sp.getvoices.item(0) \n";
            file<<"sp.rate="<<rate<<endl;
            file<<"dim txt \n";
            file<<"do \n";
            file<<"txt = inputbox(\"tts Here :\") \n";
            file<<"sp.speak txt \n";
            file<<"loop until isempty(txt) \n";

    }

///////////////////////////__tts-Function__////////////////////////////////////

    void tts(string txt="Momen Jamal",int rate=-2, int volume=100)
    {

        char Namee[] = "tts.vbs";

        file.open(Namee);

        file<<"set sp= createobject(\"sapi.spvoice\") \n";
        file<<"set sp.voice = sp.getvoices.item(0) \n";
        file<<"sp.rate="<<rate<<endl;
        file<<"sp.volume="<<volume<<endl;
        file<<"sp.speak"<<" \" "<<txt<<" \" "<<endl;
    }

}