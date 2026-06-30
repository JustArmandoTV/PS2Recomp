#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132BF0
// Address: 0x132bf0 - 0x132c30
void sub_00132BF0_0x132bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132BF0_0x132bf0");
#endif

    ctx->pc = 0x132bf0u;

    // 0x132bf0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x132bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132bf4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x132bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132bf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x132bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x132bfc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x132bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x132c00: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x132c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132c04: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x132c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132c08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x132c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x132c0c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x132c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x132c10: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x132c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132c14: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x132c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132c18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x132c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x132c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x132C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132C1Cu;
            // 0x132c20: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132C24u;
    // 0x132c24: 0x0  nop
    ctx->pc = 0x132c24u;
    // NOP
    // 0x132c28: 0x0  nop
    ctx->pc = 0x132c28u;
    // NOP
    // 0x132c2c: 0x0  nop
    ctx->pc = 0x132c2cu;
    // NOP
}
