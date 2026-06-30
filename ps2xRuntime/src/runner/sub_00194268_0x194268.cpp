#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194268
// Address: 0x194268 - 0x194290
void sub_00194268_0x194268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194268_0x194268");
#endif

    ctx->pc = 0x194268u;

    // 0x194268: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x194268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x19426c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x194270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194274: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x194274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x194278: 0x248403dc  addiu       $a0, $a0, 0x3DC
    ctx->pc = 0x194278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 988));
    // 0x19427c: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x19427cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x194280: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x194280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x194284: 0x3e00008  jr          $ra
    ctx->pc = 0x194284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194284u;
            // 0x194288: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19428Cu;
    // 0x19428c: 0x0  nop
    ctx->pc = 0x19428cu;
    // NOP
}
