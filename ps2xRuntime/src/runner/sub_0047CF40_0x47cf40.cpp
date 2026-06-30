#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047CF40
// Address: 0x47cf40 - 0x47cf70
void sub_0047CF40_0x47cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CF40_0x47cf40");
#endif

    ctx->pc = 0x47cf40u;

    // 0x47cf40: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x47cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x47cf44: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x47cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x47cf48: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x47cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47cf4c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x47cf50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x47cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x47cf54: 0x2442f850  addiu       $v0, $v0, -0x7B0
    ctx->pc = 0x47cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965328));
    // 0x47cf58: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x47cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47cf5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47cf60: 0x3e00008  jr          $ra
    ctx->pc = 0x47CF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CF60u;
            // 0x47cf64: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47CF68u;
    // 0x47cf68: 0x0  nop
    ctx->pc = 0x47cf68u;
    // NOP
    // 0x47cf6c: 0x0  nop
    ctx->pc = 0x47cf6cu;
    // NOP
}
