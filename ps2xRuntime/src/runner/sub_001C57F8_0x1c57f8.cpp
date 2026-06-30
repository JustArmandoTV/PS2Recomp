#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C57F8
// Address: 0x1c57f8 - 0x1c5858
void sub_001C57F8_0x1c57f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C57F8_0x1c57f8");
#endif

    switch (ctx->pc) {
        case 0x1c57f8u: goto label_1c57f8;
        case 0x1c57fcu: goto label_1c57fc;
        case 0x1c5800u: goto label_1c5800;
        case 0x1c5804u: goto label_1c5804;
        case 0x1c5808u: goto label_1c5808;
        case 0x1c580cu: goto label_1c580c;
        case 0x1c5810u: goto label_1c5810;
        case 0x1c5814u: goto label_1c5814;
        case 0x1c5818u: goto label_1c5818;
        case 0x1c581cu: goto label_1c581c;
        case 0x1c5820u: goto label_1c5820;
        case 0x1c5824u: goto label_1c5824;
        case 0x1c5828u: goto label_1c5828;
        case 0x1c582cu: goto label_1c582c;
        case 0x1c5830u: goto label_1c5830;
        case 0x1c5834u: goto label_1c5834;
        case 0x1c5838u: goto label_1c5838;
        case 0x1c583cu: goto label_1c583c;
        case 0x1c5840u: goto label_1c5840;
        case 0x1c5844u: goto label_1c5844;
        case 0x1c5848u: goto label_1c5848;
        case 0x1c584cu: goto label_1c584c;
        case 0x1c5850u: goto label_1c5850;
        case 0x1c5854u: goto label_1c5854;
        default: break;
    }

    ctx->pc = 0x1c57f8u;

label_1c57f8:
    // 0x1c57f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c57fc:
    // 0x1c57fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c57fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c5800:
    // 0x1c5800: 0x8c42a5e0  lw          $v0, -0x5A20($v0)
    ctx->pc = 0x1c5800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944224)));
label_1c5804:
    // 0x1c5804: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c5808:
    if (ctx->pc == 0x1C5808u) {
        ctx->pc = 0x1C5808u;
            // 0x1c5808: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C580Cu;
        goto label_1c580c;
    }
    ctx->pc = 0x1C5804u;
    {
        const bool branch_taken_0x1c5804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5804u;
            // 0x1c5808: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5804) {
            ctx->pc = 0x1C5830u;
            goto label_1c5830;
        }
    }
    ctx->pc = 0x1C580Cu;
label_1c580c:
    // 0x1c580c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1c580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1c5810:
    // 0x1c5810: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1c5814:
    if (ctx->pc == 0x1C5814u) {
        ctx->pc = 0x1C5814u;
            // 0x1c5814: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1C5818u;
        goto label_1c5818;
    }
    ctx->pc = 0x1C5810u;
    {
        const bool branch_taken_0x1c5810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5810) {
            ctx->pc = 0x1C5814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5810u;
            // 0x1c5814: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5834u;
            goto label_1c5834;
        }
    }
    ctx->pc = 0x1C5818u;
label_1c5818:
    // 0x1c5818: 0x40f809  jalr        $v0
label_1c581c:
    if (ctx->pc == 0x1C581Cu) {
        ctx->pc = 0x1C5820u;
        goto label_1c5820;
    }
    ctx->pc = 0x1C5818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5820u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C5820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C5820u; }
            if (ctx->pc != 0x1C5820u) { return; }
        }
        }
    }
    ctx->pc = 0x1C5820u;
label_1c5820:
    // 0x1c5820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5824:
    // 0x1c5824: 0x3e00008  jr          $ra
label_1c5828:
    if (ctx->pc == 0x1C5828u) {
        ctx->pc = 0x1C5828u;
            // 0x1c5828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C582Cu;
        goto label_1c582c;
    }
    ctx->pc = 0x1C5824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5824u;
            // 0x1c5828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C582Cu;
label_1c582c:
    // 0x1c582c: 0x0  nop
    ctx->pc = 0x1c582cu;
    // NOP
label_1c5830:
    // 0x1c5830: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c5834:
    // 0x1c5834: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c5838:
    // 0x1c5838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c583c:
    // 0x1c583c: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
label_1c5840:
    // 0x1c5840: 0x24c6bf30  addiu       $a2, $a2, -0x40D0
    ctx->pc = 0x1c5840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950704));
label_1c5844:
    // 0x1c5844: 0x240500ef  addiu       $a1, $zero, 0xEF
    ctx->pc = 0x1c5844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
label_1c5848:
    // 0x1c5848: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c584c:
    // 0x1c584c: 0x2408ff35  addiu       $t0, $zero, -0xCB
    ctx->pc = 0x1c584cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
label_1c5850:
    // 0x1c5850: 0x80711fe  j           func_1C47F8
label_1c5854:
    if (ctx->pc == 0x1C5854u) {
        ctx->pc = 0x1C5854u;
            // 0x1c5854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C5858u;
        goto label_fallthrough_0x1c5850;
    }
    ctx->pc = 0x1C5850u;
    ctx->pc = 0x1C5854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5850u;
            // 0x1c5854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
label_fallthrough_0x1c5850:
    ctx->pc = 0x1C5858u;
}
