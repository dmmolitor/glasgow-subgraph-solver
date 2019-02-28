/* vim: set sw=4 sts=4 et foldmethod=syntax : */

#ifndef GLASGOW_SUBGRAPH_SOLVER_SOLVER_FORMATS_GRAPH_FILE_ERROR_HH
#define GLASGOW_SUBGRAPH_SOLVER_SOLVER_FORMATS_GRAPH_FILE_ERROR_HH 1

#include <exception>
#include <string>

/**
 * Thrown if we come across bad data in a graph file, or if we can't read a
 * graph file.
 */
class GraphFileError :
    public std::exception
{
    private:
        std::string _what;
        bool _exists;

    public:
        GraphFileError(const std::string & filename, const std::string & message, bool exists) throw ();

        auto what() const throw () -> const char *;
        auto file_at_least_existed() const throw () -> bool;
};


#endif
