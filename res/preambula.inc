\documentclass[]{standalone}
\usepackage{ebgaramond}
\usepackage{ebgaramond-maths}

\usepackage{amsmath}
\DeclareMathOperator{\id}{id}
\newcommand{\T}{T^{(2)}}
\newcommand{\ST}[1]{\T_{#1}}

\usepackage[dvipsnames, cmyk]{xcolor}
\usepackage{tikz}
\usepackage{pgfcore}
\usetikzlibrary{arrows}
\tikzstyle{every node}=[circle,draw=black,font=\small,text=black,inner sep=1pt, minimum size=5mm]
\tikzstyle{edge from parent}=[draw=black]
\tikzstyle{st}=[black!20, line join=round, line width=2mm]
\tikzstyle{st1}=[black!40, line join=round, line width=2mm]

\tikzstyle{bgn}=[node distance=6mm, font=normal]
\tikzstyle{hlarrow}=[<->, shorten <=1pt, shorten >=1pt, draw, thick]

\tikzstyle{level 1}=[sibling distance=60mm]
\tikzstyle{level 2}=[sibling distance=30mm]
\tikzstyle{level 3}=[sibling distance=15mm]
\tikzstyle{level 4}=[sibling distance=7.5mm]
\tikzstyle{level 5}=[sibling distance=3.75mm, level distance=5mm]

\begin{document}%
\pgfdeclarelayer{background}%
\pgfsetlayers{background,main}%
