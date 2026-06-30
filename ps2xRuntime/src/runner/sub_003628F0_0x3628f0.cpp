#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003628F0
// Address: 0x3628f0 - 0x362950
void sub_003628F0_0x3628f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003628F0_0x3628f0");
#endif

    ctx->pc = 0x3628f0u;

    // 0x3628f0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3628f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3628f4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3628f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3628f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3628f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3628fc: 0x0  nop
    ctx->pc = 0x3628fcu;
    // NOP
    // 0x362900: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x362900u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x362904: 0x4601601c  madd.s      $f0, $f12, $f1
    ctx->pc = 0x362904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
    // 0x362908: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x362908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36290c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362910: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x362910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362914: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x362914u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x362918: 0x4601601c  madd.s      $f0, $f12, $f1
    ctx->pc = 0x362918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
    // 0x36291c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36291cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x362920: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x362920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362924: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x362924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362928: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x362928u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36292c: 0x4601601c  madd.s      $f0, $f12, $f1
    ctx->pc = 0x36292cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
    // 0x362930: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x362930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x362934: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x362934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362938: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x362938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36293c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x36293cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x362940: 0x4601601c  madd.s      $f0, $f12, $f1
    ctx->pc = 0x362940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
    // 0x362944: 0x3e00008  jr          $ra
    ctx->pc = 0x362944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362944u;
            // 0x362948: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36294Cu;
    // 0x36294c: 0x0  nop
    ctx->pc = 0x36294cu;
    // NOP
}
