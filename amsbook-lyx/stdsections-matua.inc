# Standard textclass definition file. Taken from initial LyX source code
# Author : Matthias Ettrich <ettrich@informatik.uni-tuebingen.de>
# Transposed by Pascal André <andre@via.ecp.fr>
# Heavily modifed and enhanced by several developers.

# This include file contains all numbered sectionning-related
# commands that are useful for article-like document classes, but not
# for letters.

Format 49

Style Parte
	Category              Sectioning
	Margin                Dynamic
	LabelString           "Parte \thepart"
	LabelType             Static
	TocLevel              -1
	LabelCounter          part
	LatexType             Command
	LatexName             part
	NeedProtect           1
	NextNoIndent          1
	Labelsep              xxx
	ParSkip               0.4
	TopSep                4
	BottomSep             4
	ParSep                0.8
	Align                 Center
	Alignpossible         Center
	Argument 1
		LabelString   "Titulo corto|S"
		Tooltip       "The part as it appears in the table of contents/running headers"
	EndArgument
	Font
	  Series              Bold
	  Size                Huge
	EndFont
	HTMLTag               h1
End


Style Capítulo
	Margin                Static
	Category              Sectioning
	LabelString           "Capítulo \thechapter"
	LabelStringAppendix   "Apendice \thechapter"
	LabelType             Above
	LabelCounter          chapter
	TocLevel              0
	LatexType             Command
	LatexName             chapter
	NeedProtect           1
	NextNoIndent          1
	ParSkip               0.4
	TopSep                4
	BottomSep             0.8
	ParSep                0.8
	Align                 Block
	Argument 1
		LabelString   "Titulo corto|S"
		Tooltip       "The chapter as it appears in the table of contents/running headers"
	EndArgument
	Font
	  Series              Bold
	  Size                Huge
	EndFont
	HTMLTag               h1
End


Style Sección
	Category              Secciones
	Margin                Dynamic
	LabelType             Static
	LabelCounter          section
	TocLevel              1
	LatexType             Command
	LatexName             section
	NeedProtect           1
	NextNoIndent          1
	LabelSep              xxx
	ParSkip               0.4
	TopSep                1.3
	BottomSep             0.7
	ParSep                0.7
	Align                 Block
	Argument 1
		LabelString   "Titulo corto|S"
		Tooltip       "The section as it appears in the table of contents/running headers"
	EndArgument
	Font
	  Series              Bold
	  Size                Larger
	EndFont
	HTMLTag               h2
End


Style Subsección
	CopyStyle             Sección
	LabelCounter          subsection
	TocLevel              2
	LatexName             subsection
	TopSep                0.9
	BottomSep             0.5
	ParSep                0.5
	Font
	  Series              Bold
	  Size                Large
	EndFont
	HTMLTag               h3
End


Style Subsubsección
	CopyStyle             Subsección
	LabelCounter          subsubsection
	TocLevel              3
	LatexName             subsubsection
	TopSep                0.7
	BottomSep             0.4
	Font
	  Series              Bold
	  Size                Normal
	EndFont
	HTMLTag               h4
End


Style Parágrafo 
	CopyStyle             Subsubsección
	LabelCounter          paragraph
	TocLevel              4
	LatexName             paragraph
	TopSep                0.4
	BottomSep             0
	HTMLTag               h5
End


Style Subparágrafo
	CopyStyle             Paragráfo
	LabelCounter          subparagraph
	TocLevel              5
	LatexName             subparagraph
	NextNoIndent          0
	LeftMargin            MM
	HTMLTag               h6
End

Input stdrefprefix.inc
Input numarticle.inc