#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178D60
// Address: 0x178d60 - 0x178dc8
void sub_00178D60_0x178d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178D60_0x178d60");
#endif

    switch (ctx->pc) {
        case 0x178d60u: goto label_178d60;
        case 0x178d64u: goto label_178d64;
        case 0x178d68u: goto label_178d68;
        case 0x178d6cu: goto label_178d6c;
        case 0x178d70u: goto label_178d70;
        case 0x178d74u: goto label_178d74;
        case 0x178d78u: goto label_178d78;
        case 0x178d7cu: goto label_178d7c;
        case 0x178d80u: goto label_178d80;
        case 0x178d84u: goto label_178d84;
        case 0x178d88u: goto label_178d88;
        case 0x178d8cu: goto label_178d8c;
        case 0x178d90u: goto label_178d90;
        case 0x178d94u: goto label_178d94;
        case 0x178d98u: goto label_178d98;
        case 0x178d9cu: goto label_178d9c;
        case 0x178da0u: goto label_178da0;
        case 0x178da4u: goto label_178da4;
        case 0x178da8u: goto label_178da8;
        case 0x178dacu: goto label_178dac;
        case 0x178db0u: goto label_178db0;
        case 0x178db4u: goto label_178db4;
        case 0x178db8u: goto label_178db8;
        case 0x178dbcu: goto label_178dbc;
        case 0x178dc0u: goto label_178dc0;
        case 0x178dc4u: goto label_178dc4;
        default: break;
    }

    ctx->pc = 0x178d60u;

label_178d60:
    // 0x178d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178d64:
    // 0x178d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178d68:
    // 0x178d68: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_178d6c:
    if (ctx->pc == 0x178D6Cu) {
        ctx->pc = 0x178D6Cu;
            // 0x178d6c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x178D70u;
        goto label_178d70;
    }
    ctx->pc = 0x178D68u;
    {
        const bool branch_taken_0x178d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x178D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D68u;
            // 0x178d6c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d68) {
            ctx->pc = 0x178D88u;
            goto label_178d88;
        }
    }
    ctx->pc = 0x178D70u;
label_178d70:
    // 0x178d70: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178d74:
    // 0x178d74: 0xc05e0a6  jal         func_178298
label_178d78:
    if (ctx->pc == 0x178D78u) {
        ctx->pc = 0x178D78u;
            // 0x178d78: 0x24844d48  addiu       $a0, $a0, 0x4D48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19784));
        ctx->pc = 0x178D7Cu;
        goto label_178d7c;
    }
    ctx->pc = 0x178D74u;
    SET_GPR_U32(ctx, 31, 0x178D7Cu);
    ctx->pc = 0x178D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178D74u;
            // 0x178d78: 0x24844d48  addiu       $a0, $a0, 0x4D48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D7Cu; }
        if (ctx->pc != 0x178D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D7Cu; }
        if (ctx->pc != 0x178D7Cu) { return; }
    }
    ctx->pc = 0x178D7Cu;
label_178d7c:
    // 0x178d7c: 0x1000000e  b           . + 4 + (0xE << 2)
label_178d80:
    if (ctx->pc == 0x178D80u) {
        ctx->pc = 0x178D80u;
            // 0x178d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178D84u;
        goto label_178d84;
    }
    ctx->pc = 0x178D7Cu;
    {
        const bool branch_taken_0x178d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D7Cu;
            // 0x178d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d7c) {
            ctx->pc = 0x178DB8u;
            goto label_178db8;
        }
    }
    ctx->pc = 0x178D84u;
label_178d84:
    // 0x178d84: 0x0  nop
    ctx->pc = 0x178d84u;
    // NOP
label_178d88:
    // 0x178d88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x178d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_178d8c:
    // 0x178d8c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x178d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_178d90:
    // 0x178d90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_178d94:
    if (ctx->pc == 0x178D94u) {
        ctx->pc = 0x178D94u;
            // 0x178d94: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x178D98u;
        goto label_178d98;
    }
    ctx->pc = 0x178D90u;
    {
        const bool branch_taken_0x178d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d90) {
            ctx->pc = 0x178D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178D90u;
            // 0x178d94: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178DA8u;
            goto label_178da8;
        }
    }
    ctx->pc = 0x178D98u;
label_178d98:
    // 0x178d98: 0x40f809  jalr        $v0
label_178d9c:
    if (ctx->pc == 0x178D9Cu) {
        ctx->pc = 0x178D9Cu;
            // 0x178d9c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x178DA0u;
        goto label_178da0;
    }
    ctx->pc = 0x178D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178DA0u);
        ctx->pc = 0x178D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D98u;
            // 0x178d9c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178DA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178DA0u; }
            if (ctx->pc != 0x178DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x178DA0u;
label_178da0:
    // 0x178da0: 0x10000004  b           . + 4 + (0x4 << 2)
label_178da4:
    if (ctx->pc == 0x178DA4u) {
        ctx->pc = 0x178DA4u;
            // 0x178da4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178DA8u;
        goto label_178da8;
    }
    ctx->pc = 0x178DA0u;
    {
        const bool branch_taken_0x178da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178DA0u;
            // 0x178da4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178da0) {
            ctx->pc = 0x178DB4u;
            goto label_178db4;
        }
    }
    ctx->pc = 0x178DA8u;
label_178da8:
    // 0x178da8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178dac:
    // 0x178dac: 0xc05e0a6  jal         func_178298
label_178db0:
    if (ctx->pc == 0x178DB0u) {
        ctx->pc = 0x178DB0u;
            // 0x178db0: 0x24844d68  addiu       $a0, $a0, 0x4D68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19816));
        ctx->pc = 0x178DB4u;
        goto label_178db4;
    }
    ctx->pc = 0x178DACu;
    SET_GPR_U32(ctx, 31, 0x178DB4u);
    ctx->pc = 0x178DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178DACu;
            // 0x178db0: 0x24844d68  addiu       $a0, $a0, 0x4D68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DB4u; }
        if (ctx->pc != 0x178DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DB4u; }
        if (ctx->pc != 0x178DB4u) { return; }
    }
    ctx->pc = 0x178DB4u;
label_178db4:
    // 0x178db4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178db8:
    // 0x178db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178dbc:
    // 0x178dbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178dc0:
    // 0x178dc0: 0x3e00008  jr          $ra
label_178dc4:
    if (ctx->pc == 0x178DC4u) {
        ctx->pc = 0x178DC4u;
            // 0x178dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178DC8u;
        goto label_fallthrough_0x178dc0;
    }
    ctx->pc = 0x178DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178DC0u;
            // 0x178dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x178dc0:
    ctx->pc = 0x178DC8u;
}
