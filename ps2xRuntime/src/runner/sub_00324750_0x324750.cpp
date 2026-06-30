#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00324750
// Address: 0x324750 - 0x3247a0
void sub_00324750_0x324750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324750_0x324750");
#endif

    switch (ctx->pc) {
        case 0x324750u: goto label_324750;
        case 0x324754u: goto label_324754;
        case 0x324758u: goto label_324758;
        case 0x32475cu: goto label_32475c;
        case 0x324760u: goto label_324760;
        case 0x324764u: goto label_324764;
        case 0x324768u: goto label_324768;
        case 0x32476cu: goto label_32476c;
        case 0x324770u: goto label_324770;
        case 0x324774u: goto label_324774;
        case 0x324778u: goto label_324778;
        case 0x32477cu: goto label_32477c;
        case 0x324780u: goto label_324780;
        case 0x324784u: goto label_324784;
        case 0x324788u: goto label_324788;
        case 0x32478cu: goto label_32478c;
        case 0x324790u: goto label_324790;
        case 0x324794u: goto label_324794;
        case 0x324798u: goto label_324798;
        case 0x32479cu: goto label_32479c;
        default: break;
    }

    ctx->pc = 0x324750u;

label_324750:
    // 0x324750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_324754:
    // 0x324754: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x324754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_324758:
    // 0x324758: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x324758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_32475c:
    // 0x32475c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_324760:
    // 0x324760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x324760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_324764:
    // 0x324764: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x324764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_324768:
    // 0x324768: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x324768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_32476c:
    // 0x32476c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32476cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_324770:
    // 0x324770: 0x8c640164  lw          $a0, 0x164($v1)
    ctx->pc = 0x324770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
label_324774:
    // 0x324774: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_324778:
    if (ctx->pc == 0x324778u) {
        ctx->pc = 0x324778u;
            // 0x324778: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x32477Cu;
        goto label_32477c;
    }
    ctx->pc = 0x324774u;
    {
        const bool branch_taken_0x324774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x324774) {
            ctx->pc = 0x324778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x324774u;
            // 0x324778: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324790u;
            goto label_324790;
        }
    }
    ctx->pc = 0x32477Cu;
label_32477c:
    // 0x32477c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32477cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_324780:
    // 0x324780: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x324780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_324784:
    // 0x324784: 0x320f809  jalr        $t9
label_324788:
    if (ctx->pc == 0x324788u) {
        ctx->pc = 0x32478Cu;
        goto label_32478c;
    }
    ctx->pc = 0x324784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32478Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32478Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32478Cu; }
            if (ctx->pc != 0x32478Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32478Cu;
label_32478c:
    // 0x32478c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32478cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_324790:
    // 0x324790: 0x3e00008  jr          $ra
label_324794:
    if (ctx->pc == 0x324794u) {
        ctx->pc = 0x324794u;
            // 0x324794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x324798u;
        goto label_324798;
    }
    ctx->pc = 0x324790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324790u;
            // 0x324794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324798u;
label_324798:
    // 0x324798: 0x0  nop
    ctx->pc = 0x324798u;
    // NOP
label_32479c:
    // 0x32479c: 0x0  nop
    ctx->pc = 0x32479cu;
    // NOP
}
