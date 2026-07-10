% An article class for author response to reviewer comment.
% Copyright (C) 2017 Martin Schroen
% Modifications Copyright (C) 2020 Kaishuo Zhang
%
% This program is free software: you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation, either version 3 of the License, or
% (at your option) any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this program.  If not, see <http://www.gnu.org/licenses/>.

\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{ar2rc}[2020/08/04 Author response to reviewer comment class]
\LoadClass{article}

\RequirePackage[includeheadfoot,top=20mm, bottom=20mm, footskip=2.5cm]{geometry}

% Typography
\RequirePackage[T1]{fontenc}
\RequirePackage{times}
%\RequirePackage{mathptmx} % math also in times font
\RequirePackage{amssymb,amsmath}
\RequirePackage{microtype}
\RequirePackage[utf8]{inputenc}

% Misc
\RequirePackage{graphicx}
\RequirePackage{hyperref} 
\RequirePackage{soul} % Highlight using \hl{}

% Table
\RequirePackage{adjustbox} % center large tables across textwidth by surrounding tabular with \begin{adjustbox}{center}
\renewcommand{\arraystretch}{1.5} % enlarge spacing between rows
\RequirePackage{caption} 
\captionsetup[table]{skip=11pt} % enlarge spacing between caption and table

% Section styles
\RequirePackage{titlesec}
\titleformat{\section}{\normalfont\large}{\makebox[0pt][r]{\bf \thesection.\hspace{4mm}}}{0em}{\bfseries}
\titleformat{\subsection}{\normalfont}{\makebox[0pt][r]{\bf \thesubsection.\hspace{4mm}}}{0em}{\bfseries}
\titlespacing{\subsection}{0em}{1em}{-0.3em} % left before after

% Paragraph styles
\setlength{\parskip}{0.6\baselineskip}%
\setlength{\parindent}{0pt}%

% Quotation styles
\RequirePackage{mdframed}
\renewmdenv[leftmargin=0.4em, rightmargin=0.4em%
innerleftmargin=0.6em,innerrightmargin=0.6em]{quote}

% Left-bar block quote for reviewer comments (RC/RCpar/RC*): a gray vertical
% rule, height-matched to the quoted text, with the "RC:" label hanging
% outside (to the left of) the rule. An RC followed immediately by RCpar (or
% an RCpar followed by another RCpar) is treated as one module: neighbouring
% rules bleed into the inter-paragraph gap and meet, while the first and last
% rules stop at the module boundaries. The rule is smashed vertically so its
% bleed does not enlarge the text spacing it is meant to bridge.
\newsavebox{\RCbox}
\newlength{\RCgap}
\setlength{\RCgap}{0.3\baselineskip}
% Compute the flexible skip value first, then copy it into a plain \dimen so it
% can be used safely in the rule dimensions below. In a \dimexpr, an integer
% factor is written directly before the dimension (for example, 2\RCbleed),
% without a multiplication sign.
\newlength{\RCbleedskip}
\setlength{\RCbleedskip}{\RCgap}
\addtolength{\RCbleedskip}{0.5\parskip}
% A small overlap prevents a hairline gap from device-pixel rounding where
% two continuation rules meet.
\addtolength{\RCbleedskip}{0.5pt}
\newdimen\RCbleed
\RCbleed=\RCbleedskip\relax
% #1 = top bleed, #2 = bottom bleed, #3 = quoted text.
\long\def\RCquote#1#2#3{%
  \sbox{\RCbox}{\begin{minipage}[t]{\dimexpr\linewidth-9pt\relax}#3\end{minipage}}%
  {\color{black!50}%
   \smash{\rule[-\dimexpr\dp\RCbox+#2\relax]{1pt}{\dimexpr\ht\RCbox+\dp\RCbox+#1+#2\relax}}}%
  \hspace{8pt}%
  \usebox{\RCbox}%
}
\newcommand{\RCvspace}{\vspace{\RCgap}}

% Table styles
\let\oldtabular=\tabular
\let\endoldtabular=\endtabular
\renewenvironment{tabular}[1]{\begin{adjustbox}{center}\begin{oldtabular}{#1}}{\end{oldtabular}\end{adjustbox}}

% Shortcuts
%% Let textbf be both, bold and italic
%\DeclareTextFontCommand{\textbf}{\bfseries\em}

%% Add RC and AR to the left of a paragraph
%\def\RC{\makebox[0pt][r]{\bf RC:\hspace{4mm}}}
%\def\AR{\makebox[0pt][r]{AR:\hspace{4mm}}}

%% Define that \RC and \AR should start and format the whole paragraph
\RequirePackage{suffix}
\long\def\RC#1\par{%
  \RCvspace\noindent\makebox[0pt][r]{\textbf{RC:}\hspace{4mm}}%
  \@ifnextchar\RCpar
    {\RCquote{0pt}{\RCbleed}{#1}\par\RCvspace}% continued module
    {\RCquote{0pt}{0pt}{#1}\par\RCvspace}% complete module
} %\RC
\long\def\RCpar#1\par{%
  \RCvspace\noindent
  \@ifnextchar\RCpar
    {\RCquote{\RCbleed}{\RCbleed}{#1}\par\RCvspace}% continued module
    {\RCquote{\RCbleed}{0pt}{#1}\par\RCvspace}% end of module
} %\RCpar
\WithSuffix\long\def\RC*#1\par{\RCvspace\noindent\RCquote{0pt}{0pt}{#1}\par\RCvspace} %\RC*
\long\def\AR#1\par{\makebox[0pt][r]{AR:\hspace{10pt}}#1\par} %\AR
\WithSuffix\long\def\AR*#1\par{#1\par} %\AR*

%%%
%DIF PREAMBLE EXTENSION ADDED BY LATEXDIFF
%DIF UNDERLINE PREAMBLE %DIF PREAMBLE
\RequirePackage[normalem]{ulem} %DIF PREAMBLE
\RequirePackage{xcolor}
\providecommand{\DIFadd}[1]{{\protect\color{blue}\uwave{#1}}} %DIF PREAMBLE
\providecommand{\DIFdel}[1]{{\protect\color{red}\sout{#1}}}                      %DIF PREAMBLE
%DIF SAFE PREAMBLE %DIF PREAMBLE
\providecommand{\DIFaddbegin}{} %DIF PREAMBLE
\providecommand{\DIFaddend}{} %DIF PREAMBLE
\providecommand{\DIFdelbegin}{} %DIF PREAMBLE
\providecommand{\DIFdelend}{} %DIF PREAMBLE
%DIF FLOATSAFE PREAMBLE %DIF PREAMBLE
\providecommand{\DIFaddFL}[1]{\DIFadd{#1}} %DIF PREAMBLE
\providecommand{\DIFdelFL}[1]{\DIFdel{#1}} %DIF PREAMBLE
\providecommand{\DIFaddbeginFL}{} %DIF PREAMBLE
\providecommand{\DIFaddendFL}{} %DIF PREAMBLE
\providecommand{\DIFdelbeginFL}{} %DIF PREAMBLE
\providecommand{\DIFdelendFL}{} %DIF PREAMBLE
%DIF END PREAMBLE EXTENSION ADDED BY LATEXDIFF

% Define title defaults if not defined by user
\providecommand{\lettertitle}{Authors' Response to Reviews of}
\let\@journal\@empty
\let\@doi\@empty
\newcommand{\journal}[1]{\gdef\@journal{#1}}
\newcommand{\doi}[1]{\gdef\@doi{#1}}

% Make title and legend
\renewcommand\maketitle{
{\Large\bf \lettertitle}\\[1em]
{\LARGE \@title}\\[1em]
{\@author}\\
{\it \@journal }\texttt{\@doi}\\
\hrule
\hfill {\bfseries RC:} \textbf{Reviewers' Comment},\(\quad\) AR: Authors' Response, \(\quad\square\) Manuscript Text
}
