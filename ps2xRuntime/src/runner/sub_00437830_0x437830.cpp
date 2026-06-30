#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00437830
// Address: 0x437830 - 0x437860
void sub_00437830_0x437830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00437830_0x437830");
#endif

    switch (ctx->pc) {
        case 0x437830u: goto label_437830;
        case 0x437834u: goto label_437834;
        case 0x437838u: goto label_437838;
        case 0x43783cu: goto label_43783c;
        case 0x437840u: goto label_437840;
        case 0x437844u: goto label_437844;
        case 0x437848u: goto label_437848;
        case 0x43784cu: goto label_43784c;
        case 0x437850u: goto label_437850;
        case 0x437854u: goto label_437854;
        case 0x437858u: goto label_437858;
        case 0x43785cu: goto label_43785c;
        default: break;
    }

    ctx->pc = 0x437830u;

label_437830:
    // 0x437830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x437830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_437834:
    // 0x437834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x437834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_437838:
    // 0x437838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x437838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43783c:
    // 0x43783c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43783cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_437840:
    // 0x437840: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x437840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_437844:
    // 0x437844: 0x320f809  jalr        $t9
label_437848:
    if (ctx->pc == 0x437848u) {
        ctx->pc = 0x437848u;
            // 0x437848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43784Cu;
        goto label_43784c;
    }
    ctx->pc = 0x437844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43784Cu);
        ctx->pc = 0x437848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437844u;
            // 0x437848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43784Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43784Cu; }
            if (ctx->pc != 0x43784Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43784Cu;
label_43784c:
    // 0x43784c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x43784cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_437850:
    // 0x437850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x437850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_437854:
    // 0x437854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x437854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_437858:
    // 0x437858: 0x3e00008  jr          $ra
label_43785c:
    if (ctx->pc == 0x43785Cu) {
        ctx->pc = 0x43785Cu;
            // 0x43785c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x437860u;
        goto label_fallthrough_0x437858;
    }
    ctx->pc = 0x437858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43785Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437858u;
            // 0x43785c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x437858:
    ctx->pc = 0x437860u;
}
