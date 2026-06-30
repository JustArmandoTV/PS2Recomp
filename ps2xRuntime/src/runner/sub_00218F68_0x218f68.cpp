#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218F68
// Address: 0x218f68 - 0x218f88
void sub_00218F68_0x218f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218F68_0x218f68");
#endif

    ctx->pc = 0x218f68u;

    // 0x218f68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x218f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x218f6c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218F6Cu;
    {
        const bool branch_taken_0x218f6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x218f6c) {
            ctx->pc = 0x218F80u;
            goto label_218f80;
        }
    }
    ctx->pc = 0x218F74u;
    // 0x218f74: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x218F74u;
    {
        const bool branch_taken_0x218f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F74u;
            // 0x218f78: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f74) {
            ctx->pc = 0x218F80u;
            goto label_218f80;
        }
    }
    ctx->pc = 0x218F7Cu;
    // 0x218f7c: 0xa040e798  sb          $zero, -0x1868($v0)
    ctx->pc = 0x218f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961048), (uint8_t)GPR_U32(ctx, 0));
label_218f80:
    // 0x218f80: 0x3e00008  jr          $ra
    ctx->pc = 0x218F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218F88u;
}
