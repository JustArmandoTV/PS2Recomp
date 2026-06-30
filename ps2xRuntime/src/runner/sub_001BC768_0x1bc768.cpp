#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC768
// Address: 0x1bc768 - 0x1bc790
void sub_001BC768_0x1bc768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC768_0x1bc768");
#endif

    ctx->pc = 0x1bc768u;

    // 0x1bc768: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1bc768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bc76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc770: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1bc770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1bc774: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1bc774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1bc778: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1bc778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1bc77c: 0x90e3001a  lbu         $v1, 0x1A($a3)
    ctx->pc = 0x1bc77cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x1bc780: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1bc780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1bc784: 0x90e4001b  lbu         $a0, 0x1B($a3)
    ctx->pc = 0x1bc784u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 27)));
    // 0x1bc788: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC788u;
            // 0x1bc78c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC790u;
}
