#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132C30
// Address: 0x132c30 - 0x132c70
void sub_00132C30_0x132c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132C30_0x132c30");
#endif

    ctx->pc = 0x132c30u;

    // 0x132c30: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x132c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x132c34: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x132c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132c38: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x132c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132c3c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x132c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132c40: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x132c40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x132c44: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x132c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132c48: 0x4602081d  msub.s      $f0, $f1, $f2
    ctx->pc = 0x132c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x132c4c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x132c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x132c50: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x132c50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x132c54: 0x4606285d  msub.s      $f1, $f5, $f6
    ctx->pc = 0x132c54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
    // 0x132c58: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x132c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x132c5c: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x132c5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x132c60: 0x4604181d  msub.s      $f0, $f3, $f4
    ctx->pc = 0x132c60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x132c64: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x132c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x132c68: 0x3e00008  jr          $ra
    ctx->pc = 0x132C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132C68u;
            // 0x132c6c: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132C70u;
}
