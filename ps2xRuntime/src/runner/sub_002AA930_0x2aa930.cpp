#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AA930
// Address: 0x2aa930 - 0x2aa960
void sub_002AA930_0x2aa930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA930_0x2aa930");
#endif

    switch (ctx->pc) {
        case 0x2aa930u: goto label_2aa930;
        case 0x2aa934u: goto label_2aa934;
        case 0x2aa938u: goto label_2aa938;
        case 0x2aa93cu: goto label_2aa93c;
        case 0x2aa940u: goto label_2aa940;
        case 0x2aa944u: goto label_2aa944;
        case 0x2aa948u: goto label_2aa948;
        case 0x2aa94cu: goto label_2aa94c;
        case 0x2aa950u: goto label_2aa950;
        case 0x2aa954u: goto label_2aa954;
        case 0x2aa958u: goto label_2aa958;
        case 0x2aa95cu: goto label_2aa95c;
        default: break;
    }

    ctx->pc = 0x2aa930u;

label_2aa930:
    // 0x2aa930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2aa934:
    // 0x2aa934: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2aa938:
    if (ctx->pc == 0x2AA938u) {
        ctx->pc = 0x2AA938u;
            // 0x2aa938: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2AA93Cu;
        goto label_2aa93c;
    }
    ctx->pc = 0x2AA934u;
    {
        const bool branch_taken_0x2aa934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA934u;
            // 0x2aa938: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa934) {
            ctx->pc = 0x2AA94Cu;
            goto label_2aa94c;
        }
    }
    ctx->pc = 0x2AA93Cu;
label_2aa93c:
    // 0x2aa93c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aa93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aa940:
    // 0x2aa940: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2aa940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2aa944:
    // 0x2aa944: 0x320f809  jalr        $t9
label_2aa948:
    if (ctx->pc == 0x2AA948u) {
        ctx->pc = 0x2AA948u;
            // 0x2aa948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AA94Cu;
        goto label_2aa94c;
    }
    ctx->pc = 0x2AA944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA94Cu);
        ctx->pc = 0x2AA948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA944u;
            // 0x2aa948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA94Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA94Cu; }
            if (ctx->pc != 0x2AA94Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2AA94Cu;
label_2aa94c:
    // 0x2aa94c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa950:
    // 0x2aa950: 0x3e00008  jr          $ra
label_2aa954:
    if (ctx->pc == 0x2AA954u) {
        ctx->pc = 0x2AA954u;
            // 0x2aa954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2AA958u;
        goto label_2aa958;
    }
    ctx->pc = 0x2AA950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA950u;
            // 0x2aa954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA958u;
label_2aa958:
    // 0x2aa958: 0x0  nop
    ctx->pc = 0x2aa958u;
    // NOP
label_2aa95c:
    // 0x2aa95c: 0x0  nop
    ctx->pc = 0x2aa95cu;
    // NOP
}
