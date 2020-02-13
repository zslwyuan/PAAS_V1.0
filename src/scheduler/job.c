#include"job.hh"
#include<iostream>

Job::Job(long int x,int y,int z)
{
  id = x;
  priority=y;
  size = z;
}
Job::printJob(lont int x,int y,int z)
{

cout<<"pid:"<<x;
cout<<"Priority"<<y;
cout<<"size:"<<z;


}
