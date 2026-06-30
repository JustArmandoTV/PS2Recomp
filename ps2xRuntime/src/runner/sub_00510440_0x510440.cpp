#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00510440
// Address: 0x510440 - 0x510460
void sub_00510440_0x510440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510440_0x510440");
#endif

    ctx->pc = 0x510440u;

    // 0x510440: 0x8c830128  lw          $v1, 0x128($a0)
    ctx->pc = 0x510440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x510444: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x510444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x510448: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x510448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
    // 0x51044c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51044cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x510450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x510450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x510454: 0x3e00008  jr          $ra
    ctx->pc = 0x510454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510454u;
            // 0x510458: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51045Cu;
    // 0x51045c: 0x0  nop
    ctx->pc = 0x51045cu;
    // NOP
}
