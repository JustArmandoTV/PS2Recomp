#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD5B8
// Address: 0x1bd5b8 - 0x1bd5f0
void sub_001BD5B8_0x1bd5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD5B8_0x1bd5b8");
#endif

    switch (ctx->pc) {
        case 0x1bd5d0u: goto label_1bd5d0;
        default: break;
    }

    ctx->pc = 0x1bd5b8u;

    // 0x1bd5b8: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1bd5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1bd5bc: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x1bd5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x1bd5c0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1bd5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bd5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5C4u;
            // 0x1bd5c8: 0xa0860001  sb          $a2, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD5CCu;
    // 0x1bd5cc: 0x0  nop
    ctx->pc = 0x1bd5ccu;
    // NOP
label_1bd5d0:
    // 0x1bd5d0: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1bd5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1bd5d4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1bd5d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd5d8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1bd5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd5dc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1bd5dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1bd5e0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1bd5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd5e4: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1bd5e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1bd5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5E8u;
            // 0x1bd5ec: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD5F0u;
}
