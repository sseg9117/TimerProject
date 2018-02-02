//
//  FileController.cpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/2/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include "FileController.hpp"

using namespace std;

vector<CrimeData> FileController :: readCrimeDataToVector(string fileName)
{
    vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //eof means end of file
        while (!dataFile.eof())
        {
            getLine(dataFile, currentCSVLine, '\r');
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line
                CrimeData row(currentCSVLine);
                crimeVector.push_back(row);
            }
            rowCount++;
        }
        datafile.close();
    }
    else()
    {
        cerr << "NO FILE" ,, endl;
    }
    
    return crimeVector
}



