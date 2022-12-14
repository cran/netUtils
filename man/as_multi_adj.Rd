% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/graph_structures.R
\name{as_multi_adj}
\alias{as_multi_adj}
\title{Convert a list of graphs to an adjacency matrices}
\usage{
as_multi_adj(g_lst, attr = NULL, sparse = FALSE)
}
\arguments{
\item{g_lst}{A list of igraph object}

\item{attr}{Either NULL or a character string giving an edge attribute name. If NULL a binary adjacency matrix is returned.}

\item{sparse}{Logical scalar, whether to create a sparse matrix. The 'Matrix' package must be installed for creating sparse matrices.}
}
\value{
List of numeric matrices
}
\description{
Convenience function that turns a list of igraph objects into adjacency matrices.
}
\author{
David Schoch
}
