#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00392980
// Address: 0x392980 - 0x3929e0
void sub_00392980_0x392980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392980_0x392980");
#endif

    switch (ctx->pc) {
        case 0x392980u: goto label_392980;
        case 0x392984u: goto label_392984;
        case 0x392988u: goto label_392988;
        case 0x39298cu: goto label_39298c;
        case 0x392990u: goto label_392990;
        case 0x392994u: goto label_392994;
        case 0x392998u: goto label_392998;
        case 0x39299cu: goto label_39299c;
        case 0x3929a0u: goto label_3929a0;
        case 0x3929a4u: goto label_3929a4;
        case 0x3929a8u: goto label_3929a8;
        case 0x3929acu: goto label_3929ac;
        case 0x3929b0u: goto label_3929b0;
        case 0x3929b4u: goto label_3929b4;
        case 0x3929b8u: goto label_3929b8;
        case 0x3929bcu: goto label_3929bc;
        case 0x3929c0u: goto label_3929c0;
        case 0x3929c4u: goto label_3929c4;
        case 0x3929c8u: goto label_3929c8;
        case 0x3929ccu: goto label_3929cc;
        case 0x3929d0u: goto label_3929d0;
        case 0x3929d4u: goto label_3929d4;
        case 0x3929d8u: goto label_3929d8;
        case 0x3929dcu: goto label_3929dc;
        default: break;
    }

    ctx->pc = 0x392980u;

label_392980:
    // 0x392980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x392980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_392984:
    // 0x392984: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x392984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_392988:
    // 0x392988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x392988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39298c:
    // 0x39298c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x39298cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_392990:
    // 0x392990: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
label_392994:
    if (ctx->pc == 0x392994u) {
        ctx->pc = 0x392998u;
        goto label_392998;
    }
    ctx->pc = 0x392990u;
    {
        const bool branch_taken_0x392990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x392990) {
            ctx->pc = 0x3929C8u;
            goto label_3929c8;
        }
    }
    ctx->pc = 0x392998u;
label_392998:
    // 0x392998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x392998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39299c:
    // 0x39299c: 0x50a30005  beql        $a1, $v1, . + 4 + (0x5 << 2)
label_3929a0:
    if (ctx->pc == 0x3929A0u) {
        ctx->pc = 0x3929A0u;
            // 0x3929a0: 0x8c990048  lw          $t9, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->pc = 0x3929A4u;
        goto label_3929a4;
    }
    ctx->pc = 0x39299Cu;
    {
        const bool branch_taken_0x39299c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39299c) {
            ctx->pc = 0x3929A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39299Cu;
            // 0x3929a0: 0x8c990048  lw          $t9, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3929B4u;
            goto label_3929b4;
        }
    }
    ctx->pc = 0x3929A4u;
label_3929a4:
    // 0x3929a4: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_3929a8:
    if (ctx->pc == 0x3929A8u) {
        ctx->pc = 0x3929A8u;
            // 0x3929a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3929ACu;
        goto label_3929ac;
    }
    ctx->pc = 0x3929A4u;
    {
        const bool branch_taken_0x3929a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3929a4) {
            ctx->pc = 0x3929A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3929A4u;
            // 0x3929a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3929D4u;
            goto label_3929d4;
        }
    }
    ctx->pc = 0x3929ACu;
label_3929ac:
    // 0x3929ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_3929b0:
    if (ctx->pc == 0x3929B0u) {
        ctx->pc = 0x3929B4u;
        goto label_3929b4;
    }
    ctx->pc = 0x3929ACu;
    {
        const bool branch_taken_0x3929ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3929ac) {
            ctx->pc = 0x3929D0u;
            goto label_3929d0;
        }
    }
    ctx->pc = 0x3929B4u;
label_3929b4:
    // 0x3929b4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3929b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3929b8:
    // 0x3929b8: 0x320f809  jalr        $t9
label_3929bc:
    if (ctx->pc == 0x3929BCu) {
        ctx->pc = 0x3929C0u;
        goto label_3929c0;
    }
    ctx->pc = 0x3929B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3929C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3929C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3929C0u; }
            if (ctx->pc != 0x3929C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3929C0u;
label_3929c0:
    // 0x3929c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3929c4:
    if (ctx->pc == 0x3929C4u) {
        ctx->pc = 0x3929C8u;
        goto label_3929c8;
    }
    ctx->pc = 0x3929C0u;
    {
        const bool branch_taken_0x3929c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3929c0) {
            ctx->pc = 0x3929D0u;
            goto label_3929d0;
        }
    }
    ctx->pc = 0x3929C8u;
label_3929c8:
    // 0x3929c8: 0xc0e4630  jal         func_3918C0
label_3929cc:
    if (ctx->pc == 0x3929CCu) {
        ctx->pc = 0x3929D0u;
        goto label_3929d0;
    }
    ctx->pc = 0x3929C8u;
    SET_GPR_U32(ctx, 31, 0x3929D0u);
    ctx->pc = 0x3918C0u;
    if (runtime->hasFunction(0x3918C0u)) {
        auto targetFn = runtime->lookupFunction(0x3918C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3929D0u; }
        if (ctx->pc != 0x3929D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003918C0_0x3918c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3929D0u; }
        if (ctx->pc != 0x3929D0u) { return; }
    }
    ctx->pc = 0x3929D0u;
label_3929d0:
    // 0x3929d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3929d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3929d4:
    // 0x3929d4: 0x3e00008  jr          $ra
label_3929d8:
    if (ctx->pc == 0x3929D8u) {
        ctx->pc = 0x3929D8u;
            // 0x3929d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3929DCu;
        goto label_3929dc;
    }
    ctx->pc = 0x3929D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3929D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3929D4u;
            // 0x3929d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3929DCu;
label_3929dc:
    // 0x3929dc: 0x0  nop
    ctx->pc = 0x3929dcu;
    // NOP
}
