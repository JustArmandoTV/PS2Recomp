#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F06B0
// Address: 0x2f06b0 - 0x2f06d0
void sub_002F06B0_0x2f06b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F06B0_0x2f06b0");
#endif

    ctx->pc = 0x2f06b0u;

    // 0x2f06b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f06b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f06b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f06b8: 0x0  nop
    ctx->pc = 0x2f06b8u;
    // NOP
    // 0x2f06bc: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x2f06bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x2f06c0: 0x460e681a  mula.s      $f13, $f14
    ctx->pc = 0x2f06c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
    // 0x2f06c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F06C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F06C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F06C4u;
            // 0x2f06c8: 0x4600601c  madd.s      $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F06CCu;
    // 0x2f06cc: 0x0  nop
    ctx->pc = 0x2f06ccu;
    // NOP
}
