#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8198
// Address: 0x1c8198 - 0x1c81d0
void sub_001C8198_0x1c8198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8198_0x1c8198");
#endif

    switch (ctx->pc) {
        case 0x1c81a8u: goto label_1c81a8;
        default: break;
    }

    ctx->pc = 0x1c8198u;

    // 0x1c8198: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1c8198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1c819c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c81a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c81a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c81a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c81a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c81a8:
    // 0x1c81a8: 0x641007  srav        $v0, $a0, $v1
    ctx->pc = 0x1c81a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1c81ac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c81acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c81b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c81b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c81b4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1c81b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c81b8: 0x0  nop
    ctx->pc = 0x1c81b8u;
    // NOP
    // 0x1c81bc: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C81BCu;
    {
        const bool branch_taken_0x1c81bc = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1C81C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C81BCu;
            // 0x1c81c0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81bc) {
            ctx->pc = 0x1C81A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c81a8;
        }
    }
    ctx->pc = 0x1C81C4u;
    // 0x1c81c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C81C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C81CCu;
    // 0x1c81cc: 0x0  nop
    ctx->pc = 0x1c81ccu;
    // NOP
}
