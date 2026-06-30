#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A508
// Address: 0x18a508 - 0x18a538
void sub_0018A508_0x18a508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A508_0x18a508");
#endif

    switch (ctx->pc) {
        case 0x18a508u: goto label_18a508;
        case 0x18a50cu: goto label_18a50c;
        case 0x18a510u: goto label_18a510;
        case 0x18a514u: goto label_18a514;
        case 0x18a518u: goto label_18a518;
        case 0x18a51cu: goto label_18a51c;
        case 0x18a520u: goto label_18a520;
        case 0x18a524u: goto label_18a524;
        case 0x18a528u: goto label_18a528;
        case 0x18a52cu: goto label_18a52c;
        case 0x18a530u: goto label_18a530;
        case 0x18a534u: goto label_18a534;
        default: break;
    }

    ctx->pc = 0x18a508u;

label_18a508:
    // 0x18a508: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x18a508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_18a50c:
    // 0x18a50c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a510:
    // 0x18a510: 0x8c636a28  lw          $v1, 0x6A28($v1)
    ctx->pc = 0x18a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27176)));
label_18a514:
    // 0x18a514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a518:
    // 0x18a518: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_18a51c:
    if (ctx->pc == 0x18A51Cu) {
        ctx->pc = 0x18A51Cu;
            // 0x18a51c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A520u;
        goto label_18a520;
    }
    ctx->pc = 0x18A518u;
    {
        const bool branch_taken_0x18a518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A518u;
            // 0x18a51c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a518) {
            ctx->pc = 0x18A528u;
            goto label_18a528;
        }
    }
    ctx->pc = 0x18A520u;
label_18a520:
    // 0x18a520: 0x60f809  jalr        $v1
label_18a524:
    if (ctx->pc == 0x18A524u) {
        ctx->pc = 0x18A528u;
        goto label_18a528;
    }
    ctx->pc = 0x18A520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18A528u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A528u; }
            if (ctx->pc != 0x18A528u) { return; }
        }
        }
    }
    ctx->pc = 0x18A528u;
label_18a528:
    // 0x18a528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a52c:
    // 0x18a52c: 0x3e00008  jr          $ra
label_18a530:
    if (ctx->pc == 0x18A530u) {
        ctx->pc = 0x18A530u;
            // 0x18a530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A534u;
        goto label_18a534;
    }
    ctx->pc = 0x18A52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A52Cu;
            // 0x18a530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A534u;
label_18a534:
    // 0x18a534: 0x0  nop
    ctx->pc = 0x18a534u;
    // NOP
}
