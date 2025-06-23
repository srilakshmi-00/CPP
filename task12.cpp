#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> mergedSensorFirmware = {201, 202, 203, 204, 205, 205};
std::vector<int> guiVersionList = {201, 203, 203, 204, 205, 206, 207};
std::vector<int> compatibleFirmware = {203, 204};
std::vector<int> allAvailableVersions = {201, 202, 203, 204, 205, 205, 206, 207};


void loop(std::vector itr, const std::string& name)
{
    std::cout<<name<<" "<<std::endl;
    for(auto x: itr)
    {

    }
}
void mergeMethod()
{
    std::vector<int> tempmerge(mergedSensorFirmware.size() + guiVersionList.size());

    std::merge(mergedSensorFirmware.begin(), mergedSensorFirmware.end(), guiVersionList.begin(),
                guiVersionList.end(), tempmerge.begin());

    std::vector<int> secondmerge(tempmerge.size() + compatibleFirmware.size());

    std::merge(tempmerge.begin(), tempmerge.end(), compatibleFirmware.begin(),
                compatibleFirmware.end(), secondmerge.begin());

    std::vector<int> finalmerge(secondmerge.size() + allAvailableVersions.size());

    std::merge(secondmerge.begin(),secondmerge.end(),
                allAvailableVersions.begin(), allAvailableVersions.end(), finalmerge.begin());

    std::cout<<"Merger all Three: " << std::endl;

    for(auto x : finalmerge)
    {
        std::cout<< x << " ";
    }
    std::cout<< " "<<std::endl;
}


void inplaceMerge()
{
    std::vector<int>::iterator mid = allAvailableVersions.begin() + 2;
    std::inplace_merge(allAvailableVersions.begin(), mid, allAvailableVersions.end());

    std::cout<<"Inplace Merge: "<<std::endl;
    for(auto x : allAvailableVersions)
    {
        std::cout<< x <<" ";
    }
    std::cout<<" "<<std::endl;
}

int main()
{
    mergeMethod();
    inplaceMerge();
    return 0;
}