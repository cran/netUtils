% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/fast_cliques.R
\name{fast_cliques}
\alias{fast_cliques}
\title{Find Cliques, maximal or not, fast}
\usage{
fast_cliques(g, what = "M", min = NULL, max = NULL, outfile = NA)
}
\arguments{
\item{g}{An igraph object}

\item{what}{either "M" for maximal cliques or "C" for all cliques}

\item{min}{Numeric constant, lower limit on the size of the cliques to find. NULL means no limit, ie. it is the same as 0}

\item{max}{Numeric constant, upper limit on the size of the cliques to find. NULL means no limit}

\item{outfile}{character. If not NA, cliques are written to file}
}
\value{
a list containing numeric vectors of vertex ids. Each list element is a clique. If outfile!=NA, the output is written to the specified file
}
\description{
Enumerates all (maximal) cliques using MACE. Can be faster than igraph in some circumstances
}
\details{
C Code downloaded from http://research.nii.ac.jp/~uno/codes.htm. Download the code and run make and then point an environment variable called MACE_PATH to the binary. See http://research.nii.ac.jp/~uno/code/mace.html for more details. MACE is faster than igraph for dense graphs.
}
\references{
Kazuhisa Makino, Takeaki Uno, "New Algorithms for Enumerating All Maximal Cliques", Lecture Notes in Computer Science 3111 (Proceedings of SWAT 2004), Springer, pp.260-272, 2004
}
\author{
David Schoch
}
