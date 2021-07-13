//#define style_red_fill fillcolor="#ff9393";fontcolor="#f9faf2";style="filled"
//#define style_red_record shape="record";style_red_fill
//#define style_red_fill_rounded  fillcolor="#ff9393"; fontcolor="#f9faf2";  style="filled,rounded"

#define style_func\
	shape="record"\
	style="rounded"\

#define style_var\
  shape="record";\
  style="filled,rounded";\
	fillcolor="#feed9b";\
	color="#f7e495";\
	fontcolor="#40575d"\

#define style_case\
  shape="egg";\
  style="filled,rounded";\
	fillcolor="#9adebe";\
	color="#729c88";\
	fontcolor="#40575d"\

#define style_struct\
  shape="record";\
  style="filled,rounded";\
	fillcolor="#79d8ce";\
	color="#60b5ac";\
	fontcolor="#5d6179"\

#define style_blue1\
  shape="record";\
  style="filled,rounded";\
  fillcolor="#A2DBFA";\
  color="#8a8898";\
	fontcolor="#5d6179"\

#define style_orange\
  shape="record";\
  style="filled,rounded";\
  fillcolor="#f89f3e";\
  color="#d69043";\
	fontcolor="#ffffff"\

#define style_red\
  shape="record";\
  style="filled,rounded";\
  fillcolor="#de3737";\
  color="##c13434";\
	fontcolor="#ffffff"\

#define field(name,type,...)\
  <name> name type \l|

#define tail_field(name,type,...)\
  <name> name type \l

#define color_red color="#de3737"
#define color_blue color="#40575d"

#define dep_ctrl(src, dst) src -> dst[style=dashed;color=blue]
#define dep_data(src, dst) src -> dst[style=dashed;color=green]
#define style_edge_data style=dashed;color=green
