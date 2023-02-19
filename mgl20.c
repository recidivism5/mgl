#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#define WGL_NUMBER_PIXEL_FORMATS_ARB      0x2000
#define WGL_DRAW_TO_WINDOW_ARB            0x2001
#define WGL_DRAW_TO_BITMAP_ARB            0x2002
#define WGL_ACCELERATION_ARB              0x2003
#define WGL_NEED_PALETTE_ARB              0x2004
#define WGL_NEED_SYSTEM_PALETTE_ARB       0x2005
#define WGL_SWAP_LAYER_BUFFERS_ARB        0x2006
#define WGL_SWAP_METHOD_ARB               0x2007
#define WGL_NUMBER_OVERLAYS_ARB           0x2008
#define WGL_NUMBER_UNDERLAYS_ARB          0x2009
#define WGL_TRANSPARENT_ARB               0x200A
#define WGL_TRANSPARENT_RED_VALUE_ARB     0x2037
#define WGL_TRANSPARENT_GREEN_VALUE_ARB   0x2038
#define WGL_TRANSPARENT_BLUE_VALUE_ARB    0x2039
#define WGL_TRANSPARENT_ALPHA_VALUE_ARB   0x203A
#define WGL_TRANSPARENT_INDEX_VALUE_ARB   0x203B
#define WGL_SHARE_DEPTH_ARB               0x200C
#define WGL_SHARE_STENCIL_ARB             0x200D
#define WGL_SHARE_ACCUM_ARB               0x200E
#define WGL_SUPPORT_GDI_ARB               0x200F
#define WGL_SUPPORT_OPENGL_ARB            0x2010
#define WGL_DOUBLE_BUFFER_ARB             0x2011
#define WGL_STEREO_ARB                    0x2012
#define WGL_PIXEL_TYPE_ARB                0x2013
#define WGL_COLOR_BITS_ARB                0x2014
#define WGL_RED_BITS_ARB                  0x2015
#define WGL_RED_SHIFT_ARB                 0x2016
#define WGL_GREEN_BITS_ARB                0x2017
#define WGL_GREEN_SHIFT_ARB               0x2018
#define WGL_BLUE_BITS_ARB                 0x2019
#define WGL_BLUE_SHIFT_ARB                0x201A
#define WGL_ALPHA_BITS_ARB                0x201B
#define WGL_ALPHA_SHIFT_ARB               0x201C
#define WGL_ACCUM_BITS_ARB                0x201D
#define WGL_ACCUM_RED_BITS_ARB            0x201E
#define WGL_ACCUM_GREEN_BITS_ARB          0x201F
#define WGL_ACCUM_BLUE_BITS_ARB           0x2020
#define WGL_ACCUM_ALPHA_BITS_ARB          0x2021
#define WGL_DEPTH_BITS_ARB                0x2022
#define WGL_STENCIL_BITS_ARB              0x2023
#define WGL_AUX_BUFFERS_ARB               0x2024
#define WGL_NO_ACCELERATION_ARB           0x2025
#define WGL_GENERIC_ACCELERATION_ARB      0x2026
#define WGL_FULL_ACCELERATION_ARB         0x2027
#define WGL_SWAP_EXCHANGE_ARB             0x2028
#define WGL_SWAP_COPY_ARB                 0x2029
#define WGL_SWAP_UNDEFINED_ARB            0x202A
#define WGL_TYPE_RGBA_ARB                 0x202B
#define WGL_TYPE_COLORINDEX_ARB           0x202C
#define WGL_CONTEXT_DEBUG_BIT_ARB         0x00000001
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x00000002
#define WGL_CONTEXT_MAJOR_VERSION_ARB     0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB     0x2092
#define WGL_CONTEXT_LAYER_PLANE_ARB       0x2093
#define WGL_CONTEXT_FLAGS_ARB             0x2094
#define ERROR_INVALID_VERSION_ARB         0x2095
#define WGL_CONTEXT_PROFILE_MASK_ARB      0x9126
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB  0x00000001
#define WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define ERROR_INVALID_PROFILE_ARB         0x2096
BOOL (*wglChoosePixelFormatARB)(HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
HGLRC (*wglCreateContextAttribsARB)(HDC hDC, HGLRC hShareContext, const int *attribList);
BOOL (*wglSwapIntervalEXT)(int interval);
typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef signed char GLbyte;
typedef char GLchar;
typedef short GLshort;
typedef int GLint;
typedef int GLsizei;
typedef signed long long GLsizeiptr;
typedef signed long long GLintptr;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void GLvoid;
#define GL_DEPTH_BUFFER_BIT 0x00000100
#define GL_STENCIL_BUFFER_BIT 0x00000400
#define GL_COLOR_BUFFER_BIT 0x00004000
#define GL_FALSE 0
#define GL_TRUE 1
#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_LINE_LOOP 0x0002
#define GL_LINE_STRIP 0x0003
#define GL_TRIANGLES 0x0004
#define GL_TRIANGLE_STRIP 0x0005
#define GL_TRIANGLE_FAN 0x0006
#define GL_NEVER 0x0200
#define GL_LESS 0x0201
#define GL_EQUAL 0x0202
#define GL_LEQUAL 0x0203
#define GL_GREATER 0x0204
#define GL_NOTEQUAL 0x0205
#define GL_GEQUAL 0x0206
#define GL_ALWAYS 0x0207
#define GL_ZERO 0
#define GL_ONE 1
#define GL_SRC_COLOR 0x0300
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#define GL_SRC_ALPHA 0x0302
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_DST_ALPHA 0x0304
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#define GL_DST_COLOR 0x0306
#define GL_ONE_MINUS_DST_COLOR 0x0307
#define GL_SRC_ALPHA_SATURATE 0x0308
#define GL_NONE 0
#define GL_FRONT_LEFT 0x0400
#define GL_FRONT_RIGHT 0x0401
#define GL_BACK_LEFT 0x0402
#define GL_BACK_RIGHT 0x0403
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_LEFT 0x0406
#define GL_RIGHT 0x0407
#define GL_FRONT_AND_BACK 0x0408
#define GL_NO_ERROR 0
#define GL_INVALID_ENUM 0x0500
#define GL_INVALID_VALUE 0x0501
#define GL_INVALID_OPERATION 0x0502
#define GL_OUT_OF_MEMORY 0x0505
#define GL_CW 0x0900
#define GL_CCW 0x0901
#define GL_POINT_SIZE 0x0B11
#define GL_POINT_SIZE_RANGE 0x0B12
#define GL_POINT_SIZE_GRANULARITY 0x0B13
#define GL_LINE_SMOOTH 0x0B20
#define GL_LINE_WIDTH 0x0B21
#define GL_LINE_WIDTH_RANGE 0x0B22
#define GL_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_POLYGON_MODE 0x0B40
#define GL_POLYGON_SMOOTH 0x0B41
#define GL_CULL_FACE 0x0B44
#define GL_CULL_FACE_MODE 0x0B45
#define GL_FRONT_FACE 0x0B46
#define GL_DEPTH_RANGE 0x0B70
#define GL_DEPTH_TEST 0x0B71
#define GL_DEPTH_WRITEMASK 0x0B72
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#define GL_DEPTH_FUNC 0x0B74
#define GL_STENCIL_TEST 0x0B90
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#define GL_STENCIL_FUNC 0x0B92
#define GL_STENCIL_VALUE_MASK 0x0B93
#define GL_STENCIL_FAIL 0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#define GL_STENCIL_REF 0x0B97
#define GL_STENCIL_WRITEMASK 0x0B98
#define GL_VIEWPORT 0x0BA2
#define GL_DITHER 0x0BD0
#define GL_BLEND_DST 0x0BE0
#define GL_BLEND_SRC 0x0BE1
#define GL_BLEND 0x0BE2
#define GL_LOGIC_OP_MODE 0x0BF0
#define GL_DRAW_BUFFER 0x0C01
#define GL_READ_BUFFER 0x0C02
#define GL_SCISSOR_BOX 0x0C10
#define GL_SCISSOR_TEST 0x0C11
#define GL_COLOR_CLEAR_VALUE 0x0C22
#define GL_COLOR_WRITEMASK 0x0C23
#define GL_DOUBLEBUFFER 0x0C32
#define GL_STEREO 0x0C33
#define GL_LINE_SMOOTH_HINT 0x0C52
#define GL_POLYGON_SMOOTH_HINT 0x0C53
#define GL_UNPACK_SWAP_BYTES 0x0CF0
#define GL_UNPACK_LSB_FIRST 0x0CF1
#define GL_UNPACK_ROW_LENGTH 0x0CF2
#define GL_UNPACK_SKIP_ROWS 0x0CF3
#define GL_UNPACK_SKIP_PIXELS 0x0CF4
#define GL_UNPACK_ALIGNMENT 0x0CF5
#define GL_PACK_SWAP_BYTES 0x0D00
#define GL_PACK_LSB_FIRST 0x0D01
#define GL_PACK_ROW_LENGTH 0x0D02
#define GL_PACK_SKIP_ROWS 0x0D03
#define GL_PACK_SKIP_PIXELS 0x0D04
#define GL_PACK_ALIGNMENT 0x0D05
#define GL_MAX_TEXTURE_SIZE 0x0D33
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#define GL_SUBPIXEL_BITS 0x0D50
#define GL_TEXTURE_1D 0x0DE0
#define GL_TEXTURE_2D 0x0DE1
#define GL_TEXTURE_WIDTH 0x1000
#define GL_TEXTURE_HEIGHT 0x1001
#define GL_TEXTURE_BORDER_COLOR 0x1004
#define GL_DONT_CARE 0x1100
#define GL_FASTEST 0x1101
#define GL_NICEST 0x1102
#define GL_BYTE 0x1400
#define GL_UNSIGNED_BYTE 0x1401
#define GL_SHORT 0x1402
#define GL_UNSIGNED_SHORT 0x1403
#define GL_INT 0x1404
#define GL_UNSIGNED_INT 0x1405
#define GL_FLOAT 0x1406
#define GL_CLEAR 0x1500
#define GL_AND 0x1501
#define GL_AND_REVERSE 0x1502
#define GL_COPY 0x1503
#define GL_AND_INVERTED 0x1504
#define GL_NOOP 0x1505
#define GL_XOR 0x1506
#define GL_OR 0x1507
#define GL_NOR 0x1508
#define GL_EQUIV 0x1509
#define GL_INVERT 0x150A
#define GL_OR_REVERSE 0x150B
#define GL_COPY_INVERTED 0x150C
#define GL_OR_INVERTED 0x150D
#define GL_NAND 0x150E
#define GL_SET 0x150F
#define GL_TEXTURE 0x1702
#define GL_COLOR 0x1800
#define GL_DEPTH 0x1801
#define GL_STENCIL 0x1802
#define GL_STENCIL_INDEX 0x1901
#define GL_DEPTH_COMPONENT 0x1902
#define GL_RED 0x1903
#define GL_GREEN 0x1904
#define GL_BLUE 0x1905
#define GL_ALPHA 0x1906
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_POINT 0x1B00
#define GL_LINE 0x1B01
#define GL_FILL 0x1B02
#define GL_KEEP 0x1E00
#define GL_REPLACE 0x1E01
#define GL_INCR 0x1E02
#define GL_DECR 0x1E03
#define GL_VENDOR 0x1F00
#define GL_RENDERER 0x1F01
#define GL_VERSION 0x1F02
#define GL_EXTENSIONS 0x1F03
#define GL_NEAREST 0x2600
#define GL_LINEAR 0x2601
#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#define GL_LINEAR_MIPMAP_LINEAR 0x2703
#define GL_TEXTURE_MAG_FILTER 0x2800
#define GL_TEXTURE_MIN_FILTER 0x2801
#define GL_TEXTURE_WRAP_S 0x2802
#define GL_TEXTURE_WRAP_T 0x2803
#define GL_REPEAT 0x2901
#define GL_COLOR_LOGIC_OP 0x0BF2
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#define GL_POLYGON_OFFSET_POINT 0x2A01
#define GL_POLYGON_OFFSET_LINE 0x2A02
#define GL_POLYGON_OFFSET_FILL 0x8037
#define GL_POLYGON_OFFSET_FACTOR 0x8038
#define GL_TEXTURE_BINDING_1D 0x8068
#define GL_TEXTURE_BINDING_2D 0x8069
#define GL_TEXTURE_INTERNAL_FORMAT 0x1003
#define GL_TEXTURE_RED_SIZE 0x805C
#define GL_TEXTURE_GREEN_SIZE 0x805D
#define GL_TEXTURE_BLUE_SIZE 0x805E
#define GL_TEXTURE_ALPHA_SIZE 0x805F
#define GL_DOUBLE 0x140A
#define GL_PROXY_TEXTURE_1D 0x8063
#define GL_PROXY_TEXTURE_2D 0x8064
#define GL_R3_G3_B2 0x2A10
#define GL_RGB4 0x804F
#define GL_RGB5 0x8050
#define GL_RGB8 0x8051
#define GL_RGB10 0x8052
#define GL_RGB12 0x8053
#define GL_RGB16 0x8054
#define GL_RGBA2 0x8055
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGBA8 0x8058
#define GL_RGB10_A2 0x8059
#define GL_RGBA12 0x805A
#define GL_RGBA16 0x805B
#define GL_UNSIGNED_BYTE_3_3_2 0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#define GL_UNSIGNED_INT_8_8_8_8 0x8035
#define GL_UNSIGNED_INT_10_10_10_2 0x8036
#define GL_TEXTURE_BINDING_3D 0x806A
#define GL_PACK_SKIP_IMAGES 0x806B
#define GL_PACK_IMAGE_HEIGHT 0x806C
#define GL_UNPACK_SKIP_IMAGES 0x806D
#define GL_UNPACK_IMAGE_HEIGHT 0x806E
#define GL_TEXTURE_3D 0x806F
#define GL_PROXY_TEXTURE_3D 0x8070
#define GL_TEXTURE_DEPTH 0x8071
#define GL_TEXTURE_WRAP_R 0x8072
#define GL_MAX_3D_TEXTURE_SIZE 0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV 0x8362
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV 0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV 0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV 0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV 0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV 0x8368
#define GL_BGR 0x80E0
#define GL_BGRA 0x80E1
#define GL_MAX_ELEMENTS_VERTICES 0x80E8
#define GL_MAX_ELEMENTS_INDICES 0x80E9
#define GL_CLAMP_TO_EDGE 0x812F
#define GL_TEXTURE_MIN_LOD 0x813A
#define GL_TEXTURE_MAX_LOD 0x813B
#define GL_TEXTURE_BASE_LEVEL 0x813C
#define GL_TEXTURE_MAX_LEVEL 0x813D
#define GL_SMOOTH_POINT_SIZE_RANGE 0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY 0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE 0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#define GL_TEXTURE0 0x84C0
#define GL_TEXTURE1 0x84C1
#define GL_TEXTURE2 0x84C2
#define GL_TEXTURE3 0x84C3
#define GL_TEXTURE4 0x84C4
#define GL_TEXTURE5 0x84C5
#define GL_TEXTURE6 0x84C6
#define GL_TEXTURE7 0x84C7
#define GL_TEXTURE8 0x84C8
#define GL_TEXTURE9 0x84C9
#define GL_TEXTURE10 0x84CA
#define GL_TEXTURE11 0x84CB
#define GL_TEXTURE12 0x84CC
#define GL_TEXTURE13 0x84CD
#define GL_TEXTURE14 0x84CE
#define GL_TEXTURE15 0x84CF
#define GL_TEXTURE16 0x84D0
#define GL_TEXTURE17 0x84D1
#define GL_TEXTURE18 0x84D2
#define GL_TEXTURE19 0x84D3
#define GL_TEXTURE20 0x84D4
#define GL_TEXTURE21 0x84D5
#define GL_TEXTURE22 0x84D6
#define GL_TEXTURE23 0x84D7
#define GL_TEXTURE24 0x84D8
#define GL_TEXTURE25 0x84D9
#define GL_TEXTURE26 0x84DA
#define GL_TEXTURE27 0x84DB
#define GL_TEXTURE28 0x84DC
#define GL_TEXTURE29 0x84DD
#define GL_TEXTURE30 0x84DE
#define GL_TEXTURE31 0x84DF
#define GL_ACTIVE_TEXTURE 0x84E0
#define GL_MULTISAMPLE 0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE 0x809F
#define GL_SAMPLE_COVERAGE 0x80A0
#define GL_SAMPLE_BUFFERS 0x80A8
#define GL_SAMPLES 0x80A9
#define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP 0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#define GL_COMPRESSED_RGB 0x84ED
#define GL_COMPRESSED_RGBA 0x84EE
#define GL_TEXTURE_COMPRESSION_HINT 0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE 0x86A0
#define GL_TEXTURE_COMPRESSED 0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#define GL_CLAMP_TO_BORDER 0x812D
#define GL_BLEND_DST_RGB 0x80C8
#define GL_BLEND_SRC_RGB 0x80C9
#define GL_BLEND_DST_ALPHA 0x80CA
#define GL_BLEND_SRC_ALPHA 0x80CB
#define GL_POINT_FADE_THRESHOLD_SIZE 0x8128
#define GL_DEPTH_COMPONENT16 0x81A5
#define GL_DEPTH_COMPONENT24 0x81A6
#define GL_DEPTH_COMPONENT32 0x81A7
#define GL_MIRRORED_REPEAT 0x8370
#define GL_MAX_TEXTURE_LOD_BIAS 0x84FD
#define GL_TEXTURE_LOD_BIAS 0x8501
#define GL_INCR_WRAP 0x8507
#define GL_DECR_WRAP 0x8508
#define GL_TEXTURE_DEPTH_SIZE 0x884A
#define GL_TEXTURE_COMPARE_MODE 0x884C
#define GL_TEXTURE_COMPARE_FUNC 0x884D
#define GL_BLEND_COLOR 0x8005
#define GL_BLEND_EQUATION 0x8009
#define GL_CONSTANT_COLOR 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#define GL_CONSTANT_ALPHA 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#define GL_FUNC_ADD 0x8006
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#define GL_FUNC_SUBTRACT 0x800A
#define GL_MIN 0x8007
#define GL_MAX 0x8008
#define GL_BUFFER_SIZE 0x8764
#define GL_BUFFER_USAGE 0x8765
#define GL_QUERY_COUNTER_BITS 0x8864
#define GL_CURRENT_QUERY 0x8865
#define GL_QUERY_RESULT 0x8866
#define GL_QUERY_RESULT_AVAILABLE 0x8867
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_ARRAY_BUFFER_BINDING 0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY 0x88B8
#define GL_WRITE_ONLY 0x88B9
#define GL_READ_WRITE 0x88BA
#define GL_BUFFER_ACCESS 0x88BB
#define GL_BUFFER_MAPPED 0x88BC
#define GL_BUFFER_MAP_POINTER 0x88BD
#define GL_STREAM_DRAW 0x88E0
#define GL_STREAM_READ 0x88E1
#define GL_STREAM_COPY 0x88E2
#define GL_STATIC_DRAW 0x88E4
#define GL_STATIC_READ 0x88E5
#define GL_STATIC_COPY 0x88E6
#define GL_DYNAMIC_DRAW 0x88E8
#define GL_DYNAMIC_READ 0x88E9
#define GL_DYNAMIC_COPY 0x88EA
#define GL_SAMPLES_PASSED 0x8914
#define GL_SRC1_ALPHA 0x8589
#define GL_BLEND_EQUATION_RGB 0x8009
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#define GL_CURRENT_VERTEX_ATTRIB 0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE 0x8642
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#define GL_STENCIL_BACK_FUNC 0x8800
#define GL_STENCIL_BACK_FAIL 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
#define GL_MAX_DRAW_BUFFERS 0x8824
#define GL_DRAW_BUFFER0 0x8825
#define GL_DRAW_BUFFER1 0x8826
#define GL_DRAW_BUFFER2 0x8827
#define GL_DRAW_BUFFER3 0x8828
#define GL_DRAW_BUFFER4 0x8829
#define GL_DRAW_BUFFER5 0x882A
#define GL_DRAW_BUFFER6 0x882B
#define GL_DRAW_BUFFER7 0x882C
#define GL_DRAW_BUFFER8 0x882D
#define GL_DRAW_BUFFER9 0x882E
#define GL_DRAW_BUFFER10 0x882F
#define GL_DRAW_BUFFER11 0x8830
#define GL_DRAW_BUFFER12 0x8831
#define GL_DRAW_BUFFER13 0x8832
#define GL_DRAW_BUFFER14 0x8833
#define GL_DRAW_BUFFER15 0x8834
#define GL_BLEND_EQUATION_ALPHA 0x883D
#define GL_MAX_VERTEX_ATTRIBS 0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#define GL_FRAGMENT_SHADER 0x8B30
#define GL_VERTEX_SHADER 0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS 0x8B4A
#define GL_MAX_VARYING_FLOATS 0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE 0x8B4F
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_INT_VEC2 0x8B53
#define GL_INT_VEC3 0x8B54
#define GL_INT_VEC4 0x8B55
#define GL_BOOL 0x8B56
#define GL_BOOL_VEC2 0x8B57
#define GL_BOOL_VEC3 0x8B58
#define GL_BOOL_VEC4 0x8B59
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#define GL_SAMPLER_1D 0x8B5D
#define GL_SAMPLER_2D 0x8B5E
#define GL_SAMPLER_3D 0x8B5F
#define GL_SAMPLER_CUBE 0x8B60
#define GL_SAMPLER_1D_SHADOW 0x8B61
#define GL_SAMPLER_2D_SHADOW 0x8B62
#define GL_DELETE_STATUS 0x8B80
#define GL_COMPILE_STATUS 0x8B81
#define GL_LINK_STATUS 0x8B82
#define GL_VALIDATE_STATUS 0x8B83
#define GL_INFO_LOG_LENGTH 0x8B84
#define GL_ATTACHED_SHADERS 0x8B85
#define GL_ACTIVE_UNIFORMS 0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#define GL_ACTIVE_ATTRIBUTES 0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#define GL_CURRENT_PROGRAM 0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN 0x8CA0
#define GL_LOWER_LEFT 0x8CA1
#define GL_UPPER_LEFT 0x8CA2
#define GL_STENCIL_BACK_REF 0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#define GL_STENCIL_BACK_WRITEMASK 0x8CA5
WINGDIAPI void APIENTRY glCullFace (GLenum mode);
WINGDIAPI void APIENTRY glFrontFace (GLenum mode);
WINGDIAPI void APIENTRY glHint (GLenum target, GLenum mode);
WINGDIAPI void APIENTRY glLineWidth (GLfloat width);
WINGDIAPI void APIENTRY glPointSize (GLfloat size);
WINGDIAPI void APIENTRY glPolygonMode (GLenum face, GLenum mode);
WINGDIAPI void APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
WINGDIAPI void APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat param);
WINGDIAPI void APIENTRY glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
WINGDIAPI void APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint param);
WINGDIAPI void APIENTRY glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
WINGDIAPI void APIENTRY glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
WINGDIAPI void APIENTRY glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
WINGDIAPI void APIENTRY glDrawBuffer (GLenum mode);
WINGDIAPI void APIENTRY glClear (GLbitfield mask);
WINGDIAPI void APIENTRY glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
WINGDIAPI void APIENTRY glClearStencil (GLint s);
WINGDIAPI void APIENTRY glClearDepth (GLclampd depth);
WINGDIAPI void APIENTRY glStencilMask (GLuint mask);
WINGDIAPI void APIENTRY glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
WINGDIAPI void APIENTRY glDepthMask (GLboolean flag);
WINGDIAPI void APIENTRY glDisable (GLenum cap);
WINGDIAPI void APIENTRY glEnable (GLenum cap);
WINGDIAPI void APIENTRY glFinish (void);
WINGDIAPI void APIENTRY glFlush (void);
WINGDIAPI void APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor);
WINGDIAPI void APIENTRY glLogicOp (GLenum opcode);
WINGDIAPI void APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint mask);
WINGDIAPI void APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
WINGDIAPI void APIENTRY glDepthFunc (GLenum func);
WINGDIAPI void APIENTRY glPixelStoref (GLenum pname, GLfloat param);
WINGDIAPI void APIENTRY glPixelStorei (GLenum pname, GLint param);
WINGDIAPI void APIENTRY glReadBuffer (GLenum mode);
WINGDIAPI void APIENTRY glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
WINGDIAPI void APIENTRY glGetBooleanv (GLenum pname, GLboolean *params);
WINGDIAPI void APIENTRY glGetDoublev (GLenum pname, GLdouble *params);
WINGDIAPI GLenum APIENTRY glGetError (void);
WINGDIAPI void APIENTRY glGetFloatv (GLenum pname, GLfloat *params);
WINGDIAPI void APIENTRY glGetIntegerv (GLenum pname, GLint *params);
WINGDIAPI const GLubyte * APIENTRY glGetString (GLenum name);
WINGDIAPI void APIENTRY glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
WINGDIAPI void APIENTRY glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
WINGDIAPI void APIENTRY glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
WINGDIAPI void APIENTRY glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params);
WINGDIAPI void APIENTRY glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params);
WINGDIAPI GLboolean APIENTRY glIsEnabled (GLenum cap);
WINGDIAPI void APIENTRY glDepthRange (GLclampd zNear, GLclampd zFar);
WINGDIAPI void APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
WINGDIAPI void APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei count);
WINGDIAPI void APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
WINGDIAPI void APIENTRY glPolygonOffset (GLfloat factor, GLfloat units);
WINGDIAPI void APIENTRY glCopyTexImage1D (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
WINGDIAPI void APIENTRY glCopyTexImage2D (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
WINGDIAPI void APIENTRY glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
WINGDIAPI void APIENTRY glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
WINGDIAPI void APIENTRY glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
WINGDIAPI void APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
WINGDIAPI void APIENTRY glBindTexture (GLenum target, GLuint texture);
WINGDIAPI void APIENTRY glDeleteTextures (GLsizei n, const GLuint *textures);
WINGDIAPI void APIENTRY glGenTextures (GLsizei n, GLuint *textures);
WINGDIAPI GLboolean APIENTRY glIsTexture (GLuint texture);
void (*glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
void (*glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
void (*glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
void (*glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void (*glActiveTexture)(GLenum texture);
void (*glSampleCoverage)(GLfloat value, GLboolean invert);
void (*glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
void (*glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
void (*glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
void (*glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
void (*glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
void (*glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
void (*glGetCompressedTexImage)(GLenum target, GLint level, void *img);
void (*glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
void (*glMultiDrawArrays)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
void (*glMultiDrawElements)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
void (*glPointParameterf)(GLenum pname, GLfloat param);
void (*glPointParameterfv)(GLenum pname, const GLfloat *params);
void (*glPointParameteri)(GLenum pname, GLint param);
void (*glPointParameteriv)(GLenum pname, const GLint *params);
void (*glBlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void (*glBlendEquation)(GLenum mode);
void (*glGenQueries)(GLsizei n, GLuint *ids);
void (*glDeleteQueries)(GLsizei n, const GLuint *ids);
GLboolean (*glIsQuery)(GLuint id);
void (*glBeginQuery)(GLenum target, GLuint id);
void (*glEndQuery)(GLenum target);
void (*glGetQueryiv)(GLenum target, GLenum pname, GLint *params);
void (*glGetQueryObjectiv)(GLuint id, GLenum pname, GLint *params);
void (*glGetQueryObjectuiv)(GLuint id, GLenum pname, GLuint *params);
void (*glBindBuffer)(GLenum target, GLuint buffer);
void (*glDeleteBuffers)(GLsizei n, const GLuint *buffers);
void (*glGenBuffers)(GLsizei n, GLuint *buffers);
GLboolean (*glIsBuffer)(GLuint buffer);
void (*glBufferData)(GLenum target, GLsizeiptr size, const void *data, GLenum usage);
void (*glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
void (*glGetBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, void *data);
void (*glMapBuffer)(GLenum target, GLenum access);
GLboolean (*glUnmapBuffer)(GLenum target);
void (*glGetBufferParameteriv)(GLenum target, GLenum pname, GLint *params);
void (*glGetBufferPointerv)(GLenum target, GLenum pname, void **params);
void (*glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);
void (*glDrawBuffers)(GLsizei n, const GLenum *bufs);
void (*glStencilOpSeparate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
void (*glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);
void (*glStencilMaskSeparate)(GLenum face, GLuint mask);
void (*glAttachShader)(GLuint program, GLuint shader);
void (*glBindAttribLocation)(GLuint program, GLuint index, const GLchar *name);
void (*glCompileShader)(GLuint shader);
GLuint (*glCreateProgram)(void);
GLuint (*glCreateShader)(GLenum type);
void (*glDeleteProgram)(GLuint program);
void (*glDeleteShader)(GLuint shader);
void (*glDetachShader)(GLuint program, GLuint shader);
void (*glDisableVertexAttribArray)(GLuint index);
void (*glEnableVertexAttribArray)(GLuint index);
void (*glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
void (*glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
void (*glGetAttachedShaders)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
GLint (*glGetAttribLocation)(GLuint program, const GLchar *name);
void (*glGetProgramiv)(GLuint program, GLenum pname, GLint *params);
void (*glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
void (*glGetShaderiv)(GLuint shader, GLenum pname, GLint *params);
void (*glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
void (*glGetShaderSource)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
GLint (*glGetUniformLocation)(GLuint program, const GLchar *name);
void (*glGetUniformfv)(GLuint program, GLint location, GLfloat *params);
void (*glGetUniformiv)(GLuint program, GLint location, GLint *params);
void (*glGetVertexAttribdv)(GLuint index, GLenum pname, GLdouble *params);
void (*glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat *params);
void (*glGetVertexAttribiv)(GLuint index, GLenum pname, GLint *params);
void (*glGetVertexAttribPointerv)(GLuint index, GLenum pname, void **pointer);
GLboolean (*glIsProgram)(GLuint program);
GLboolean (*glIsShader)(GLuint shader);
void (*glLinkProgram)(GLuint program);
void (*glShaderSource)(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
void (*glUseProgram)(GLuint program);
void (*glUniform1f)(GLint location, GLfloat v0);
void (*glUniform2f)(GLint location, GLfloat v0, GLfloat v1);
void (*glUniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
void (*glUniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
void (*glUniform1i)(GLint location, GLint v0);
void (*glUniform2i)(GLint location, GLint v0, GLint v1);
void (*glUniform3i)(GLint location, GLint v0, GLint v1, GLint v2);
void (*glUniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
void (*glUniform1fv)(GLint location, GLsizei count, const GLfloat *value);
void (*glUniform2fv)(GLint location, GLsizei count, const GLfloat *value);
void (*glUniform3fv)(GLint location, GLsizei count, const GLfloat *value);
void (*glUniform4fv)(GLint location, GLsizei count, const GLfloat *value);
void (*glUniform1iv)(GLint location, GLsizei count, const GLint *value);
void (*glUniform2iv)(GLint location, GLsizei count, const GLint *value);
void (*glUniform3iv)(GLint location, GLsizei count, const GLint *value);
void (*glUniform4iv)(GLint location, GLsizei count, const GLint *value);
void (*glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
void (*glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
void (*glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
void (*glValidateProgram)(GLuint program);
void (*glVertexAttrib1d)(GLuint index, GLdouble x);
void (*glVertexAttrib1dv)(GLuint index, const GLdouble *v);
void (*glVertexAttrib1f)(GLuint index, GLfloat x);
void (*glVertexAttrib1fv)(GLuint index, const GLfloat *v);
void (*glVertexAttrib1s)(GLuint index, GLshort x);
void (*glVertexAttrib1sv)(GLuint index, const GLshort *v);
void (*glVertexAttrib2d)(GLuint index, GLdouble x, GLdouble y);
void (*glVertexAttrib2dv)(GLuint index, const GLdouble *v);
void (*glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y);
void (*glVertexAttrib2fv)(GLuint index, const GLfloat *v);
void (*glVertexAttrib2s)(GLuint index, GLshort x, GLshort y);
void (*glVertexAttrib2sv)(GLuint index, const GLshort *v);
void (*glVertexAttrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
void (*glVertexAttrib3dv)(GLuint index, const GLdouble *v);
void (*glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
void (*glVertexAttrib3fv)(GLuint index, const GLfloat *v);
void (*glVertexAttrib3s)(GLuint index, GLshort x, GLshort y, GLshort z);
void (*glVertexAttrib3sv)(GLuint index, const GLshort *v);
void (*glVertexAttrib4Nbv)(GLuint index, const GLbyte *v);
void (*glVertexAttrib4Niv)(GLuint index, const GLint *v);
void (*glVertexAttrib4Nsv)(GLuint index, const GLshort *v);
void (*glVertexAttrib4Nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
void (*glVertexAttrib4Nubv)(GLuint index, const GLubyte *v);
void (*glVertexAttrib4Nuiv)(GLuint index, const GLuint *v);
void (*glVertexAttrib4Nusv)(GLuint index, const GLushort *v);
void (*glVertexAttrib4bv)(GLuint index, const GLbyte *v);
void (*glVertexAttrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (*glVertexAttrib4dv)(GLuint index, const GLdouble *v);
void (*glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (*glVertexAttrib4fv)(GLuint index, const GLfloat *v);
void (*glVertexAttrib4iv)(GLuint index, const GLint *v);
void (*glVertexAttrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
void (*glVertexAttrib4sv)(GLuint index, const GLshort *v);
void (*glVertexAttrib4ubv)(GLuint index, const GLubyte *v);
void (*glVertexAttrib4uiv)(GLuint index, const GLuint *v);
void (*glVertexAttrib4usv)(GLuint index, const GLushort *v);
void (*glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
void FatalError(const char* message){
    MessageBoxA(NULL, message, "Error", MB_ICONEXCLAMATION);
    ExitProcess(0);
}
#define Assert(cond) do{ if (!(cond)) FatalError(#cond); } while (0)
LRESULT WindowProc(HWND wnd, UINT msg, WPARAM wparam, LPARAM lparam){
    switch (msg){
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcW(wnd, msg, wparam, lparam);
}
int WinMain(HINSTANCE instance, HINSTANCE previnstance, LPSTR cmdline, int cmdshow){
    HWND dummy = CreateWindowExW(0,L"STATIC",L"DummyWindow",WS_OVERLAPPED,CW_USEDEFAULT,CW_USEDEFAULT,CW_USEDEFAULT,CW_USEDEFAULT,0,0,0,0);
    HDC dc = GetDC(dummy);
    PIXELFORMATDESCRIPTOR desc = {
        .nSize = sizeof(desc),
        .nVersion = 1,
        .dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
        .iPixelType = PFD_TYPE_RGBA,
        .cColorBits = 24,
    };
    int format = ChoosePixelFormat(dc, &desc);
    DescribePixelFormat(dc, format, sizeof(desc), &desc);
    SetPixelFormat(dc, format, &desc);
    HGLRC rc = wglCreateContext(dc);
    wglMakeCurrent(dc, rc);
#define G(f) f = wglGetProcAddress(#f);
    G(wglChoosePixelFormatARB)
    G(wglCreateContextAttribsARB)
    G(wglSwapIntervalEXT)
    wglMakeCurrent(NULL, NULL);
    wglDeleteContext(rc);
    ReleaseDC(dummy, dc);
    DestroyWindow(dummy);
    WNDCLASSEXW wc = {
        .cbSize = sizeof(wc),
        .lpfnWndProc = WindowProc,
        .hInstance = instance,
        .hIcon = LoadIcon(NULL, IDI_APPLICATION),
        .hCursor = LoadCursor(NULL, IDC_ARROW),
        .lpszClassName = L"opengl_window_class",
    };
    RegisterClassExW(&wc);
    int width = CW_USEDEFAULT;
    int height = CW_USEDEFAULT;
    HWND window = CreateWindowExW(WS_EX_APPWINDOW,wc.lpszClassName,L"OpenGL Window",WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,width,height,0,0,wc.hInstance,0);
    dc = GetDC(window);
    int pa[] = {
        WGL_DRAW_TO_WINDOW_ARB, GL_TRUE,
        WGL_SUPPORT_OPENGL_ARB, GL_TRUE,
        WGL_DOUBLE_BUFFER_ARB,  GL_TRUE,
        WGL_PIXEL_TYPE_ARB,     WGL_TYPE_RGBA_ARB,
        WGL_COLOR_BITS_ARB,     24,
        WGL_DEPTH_BITS_ARB,     24,
        WGL_STENCIL_BITS_ARB,   8,
        0,
    };
    UINT formats;
    wglChoosePixelFormatARB(dc, pa, NULL, 1, &format, &formats);
    desc = (PIXELFORMATDESCRIPTOR){.nSize = sizeof(desc)};
    DescribePixelFormat(dc, format, sizeof(desc), &desc);
    SetPixelFormat(dc, format, &desc);
    int ca[] = {
        WGL_CONTEXT_MAJOR_VERSION_ARB, 2,
        WGL_CONTEXT_MINOR_VERSION_ARB, 0,
        0,
    };
    rc = wglCreateContextAttribsARB(dc, NULL, ca);
    wglMakeCurrent(dc, rc);
    G(glDrawRangeElements)
    G(glTexImage3D)
    G(glTexSubImage3D)
    G(glCopyTexSubImage3D)
    G(glActiveTexture)
    G(glSampleCoverage)
    G(glCompressedTexImage3D)
    G(glCompressedTexImage2D)
    G(glCompressedTexImage1D)
    G(glCompressedTexSubImage3D)
    G(glCompressedTexSubImage2D)
    G(glCompressedTexSubImage1D)
    G(glGetCompressedTexImage)
    G(glBlendFuncSeparate)
    G(glMultiDrawArrays)
    G(glMultiDrawElements)
    G(glPointParameterf)
    G(glPointParameterfv)
    G(glPointParameteri)
    G(glPointParameteriv)
    G(glBlendColor)
    G(glBlendEquation)
    G(glGenQueries)
    G(glDeleteQueries)
    G(glIsQuery)
    G(glBeginQuery)
    G(glEndQuery)
    G(glGetQueryiv)
    G(glGetQueryObjectiv)
    G(glGetQueryObjectuiv)
    G(glBindBuffer)
    G(glDeleteBuffers)
    G(glGenBuffers)
    G(glIsBuffer)
    G(glBufferData)
    G(glBufferSubData)
    G(glGetBufferSubData)
    G(glMapBuffer)
    G(glUnmapBuffer)
    G(glGetBufferParameteriv)
    G(glGetBufferPointerv)
    G(glBlendEquationSeparate)
    G(glDrawBuffers)
    G(glStencilOpSeparate)
    G(glStencilFuncSeparate)
    G(glStencilMaskSeparate)
    G(glAttachShader)
    G(glBindAttribLocation)
    G(glCompileShader)
    G(glCreateProgram)
    G(glCreateShader)
    G(glDeleteProgram)
    G(glDeleteShader)
    G(glDetachShader)
    G(glDisableVertexAttribArray)
    G(glEnableVertexAttribArray)
    G(glGetActiveAttrib)
    G(glGetActiveUniform)
    G(glGetAttachedShaders)
    G(glGetAttribLocation)
    G(glGetProgramiv)
    G(glGetProgramInfoLog)
    G(glGetShaderiv)
    G(glGetShaderInfoLog)
    G(glGetShaderSource)
    G(glGetUniformLocation)
    G(glGetUniformfv)
    G(glGetUniformiv)
    G(glGetVertexAttribdv)
    G(glGetVertexAttribfv)
    G(glGetVertexAttribiv)
    G(glGetVertexAttribPointerv)
    G(glIsProgram)
    G(glIsShader)
    G(glLinkProgram)
    G(glShaderSource)
    G(glUseProgram)
    G(glUniform1f)
    G(glUniform2f)
    G(glUniform3f)
    G(glUniform4f)
    G(glUniform1i)
    G(glUniform2i)
    G(glUniform3i)
    G(glUniform4i)
    G(glUniform1fv)
    G(glUniform2fv)
    G(glUniform3fv)
    G(glUniform4fv)
    G(glUniform1iv)
    G(glUniform2iv)
    G(glUniform3iv)
    G(glUniform4iv)
    G(glUniformMatrix2fv)
    G(glUniformMatrix3fv)
    G(glUniformMatrix4fv)
    G(glValidateProgram)
    G(glVertexAttrib1d)
    G(glVertexAttrib1dv)
    G(glVertexAttrib1f)
    G(glVertexAttrib1fv)
    G(glVertexAttrib1s)
    G(glVertexAttrib1sv)
    G(glVertexAttrib2d)
    G(glVertexAttrib2dv)
    G(glVertexAttrib2f)
    G(glVertexAttrib2fv)
    G(glVertexAttrib2s)
    G(glVertexAttrib2sv)
    G(glVertexAttrib3d)
    G(glVertexAttrib3dv)
    G(glVertexAttrib3f)
    G(glVertexAttrib3fv)
    G(glVertexAttrib3s)
    G(glVertexAttrib3sv)
    G(glVertexAttrib4Nbv)
    G(glVertexAttrib4Niv)
    G(glVertexAttrib4Nsv)
    G(glVertexAttrib4Nub)
    G(glVertexAttrib4Nubv)
    G(glVertexAttrib4Nuiv)
    G(glVertexAttrib4Nusv)
    G(glVertexAttrib4bv)
    G(glVertexAttrib4d)
    G(glVertexAttrib4dv)
    G(glVertexAttrib4f)
    G(glVertexAttrib4fv)
    G(glVertexAttrib4iv)
    G(glVertexAttrib4s)
    G(glVertexAttrib4sv)
    G(glVertexAttrib4ubv)
    G(glVertexAttrib4uiv)
    G(glVertexAttrib4usv)
    G(glVertexAttribPointer)
    wglSwapIntervalEXT(1);
    ShowWindow(window, SW_SHOWDEFAULT);
    LARGE_INTEGER freq, c1;
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&c1);
    for (;;){
        MSG msg;
        while (PeekMessageW(&msg, NULL, 0, 0, PM_REMOVE)){
            if (msg.message == WM_QUIT) return msg.wParam;
            TranslateMessage(&msg);
            DispatchMessageW(&msg);
        }
        RECT rect;
        GetClientRect(window, &rect);
        width = rect.right - rect.left;
        height = rect.bottom - rect.top;
        LARGE_INTEGER c2;
        QueryPerformanceCounter(&c2);
        float dt = (float)((double)(c2.QuadPart - c1.QuadPart) / freq.QuadPart);
        c1 = c2;
        if (width != 0 && height != 0){
            glViewport(0, 0, width, height);
            glClearColor(0.392f, 0.584f, 0.929f, 1.f);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
            SwapBuffers(dc);
        } else Sleep(10);
    }
}