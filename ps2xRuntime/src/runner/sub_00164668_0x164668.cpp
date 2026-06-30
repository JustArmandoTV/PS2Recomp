#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164668
// Address: 0x164668 - 0x164678
void sub_00164668_0x164668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164668_0x164668");
#endif

    ctx->pc = 0x164668u;

    // 0x164668: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x164668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16466c: 0x3e00008  jr          $ra
    ctx->pc = 0x16466Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16466Cu;
            // 0x164670: 0x8c6261fc  lw          $v0, 0x61FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25084)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164674u;
    // 0x164674: 0x0  nop
    ctx->pc = 0x164674u;
    // NOP
}
