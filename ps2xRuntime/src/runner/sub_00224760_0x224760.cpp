#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224760
// Address: 0x224760 - 0x2247a0
void sub_00224760_0x224760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224760_0x224760");
#endif

    switch (ctx->pc) {
        case 0x224760u: goto label_224760;
        case 0x224764u: goto label_224764;
        case 0x224768u: goto label_224768;
        case 0x22476cu: goto label_22476c;
        case 0x224770u: goto label_224770;
        case 0x224774u: goto label_224774;
        case 0x224778u: goto label_224778;
        case 0x22477cu: goto label_22477c;
        case 0x224780u: goto label_224780;
        case 0x224784u: goto label_224784;
        case 0x224788u: goto label_224788;
        case 0x22478cu: goto label_22478c;
        case 0x224790u: goto label_224790;
        case 0x224794u: goto label_224794;
        case 0x224798u: goto label_224798;
        case 0x22479cu: goto label_22479c;
        default: break;
    }

    ctx->pc = 0x224760u;

label_224760:
    // 0x224760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_224764:
    // 0x224764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_224768:
    // 0x224768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22476c:
    // 0x22476c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22476cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224770:
    // 0x224770: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x224770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_224774:
    // 0x224774: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x224774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_224778:
    // 0x224778: 0x320f809  jalr        $t9
label_22477c:
    if (ctx->pc == 0x22477Cu) {
        ctx->pc = 0x22477Cu;
            // 0x22477c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x224780u;
        goto label_224780;
    }
    ctx->pc = 0x224778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x224780u);
        ctx->pc = 0x22477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224778u;
            // 0x22477c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224780u; }
            if (ctx->pc != 0x224780u) { return; }
        }
        }
    }
    ctx->pc = 0x224780u;
label_224780:
    // 0x224780: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x224780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_224784:
    // 0x224784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224788:
    // 0x224788: 0xc088dfc  jal         func_2237F0
label_22478c:
    if (ctx->pc == 0x22478Cu) {
        ctx->pc = 0x22478Cu;
            // 0x22478c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x224790u;
        goto label_224790;
    }
    ctx->pc = 0x224788u;
    SET_GPR_U32(ctx, 31, 0x224790u);
    ctx->pc = 0x22478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224788u;
            // 0x22478c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2237F0u;
    if (runtime->hasFunction(0x2237F0u)) {
        auto targetFn = runtime->lookupFunction(0x2237F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224790u; }
        if (ctx->pc != 0x224790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002237F0_0x2237f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224790u; }
        if (ctx->pc != 0x224790u) { return; }
    }
    ctx->pc = 0x224790u;
label_224790:
    // 0x224790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_224794:
    // 0x224794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224798:
    // 0x224798: 0x3e00008  jr          $ra
label_22479c:
    if (ctx->pc == 0x22479Cu) {
        ctx->pc = 0x22479Cu;
            // 0x22479c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2247A0u;
        goto label_fallthrough_0x224798;
    }
    ctx->pc = 0x224798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224798u;
            // 0x22479c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x224798:
    ctx->pc = 0x2247A0u;
}
