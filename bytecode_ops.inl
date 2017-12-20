/* No parameter word */
OPCODE(STOP_CODE)
OPCODE(POP_TOP)
OPCODE(ROT_TWO)
OPCODE(ROT_THREE)
OPCODE(DUP_TOP)
OPCODE(DUP_TOP_TWO)
OPCODE(UNARY_POSITIVE)
OPCODE(UNARY_NEGATIVE)
OPCODE(UNARY_NOT)
OPCODE(UNARY_CONVERT)
OPCODE(UNARY_CALL)
OPCODE(UNARY_INVERT)
OPCODE(BINARY_POWER)
OPCODE(BINARY_MULTIPLY)
OPCODE(BINARY_DIVIDE)
OPCODE(BINARY_MODULO)
OPCODE(BINARY_ADD)
OPCODE(BINARY_SUBTRACT)
OPCODE(BINARY_SUBSCR)
OPCODE(BINARY_CALL)
OPCODE(SLICE_0)
OPCODE(SLICE_1)
OPCODE(SLICE_2)
OPCODE(SLICE_3)
OPCODE(STORE_SLICE_0)
OPCODE(STORE_SLICE_1)
OPCODE(STORE_SLICE_2)
OPCODE(STORE_SLICE_3)
OPCODE(DELETE_SLICE_0)
OPCODE(DELETE_SLICE_1)
OPCODE(DELETE_SLICE_2)
OPCODE(DELETE_SLICE_3)
OPCODE(STORE_SUBSCR)
OPCODE(DELETE_SUBSCR)
OPCODE(BINARY_LSHIFT)
OPCODE(BINARY_RSHIFT)
OPCODE(BINARY_AND)
OPCODE(BINARY_XOR)
OPCODE(BINARY_OR)
OPCODE(PRINT_EXPR)
OPCODE(PRINT_ITEM)
OPCODE(PRINT_NEWLINE)
OPCODE(BREAK_LOOP)
OPCODE(RAISE_EXCEPTION)
OPCODE(LOAD_LOCALS)
OPCODE(RETURN_VALUE)
OPCODE(LOAD_GLOBALS)
OPCODE(EXEC_STMT)
OPCODE(BUILD_FUNCTION)
OPCODE(POP_BLOCK)
OPCODE(END_FINALLY)
OPCODE(BUILD_CLASS)
OPCODE(ROT_FOUR)
OPCODE(NOP)
OPCODE(LIST_APPEND)
OPCODE(BINARY_FLOOR_DIVIDE)
OPCODE(BINARY_TRUE_DIVIDE)
OPCODE(INPLACE_FLOOR_DIVIDE)
OPCODE(INPLACE_TRUE_DIVIDE)
OPCODE(STORE_MAP)
OPCODE(INPLACE_ADD)
OPCODE(INPLACE_SUBTRACT)
OPCODE(INPLACE_MULTIPLY)
OPCODE(INPLACE_DIVIDE)
OPCODE(INPLACE_MODULO)
OPCODE(INPLACE_POWER)
OPCODE(GET_ITER)
OPCODE(PRINT_ITEM_TO)
OPCODE(PRINT_NEWLINE_TO)
OPCODE(INPLACE_LSHIFT)
OPCODE(INPLACE_RSHIFT)
OPCODE(INPLACE_AND)
OPCODE(INPLACE_XOR)
OPCODE(INPLACE_OR)
OPCODE(WITH_CLEANUP)
OPCODE(WITH_CLEANUP_START)
OPCODE(WITH_CLEANUP_FINISH)
OPCODE(IMPORT_STAR)
OPCODE(SETUP_ANNOTATIONS)
OPCODE(YIELD_VALUE)
OPCODE(LOAD_BUILD_CLASS)
OPCODE(STORE_LOCALS)
OPCODE(POP_EXCEPT)
OPCODE(SET_ADD)
OPCODE(YIELD_FROM)
OPCODE(BINARY_MATRIX_MULTIPLY)
OPCODE(INPLACE_MATRIX_MULTIPLY)
OPCODE(GET_AITER)
OPCODE(GET_ANEXT)
OPCODE(BEFORE_ASYNC_WITH)
OPCODE(GET_YIELD_FROM_ITER)
OPCODE(GET_AWAITABLE)

/* Has parameter word */
OPCODE_A_FIRST(STORE_NAME)
OPCODE_A(DELETE_NAME)
OPCODE_A(UNPACK_TUPLE)
OPCODE_A(UNPACK_LIST)
OPCODE_A(UNPACK_ARG)
OPCODE_A(STORE_ATTR)
OPCODE_A(DELETE_ATTR)
OPCODE_A(STORE_GLOBAL)
OPCODE_A(DELETE_GLOBAL)
OPCODE_A(UNPACK_VARARG)
OPCODE_A(LOAD_CONST)
OPCODE_A(LOAD_NAME)
OPCODE_A(BUILD_TUPLE)
OPCODE_A(BUILD_LIST)
OPCODE_A(BUILD_MAP)
OPCODE_A(LOAD_ATTR)
OPCODE_A(COMPARE_OP)
OPCODE_A(IMPORT_NAME)
OPCODE_A(IMPORT_FROM)
OPCODE_A(JUMP_FORWARD)
OPCODE_A(JUMP_IF_FALSE)
OPCODE_A(JUMP_IF_TRUE)
OPCODE_A(JUMP_ABSOLUTE)
OPCODE_A(FOR_LOOP)
OPCODE_A(LOAD_LOCAL)
OPCODE_A(LOAD_GLOBAL)
OPCODE_A(SET_FUNC_ARGS)
OPCODE_A(SETUP_LOOP)
OPCODE_A(SETUP_EXCEPT)
OPCODE_A(SETUP_FINALLY)
OPCODE_A(RESERVE_FAST)
OPCODE_A(LOAD_FAST)
OPCODE_A(STORE_FAST)
OPCODE_A(DELETE_FAST)
OPCODE_A(SET_LINENO)
OPCODE_A(STORE_ANNOTATION)
OPCODE_A(RAISE_VARARGS)
OPCODE_A(CALL_FUNCTION)
OPCODE_A(MAKE_FUNCTION)
OPCODE_A(BUILD_SLICE)
OPCODE_A(CALL_FUNCTION_VAR)
OPCODE_A(CALL_FUNCTION_KW)
OPCODE_A(CALL_FUNCTION_VAR_KW)
OPCODE_A(CALL_FUNCTION_EX)
OPCODE_A(UNPACK_SEQUENCE)
OPCODE_A(FOR_ITER)
OPCODE_A(DUP_TOPX)
OPCODE_A(BUILD_SET)
OPCODE_A(JUMP_IF_FALSE_OR_POP)
OPCODE_A(JUMP_IF_TRUE_OR_POP)
OPCODE_A(POP_JUMP_IF_FALSE)
OPCODE_A(POP_JUMP_IF_TRUE)
OPCODE_A(CONTINUE_LOOP)
OPCODE_A(MAKE_CLOSURE)
OPCODE_A(LOAD_CLOSURE)
OPCODE_A(LOAD_DEREF)
OPCODE_A(STORE_DEREF)
OPCODE_A(DELETE_DEREF)
OPCODE_A(EXTENDED_ARG)
OPCODE_A(SETUP_WITH)
OPCODE_A(SET_ADD)
OPCODE_A(MAP_ADD)
OPCODE_A(UNPACK_EX)
OPCODE_A(LIST_APPEND)
OPCODE_A(LOAD_CLASSDEREF)
OPCODE_A(BUILD_LIST_UNPACK)
OPCODE_A(BUILD_MAP_UNPACK)
OPCODE_A(BUILD_MAP_UNPACK_WITH_CALL)
OPCODE_A(BUILD_TUPLE_UNPACK)
OPCODE_A(BUILD_SET_UNPACK)
OPCODE_A(SETUP_ASYNC_WITH)
OPCODE_A(FORMAT_VALUE)
OPCODE_A(BUILD_CONST_KEY_MAP)
OPCODE_A(BUILD_STRING)
OPCODE_A(BUILD_TUPLE_UNPACK_WITH_CALL)
OPCODE_A(LOAD_METHOD)
OPCODE_A(CALL_METHOD)
