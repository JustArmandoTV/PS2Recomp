#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D140
// Address: 0x28d140 - 0x28d450
void sub_0028D140_0x28d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D140_0x28d140");
#endif

    ctx->pc = 0x28d140u;

    // 0x28d140: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x28d140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d144: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28d144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d148: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d14c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28d14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28d150: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x28d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d154: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x28d154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d158: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d15c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28d15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28d160: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x28d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d164: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d168: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d16c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28d16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28d170: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x28d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d174: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x28d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d178: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d17c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x28d17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x28d180: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x28d180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d184: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x28d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d188: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d18c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x28d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x28d190: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x28d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d194: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x28d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d198: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d19c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x28d19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x28d1a0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x28d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d1a4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x28d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d1a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d1a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d1ac: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x28d1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x28d1b0: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x28d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d1b4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x28d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d1b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d1b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d1bc: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x28d1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x28d1c0: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x28d1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d1c4: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x28d1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d1c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d1cc: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x28d1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x28d1d0: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x28d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d1d4: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x28d1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d1d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d1d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d1dc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x28d1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x28d1e0: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x28d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d1e4: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x28d1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d1e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d1e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d1ec: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x28d1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x28d1f0: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x28d1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d1f4: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x28d1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d1f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d1f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d1fc: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x28d1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x28d200: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x28d200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d204: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x28d204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d208: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d20c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x28d20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x28d210: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x28d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d214: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x28d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d218: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d21c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x28d21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x28d220: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x28d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d224: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x28d224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d228: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d22c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x28d22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x28d230: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x28d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d234: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x28d234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d238: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d23c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x28d23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x28d240: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x28d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d244: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x28d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d248: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d248u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d24c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x28d24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x28d250: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x28d250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d254: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x28d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d258: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d25c: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x28d25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x28d260: 0xc4a10048  lwc1        $f1, 0x48($a1)
    ctx->pc = 0x28d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d264: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x28d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d268: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d268u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d26c: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x28d26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x28d270: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x28d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d274: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x28d274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d278: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d27c: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x28d27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x28d280: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x28d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d284: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x28d284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d288: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d28c: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x28d28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x28d290: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x28d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d294: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x28d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d298: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d29c: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x28d29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x28d2a0: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x28d2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d2a4: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x28d2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d2a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d2a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d2ac: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x28d2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x28d2b0: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x28d2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d2b4: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x28d2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d2b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d2b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d2bc: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x28d2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x28d2c0: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x28d2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d2c4: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x28d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d2c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d2c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d2cc: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x28d2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x28d2d0: 0xc4a10064  lwc1        $f1, 0x64($a1)
    ctx->pc = 0x28d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d2d4: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x28d2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d2d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d2d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d2dc: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x28d2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x28d2e0: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x28d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d2e4: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x28d2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d2e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d2ec: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x28d2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x28d2f0: 0xc4a1006c  lwc1        $f1, 0x6C($a1)
    ctx->pc = 0x28d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d2f4: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x28d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d2f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d2f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d2fc: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x28d2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x28d300: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x28d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d304: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x28d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d308: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d30c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x28d30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x28d310: 0xc4a10074  lwc1        $f1, 0x74($a1)
    ctx->pc = 0x28d310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d314: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x28d314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d318: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d31c: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x28d31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x28d320: 0xc4a10078  lwc1        $f1, 0x78($a1)
    ctx->pc = 0x28d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d324: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x28d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d328: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d32c: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x28d32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x28d330: 0xc4a1007c  lwc1        $f1, 0x7C($a1)
    ctx->pc = 0x28d330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d334: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x28d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d338: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d33c: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x28d33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x28d340: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x28d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d344: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x28d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d34c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x28d34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x28d350: 0xc4a10084  lwc1        $f1, 0x84($a1)
    ctx->pc = 0x28d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d354: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x28d354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d358: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d35c: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x28d35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x28d360: 0xc4a10088  lwc1        $f1, 0x88($a1)
    ctx->pc = 0x28d360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d364: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x28d364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d368: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d36c: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x28d36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x28d370: 0xc4a1008c  lwc1        $f1, 0x8C($a1)
    ctx->pc = 0x28d370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d374: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x28d374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d378: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d37c: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x28d37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x28d380: 0xc4810090  lwc1        $f1, 0x90($a0)
    ctx->pc = 0x28d380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d384: 0xc4a00090  lwc1        $f0, 0x90($a1)
    ctx->pc = 0x28d384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d388: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d38c: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x28d38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x28d390: 0xc4a10094  lwc1        $f1, 0x94($a1)
    ctx->pc = 0x28d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d394: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x28d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d398: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d39c: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x28d39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x28d3a0: 0xc4a10098  lwc1        $f1, 0x98($a1)
    ctx->pc = 0x28d3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d3a4: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x28d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d3a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d3a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d3ac: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x28d3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x28d3b0: 0xc4a1009c  lwc1        $f1, 0x9C($a1)
    ctx->pc = 0x28d3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d3b4: 0xc480009c  lwc1        $f0, 0x9C($a0)
    ctx->pc = 0x28d3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d3b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d3b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d3bc: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x28d3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x28d3c0: 0xc48100a0  lwc1        $f1, 0xA0($a0)
    ctx->pc = 0x28d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d3c4: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x28d3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d3c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d3c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d3cc: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x28d3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x28d3d0: 0xc4a100a4  lwc1        $f1, 0xA4($a1)
    ctx->pc = 0x28d3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d3d4: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x28d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d3d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d3d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d3dc: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x28d3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x28d3e0: 0xc4a100a8  lwc1        $f1, 0xA8($a1)
    ctx->pc = 0x28d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d3e4: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x28d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d3e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d3e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d3ec: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x28d3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x28d3f0: 0xc4a100ac  lwc1        $f1, 0xAC($a1)
    ctx->pc = 0x28d3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d3f4: 0xc48000ac  lwc1        $f0, 0xAC($a0)
    ctx->pc = 0x28d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d3f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d3f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d3fc: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x28d3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x28d400: 0xc48100b0  lwc1        $f1, 0xB0($a0)
    ctx->pc = 0x28d400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d404: 0xc4a000b0  lwc1        $f0, 0xB0($a1)
    ctx->pc = 0x28d404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d408: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d40c: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x28d40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x28d410: 0xc4a100b4  lwc1        $f1, 0xB4($a1)
    ctx->pc = 0x28d410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d414: 0xc48000b4  lwc1        $f0, 0xB4($a0)
    ctx->pc = 0x28d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d418: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d41c: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x28d41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x28d420: 0xc4a100b8  lwc1        $f1, 0xB8($a1)
    ctx->pc = 0x28d420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d424: 0xc48000b8  lwc1        $f0, 0xB8($a0)
    ctx->pc = 0x28d424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d428: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d42c: 0xe48000b8  swc1        $f0, 0xB8($a0)
    ctx->pc = 0x28d42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
    // 0x28d430: 0xc4a100bc  lwc1        $f1, 0xBC($a1)
    ctx->pc = 0x28d430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d434: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x28d434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d438: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d43c: 0x3e00008  jr          $ra
    ctx->pc = 0x28D43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D43Cu;
            // 0x28d440: 0xe48000bc  swc1        $f0, 0xBC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D444u;
    // 0x28d444: 0x0  nop
    ctx->pc = 0x28d444u;
    // NOP
    // 0x28d448: 0x0  nop
    ctx->pc = 0x28d448u;
    // NOP
    // 0x28d44c: 0x0  nop
    ctx->pc = 0x28d44cu;
    // NOP
}
