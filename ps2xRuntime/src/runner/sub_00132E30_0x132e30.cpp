#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132E30
// Address: 0x132e30 - 0x132e70
void sub_00132E30_0x132e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132E30_0x132e30");
#endif

    ctx->pc = 0x132e30u;

    // 0x132e30: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x132e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132e34: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x132e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x132e38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x132e3c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x132e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x132e40: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x132e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132e44: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x132e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x132e48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x132e4c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x132e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x132e50: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x132e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132e54: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x132e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x132e58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x132e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x132E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132E5Cu;
            // 0x132e60: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132E64u;
    // 0x132e64: 0x0  nop
    ctx->pc = 0x132e64u;
    // NOP
    // 0x132e68: 0x0  nop
    ctx->pc = 0x132e68u;
    // NOP
    // 0x132e6c: 0x0  nop
    ctx->pc = 0x132e6cu;
    // NOP
}
