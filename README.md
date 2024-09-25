
<!-- README.md is generated from README.Rmd. Please edit that file -->

# geocomplexity <img src="man/figures/logo.png" align="right" height="120"/>

<!-- badges: start -->

[![cran](https://www.r-pkg.org/badges/version/geocomplexity)](https://CRAN.R-project.org/package=geocomplexity)
[![r-universe](https://ausgis.r-universe.dev/badges/geocomplexity?color=yellow)](https://ausgis.r-universe.dev/geocomplexity)
<!-- badges: end -->

**Mitigating Spatial Bias Through Geographical Complexity**

## Installation

- Install from [CRAN](https://CRAN.R-project.org/package=geocomplexity)
  with:

``` r
install.packages("geocomplexity", dep = TRUE)
```

- Install development binary version from
  [r-universe](https://ausgis.r-universe.dev/geocomplexity) with:

``` r
install.packages('geocomplexity',
                 repos = c("https://ausgis.r-universe.dev",
                           "https://cloud.r-project.org"),
                 dep = TRUE)
```

- Install development source version from
  [GitHub](https://github.com/ausgis/geocomplexity) with:

``` r
# install.packages("devtools")
devtools::install_github("ausgis/geocomplexity",
                         build_vignettes = TRUE,
                         dep = TRUE)
```

Please ensure that appropriate **C++** compilation environment is
configured and **Rcpp** & **RcppArmadillo** is properly installed in
advance if you want to install **geocomplexity** from source. See the
next topic on C++ Settings for more information.

## Set up to use **C++** compilation environment

**Windows**:

- Download the Rtools installer that matches your version of R from
  <https://cran.r-project.org/bin/windows/Rtools/>
- Run the installer, `Rtools.exe`, keeping the default settings.

**Linux**

Debian/Ubuntu:

``` sh
apt-get update
apt-get install r-base-dev
```

Fedora/RedHat: should be set up already.

**MacOS**

- Install the Xcode command line tool.

- Then, in the terminal:

  ``` sh
  xcode-select --install
  ```
