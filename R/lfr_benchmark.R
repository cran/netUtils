#' triad census with node attributes
#'
#' @param  excess
#' @param  defect
#' @param  num_nodes
#' @param  average_k
#' @param  max_degree
#' @param  tau
#' @param  tau2
#' @param  mixing_parameter
#' @param  overlapping_nodes
#' @param  overlap_membership
#' @param  nmin
#' @param  nmax
#' @param  fixed_range
#' @param  ca
#' @return triad census with node attributes.
#' @details The node attribute should be integers from 1 to max(attr).
#' @author David Schoch
#'
# lfr_benchmark <- function(excess,
#                           defect,
#                           num_nodes,
#                           average_k,
#                           max_degree,
#                           tau,
#                           tau2,
#                           mixing_parameter,
#                           overlapping_nodes,
#                           overlap_membership,
#                           nmin,
#                           nmax,
#                           fixed_range,
#                           ca){
#   benchmark(excess,
#             defect,
#             num_nodes,
#             average_k,
#             max_degree,
#             tau,
#             tau2,
#             mixing_parameter,
#             overlapping_nodes,
#             overlap_membership,
#             nmin,
#             nmax,
#             fixed_range,
#             ca)
# }
