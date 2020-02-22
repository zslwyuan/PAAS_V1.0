/*
 * Copyright (c) 2019-2021 NITK Surathkal
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
  * Authors: Ajumal P A<ajupazhamayil@gmail.com>
 *          Ruchin Baliyan <ruchinbaliyan771996@gmail.com>
 *          Basavaraj Talawar <basavaraj@nitk.edu.in>
 */


#include"schedule_policies.hh"
#include<job.h>
//std::sort(list.begin(), list.end(), [](const std::pair<int, string> &x,const std::pair<int, string> &y)
//{
 //   return x.second < y.second;
//});


void sortList(List<uint_64> &TaskHashes)
{ 
uint_64 val;
uint_32 tempval,size;

List<pair<uint_32,uint_32>> PairList ;

for(auto it:TaskHashes)
{           val= *it;

            tempval = val>>32;
            uint64_t size = val<<32;
            size = size>>32;
            val = tempval;
          
PairList.push_back(make_pair(size,val));

}
PairList.sort();

for(auto it1:PairList)
{

val = it1.second;
size =it1.first;
val=val<<32;
val=val|size;
TaskHashes.push_back(val);

}


 
}


