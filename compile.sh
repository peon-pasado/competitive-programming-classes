#!/bin/bash

R -e "rmarkdown::render('$1')"
