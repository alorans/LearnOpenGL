// stb_image
#define STBI_NO_HDR     // no HDR images (not necessary for now)
#define STBI_NO_LINEAR
#define STBI_ONLY_JPEG  // only load jpg and png to reduce code footprint
#define STBI_ONLY_PNG
#define STB_IMAGE_IMPLEMENTATION
#include <stb/stb_image.h>