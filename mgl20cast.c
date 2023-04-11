#define WIN32_LEAN_AND_MEAN
#include <windows.h>
typedef unsigned int GLenum;typedef unsigned char GLboolean;typedef unsigned int GLbitfield;typedef signed char GLbyte;typedef char GLchar;typedef short GLshort;typedef int GLint;
typedef int GLsizei;typedef signed long long GLsizeiptr;typedef signed long long GLintptr;typedef unsigned char GLubyte;typedef unsigned short GLushort;typedef unsigned int GLuint;
typedef float GLfloat;typedef float GLclampf;typedef double GLdouble;typedef double GLclampd;typedef void GLvoid;
enum{GL_FALSE=0,GL_POINTS=0,GL_ZERO=0,GL_NONE=0,GL_NO_ERROR=0,WGL_CONTEXT_DEBUG_BIT_ARB,WGL_CONTEXT_CORE_PROFILE_BIT_ARB=1,GL_TRUE=1,GL_LINES=1,GL_ONE=1,
WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB,WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB=2,GL_LINE_LOOP=2,GL_LINE_STRIP,GL_TRIANGLES,GL_TRIANGLE_STRIP,GL_TRIANGLE_FAN,
GL_DEPTH_BUFFER_BIT=256,GL_NEVER=512,GL_LESS,GL_EQUAL,GL_LEQUAL,GL_GREATER,GL_NOTEQUAL,GL_GEQUAL,GL_ALWAYS,GL_SRC_COLOR=768,GL_ONE_MINUS_SRC_COLOR,GL_SRC_ALPHA,
GL_ONE_MINUS_SRC_ALPHA,GL_DST_ALPHA,GL_ONE_MINUS_DST_ALPHA,GL_DST_COLOR,GL_ONE_MINUS_DST_COLOR,GL_SRC_ALPHA_SATURATE,GL_STENCIL_BUFFER_BIT=1024,GL_FRONT_LEFT=1024,
GL_FRONT_RIGHT,GL_BACK_LEFT,GL_BACK_RIGHT,GL_FRONT,GL_BACK,GL_LEFT,GL_RIGHT,GL_FRONT_AND_BACK,GL_INVALID_ENUM=1280,GL_INVALID_VALUE,GL_INVALID_OPERATION,
GL_OUT_OF_MEMORY=1285,GL_CW=2304,GL_CCW,GL_POINT_SIZE=2833,GL_POINT_SIZE_RANGE,GL_SMOOTH_POINT_SIZE_RANGE=2834,GL_POINT_SIZE_GRANULARITY,GL_SMOOTH_POINT_SIZE_GRANULARITY=2835,
GL_LINE_SMOOTH=2848,GL_LINE_WIDTH,GL_LINE_WIDTH_RANGE,GL_SMOOTH_LINE_WIDTH_RANGE=2850,GL_LINE_WIDTH_GRANULARITY,GL_SMOOTH_LINE_WIDTH_GRANULARITY=2851,
GL_POLYGON_MODE=2880,GL_POLYGON_SMOOTH,GL_CULL_FACE=2884,GL_CULL_FACE_MODE,GL_FRONT_FACE,GL_DEPTH_RANGE=2928,GL_DEPTH_TEST,GL_DEPTH_WRITEMASK,GL_DEPTH_CLEAR_VALUE,
GL_DEPTH_FUNC,GL_STENCIL_TEST=2960,GL_STENCIL_CLEAR_VALUE,GL_STENCIL_FUNC,GL_STENCIL_VALUE_MASK,GL_STENCIL_FAIL,GL_STENCIL_PASS_DEPTH_FAIL,GL_STENCIL_PASS_DEPTH_PASS,
GL_STENCIL_REF,GL_STENCIL_WRITEMASK,GL_VIEWPORT=2978,GL_DITHER=3024,GL_BLEND_DST=3040,GL_BLEND_SRC,GL_BLEND,GL_LOGIC_OP_MODE=3056,GL_COLOR_LOGIC_OP=3058,
GL_DRAW_BUFFER=3073,GL_READ_BUFFER,GL_SCISSOR_BOX=3088,GL_SCISSOR_TEST,GL_COLOR_CLEAR_VALUE=3106,GL_COLOR_WRITEMASK,GL_DOUBLEBUFFER=3122,GL_STEREO,GL_LINE_SMOOTH_HINT=3154,
GL_POLYGON_SMOOTH_HINT,GL_UNPACK_SWAP_BYTES=3312,GL_UNPACK_LSB_FIRST,GL_UNPACK_ROW_LENGTH,GL_UNPACK_SKIP_ROWS,GL_UNPACK_SKIP_PIXELS,GL_UNPACK_ALIGNMENT,
GL_PACK_SWAP_BYTES=3328,GL_PACK_LSB_FIRST,GL_PACK_ROW_LENGTH,GL_PACK_SKIP_ROWS,GL_PACK_SKIP_PIXELS,GL_PACK_ALIGNMENT,GL_MAX_TEXTURE_SIZE=3379,GL_MAX_VIEWPORT_DIMS=3386,
GL_SUBPIXEL_BITS=3408,GL_TEXTURE_1D=3552,GL_TEXTURE_2D,GL_TEXTURE_WIDTH=4096,GL_TEXTURE_HEIGHT,GL_TEXTURE_INTERNAL_FORMAT=4099,GL_TEXTURE_BORDER_COLOR,
GL_DONT_CARE=4352,GL_FASTEST,GL_NICEST,GL_BYTE=5120,GL_UNSIGNED_BYTE,GL_SHORT,GL_UNSIGNED_SHORT,GL_INT,GL_UNSIGNED_INT,GL_FLOAT,GL_DOUBLE=5130,GL_CLEAR=5376,
GL_AND,GL_AND_REVERSE,GL_COPY,GL_AND_INVERTED,GL_NOOP,GL_XOR,GL_OR,GL_NOR,GL_EQUIV,GL_INVERT,GL_OR_REVERSE,GL_COPY_INVERTED,GL_OR_INVERTED,GL_NAND,GL_SET,
GL_TEXTURE=5890,GL_COLOR=6144,GL_DEPTH,GL_STENCIL,GL_STENCIL_INDEX=6401,GL_DEPTH_COMPONENT,GL_RED,GL_GREEN,GL_BLUE,GL_ALPHA,GL_RGB,GL_RGBA,GL_POINT=6912,
GL_LINE,GL_FILL,GL_KEEP=7680,GL_REPLACE,GL_INCR,GL_DECR,GL_VENDOR=7936,GL_RENDERER,GL_VERSION,GL_EXTENSIONS,WGL_NUMBER_PIXEL_FORMATS_ARB=8192,WGL_DRAW_TO_WINDOW_ARB,
WGL_DRAW_TO_BITMAP_ARB,WGL_ACCELERATION_ARB,WGL_NEED_PALETTE_ARB,WGL_NEED_SYSTEM_PALETTE_ARB,WGL_SWAP_LAYER_BUFFERS_ARB,WGL_SWAP_METHOD_ARB,WGL_NUMBER_OVERLAYS_ARB,
WGL_NUMBER_UNDERLAYS_ARB,WGL_TRANSPARENT_ARB,WGL_SHARE_DEPTH_ARB=8204,WGL_SHARE_STENCIL_ARB,WGL_SHARE_ACCUM_ARB,WGL_SUPPORT_GDI_ARB,WGL_SUPPORT_OPENGL_ARB,
WGL_DOUBLE_BUFFER_ARB,WGL_STEREO_ARB,WGL_PIXEL_TYPE_ARB,WGL_COLOR_BITS_ARB,WGL_RED_BITS_ARB,WGL_RED_SHIFT_ARB,WGL_GREEN_BITS_ARB,WGL_GREEN_SHIFT_ARB,WGL_BLUE_BITS_ARB,
WGL_BLUE_SHIFT_ARB,WGL_ALPHA_BITS_ARB,WGL_ALPHA_SHIFT_ARB,WGL_ACCUM_BITS_ARB,WGL_ACCUM_RED_BITS_ARB,WGL_ACCUM_GREEN_BITS_ARB,WGL_ACCUM_BLUE_BITS_ARB,WGL_ACCUM_ALPHA_BITS_ARB,
WGL_DEPTH_BITS_ARB,WGL_STENCIL_BITS_ARB,WGL_AUX_BUFFERS_ARB,WGL_NO_ACCELERATION_ARB,WGL_GENERIC_ACCELERATION_ARB,WGL_FULL_ACCELERATION_ARB,WGL_SWAP_EXCHANGE_ARB,
WGL_SWAP_COPY_ARB,WGL_SWAP_UNDEFINED_ARB,WGL_TYPE_RGBA_ARB,WGL_TYPE_COLORINDEX_ARB,WGL_TRANSPARENT_RED_VALUE_ARB=8247,WGL_TRANSPARENT_GREEN_VALUE_ARB,
WGL_TRANSPARENT_BLUE_VALUE_ARB,WGL_TRANSPARENT_ALPHA_VALUE_ARB,WGL_TRANSPARENT_INDEX_VALUE_ARB,WGL_CONTEXT_MAJOR_VERSION_ARB=8337,WGL_CONTEXT_MINOR_VERSION_ARB,
WGL_CONTEXT_LAYER_PLANE_ARB,WGL_CONTEXT_FLAGS_ARB,ERROR_INVALID_VERSION_ARB,ERROR_INVALID_PROFILE_ARB,GL_NEAREST=9728,GL_LINEAR,GL_NEAREST_MIPMAP_NEAREST=9984,
GL_LINEAR_MIPMAP_NEAREST,GL_NEAREST_MIPMAP_LINEAR,GL_LINEAR_MIPMAP_LINEAR,GL_TEXTURE_MAG_FILTER=10240,GL_TEXTURE_MIN_FILTER,GL_TEXTURE_WRAP_S,GL_TEXTURE_WRAP_T,
GL_REPEAT=10497,GL_POLYGON_OFFSET_UNITS=10752,GL_POLYGON_OFFSET_POINT,GL_POLYGON_OFFSET_LINE,GL_R3_G3_B2=10768,GL_COLOR_BUFFER_BIT=16384,GL_CONSTANT_COLOR=32769,
GL_ONE_MINUS_CONSTANT_COLOR,GL_CONSTANT_ALPHA,GL_ONE_MINUS_CONSTANT_ALPHA,GL_BLEND_COLOR,GL_FUNC_ADD,GL_MIN,GL_MAX,GL_BLEND_EQUATION,GL_BLEND_EQUATION_RGB=32777,
GL_FUNC_SUBTRACT,GL_FUNC_REVERSE_SUBTRACT,GL_UNSIGNED_BYTE_3_3_2=32818,GL_UNSIGNED_SHORT_4_4_4_4,GL_UNSIGNED_SHORT_5_5_5_1,GL_UNSIGNED_INT_8_8_8_8,GL_UNSIGNED_INT_10_10_10_2,
GL_POLYGON_OFFSET_FILL,GL_POLYGON_OFFSET_FACTOR,GL_RGB4=32847,GL_RGB5,GL_RGB8,GL_RGB10,GL_RGB12,GL_RGB16,GL_RGBA2,GL_RGBA4,GL_RGB5_A1,GL_RGBA8,GL_RGB10_A2,
GL_RGBA12,GL_RGBA16,GL_TEXTURE_RED_SIZE,GL_TEXTURE_GREEN_SIZE,GL_TEXTURE_BLUE_SIZE,GL_TEXTURE_ALPHA_SIZE,GL_PROXY_TEXTURE_1D=32867,GL_PROXY_TEXTURE_2D,
GL_TEXTURE_BINDING_1D=32872,GL_TEXTURE_BINDING_2D,GL_TEXTURE_BINDING_3D,GL_PACK_SKIP_IMAGES,GL_PACK_IMAGE_HEIGHT,GL_UNPACK_SKIP_IMAGES,GL_UNPACK_IMAGE_HEIGHT,
GL_TEXTURE_3D,GL_PROXY_TEXTURE_3D,GL_TEXTURE_DEPTH,GL_TEXTURE_WRAP_R,GL_MAX_3D_TEXTURE_SIZE,GL_MULTISAMPLE=32925,GL_SAMPLE_ALPHA_TO_COVERAGE,GL_SAMPLE_ALPHA_TO_ONE,
GL_SAMPLE_COVERAGE,GL_SAMPLE_BUFFERS=32936,GL_SAMPLES,GL_SAMPLE_COVERAGE_VALUE,GL_SAMPLE_COVERAGE_INVERT,GL_BLEND_DST_RGB=32968,GL_BLEND_SRC_RGB,GL_BLEND_DST_ALPHA,
GL_BLEND_SRC_ALPHA,GL_BGR=32992,GL_BGRA,GL_MAX_ELEMENTS_VERTICES=33000,GL_MAX_ELEMENTS_INDICES,GL_POINT_FADE_THRESHOLD_SIZE=33064,GL_CLAMP_TO_BORDER=33069,
GL_CLAMP_TO_EDGE=33071,GL_TEXTURE_MIN_LOD=33082,GL_TEXTURE_MAX_LOD,GL_TEXTURE_BASE_LEVEL,GL_TEXTURE_MAX_LEVEL,GL_DEPTH_COMPONENT16=33189,GL_DEPTH_COMPONENT24,
GL_DEPTH_COMPONENT32,GL_UNSIGNED_BYTE_2_3_3_REV=33634,GL_UNSIGNED_SHORT_5_6_5,GL_UNSIGNED_SHORT_5_6_5_REV,GL_UNSIGNED_SHORT_4_4_4_4_REV,GL_UNSIGNED_SHORT_1_5_5_5_REV,
GL_UNSIGNED_INT_8_8_8_8_REV,GL_UNSIGNED_INT_2_10_10_10_REV,GL_MIRRORED_REPEAT=33648,GL_ALIASED_LINE_WIDTH_RANGE=33902,GL_TEXTURE0=33984,GL_TEXTURE1,GL_TEXTURE2,
GL_TEXTURE3,GL_TEXTURE4,GL_TEXTURE5,GL_TEXTURE6,GL_TEXTURE7,GL_TEXTURE8,GL_TEXTURE9,GL_TEXTURE10,GL_TEXTURE11,GL_TEXTURE12,GL_TEXTURE13,GL_TEXTURE14,GL_TEXTURE15,
GL_TEXTURE16,GL_TEXTURE17,GL_TEXTURE18,GL_TEXTURE19,GL_TEXTURE20,GL_TEXTURE21,GL_TEXTURE22,GL_TEXTURE23,GL_TEXTURE24,GL_TEXTURE25,GL_TEXTURE26,GL_TEXTURE27,
GL_TEXTURE28,GL_TEXTURE29,GL_TEXTURE30,GL_TEXTURE31,GL_ACTIVE_TEXTURE,GL_COMPRESSED_RGB=34029,GL_COMPRESSED_RGBA,GL_TEXTURE_COMPRESSION_HINT,GL_MAX_TEXTURE_LOD_BIAS=34045,
GL_TEXTURE_LOD_BIAS=34049,GL_INCR_WRAP=34055,GL_DECR_WRAP,GL_TEXTURE_CUBE_MAP=34067,GL_TEXTURE_BINDING_CUBE_MAP,GL_TEXTURE_CUBE_MAP_POSITIVE_X,GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
GL_TEXTURE_CUBE_MAP_POSITIVE_Y,GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,GL_TEXTURE_CUBE_MAP_POSITIVE_Z,GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,GL_PROXY_TEXTURE_CUBE_MAP,
GL_MAX_CUBE_MAP_TEXTURE_SIZE,GL_SRC1_ALPHA=34185,GL_VERTEX_ATTRIB_ARRAY_ENABLED=34338,GL_VERTEX_ATTRIB_ARRAY_SIZE,GL_VERTEX_ATTRIB_ARRAY_STRIDE,GL_VERTEX_ATTRIB_ARRAY_TYPE,
GL_CURRENT_VERTEX_ATTRIB,GL_VERTEX_PROGRAM_POINT_SIZE=34370,GL_VERTEX_ATTRIB_ARRAY_POINTER=34373,GL_TEXTURE_COMPRESSED_IMAGE_SIZE=34464,GL_TEXTURE_COMPRESSED,
GL_NUM_COMPRESSED_TEXTURE_FORMATS,GL_COMPRESSED_TEXTURE_FORMATS,GL_BUFFER_SIZE=34660,GL_BUFFER_USAGE,GL_STENCIL_BACK_FUNC=34816,GL_STENCIL_BACK_FAIL,GL_STENCIL_BACK_PASS_DEPTH_FAIL,
GL_STENCIL_BACK_PASS_DEPTH_PASS,GL_MAX_DRAW_BUFFERS=34852,GL_DRAW_BUFFER0,GL_DRAW_BUFFER1,GL_DRAW_BUFFER2,GL_DRAW_BUFFER3,GL_DRAW_BUFFER4,GL_DRAW_BUFFER5,
GL_DRAW_BUFFER6,GL_DRAW_BUFFER7,GL_DRAW_BUFFER8,GL_DRAW_BUFFER9,GL_DRAW_BUFFER10,GL_DRAW_BUFFER11,GL_DRAW_BUFFER12,GL_DRAW_BUFFER13,GL_DRAW_BUFFER14,GL_DRAW_BUFFER15,
GL_BLEND_EQUATION_ALPHA=34877,GL_TEXTURE_DEPTH_SIZE=34890,GL_TEXTURE_COMPARE_MODE=34892,GL_TEXTURE_COMPARE_FUNC,GL_QUERY_COUNTER_BITS=34916,GL_CURRENT_QUERY,
GL_QUERY_RESULT,GL_QUERY_RESULT_AVAILABLE,GL_MAX_VERTEX_ATTRIBS=34921,GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,GL_MAX_TEXTURE_IMAGE_UNITS=34930,GL_ARRAY_BUFFER=34962,
GL_ELEMENT_ARRAY_BUFFER,GL_ARRAY_BUFFER_BINDING,GL_ELEMENT_ARRAY_BUFFER_BINDING,GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING=34975,GL_READ_ONLY=35000,GL_WRITE_ONLY,
GL_READ_WRITE,GL_BUFFER_ACCESS,GL_BUFFER_MAPPED,GL_BUFFER_MAP_POINTER,GL_STREAM_DRAW=35040,GL_STREAM_READ,GL_STREAM_COPY,GL_STATIC_DRAW=35044,GL_STATIC_READ,
GL_STATIC_COPY,GL_DYNAMIC_DRAW=35048,GL_DYNAMIC_READ,GL_DYNAMIC_COPY,GL_SAMPLES_PASSED=35092,GL_FRAGMENT_SHADER=35632,GL_VERTEX_SHADER,GL_MAX_FRAGMENT_UNIFORM_COMPONENTS=35657,
GL_MAX_VERTEX_UNIFORM_COMPONENTS,GL_MAX_VARYING_FLOATS,GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS,GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS,GL_SHADER_TYPE=35663,GL_FLOAT_VEC2,
GL_FLOAT_VEC3,GL_FLOAT_VEC4,GL_INT_VEC2,GL_INT_VEC3,GL_INT_VEC4,GL_BOOL,GL_BOOL_VEC2,GL_BOOL_VEC3,GL_BOOL_VEC4,GL_FLOAT_MAT2,GL_FLOAT_MAT3,GL_FLOAT_MAT4,
GL_SAMPLER_1D,GL_SAMPLER_2D,GL_SAMPLER_3D,GL_SAMPLER_CUBE,GL_SAMPLER_1D_SHADOW,GL_SAMPLER_2D_SHADOW,GL_DELETE_STATUS=35712,GL_COMPILE_STATUS,GL_LINK_STATUS,
GL_VALIDATE_STATUS,GL_INFO_LOG_LENGTH,GL_ATTACHED_SHADERS,GL_ACTIVE_UNIFORMS,GL_ACTIVE_UNIFORM_MAX_LENGTH,GL_SHADER_SOURCE_LENGTH,GL_ACTIVE_ATTRIBUTES,
GL_ACTIVE_ATTRIBUTE_MAX_LENGTH,GL_FRAGMENT_SHADER_DERIVATIVE_HINT,GL_SHADING_LANGUAGE_VERSION,GL_CURRENT_PROGRAM,GL_POINT_SPRITE_COORD_ORIGIN=36000,GL_LOWER_LEFT,
GL_UPPER_LEFT,GL_STENCIL_BACK_REF,GL_STENCIL_BACK_VALUE_MASK,GL_STENCIL_BACK_WRITEMASK,WGL_CONTEXT_PROFILE_MASK_ARB=37158,};
void glCullFace(GLenum mode);void glFrontFace(GLenum mode);void glHint(GLenum target,GLenum mode);void glLineWidth(GLfloat width);
void glPointSize(GLfloat size);void glPolygonMode(GLenum face,GLenum mode);void glScissor(GLint x,GLint y,GLsizei width,GLsizei height);
void glTexParameterf(GLenum target,GLenum pname,GLfloat param);void glTexParameterfv(GLenum target,GLenum pname,const GLfloat *params);
void glTexParameteri(GLenum target,GLenum pname,GLint param);void glTexParameteriv(GLenum target,GLenum pname,const GLint *params);
void glTexImage1D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const GLvoid *pixels);
void glTexImage2D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const GLvoid *pixels);
void glDrawBuffer(GLenum mode);void glClear(GLbitfield mask);void glClearColor(GLclampf red,GLclampf green,GLclampf blue,GLclampf alpha);
void glClearStencil(GLint s);void glClearDepth(GLclampd depth);void glStencilMask(GLuint mask);
void glColorMask(GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha);void glDepthMask(GLboolean flag);void glDisable(GLenum cap);
void glEnable(GLenum cap);void glFinish(void);void glFlush(void);void glBlendFunc(GLenum sfactor,GLenum dfactor);void glLogicOp(GLenum opcode);
void glStencilFunc(GLenum func,GLint ref,GLuint mask);void glStencilOp(GLenum fail,GLenum zfail,GLenum zpass);void glDepthFunc(GLenum func);
void glPixelStoref(GLenum pname,GLfloat param);void glPixelStorei(GLenum pname,GLint param);void glReadBuffer(GLenum mode);
void glReadPixels(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,GLvoid *pixels);
void glGetBooleanv(GLenum pname,GLboolean *params);void glGetDoublev(GLenum pname,GLdouble *params);GLenum glGetError(void);
void glGetFloatv(GLenum pname,GLfloat *params);void glGetIntegerv(GLenum pname,GLint *params);const GLubyte * glGetString(GLenum name);
void glGetTexImage(GLenum target,GLint level,GLenum format,GLenum type,GLvoid *pixels);
void glGetTexParameterfv(GLenum target,GLenum pname,GLfloat *params);void glGetTexParameteriv(GLenum target,GLenum pname,GLint *params);
void glGetTexLevelParameterfv(GLenum target,GLint level,GLenum pname,GLfloat *params);
void glGetTexLevelParameteriv(GLenum target,GLint level,GLenum pname,GLint *params);GLboolean glIsEnabled(GLenum cap);
void glDepthRange(GLclampd zNear,GLclampd zFar);void glViewport(GLint x,GLint y,GLsizei width,GLsizei height);
void glDrawArrays(GLenum mode,GLint first,GLsizei count);void glDrawElements(GLenum mode,GLsizei count,GLenum type,const GLvoid *indices);
void glPolygonOffset(GLfloat factor,GLfloat units);
void glCopyTexImage1D(GLenum target,GLint level,GLenum internalFormat,GLint x,GLint y,GLsizei width,GLint border);
void glCopyTexImage2D(GLenum target,GLint level,GLenum internalFormat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border);
void glCopyTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width);
void glCopyTexSubImage2D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height);
void glTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const GLvoid *pixels);
void glTexSubImage2D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const GLvoid *pixels);
void glBindTexture(GLenum target,GLuint texture);void glDeleteTextures(GLsizei n,const GLuint *textures);
void glGenTextures(GLsizei n,GLuint *textures);GLboolean glIsTexture(GLuint texture);
typedef BOOL(*twglChoosePixelFormatARB)(HDC hdc,const int *piAttribIList,const FLOAT *pfAttribFList,UINT nMaxFormats,int *piFormats,UINT *nNumFormats);
typedef HGLRC(*twglCreateContextAttribsARB)(HDC hDC,HGLRC hShareContext,const int *attribList);
typedef BOOL(*twglSwapIntervalEXT)(int interval);
typedef void(*tglDrawRangeElements)(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices);
typedef void(*tglTexImage3D)(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels);
typedef void(*tglTexSubImage3D)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels);
typedef void(*tglCopyTexSubImage3D)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height);
typedef void(*tglActiveTexture)(GLenum texture);
typedef void(*tglSampleCoverage)(GLfloat value,GLboolean invert);
typedef void(*tglCompressedTexImage3D)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *data);
typedef void(*tglCompressedTexImage2D)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *data);
typedef void(*tglCompressedTexImage1D)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *data);
typedef void(*tglCompressedTexSubImage3D)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data);     
typedef void(*tglCompressedTexSubImage2D)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *data);
typedef void(*tglCompressedTexSubImage1D)(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *data);
typedef void(*tglGetCompressedTexImage)(GLenum target,GLint level,void *img);
typedef void(*tglBlendFuncSeparate)(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha);
typedef void(*tglMultiDrawArrays)(GLenum mode,const GLint *first,const GLsizei *count,GLsizei drawcount);
typedef void(*tglMultiDrawElements)(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei drawcount);
typedef void(*tglPointParameterf)(GLenum pname,GLfloat param);
typedef void(*tglPointParameterfv)(GLenum pname,const GLfloat *params);
typedef void(*tglPointParameteri)(GLenum pname,GLint param);
typedef void(*tglPointParameteriv)(GLenum pname,const GLint *params);
typedef void(*tglBlendColor)(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha);
typedef void(*tglBlendEquation)(GLenum mode);
typedef void(*tglGenQueries)(GLsizei n,GLuint *ids);
typedef void(*tglDeleteQueries)(GLsizei n,const GLuint *ids);
typedef GLboolean(*tglIsQuery)(GLuint id);
typedef void(*tglBeginQuery)(GLenum target,GLuint id);
typedef void(*tglEndQuery)(GLenum target);
typedef void(*tglGetQueryiv)(GLenum target,GLenum pname,GLint *params);
typedef void(*tglGetQueryObjectiv)(GLuint id,GLenum pname,GLint *params);
typedef void(*tglGetQueryObjectuiv)(GLuint id,GLenum pname,GLuint *params);
typedef void(*tglBindBuffer)(GLenum target,GLuint buffer);
typedef void(*tglDeleteBuffers)(GLsizei n,const GLuint *buffers);
typedef void(*tglGenBuffers)(GLsizei n,GLuint *buffers);
typedef GLboolean(*tglIsBuffer)(GLuint buffer);
typedef void(*tglBufferData)(GLenum target,GLsizeiptr size,const void *data,GLenum usage);
typedef void(*tglBufferSubData)(GLenum target,GLintptr offset,GLsizeiptr size,const void *data);
typedef void(*tglGetBufferSubData)(GLenum target,GLintptr offset,GLsizeiptr size,void *data);
typedef void(*tglMapBuffer)(GLenum target,GLenum access);
typedef GLboolean(*tglUnmapBuffer)(GLenum target);
typedef void(*tglGetBufferParameteriv)(GLenum target,GLenum pname,GLint *params);
typedef void(*tglGetBufferPointerv)(GLenum target,GLenum pname,void **params);
typedef void(*tglBlendEquationSeparate)(GLenum modeRGB,GLenum modeAlpha);
typedef void(*tglDrawBuffers)(GLsizei n,const GLenum *bufs);
typedef void(*tglStencilOpSeparate)(GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass);
typedef void(*tglStencilFuncSeparate)(GLenum face,GLenum func,GLint ref,GLuint mask);
typedef void(*tglStencilMaskSeparate)(GLenum face,GLuint mask);
typedef void(*tglAttachShader)(GLuint program,GLuint shader);
typedef void(*tglBindAttribLocation)(GLuint program,GLuint index,const GLchar *name);
typedef void(*tglCompileShader)(GLuint shader);
typedef GLuint(*tglCreateProgram)(void);
typedef GLuint(*tglCreateShader)(GLenum type);
typedef void(*tglDeleteProgram)(GLuint program);
typedef void(*tglDeleteShader)(GLuint shader);
typedef void(*tglDetachShader)(GLuint program,GLuint shader);
typedef void(*tglDisableVertexAttribArray)(GLuint index);
typedef void(*tglEnableVertexAttribArray)(GLuint index);
typedef void(*tglGetActiveAttrib)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name);
typedef void(*tglGetActiveUniform)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name);
typedef void(*tglGetAttachedShaders)(GLuint program,GLsizei maxCount,GLsizei *count,GLuint *shaders);
typedef GLint(*tglGetAttribLocation)(GLuint program,const GLchar *name);
typedef void(*tglGetProgramiv)(GLuint program,GLenum pname,GLint *params);
typedef void(*tglGetProgramInfoLog)(GLuint program,GLsizei bufSize,GLsizei *length,GLchar *infoLog);
typedef void(*tglGetShaderiv)(GLuint shader,GLenum pname,GLint *params);
typedef void(*tglGetShaderInfoLog)(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *infoLog);
typedef void(*tglGetShaderSource)(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *source);
typedef GLint(*tglGetUniformLocation)(GLuint program,const GLchar *name);
typedef void(*tglGetUniformfv)(GLuint program,GLint location,GLfloat *params);
typedef void(*tglGetUniformiv)(GLuint program,GLint location,GLint *params);
typedef void(*tglGetVertexAttribdv)(GLuint index,GLenum pname,GLdouble *params);
typedef void(*tglGetVertexAttribfv)(GLuint index,GLenum pname,GLfloat *params);
typedef void(*tglGetVertexAttribiv)(GLuint index,GLenum pname,GLint *params);
typedef void(*tglGetVertexAttribPointerv)(GLuint index,GLenum pname,void **pointer);
typedef GLboolean(*tglIsProgram)(GLuint program);
typedef GLboolean(*tglIsShader)(GLuint shader);
typedef void(*tglLinkProgram)(GLuint program);
typedef void(*tglShaderSource)(GLuint shader,GLsizei count,const GLchar *const*string,const GLint *length);
typedef void(*tglUseProgram)(GLuint program);
typedef void(*tglUniform1f)(GLint location,GLfloat v0);
typedef void(*tglUniform2f)(GLint location,GLfloat v0,GLfloat v1);
typedef void(*tglUniform3f)(GLint location,GLfloat v0,GLfloat v1,GLfloat v2);
typedef void(*tglUniform4f)(GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3);
typedef void(*tglUniform1i)(GLint location,GLint v0);
typedef void(*tglUniform2i)(GLint location,GLint v0,GLint v1);
typedef void(*tglUniform3i)(GLint location,GLint v0,GLint v1,GLint v2);
typedef void(*tglUniform4i)(GLint location,GLint v0,GLint v1,GLint v2,GLint v3);
typedef void(*tglUniform1fv)(GLint location,GLsizei count,const GLfloat *value);
typedef void(*tglUniform2fv)(GLint location,GLsizei count,const GLfloat *value);
typedef void(*tglUniform3fv)(GLint location,GLsizei count,const GLfloat *value);
typedef void(*tglUniform4fv)(GLint location,GLsizei count,const GLfloat *value);
typedef void(*tglUniform1iv)(GLint location,GLsizei count,const GLint *value);
typedef void(*tglUniform2iv)(GLint location,GLsizei count,const GLint *value);
typedef void(*tglUniform3iv)(GLint location,GLsizei count,const GLint *value);
typedef void(*tglUniform4iv)(GLint location,GLsizei count,const GLint *value);
typedef void(*tglUniformMatrix2fv)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
typedef void(*tglUniformMatrix3fv)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
typedef void(*tglUniformMatrix4fv)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
typedef void(*tglValidateProgram)(GLuint program);
typedef void(*tglVertexAttrib1d)(GLuint index,GLdouble x);
typedef void(*tglVertexAttrib1dv)(GLuint index,const GLdouble *v);
typedef void(*tglVertexAttrib1f)(GLuint index,GLfloat x);
typedef void(*tglVertexAttrib1fv)(GLuint index,const GLfloat *v);
typedef void(*tglVertexAttrib1s)(GLuint index,GLshort x);
typedef void(*tglVertexAttrib1sv)(GLuint index,const GLshort *v);
typedef void(*tglVertexAttrib2d)(GLuint index,GLdouble x,GLdouble y);
typedef void(*tglVertexAttrib2dv)(GLuint index,const GLdouble *v);
typedef void(*tglVertexAttrib2f)(GLuint index,GLfloat x,GLfloat y);
typedef void(*tglVertexAttrib2fv)(GLuint index,const GLfloat *v);
typedef void(*tglVertexAttrib2s)(GLuint index,GLshort x,GLshort y);
typedef void(*tglVertexAttrib2sv)(GLuint index,const GLshort *v);
typedef void(*tglVertexAttrib3d)(GLuint index,GLdouble x,GLdouble y,GLdouble z);
typedef void(*tglVertexAttrib3dv)(GLuint index,const GLdouble *v);
typedef void(*tglVertexAttrib3f)(GLuint index,GLfloat x,GLfloat y,GLfloat z);
typedef void(*tglVertexAttrib3fv)(GLuint index,const GLfloat *v);
typedef void(*tglVertexAttrib3s)(GLuint index,GLshort x,GLshort y,GLshort z);
typedef void(*tglVertexAttrib3sv)(GLuint index,const GLshort *v);
typedef void(*tglVertexAttrib4Nbv)(GLuint index,const GLbyte *v);
typedef void(*tglVertexAttrib4Niv)(GLuint index,const GLint *v);
typedef void(*tglVertexAttrib4Nsv)(GLuint index,const GLshort *v);
typedef void(*tglVertexAttrib4Nub)(GLuint index,GLubyte x,GLubyte y,GLubyte z,GLubyte w);
typedef void(*tglVertexAttrib4Nubv)(GLuint index,const GLubyte *v);
typedef void(*tglVertexAttrib4Nuiv)(GLuint index,const GLuint *v);
typedef void(*tglVertexAttrib4Nusv)(GLuint index,const GLushort *v);
typedef void(*tglVertexAttrib4bv)(GLuint index,const GLbyte *v);
typedef void(*tglVertexAttrib4d)(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
typedef void(*tglVertexAttrib4dv)(GLuint index,const GLdouble *v);
typedef void(*tglVertexAttrib4f)(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
typedef void(*tglVertexAttrib4fv)(GLuint index,const GLfloat *v);
typedef void(*tglVertexAttrib4iv)(GLuint index,const GLint *v);
typedef void(*tglVertexAttrib4s)(GLuint index,GLshort x,GLshort y,GLshort z,GLshort w);
typedef void(*tglVertexAttrib4sv)(GLuint index,const GLshort *v);
typedef void(*tglVertexAttrib4ubv)(GLuint index,const GLubyte *v);
typedef void(*tglVertexAttrib4uiv)(GLuint index,const GLuint *v);
typedef void(*tglVertexAttrib4usv)(GLuint index,const GLushort *v);
typedef void(*tglVertexAttribPointer)(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,const void *pointer);
twglChoosePixelFormatARB wglChoosePixelFormatARB;
twglCreateContextAttribsARB wglCreateContextAttribsARB;
twglSwapIntervalEXT wglSwapIntervalEXT;
tglDrawRangeElements glDrawRangeElements;
tglTexImage3D glTexImage3D;
tglTexSubImage3D glTexSubImage3D;
tglCopyTexSubImage3D glCopyTexSubImage3D;
tglActiveTexture glActiveTexture;
tglSampleCoverage glSampleCoverage;
tglCompressedTexImage3D glCompressedTexImage3D;
tglCompressedTexImage2D glCompressedTexImage2D;
tglCompressedTexImage1D glCompressedTexImage1D;
tglCompressedTexSubImage3D glCompressedTexSubImage3D;
tglCompressedTexSubImage2D glCompressedTexSubImage2D;
tglCompressedTexSubImage1D glCompressedTexSubImage1D;
tglGetCompressedTexImage glGetCompressedTexImage;
tglBlendFuncSeparate glBlendFuncSeparate;
tglMultiDrawArrays glMultiDrawArrays;
tglMultiDrawElements glMultiDrawElements;
tglPointParameterf glPointParameterf;
tglPointParameterfv glPointParameterfv;
tglPointParameteri glPointParameteri;
tglPointParameteriv glPointParameteriv;
tglBlendColor glBlendColor;
tglBlendEquation glBlendEquation;
tglGenQueries glGenQueries;
tglDeleteQueries glDeleteQueries;
tglIsQuery glIsQuery;
tglBeginQuery glBeginQuery;
tglEndQuery glEndQuery;
tglGetQueryiv glGetQueryiv;
tglGetQueryObjectiv glGetQueryObjectiv;
tglGetQueryObjectuiv glGetQueryObjectuiv;
tglBindBuffer glBindBuffer;
tglDeleteBuffers glDeleteBuffers;
tglGenBuffers glGenBuffers;
tglIsBuffer glIsBuffer;
tglBufferData glBufferData;
tglBufferSubData glBufferSubData;
tglGetBufferSubData glGetBufferSubData;
tglMapBuffer glMapBuffer;
tglUnmapBuffer glUnmapBuffer;
tglGetBufferParameteriv glGetBufferParameteriv;
tglGetBufferPointerv glGetBufferPointerv;
tglBlendEquationSeparate glBlendEquationSeparate;
tglDrawBuffers glDrawBuffers;
tglStencilOpSeparate glStencilOpSeparate;
tglStencilFuncSeparate glStencilFuncSeparate;
tglStencilMaskSeparate glStencilMaskSeparate;
tglAttachShader glAttachShader;
tglBindAttribLocation glBindAttribLocation;
tglCompileShader glCompileShader;
tglCreateProgram glCreateProgram;
tglCreateShader glCreateShader;
tglDeleteProgram glDeleteProgram;
tglDeleteShader glDeleteShader;
tglDetachShader glDetachShader;
tglDisableVertexAttribArray glDisableVertexAttribArray;
tglEnableVertexAttribArray glEnableVertexAttribArray;
tglGetActiveAttrib glGetActiveAttrib;
tglGetActiveUniform glGetActiveUniform;
tglGetAttachedShaders glGetAttachedShaders;
tglGetAttribLocation glGetAttribLocation;
tglGetProgramiv glGetProgramiv;
tglGetProgramInfoLog glGetProgramInfoLog;
tglGetShaderiv glGetShaderiv;
tglGetShaderInfoLog glGetShaderInfoLog;
tglGetShaderSource glGetShaderSource;
tglGetUniformLocation glGetUniformLocation;
tglGetUniformfv glGetUniformfv;
tglGetUniformiv glGetUniformiv;
tglGetVertexAttribdv glGetVertexAttribdv;
tglGetVertexAttribfv glGetVertexAttribfv;
tglGetVertexAttribiv glGetVertexAttribiv;
tglGetVertexAttribPointerv glGetVertexAttribPointerv;
tglIsProgram glIsProgram;
tglIsShader glIsShader;
tglLinkProgram glLinkProgram;
tglShaderSource glShaderSource;
tglUseProgram glUseProgram;
tglUniform1f glUniform1f;
tglUniform2f glUniform2f;
tglUniform3f glUniform3f;
tglUniform4f glUniform4f;
tglUniform1i glUniform1i;
tglUniform2i glUniform2i;
tglUniform3i glUniform3i;
tglUniform4i glUniform4i;
tglUniform1fv glUniform1fv;
tglUniform2fv glUniform2fv;
tglUniform3fv glUniform3fv;
tglUniform4fv glUniform4fv;
tglUniform1iv glUniform1iv;
tglUniform2iv glUniform2iv;
tglUniform3iv glUniform3iv;
tglUniform4iv glUniform4iv;
tglUniformMatrix2fv glUniformMatrix2fv;
tglUniformMatrix3fv glUniformMatrix3fv;
tglUniformMatrix4fv glUniformMatrix4fv;
tglValidateProgram glValidateProgram;
tglVertexAttrib1d glVertexAttrib1d;
tglVertexAttrib1dv glVertexAttrib1dv;
tglVertexAttrib1f glVertexAttrib1f;
tglVertexAttrib1fv glVertexAttrib1fv;
tglVertexAttrib1s glVertexAttrib1s;
tglVertexAttrib1sv glVertexAttrib1sv;
tglVertexAttrib2d glVertexAttrib2d;
tglVertexAttrib2dv glVertexAttrib2dv;
tglVertexAttrib2f glVertexAttrib2f;
tglVertexAttrib2fv glVertexAttrib2fv;
tglVertexAttrib2s glVertexAttrib2s;
tglVertexAttrib2sv glVertexAttrib2sv;
tglVertexAttrib3d glVertexAttrib3d;
tglVertexAttrib3dv glVertexAttrib3dv;
tglVertexAttrib3f glVertexAttrib3f;
tglVertexAttrib3fv glVertexAttrib3fv;
tglVertexAttrib3s glVertexAttrib3s;
tglVertexAttrib3sv glVertexAttrib3sv;
tglVertexAttrib4Nbv glVertexAttrib4Nbv;
tglVertexAttrib4Niv glVertexAttrib4Niv;
tglVertexAttrib4Nsv glVertexAttrib4Nsv;
tglVertexAttrib4Nub glVertexAttrib4Nub;
tglVertexAttrib4Nubv glVertexAttrib4Nubv;
tglVertexAttrib4Nuiv glVertexAttrib4Nuiv;
tglVertexAttrib4Nusv glVertexAttrib4Nusv;
tglVertexAttrib4bv glVertexAttrib4bv;
tglVertexAttrib4d glVertexAttrib4d;
tglVertexAttrib4dv glVertexAttrib4dv;
tglVertexAttrib4f glVertexAttrib4f;
tglVertexAttrib4fv glVertexAttrib4fv;
tglVertexAttrib4iv glVertexAttrib4iv;
tglVertexAttrib4s glVertexAttrib4s;
tglVertexAttrib4sv glVertexAttrib4sv;
tglVertexAttrib4ubv glVertexAttrib4ubv;
tglVertexAttrib4uiv glVertexAttrib4uiv;
tglVertexAttrib4usv glVertexAttrib4usv;
tglVertexAttribPointer glVertexAttribPointer;
void getGLFuncs(){
    wglChoosePixelFormatARB=(twglChoosePixelFormatARB)wglGetProcAddress("wglChoosePixelFormatARB");
    wglCreateContextAttribsARB=(twglCreateContextAttribsARB)wglGetProcAddress("wglCreateContextAttribsARB");
    wglSwapIntervalEXT=(twglSwapIntervalEXT)wglGetProcAddress("wglSwapIntervalEXT");
    glDrawRangeElements=(tglDrawRangeElements)wglGetProcAddress("glDrawRangeElements");
    glTexImage3D=(tglTexImage3D)wglGetProcAddress("glTexImage3D");
    glTexSubImage3D=(tglTexSubImage3D)wglGetProcAddress("glTexSubImage3D");
    glCopyTexSubImage3D=(tglCopyTexSubImage3D)wglGetProcAddress("glCopyTexSubImage3D");
    glActiveTexture=(tglActiveTexture)wglGetProcAddress("glActiveTexture");
    glSampleCoverage=(tglSampleCoverage)wglGetProcAddress("glSampleCoverage");
    glCompressedTexImage3D=(tglCompressedTexImage3D)wglGetProcAddress("glCompressedTexImage3D");
    glCompressedTexImage2D=(tglCompressedTexImage2D)wglGetProcAddress("glCompressedTexImage2D");
    glCompressedTexImage1D=(tglCompressedTexImage1D)wglGetProcAddress("glCompressedTexImage1D");
    glCompressedTexSubImage3D=(tglCompressedTexSubImage3D)wglGetProcAddress("glCompressedTexSubImage3D");
    glCompressedTexSubImage2D=(tglCompressedTexSubImage2D)wglGetProcAddress("glCompressedTexSubImage2D");
    glCompressedTexSubImage1D=(tglCompressedTexSubImage1D)wglGetProcAddress("glCompressedTexSubImage1D");
    glGetCompressedTexImage=(tglGetCompressedTexImage)wglGetProcAddress("glGetCompressedTexImage");
    glBlendFuncSeparate=(tglBlendFuncSeparate)wglGetProcAddress("glBlendFuncSeparate");
    glMultiDrawArrays=(tglMultiDrawArrays)wglGetProcAddress("glMultiDrawArrays");
    glMultiDrawElements=(tglMultiDrawElements)wglGetProcAddress("glMultiDrawElements");
    glPointParameterf=(tglPointParameterf)wglGetProcAddress("glPointParameterf");
    glPointParameterfv=(tglPointParameterfv)wglGetProcAddress("glPointParameterfv");
    glPointParameteri=(tglPointParameteri)wglGetProcAddress("glPointParameteri");
    glPointParameteriv=(tglPointParameteriv)wglGetProcAddress("glPointParameteriv");
    glBlendColor=(tglBlendColor)wglGetProcAddress("glBlendColor");
    glBlendEquation=(tglBlendEquation)wglGetProcAddress("glBlendEquation");
    glGenQueries=(tglGenQueries)wglGetProcAddress("glGenQueries");
    glDeleteQueries=(tglDeleteQueries)wglGetProcAddress("glDeleteQueries");
    glIsQuery=(tglIsQuery)wglGetProcAddress("glIsQuery");
    glBeginQuery=(tglBeginQuery)wglGetProcAddress("glBeginQuery");
    glEndQuery=(tglEndQuery)wglGetProcAddress("glEndQuery");
    glGetQueryiv=(tglGetQueryiv)wglGetProcAddress("glGetQueryiv");
    glGetQueryObjectiv=(tglGetQueryObjectiv)wglGetProcAddress("glGetQueryObjectiv");
    glGetQueryObjectuiv=(tglGetQueryObjectuiv)wglGetProcAddress("glGetQueryObjectuiv");
    glBindBuffer=(tglBindBuffer)wglGetProcAddress("glBindBuffer");
    glDeleteBuffers=(tglDeleteBuffers)wglGetProcAddress("glDeleteBuffers");
    glGenBuffers=(tglGenBuffers)wglGetProcAddress("glGenBuffers");
    glIsBuffer=(tglIsBuffer)wglGetProcAddress("glIsBuffer");
    glBufferData=(tglBufferData)wglGetProcAddress("glBufferData");
    glBufferSubData=(tglBufferSubData)wglGetProcAddress("glBufferSubData");
    glGetBufferSubData=(tglGetBufferSubData)wglGetProcAddress("glGetBufferSubData");
    glMapBuffer=(tglMapBuffer)wglGetProcAddress("glMapBuffer");
    glUnmapBuffer=(tglUnmapBuffer)wglGetProcAddress("glUnmapBuffer");
    glGetBufferParameteriv=(tglGetBufferParameteriv)wglGetProcAddress("glGetBufferParameteriv");
    glGetBufferPointerv=(tglGetBufferPointerv)wglGetProcAddress("glGetBufferPointerv");
    glBlendEquationSeparate=(tglBlendEquationSeparate)wglGetProcAddress("glBlendEquationSeparate");
    glDrawBuffers=(tglDrawBuffers)wglGetProcAddress("glDrawBuffers");
    glStencilOpSeparate=(tglStencilOpSeparate)wglGetProcAddress("glStencilOpSeparate");
    glStencilFuncSeparate=(tglStencilFuncSeparate)wglGetProcAddress("glStencilFuncSeparate");
    glStencilMaskSeparate=(tglStencilMaskSeparate)wglGetProcAddress("glStencilMaskSeparate");
    glAttachShader=(tglAttachShader)wglGetProcAddress("glAttachShader");
    glBindAttribLocation=(tglBindAttribLocation)wglGetProcAddress("glBindAttribLocation");
    glCompileShader=(tglCompileShader)wglGetProcAddress("glCompileShader");
    glCreateProgram=(tglCreateProgram)wglGetProcAddress("glCreateProgram");
    glCreateShader=(tglCreateShader)wglGetProcAddress("glCreateShader");
    glDeleteProgram=(tglDeleteProgram)wglGetProcAddress("glDeleteProgram");
    glDeleteShader=(tglDeleteShader)wglGetProcAddress("glDeleteShader");
    glDetachShader=(tglDetachShader)wglGetProcAddress("glDetachShader");
    glDisableVertexAttribArray=(tglDisableVertexAttribArray)wglGetProcAddress("glDisableVertexAttribArray");
    glEnableVertexAttribArray=(tglEnableVertexAttribArray)wglGetProcAddress("glEnableVertexAttribArray");
    glGetActiveAttrib=(tglGetActiveAttrib)wglGetProcAddress("glGetActiveAttrib");
    glGetActiveUniform=(tglGetActiveUniform)wglGetProcAddress("glGetActiveUniform");
    glGetAttachedShaders=(tglGetAttachedShaders)wglGetProcAddress("glGetAttachedShaders");
    glGetAttribLocation=(tglGetAttribLocation)wglGetProcAddress("glGetAttribLocation");
    glGetProgramiv=(tglGetProgramiv)wglGetProcAddress("glGetProgramiv");
    glGetProgramInfoLog=(tglGetProgramInfoLog)wglGetProcAddress("glGetProgramInfoLog");
    glGetShaderiv=(tglGetShaderiv)wglGetProcAddress("glGetShaderiv");
    glGetShaderInfoLog=(tglGetShaderInfoLog)wglGetProcAddress("glGetShaderInfoLog");
    glGetShaderSource=(tglGetShaderSource)wglGetProcAddress("glGetShaderSource");
    glGetUniformLocation=(tglGetUniformLocation)wglGetProcAddress("glGetUniformLocation");
    glGetUniformfv=(tglGetUniformfv)wglGetProcAddress("glGetUniformfv");
    glGetUniformiv=(tglGetUniformiv)wglGetProcAddress("glGetUniformiv");
    glGetVertexAttribdv=(tglGetVertexAttribdv)wglGetProcAddress("glGetVertexAttribdv");
    glGetVertexAttribfv=(tglGetVertexAttribfv)wglGetProcAddress("glGetVertexAttribfv");
    glGetVertexAttribiv=(tglGetVertexAttribiv)wglGetProcAddress("glGetVertexAttribiv");
    glGetVertexAttribPointerv=(tglGetVertexAttribPointerv)wglGetProcAddress("glGetVertexAttribPointerv");
    glIsProgram=(tglIsProgram)wglGetProcAddress("glIsProgram");
    glIsShader=(tglIsShader)wglGetProcAddress("glIsShader");
    glLinkProgram=(tglLinkProgram)wglGetProcAddress("glLinkProgram");
    glShaderSource=(tglShaderSource)wglGetProcAddress("glShaderSource");
    glUseProgram=(tglUseProgram)wglGetProcAddress("glUseProgram");
    glUniform1f=(tglUniform1f)wglGetProcAddress("glUniform1f");
    glUniform2f=(tglUniform2f)wglGetProcAddress("glUniform2f");
    glUniform3f=(tglUniform3f)wglGetProcAddress("glUniform3f");
    glUniform4f=(tglUniform4f)wglGetProcAddress("glUniform4f");
    glUniform1i=(tglUniform1i)wglGetProcAddress("glUniform1i");
    glUniform2i=(tglUniform2i)wglGetProcAddress("glUniform2i");
    glUniform3i=(tglUniform3i)wglGetProcAddress("glUniform3i");
    glUniform4i=(tglUniform4i)wglGetProcAddress("glUniform4i");
    glUniform1fv=(tglUniform1fv)wglGetProcAddress("glUniform1fv");
    glUniform2fv=(tglUniform2fv)wglGetProcAddress("glUniform2fv");
    glUniform3fv=(tglUniform3fv)wglGetProcAddress("glUniform3fv");
    glUniform4fv=(tglUniform4fv)wglGetProcAddress("glUniform4fv");
    glUniform1iv=(tglUniform1iv)wglGetProcAddress("glUniform1iv");
    glUniform2iv=(tglUniform2iv)wglGetProcAddress("glUniform2iv");
    glUniform3iv=(tglUniform3iv)wglGetProcAddress("glUniform3iv");
    glUniform4iv=(tglUniform4iv)wglGetProcAddress("glUniform4iv");
    glUniformMatrix2fv=(tglUniformMatrix2fv)wglGetProcAddress("glUniformMatrix2fv");
    glUniformMatrix3fv=(tglUniformMatrix3fv)wglGetProcAddress("glUniformMatrix3fv");
    glUniformMatrix4fv=(tglUniformMatrix4fv)wglGetProcAddress("glUniformMatrix4fv");
    glValidateProgram=(tglValidateProgram)wglGetProcAddress("glValidateProgram");
    glVertexAttrib1d=(tglVertexAttrib1d)wglGetProcAddress("glVertexAttrib1d");
    glVertexAttrib1dv=(tglVertexAttrib1dv)wglGetProcAddress("glVertexAttrib1dv");
    glVertexAttrib1f=(tglVertexAttrib1f)wglGetProcAddress("glVertexAttrib1f");
    glVertexAttrib1fv=(tglVertexAttrib1fv)wglGetProcAddress("glVertexAttrib1fv");
    glVertexAttrib1s=(tglVertexAttrib1s)wglGetProcAddress("glVertexAttrib1s");
    glVertexAttrib1sv=(tglVertexAttrib1sv)wglGetProcAddress("glVertexAttrib1sv");
    glVertexAttrib2d=(tglVertexAttrib2d)wglGetProcAddress("glVertexAttrib2d");
    glVertexAttrib2dv=(tglVertexAttrib2dv)wglGetProcAddress("glVertexAttrib2dv");
    glVertexAttrib2f=(tglVertexAttrib2f)wglGetProcAddress("glVertexAttrib2f");
    glVertexAttrib2fv=(tglVertexAttrib2fv)wglGetProcAddress("glVertexAttrib2fv");
    glVertexAttrib2s=(tglVertexAttrib2s)wglGetProcAddress("glVertexAttrib2s");
    glVertexAttrib2sv=(tglVertexAttrib2sv)wglGetProcAddress("glVertexAttrib2sv");
    glVertexAttrib3d=(tglVertexAttrib3d)wglGetProcAddress("glVertexAttrib3d");
    glVertexAttrib3dv=(tglVertexAttrib3dv)wglGetProcAddress("glVertexAttrib3dv");
    glVertexAttrib3f=(tglVertexAttrib3f)wglGetProcAddress("glVertexAttrib3f");
    glVertexAttrib3fv=(tglVertexAttrib3fv)wglGetProcAddress("glVertexAttrib3fv");
    glVertexAttrib3s=(tglVertexAttrib3s)wglGetProcAddress("glVertexAttrib3s");
    glVertexAttrib3sv=(tglVertexAttrib3sv)wglGetProcAddress("glVertexAttrib3sv");
    glVertexAttrib4Nbv=(tglVertexAttrib4Nbv)wglGetProcAddress("glVertexAttrib4Nbv");
    glVertexAttrib4Niv=(tglVertexAttrib4Niv)wglGetProcAddress("glVertexAttrib4Niv");
    glVertexAttrib4Nsv=(tglVertexAttrib4Nsv)wglGetProcAddress("glVertexAttrib4Nsv");
    glVertexAttrib4Nub=(tglVertexAttrib4Nub)wglGetProcAddress("glVertexAttrib4Nub");
    glVertexAttrib4Nubv=(tglVertexAttrib4Nubv)wglGetProcAddress("glVertexAttrib4Nubv");
    glVertexAttrib4Nuiv=(tglVertexAttrib4Nuiv)wglGetProcAddress("glVertexAttrib4Nuiv");
    glVertexAttrib4Nusv=(tglVertexAttrib4Nusv)wglGetProcAddress("glVertexAttrib4Nusv");
    glVertexAttrib4bv=(tglVertexAttrib4bv)wglGetProcAddress("glVertexAttrib4bv");
    glVertexAttrib4d=(tglVertexAttrib4d)wglGetProcAddress("glVertexAttrib4d");
    glVertexAttrib4dv=(tglVertexAttrib4dv)wglGetProcAddress("glVertexAttrib4dv");
    glVertexAttrib4f=(tglVertexAttrib4f)wglGetProcAddress("glVertexAttrib4f");
    glVertexAttrib4fv=(tglVertexAttrib4fv)wglGetProcAddress("glVertexAttrib4fv");
    glVertexAttrib4iv=(tglVertexAttrib4iv)wglGetProcAddress("glVertexAttrib4iv");
    glVertexAttrib4s=(tglVertexAttrib4s)wglGetProcAddress("glVertexAttrib4s");
    glVertexAttrib4sv=(tglVertexAttrib4sv)wglGetProcAddress("glVertexAttrib4sv");
    glVertexAttrib4ubv=(tglVertexAttrib4ubv)wglGetProcAddress("glVertexAttrib4ubv");
    glVertexAttrib4uiv=(tglVertexAttrib4uiv)wglGetProcAddress("glVertexAttrib4uiv");
    glVertexAttrib4usv=(tglVertexAttrib4usv)wglGetProcAddress("glVertexAttrib4usv");
    glVertexAttribPointer=(tglVertexAttribPointer)wglGetProcAddress("glVertexAttribPointer");
}