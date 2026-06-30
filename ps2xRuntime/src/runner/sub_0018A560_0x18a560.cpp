#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A560
// Address: 0x18a560 - 0x18a588
void sub_0018A560_0x18a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A560_0x18a560");
#endif

    switch (ctx->pc) {
        case 0x18a560u: goto label_18a560;
        case 0x18a564u: goto label_18a564;
        case 0x18a568u: goto label_18a568;
        case 0x18a56cu: goto label_18a56c;
        case 0x18a570u: goto label_18a570;
        case 0x18a574u: goto label_18a574;
        case 0x18a578u: goto label_18a578;
        case 0x18a57cu: goto label_18a57c;
        case 0x18a580u: goto label_18a580;
        case 0x18a584u: goto label_18a584;
        default: break;
    }

    ctx->pc = 0x18a560u;

label_18a560:
    // 0x18a560: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a564:
    // 0x18a564: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a568:
    // 0x18a568: 0x8c426a30  lw          $v0, 0x6A30($v0)
    ctx->pc = 0x18a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27184)));
label_18a56c:
    // 0x18a56c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a570:
    if (ctx->pc == 0x18A570u) {
        ctx->pc = 0x18A570u;
            // 0x18a570: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A574u;
        goto label_18a574;
    }
    ctx->pc = 0x18A56Cu;
    {
        const bool branch_taken_0x18a56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A56Cu;
            // 0x18a570: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a56c) {
            ctx->pc = 0x18A57Cu;
            goto label_18a57c;
        }
    }
    ctx->pc = 0x18A574u;
label_18a574:
    // 0x18a574: 0x40f809  jalr        $v0
label_18a578:
    if (ctx->pc == 0x18A578u) {
        ctx->pc = 0x18A57Cu;
        goto label_18a57c;
    }
    ctx->pc = 0x18A574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A57Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A57Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A57Cu; }
            if (ctx->pc != 0x18A57Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18A57Cu;
label_18a57c:
    // 0x18a57c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a580:
    // 0x18a580: 0x3e00008  jr          $ra
label_18a584:
    if (ctx->pc == 0x18A584u) {
        ctx->pc = 0x18A584u;
            // 0x18a584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A588u;
        goto label_fallthrough_0x18a580;
    }
    ctx->pc = 0x18A580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A580u;
            // 0x18a584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x18a580:
    ctx->pc = 0x18A588u;
}
