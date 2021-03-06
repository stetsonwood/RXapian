% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/DatabaseWrapper.R
\name{xapian_dbCollection_freq}
\alias{xapian_dbCollection_freq}
\title{Database collection_freq}
\usage{
xapian_dbCollection_freq(dbpath, tname)
}
\arguments{
\item{dbpath}{path to a Xapian database}

\item{tname}{term whose collection frequency is being requested}
}
\value{
total number of occurrences of the given term
}
\description{
Database collection_freq
}
\examples{
\dontrun{
db<- c("path/to/database")
tname<-c("test")
xapian_dbCollection_freq(db,tname)
}
}

