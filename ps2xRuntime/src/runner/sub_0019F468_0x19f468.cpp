#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F468
// Address: 0x19f468 - 0x19f498
void sub_0019F468_0x19f468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F468_0x19f468");
#endif

    switch (ctx->pc) {
        case 0x19f468u: goto label_19f468;
        case 0x19f46cu: goto label_19f46c;
        case 0x19f470u: goto label_19f470;
        case 0x19f474u: goto label_19f474;
        case 0x19f478u: goto label_19f478;
        case 0x19f47cu: goto label_19f47c;
        case 0x19f480u: goto label_19f480;
        case 0x19f484u: goto label_19f484;
        case 0x19f488u: goto label_19f488;
        case 0x19f48cu: goto label_19f48c;
        case 0x19f490u: goto label_19f490;
        case 0x19f494u: goto label_19f494;
        default: break;
    }

    ctx->pc = 0x19f468u;

label_19f468:
    // 0x19f468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19f46c:
    // 0x19f46c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19f470:
    // 0x19f470: 0x8c8203f0  lw          $v0, 0x3F0($a0)
    ctx->pc = 0x19f470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1008)));
label_19f474:
    // 0x19f474: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f478:
    if (ctx->pc == 0x19F478u) {
        ctx->pc = 0x19F478u;
            // 0x19f478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F47Cu;
        goto label_19f47c;
    }
    ctx->pc = 0x19F474u;
    {
        const bool branch_taken_0x19f474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F474u;
            // 0x19f478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f474) {
            ctx->pc = 0x19F48Cu;
            goto label_19f48c;
        }
    }
    ctx->pc = 0x19F47Cu;
label_19f47c:
    // 0x19f47c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f480:
    // 0x19f480: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19f480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19f484:
    // 0x19f484: 0x60f809  jalr        $v1
label_19f488:
    if (ctx->pc == 0x19F488u) {
        ctx->pc = 0x19F48Cu;
        goto label_19f48c;
    }
    ctx->pc = 0x19F484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19F48Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x19F48Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F48Cu; }
            if (ctx->pc != 0x19F48Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19F48Cu;
label_19f48c:
    // 0x19f48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f490:
    // 0x19f490: 0x3e00008  jr          $ra
label_19f494:
    if (ctx->pc == 0x19F494u) {
        ctx->pc = 0x19F494u;
            // 0x19f494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19F498u;
        goto label_fallthrough_0x19f490;
    }
    ctx->pc = 0x19F490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F490u;
            // 0x19f494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x19f490:
    ctx->pc = 0x19F498u;
}
