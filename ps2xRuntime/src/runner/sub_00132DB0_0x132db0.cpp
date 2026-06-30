#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132DB0
// Address: 0x132db0 - 0x132de0
void sub_00132DB0_0x132db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132DB0_0x132db0");
#endif

    ctx->pc = 0x132db0u;

    // 0x132db0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x132db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132db4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x132db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x132db8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x132db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x132dbc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x132dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132dc0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x132dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x132dc4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x132dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x132dc8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x132dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132dcc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x132dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x132dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x132DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132DD0u;
            // 0x132dd4: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132DD8u;
    // 0x132dd8: 0x0  nop
    ctx->pc = 0x132dd8u;
    // NOP
    // 0x132ddc: 0x0  nop
    ctx->pc = 0x132ddcu;
    // NOP
}
