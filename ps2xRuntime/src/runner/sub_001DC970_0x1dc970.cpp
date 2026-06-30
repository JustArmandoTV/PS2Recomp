#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC970
// Address: 0x1dc970 - 0x1dc990
void sub_001DC970_0x1dc970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC970_0x1dc970");
#endif

    ctx->pc = 0x1dc970u;

    // 0x1dc970: 0x90820e3d  lbu         $v0, 0xE3D($a0)
    ctx->pc = 0x1dc970u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3645)));
    // 0x1dc974: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1dc974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1dc978: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1dc978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dc97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC97Cu;
            // 0x1dc980: 0x244200c0  addiu       $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC984u;
    // 0x1dc984: 0x0  nop
    ctx->pc = 0x1dc984u;
    // NOP
    // 0x1dc988: 0x0  nop
    ctx->pc = 0x1dc988u;
    // NOP
    // 0x1dc98c: 0x0  nop
    ctx->pc = 0x1dc98cu;
    // NOP
}
