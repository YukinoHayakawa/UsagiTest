﻿#pragma once

#include <Usagi/Library/Graph/AdjacencyMatrixFixed.hpp>

using namespace usagi::graph;

constexpr AdjacencyMatrixFixed<11> test_graph()
{
    AdjacencyMatrixFixed<11> g;

    g.add_edge(2, 4);
    g.add_edge(2, 7);
    g.add_edge(2, 8);
    g.add_edge(4, 3);
    g.add_edge(4, 10);
    g.add_edge(7, 10);
    g.add_edge(7, 1);
    g.add_edge(7, 9);
    g.add_edge(8, 9);
    g.add_edge(3, 6);
    g.add_edge(10, 6);
    g.add_edge(1, 6);
    g.add_edge(9, 6);

    return g;
}

constexpr auto graph2()
{
    AdjacencyMatrixFixed<6> g;

    g.add_edge(0, 1);
    g.add_edge(1, 2);
    g.add_edge(0, 2);
    g.add_edge(2, 3);
    g.add_edge(2, 4);
    g.add_edge(2, 5);

    return g;
}

constexpr auto graph3()
{
    AdjacencyMatrixFixed<6> g;

    g.add_edge(5, 2);
    g.add_edge(5, 0);
    g.add_edge(4, 0);
    g.add_edge(4, 1);
    g.add_edge(2, 3);
    g.add_edge(3, 1);

    return g;
}
