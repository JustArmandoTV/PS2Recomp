#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00251260
// Address: 0x251260 - 0x251270
void sub_00251260_0x251260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251260_0x251260");
#endif

    ctx->pc = 0x251260u;

    // 0x251260: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x251260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x251264: 0x3e00008  jr          $ra
    ctx->pc = 0x251264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251264u;
            // 0x251268: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25126Cu;
    // 0x25126c: 0x0  nop
    ctx->pc = 0x25126cu;
    // NOP
}
