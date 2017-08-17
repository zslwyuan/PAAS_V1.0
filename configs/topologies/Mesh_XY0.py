# Copyright (c) 2010 Advanced Micro Devices, Inc.
#               2016 Georgia Institute of Technology
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met: redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer;
# redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution;
# neither the name of the copyright holders nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# Authors: Brad Beckmann
#          Tushar Krishna

from m5.params import *
from m5.objects import *

from BaseTopology import SimpleTopology

# Creates a generic Mesh assuming an equal number of cache
# and directory controllers.
# XY routing is enforced (using link weights)
# to guarantee deadlock freedom.

class Mesh_XY(SimpleTopology):
    description='Mesh_XY'

    def __init__(self, controllers):
        self.nodes = controllers

    # Makes a generic mesh
    # assuming an equal number of cache and directory cntrls

    def makeTopology(self, options, network, IntLink, ExtLink, Router):
        nodes = self.nodes
        num_routers = options.num_cpus + options.num_fpgas
        num_rows = options.mesh_rows

        # default values for link latency and router latency.
        # Can be over-ridden on a per link/router basis
        link_latency = options.link_latency # used by simple and garnet
        router_latency = options.router_latency # only used by garnet


        # There must be an evenly divisible number of cntrls to routers
        # Also, obviously the number or rows must be <= the number of routers

        print num_rows
        print num_routers
        assert(num_rows > 0 and num_rows <= num_routers)
        num_columns = int(num_routers / num_rows)
        assert(num_columns * num_rows == num_routers)

        # Create the routers in the mesh
        routers = [Router(router_id=i, latency = router_latency) \
            for i in range(num_routers)]
        network.routers = routers

        # link counter to set unique link ids
        link_count = 0

        # Add all but the remainder nodes to the list of nodes to be uniformly
        # distributed across the network.
        network_nodes = []

        for node_index in xrange(len(nodes)):
            network_nodes.append(nodes[node_index])

        # Connect each node to the appropriate router
        ext_links = []

        # L1 controller location
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[0],int_node=routers[0],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[1],int_node=routers[1],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[2],int_node=routers[2],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[3],int_node=routers[3],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[4],int_node=routers[4],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[14],int_node=routers[5],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[15],int_node=routers[6],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[7],int_node=routers[7],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[8],int_node=routers[8],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[9],int_node=routers[9],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[10],int_node=routers[10],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[11],int_node=routers[11],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[12],int_node=routers[12],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[13],int_node=routers[13],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[5],int_node=routers[14],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[6],int_node=routers[15],latency = link_latency))
        link_count += 1

        # L2 controller location
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[16],int_node=routers[0],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[17],int_node=routers[1],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[18],int_node=routers[2],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[19],int_node=routers[3],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[20],int_node=routers[4],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[21],int_node=routers[5],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[22],int_node=routers[6],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[23],int_node=routers[7],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[24],int_node=routers[8],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[25],int_node=routers[9],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[26],int_node=routers[10],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[27],int_node=routers[11],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[28],int_node=routers[12],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[29],int_node=routers[13],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[30],int_node=routers[14],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[31],int_node=routers[15],latency = link_latency))
        link_count += 1


        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[32],int_node=routers[0],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[33],int_node=routers[4],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[34],int_node=routers[8],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[35],int_node=routers[12],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[36],int_node=routers[3],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[37],int_node=routers[7],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[38],int_node=routers[11],latency = link_latency))
        link_count += 1
        ext_links.append(ExtLink(link_id=link_count, ext_node=network_nodes[39],int_node=routers[15],latency = link_latency))
        link_count += 1

        network.ext_links = ext_links

        # Create the mesh links.
        int_links = []

        # East output to West input links (weight = 1)
        for row in xrange(num_rows):
            for col in xrange(num_columns):
                if (col + 1 < num_columns):
                    east_out = col + (row * num_columns)
                    west_in = (col + 1) + (row * num_columns)
                    int_links.append(IntLink(link_id=link_count,
                                             src_node=routers[east_out],
                                             dst_node=routers[west_in],
                                             src_outport="East",
                                             dst_inport="West",
                                             latency = link_latency,
                                             weight=1))
                    link_count += 1

        # West output to East input links (weight = 1)
        for row in xrange(num_rows):
            for col in xrange(num_columns):
                if (col + 1 < num_columns):
                    east_in = col + (row * num_columns)
                    west_out = (col + 1) + (row * num_columns)
                    int_links.append(IntLink(link_id=link_count,
                                             src_node=routers[west_out],
                                             dst_node=routers[east_in],
                                             src_outport="West",
                                             dst_inport="East",
                                             latency = link_latency,
                                             weight=1))
                    link_count += 1

        # North output to South input links (weight = 2)
        for col in xrange(num_columns):
            for row in xrange(num_rows):
                if (row + 1 < num_rows):
                    north_out = col + (row * num_columns)
                    south_in = col + ((row + 1) * num_columns)
                    int_links.append(IntLink(link_id=link_count,
                                             src_node=routers[north_out],
                                             dst_node=routers[south_in],
                                             src_outport="North",
                                             dst_inport="South",
                                             latency = link_latency,
                                             weight=2))
                    link_count += 1

        # South output to North input links (weight = 2)
        for col in xrange(num_columns):
            for row in xrange(num_rows):
                if (row + 1 < num_rows):
                    north_in = col + (row * num_columns)
                    south_out = col + ((row + 1) * num_columns)
                    int_links.append(IntLink(link_id=link_count,
                                             src_node=routers[south_out],
                                             dst_node=routers[north_in],
                                             src_outport="South",
                                             dst_inport="North",
                                             latency = link_latency,
                                             weight=2))
                    link_count += 1


        network.int_links = int_links
