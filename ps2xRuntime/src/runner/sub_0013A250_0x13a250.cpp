#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A250
// Address: 0x13a250 - 0x13a280
void sub_0013A250_0x13a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A250_0x13a250");
#endif

    ctx->pc = 0x13a250u;

    // 0x13a250: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x13a250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a254: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A254u;
    {
        const bool branch_taken_0x13a254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a254) {
            ctx->pc = 0x13A278u;
            goto label_13a278;
        }
    }
    ctx->pc = 0x13A25Cu;
    // 0x13a25c: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x13a25cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13a260: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a264: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x13a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x13a268: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a26c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a270: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a274: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x13a274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_13a278:
    // 0x13a278: 0x3e00008  jr          $ra
    ctx->pc = 0x13A278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A280u;
}
