#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00350410
// Address: 0x350410 - 0x350420
void sub_00350410_0x350410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350410_0x350410");
#endif

    ctx->pc = 0x350410u;

    // 0x350410: 0x3e00008  jr          $ra
    ctx->pc = 0x350410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350410u;
            // 0x350414: 0x9082004c  lbu         $v0, 0x4C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350418u;
    // 0x350418: 0x0  nop
    ctx->pc = 0x350418u;
    // NOP
    // 0x35041c: 0x0  nop
    ctx->pc = 0x35041cu;
    // NOP
}
