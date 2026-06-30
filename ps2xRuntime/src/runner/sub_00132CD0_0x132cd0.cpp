#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132CD0
// Address: 0x132cd0 - 0x132d10
void sub_00132CD0_0x132cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132CD0_0x132cd0");
#endif

    ctx->pc = 0x132cd0u;

    // 0x132cd0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x132cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132cd4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x132cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132cd8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x132cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132cdc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x132cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132ce0: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x132ce0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x132ce4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x132ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132ce8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x132ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132cec: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x132cecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x132cf0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x132cf0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x132cf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x132cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x132cf8: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x132cf8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x132cfc: 0x804c710  j           func_131C40
    ctx->pc = 0x132CFCu;
    ctx->pc = 0x132D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132CFCu;
            // 0x132d00: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00131C40_0x131c40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x132D04u;
    // 0x132d04: 0x0  nop
    ctx->pc = 0x132d04u;
    // NOP
    // 0x132d08: 0x0  nop
    ctx->pc = 0x132d08u;
    // NOP
    // 0x132d0c: 0x0  nop
    ctx->pc = 0x132d0cu;
    // NOP
}
