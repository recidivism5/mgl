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
BOOL(*wglChoosePixelFormatARB)(HDC hdc,const int *piAttribIList,const FLOAT *pfAttribFList,UINT nMaxFormats,int *piFormats,UINT *nNumFormats);
HGLRC(*wglCreateContextAttribsARB)(HDC hDC,HGLRC hShareContext,const int *attribList);
BOOL(*wglSwapIntervalEXT)(int interval);
void glCullFace(GLenum mode);
void glFrontFace(GLenum mode);
void glHint(GLenum target,GLenum mode);
void glLineWidth(GLfloat width);
void glPointSize(GLfloat size);
void glPolygonMode(GLenum face,GLenum mode);
void glScissor(GLint x,GLint y,GLsizei width,GLsizei height);
void glTexParameterf(GLenum target,GLenum pname,GLfloat param);
void glTexParameterfv(GLenum target,GLenum pname,const GLfloat *params);
void glTexParameteri(GLenum target,GLenum pname,GLint param);
void glTexParameteriv(GLenum target,GLenum pname,const GLint *params);
void glTexImage1D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const GLvoid *pixels);
void glTexImage2D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const GLvoid *pixels);
void glDrawBuffer(GLenum mode);
void glClear(GLbitfield mask);
void glClearColor(GLclampf red,GLclampf green,GLclampf blue,GLclampf alpha);
void glClearStencil(GLint s);
void glClearDepth(GLclampd depth);
void glStencilMask(GLuint mask);
void glColorMask(GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha);
void glDepthMask(GLboolean flag);
void glDisable(GLenum cap);
void glEnable(GLenum cap);
void glFinish(void);
void glFlush(void);
void glBlendFunc(GLenum sfactor,GLenum dfactor);
void glLogicOp(GLenum opcode);
void glStencilFunc(GLenum func,GLint ref,GLuint mask);
void glStencilOp(GLenum fail,GLenum zfail,GLenum zpass);
void glDepthFunc(GLenum func);
void glPixelStoref(GLenum pname,GLfloat param);
void glPixelStorei(GLenum pname,GLint param);
void glReadBuffer(GLenum mode);
void glReadPixels(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,GLvoid *pixels);
void glGetBooleanv(GLenum pname,GLboolean *params);
void glGetDoublev(GLenum pname,GLdouble *params);
GLenum glGetError(void);
void glGetFloatv(GLenum pname,GLfloat *params);
void glGetIntegerv(GLenum pname,GLint *params);
const GLubyte * glGetString(GLenum name);
void glGetTexImage(GLenum target,GLint level,GLenum format,GLenum type,GLvoid *pixels);
void glGetTexParameterfv(GLenum target,GLenum pname,GLfloat *params);
void glGetTexParameteriv(GLenum target,GLenum pname,GLint *params);
void glGetTexLevelParameterfv(GLenum target,GLint level,GLenum pname,GLfloat *params);
void glGetTexLevelParameteriv(GLenum target,GLint level,GLenum pname,GLint *params);
GLboolean glIsEnabled(GLenum cap);
void glDepthRange(GLclampd zNear,GLclampd zFar);
void glViewport(GLint x,GLint y,GLsizei width,GLsizei height);
void glDrawArrays(GLenum mode,GLint first,GLsizei count);
void glDrawElements(GLenum mode,GLsizei count,GLenum type,const GLvoid *indices);
void glPolygonOffset(GLfloat factor,GLfloat units);
void glCopyTexImage1D(GLenum target,GLint level,GLenum internalFormat,GLint x,GLint y,GLsizei width,GLint border);
void glCopyTexImage2D(GLenum target,GLint level,GLenum internalFormat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border);
void glCopyTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width);
void glCopyTexSubImage2D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height);
void glTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const GLvoid *pixels);
void glTexSubImage2D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const GLvoid *pixels);
void glBindTexture(GLenum target,GLuint texture);
void glDeleteTextures(GLsizei n,const GLuint *textures);
void glGenTextures(GLsizei n,GLuint *textures);
GLboolean glIsTexture(GLuint texture);
void(*glDrawRangeElements)(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices);
void(*glTexImage3D)(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels);
void(*glTexSubImage3D)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels);
void(*glCopyTexSubImage3D)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height);
void(*glActiveTexture)(GLenum texture);
void(*glSampleCoverage)(GLfloat value,GLboolean invert);
void(*glCompressedTexImage3D)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *data);
void(*glCompressedTexImage2D)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *data);
void(*glCompressedTexImage1D)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *data);
void(*glCompressedTexSubImage3D)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data);
void(*glCompressedTexSubImage2D)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *data);
void(*glCompressedTexSubImage1D)(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *data);
void(*glGetCompressedTexImage)(GLenum target,GLint level,void *img);
void(*glBlendFuncSeparate)(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha);
void(*glMultiDrawArrays)(GLenum mode,const GLint *first,const GLsizei *count,GLsizei drawcount);
void(*glMultiDrawElements)(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei drawcount);
void(*glPointParameterf)(GLenum pname,GLfloat param);
void(*glPointParameterfv)(GLenum pname,const GLfloat *params);
void(*glPointParameteri)(GLenum pname,GLint param);
void(*glPointParameteriv)(GLenum pname,const GLint *params);
void(*glBlendColor)(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha);
void(*glBlendEquation)(GLenum mode);
void(*glGenQueries)(GLsizei n,GLuint *ids);
void(*glDeleteQueries)(GLsizei n,const GLuint *ids);
GLboolean(*glIsQuery)(GLuint id);
void(*glBeginQuery)(GLenum target,GLuint id);
void(*glEndQuery)(GLenum target);
void(*glGetQueryiv)(GLenum target,GLenum pname,GLint *params);
void(*glGetQueryObjectiv)(GLuint id,GLenum pname,GLint *params);
void(*glGetQueryObjectuiv)(GLuint id,GLenum pname,GLuint *params);
void(*glBindBuffer)(GLenum target,GLuint buffer);
void(*glDeleteBuffers)(GLsizei n,const GLuint *buffers);
void(*glGenBuffers)(GLsizei n,GLuint *buffers);
GLboolean(*glIsBuffer)(GLuint buffer);
void(*glBufferData)(GLenum target,GLsizeiptr size,const void *data,GLenum usage);
void(*glBufferSubData)(GLenum target,GLintptr offset,GLsizeiptr size,const void *data);
void(*glGetBufferSubData)(GLenum target,GLintptr offset,GLsizeiptr size,void *data);
void(*glMapBuffer)(GLenum target,GLenum access);
GLboolean(*glUnmapBuffer)(GLenum target);
void(*glGetBufferParameteriv)(GLenum target,GLenum pname,GLint *params);
void(*glGetBufferPointerv)(GLenum target,GLenum pname,void **params);
void(*glBlendEquationSeparate)(GLenum modeRGB,GLenum modeAlpha);
void(*glDrawBuffers)(GLsizei n,const GLenum *bufs);
void(*glStencilOpSeparate)(GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass);
void(*glStencilFuncSeparate)(GLenum face,GLenum func,GLint ref,GLuint mask);
void(*glStencilMaskSeparate)(GLenum face,GLuint mask);
void(*glAttachShader)(GLuint program,GLuint shader);
void(*glBindAttribLocation)(GLuint program,GLuint index,const GLchar *name);
void(*glCompileShader)(GLuint shader);
GLuint(*glCreateProgram)(void);
GLuint(*glCreateShader)(GLenum type);
void(*glDeleteProgram)(GLuint program);
void(*glDeleteShader)(GLuint shader);
void(*glDetachShader)(GLuint program,GLuint shader);
void(*glDisableVertexAttribArray)(GLuint index);
void(*glEnableVertexAttribArray)(GLuint index);
void(*glGetActiveAttrib)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name);
void(*glGetActiveUniform)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name);
void(*glGetAttachedShaders)(GLuint program,GLsizei maxCount,GLsizei *count,GLuint *shaders);
GLint(*glGetAttribLocation)(GLuint program,const GLchar *name);
void(*glGetProgramiv)(GLuint program,GLenum pname,GLint *params);
void(*glGetProgramInfoLog)(GLuint program,GLsizei bufSize,GLsizei *length,GLchar *infoLog);
void(*glGetShaderiv)(GLuint shader,GLenum pname,GLint *params);
void(*glGetShaderInfoLog)(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *infoLog);
void(*glGetShaderSource)(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *source);
GLint(*glGetUniformLocation)(GLuint program,const GLchar *name);
void(*glGetUniformfv)(GLuint program,GLint location,GLfloat *params);
void(*glGetUniformiv)(GLuint program,GLint location,GLint *params);
void(*glGetVertexAttribdv)(GLuint index,GLenum pname,GLdouble *params);
void(*glGetVertexAttribfv)(GLuint index,GLenum pname,GLfloat *params);
void(*glGetVertexAttribiv)(GLuint index,GLenum pname,GLint *params);
void(*glGetVertexAttribPointerv)(GLuint index,GLenum pname,void **pointer);
GLboolean(*glIsProgram)(GLuint program);
GLboolean(*glIsShader)(GLuint shader);
void(*glLinkProgram)(GLuint program);
void(*glShaderSource)(GLuint shader,GLsizei count,const GLchar *const*string,const GLint *length);
void(*glUseProgram)(GLuint program);
void(*glUniform1f)(GLint location,GLfloat v0);
void(*glUniform2f)(GLint location,GLfloat v0,GLfloat v1);
void(*glUniform3f)(GLint location,GLfloat v0,GLfloat v1,GLfloat v2);
void(*glUniform4f)(GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3);
void(*glUniform1i)(GLint location,GLint v0);
void(*glUniform2i)(GLint location,GLint v0,GLint v1);
void(*glUniform3i)(GLint location,GLint v0,GLint v1,GLint v2);
void(*glUniform4i)(GLint location,GLint v0,GLint v1,GLint v2,GLint v3);
void(*glUniform1fv)(GLint location,GLsizei count,const GLfloat *value);
void(*glUniform2fv)(GLint location,GLsizei count,const GLfloat *value);
void(*glUniform3fv)(GLint location,GLsizei count,const GLfloat *value);
void(*glUniform4fv)(GLint location,GLsizei count,const GLfloat *value);
void(*glUniform1iv)(GLint location,GLsizei count,const GLint *value);
void(*glUniform2iv)(GLint location,GLsizei count,const GLint *value);
void(*glUniform3iv)(GLint location,GLsizei count,const GLint *value);
void(*glUniform4iv)(GLint location,GLsizei count,const GLint *value);
void(*glUniformMatrix2fv)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
void(*glUniformMatrix3fv)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
void(*glUniformMatrix4fv)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
void(*glValidateProgram)(GLuint program);
void(*glVertexAttrib1d)(GLuint index,GLdouble x);
void(*glVertexAttrib1dv)(GLuint index,const GLdouble *v);
void(*glVertexAttrib1f)(GLuint index,GLfloat x);
void(*glVertexAttrib1fv)(GLuint index,const GLfloat *v);
void(*glVertexAttrib1s)(GLuint index,GLshort x);
void(*glVertexAttrib1sv)(GLuint index,const GLshort *v);
void(*glVertexAttrib2d)(GLuint index,GLdouble x,GLdouble y);
void(*glVertexAttrib2dv)(GLuint index,const GLdouble *v);
void(*glVertexAttrib2f)(GLuint index,GLfloat x,GLfloat y);
void(*glVertexAttrib2fv)(GLuint index,const GLfloat *v);
void(*glVertexAttrib2s)(GLuint index,GLshort x,GLshort y);
void(*glVertexAttrib2sv)(GLuint index,const GLshort *v);
void(*glVertexAttrib3d)(GLuint index,GLdouble x,GLdouble y,GLdouble z);
void(*glVertexAttrib3dv)(GLuint index,const GLdouble *v);
void(*glVertexAttrib3f)(GLuint index,GLfloat x,GLfloat y,GLfloat z);
void(*glVertexAttrib3fv)(GLuint index,const GLfloat *v);
void(*glVertexAttrib3s)(GLuint index,GLshort x,GLshort y,GLshort z);
void(*glVertexAttrib3sv)(GLuint index,const GLshort *v);
void(*glVertexAttrib4Nbv)(GLuint index,const GLbyte *v);
void(*glVertexAttrib4Niv)(GLuint index,const GLint *v);
void(*glVertexAttrib4Nsv)(GLuint index,const GLshort *v);
void(*glVertexAttrib4Nub)(GLuint index,GLubyte x,GLubyte y,GLubyte z,GLubyte w);
void(*glVertexAttrib4Nubv)(GLuint index,const GLubyte *v);
void(*glVertexAttrib4Nuiv)(GLuint index,const GLuint *v);
void(*glVertexAttrib4Nusv)(GLuint index,const GLushort *v);
void(*glVertexAttrib4bv)(GLuint index,const GLbyte *v);
void(*glVertexAttrib4d)(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
void(*glVertexAttrib4dv)(GLuint index,const GLdouble *v);
void(*glVertexAttrib4f)(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
void(*glVertexAttrib4fv)(GLuint index,const GLfloat *v);
void(*glVertexAttrib4iv)(GLuint index,const GLint *v);
void(*glVertexAttrib4s)(GLuint index,GLshort x,GLshort y,GLshort z,GLshort w);
void(*glVertexAttrib4sv)(GLuint index,const GLshort *v);
void(*glVertexAttrib4ubv)(GLuint index,const GLubyte *v);
void(*glVertexAttrib4uiv)(GLuint index,const GLuint *v);
void(*glVertexAttrib4usv)(GLuint index,const GLushort *v);
void(*glVertexAttribPointer)(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,const void *pointer);
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
    G(glDrawRangeElements)G(glTexImage3D)G(glTexSubImage3D)G(glCopyTexSubImage3D)G(glActiveTexture)G(glSampleCoverage)G(glCompressedTexImage3D)G(glCompressedTexImage2D)
    G(glCompressedTexImage1D)G(glCompressedTexSubImage3D)G(glCompressedTexSubImage2D)G(glCompressedTexSubImage1D)G(glGetCompressedTexImage)G(glBlendFuncSeparate)
    G(glMultiDrawArrays)G(glMultiDrawElements)G(glPointParameterf)G(glPointParameterfv)G(glPointParameteri)G(glPointParameteriv)G(glBlendColor)G(glBlendEquation)
    G(glGenQueries)G(glDeleteQueries)G(glIsQuery)G(glBeginQuery)G(glEndQuery)G(glGetQueryiv)G(glGetQueryObjectiv)G(glGetQueryObjectuiv)G(glBindBuffer)G(glDeleteBuffers)
    G(glGenBuffers)G(glIsBuffer)G(glBufferData)G(glBufferSubData)G(glGetBufferSubData)G(glMapBuffer)G(glUnmapBuffer)G(glGetBufferParameteriv)G(glGetBufferPointerv)
    G(glBlendEquationSeparate)G(glDrawBuffers)G(glStencilOpSeparate)G(glStencilFuncSeparate)G(glStencilMaskSeparate)G(glAttachShader)G(glBindAttribLocation)
    G(glCompileShader)G(glCreateProgram)G(glCreateShader)G(glDeleteProgram)G(glDeleteShader)G(glDetachShader)G(glDisableVertexAttribArray)G(glEnableVertexAttribArray)
    G(glGetActiveAttrib)G(glGetActiveUniform)G(glGetAttachedShaders)G(glGetAttribLocation)G(glGetProgramiv)G(glGetProgramInfoLog)G(glGetShaderiv)G(glGetShaderInfoLog)
    G(glGetShaderSource)G(glGetUniformLocation)G(glGetUniformfv)G(glGetUniformiv)G(glGetVertexAttribdv)G(glGetVertexAttribfv)G(glGetVertexAttribiv)G(glGetVertexAttribPointerv)
    G(glIsProgram)G(glIsShader)G(glLinkProgram)G(glShaderSource)G(glUseProgram)G(glUniform1f)G(glUniform2f)G(glUniform3f)G(glUniform4f)G(glUniform1i)G(glUniform2i)
    G(glUniform3i)G(glUniform4i)G(glUniform1fv)G(glUniform2fv)G(glUniform3fv)G(glUniform4fv)G(glUniform1iv)G(glUniform2iv)G(glUniform3iv)G(glUniform4iv)G(glUniformMatrix2fv)
    G(glUniformMatrix3fv)G(glUniformMatrix4fv)G(glValidateProgram)G(glVertexAttrib1d)G(glVertexAttrib1dv)G(glVertexAttrib1f)G(glVertexAttrib1fv)G(glVertexAttrib1s)
    G(glVertexAttrib1sv)G(glVertexAttrib2d)G(glVertexAttrib2dv)G(glVertexAttrib2f)G(glVertexAttrib2fv)G(glVertexAttrib2s)G(glVertexAttrib2sv)G(glVertexAttrib3d)
    G(glVertexAttrib3dv)G(glVertexAttrib3f)G(glVertexAttrib3fv)G(glVertexAttrib3s)G(glVertexAttrib3sv)G(glVertexAttrib4Nbv)G(glVertexAttrib4Niv)G(glVertexAttrib4Nsv)
    G(glVertexAttrib4Nub)G(glVertexAttrib4Nubv)G(glVertexAttrib4Nuiv)G(glVertexAttrib4Nusv)G(glVertexAttrib4bv)G(glVertexAttrib4d)G(glVertexAttrib4dv)G(glVertexAttrib4f)
    G(glVertexAttrib4fv)G(glVertexAttrib4iv)G(glVertexAttrib4s)G(glVertexAttrib4sv)G(glVertexAttrib4ubv)G(glVertexAttrib4uiv)G(glVertexAttrib4usv)G(glVertexAttribPointer)
#undef G
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