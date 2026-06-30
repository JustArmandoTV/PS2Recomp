#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001330B0
// Address: 0x1330b0 - 0x1330d0
void sub_001330B0_0x1330b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001330B0_0x1330b0");
#endif

    ctx->pc = 0x1330b0u;

    // 0x1330b0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1330b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1330b4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1330b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1330b8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1330b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1330bc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1330bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1330c0: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x1330c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1330c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1330C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1330C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1330C4u;
            // 0x1330c8: 0x4600001c  madd.s      $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1330CCu;
    // 0x1330cc: 0x0  nop
    ctx->pc = 0x1330ccu;
    // NOP
}
