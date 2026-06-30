#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00208A40
// Address: 0x208a40 - 0x208aa0
void sub_00208A40_0x208a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208A40_0x208a40");
#endif

    switch (ctx->pc) {
        case 0x208a40u: goto label_208a40;
        case 0x208a44u: goto label_208a44;
        case 0x208a48u: goto label_208a48;
        case 0x208a4cu: goto label_208a4c;
        case 0x208a50u: goto label_208a50;
        case 0x208a54u: goto label_208a54;
        case 0x208a58u: goto label_208a58;
        case 0x208a5cu: goto label_208a5c;
        case 0x208a60u: goto label_208a60;
        case 0x208a64u: goto label_208a64;
        case 0x208a68u: goto label_208a68;
        case 0x208a6cu: goto label_208a6c;
        case 0x208a70u: goto label_208a70;
        case 0x208a74u: goto label_208a74;
        case 0x208a78u: goto label_208a78;
        case 0x208a7cu: goto label_208a7c;
        case 0x208a80u: goto label_208a80;
        case 0x208a84u: goto label_208a84;
        case 0x208a88u: goto label_208a88;
        case 0x208a8cu: goto label_208a8c;
        case 0x208a90u: goto label_208a90;
        case 0x208a94u: goto label_208a94;
        case 0x208a98u: goto label_208a98;
        case 0x208a9cu: goto label_208a9c;
        default: break;
    }

    ctx->pc = 0x208a40u;

label_208a40:
    // 0x208a40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x208a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_208a44:
    // 0x208a44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x208a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_208a48:
    // 0x208a48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_208a4c:
    if (ctx->pc == 0x208A4Cu) {
        ctx->pc = 0x208A4Cu;
            // 0x208a4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x208A50u;
        goto label_208a50;
    }
    ctx->pc = 0x208A48u;
    {
        const bool branch_taken_0x208a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208A48u;
            // 0x208a4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a48) {
            ctx->pc = 0x208A58u;
            goto label_208a58;
        }
    }
    ctx->pc = 0x208A50u;
label_208a50:
    // 0x208a50: 0xc081fd0  jal         func_207F40
label_208a54:
    if (ctx->pc == 0x208A54u) {
        ctx->pc = 0x208A54u;
            // 0x208a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208A58u;
        goto label_208a58;
    }
    ctx->pc = 0x208A50u;
    SET_GPR_U32(ctx, 31, 0x208A58u);
    ctx->pc = 0x208A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A50u;
            // 0x208a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207F40u;
    if (runtime->hasFunction(0x207F40u)) {
        auto targetFn = runtime->lookupFunction(0x207F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A58u; }
        if (ctx->pc != 0x208A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207F40_0x207f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A58u; }
        if (ctx->pc != 0x208A58u) { return; }
    }
    ctx->pc = 0x208A58u;
label_208a58:
    // 0x208a58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_208a5c:
    // 0x208a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208a60:
    // 0x208a60: 0x3e00008  jr          $ra
label_208a64:
    if (ctx->pc == 0x208A64u) {
        ctx->pc = 0x208A64u;
            // 0x208a64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x208A68u;
        goto label_208a68;
    }
    ctx->pc = 0x208A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208A60u;
            // 0x208a64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208A68u;
label_208a68:
    // 0x208a68: 0x0  nop
    ctx->pc = 0x208a68u;
    // NOP
label_208a6c:
    // 0x208a6c: 0x0  nop
    ctx->pc = 0x208a6cu;
    // NOP
label_208a70:
    // 0x208a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_208a74:
    // 0x208a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208a78:
    // 0x208a78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x208a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_208a7c:
    // 0x208a7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x208a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_208a80:
    // 0x208a80: 0x320f809  jalr        $t9
label_208a84:
    if (ctx->pc == 0x208A84u) {
        ctx->pc = 0x208A84u;
            // 0x208a84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x208A88u;
        goto label_208a88;
    }
    ctx->pc = 0x208A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x208A88u);
        ctx->pc = 0x208A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208A80u;
            // 0x208a84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x208A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208A88u; }
            if (ctx->pc != 0x208A88u) { return; }
        }
        }
    }
    ctx->pc = 0x208A88u;
label_208a88:
    // 0x208a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208a8c:
    // 0x208a8c: 0x3e00008  jr          $ra
label_208a90:
    if (ctx->pc == 0x208A90u) {
        ctx->pc = 0x208A90u;
            // 0x208a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x208A94u;
        goto label_208a94;
    }
    ctx->pc = 0x208A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208A8Cu;
            // 0x208a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208A94u;
label_208a94:
    // 0x208a94: 0x0  nop
    ctx->pc = 0x208a94u;
    // NOP
label_208a98:
    // 0x208a98: 0x0  nop
    ctx->pc = 0x208a98u;
    // NOP
label_208a9c:
    // 0x208a9c: 0x0  nop
    ctx->pc = 0x208a9cu;
    // NOP
}
