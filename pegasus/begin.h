#define parse(INPUT_TEXT) PEGASUS_PARSE(INPUT_TEXT)
#define parse_end PEGASUS_PARSE_END

#define declare(...) PEGASUS_DECLARE(__VA_ARGS__)
#define define(...) PEGASUS_DEFINE(__VA_ARGS__)
#define define_end PEGASUS_DEFINE_END

#define use(...) PEGASUS_USE(__VA_ARGS__)

#define try PEGASUS_TRY
#define try_end PEGASUS_TRY_END

#define repeat(...) PEGASUS_REPEAT(__VA_ARGS__)
#define repeat_end PEGASUS_REPEAT_END

#define select PEGASUS_SELECT
#define otherwise PEGASUS_OTHERWISE
#define select_end PEGASUS_SELECT_END

#define the_char PEGASUS_THE_CHAR

#define end_of_input PEGASUS_END_OF_INPUT
