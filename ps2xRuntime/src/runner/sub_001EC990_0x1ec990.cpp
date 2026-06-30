#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC990
// Address: 0x1ec990 - 0x1ecb10
void sub_001EC990_0x1ec990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC990_0x1ec990");
#endif

    switch (ctx->pc) {
        case 0x1ec990u: goto label_1ec990;
        case 0x1ec994u: goto label_1ec994;
        case 0x1ec998u: goto label_1ec998;
        case 0x1ec99cu: goto label_1ec99c;
        case 0x1ec9a0u: goto label_1ec9a0;
        case 0x1ec9a4u: goto label_1ec9a4;
        case 0x1ec9a8u: goto label_1ec9a8;
        case 0x1ec9acu: goto label_1ec9ac;
        case 0x1ec9b0u: goto label_1ec9b0;
        case 0x1ec9b4u: goto label_1ec9b4;
        case 0x1ec9b8u: goto label_1ec9b8;
        case 0x1ec9bcu: goto label_1ec9bc;
        case 0x1ec9c0u: goto label_1ec9c0;
        case 0x1ec9c4u: goto label_1ec9c4;
        case 0x1ec9c8u: goto label_1ec9c8;
        case 0x1ec9ccu: goto label_1ec9cc;
        case 0x1ec9d0u: goto label_1ec9d0;
        case 0x1ec9d4u: goto label_1ec9d4;
        case 0x1ec9d8u: goto label_1ec9d8;
        case 0x1ec9dcu: goto label_1ec9dc;
        case 0x1ec9e0u: goto label_1ec9e0;
        case 0x1ec9e4u: goto label_1ec9e4;
        case 0x1ec9e8u: goto label_1ec9e8;
        case 0x1ec9ecu: goto label_1ec9ec;
        case 0x1ec9f0u: goto label_1ec9f0;
        case 0x1ec9f4u: goto label_1ec9f4;
        case 0x1ec9f8u: goto label_1ec9f8;
        case 0x1ec9fcu: goto label_1ec9fc;
        case 0x1eca00u: goto label_1eca00;
        case 0x1eca04u: goto label_1eca04;
        case 0x1eca08u: goto label_1eca08;
        case 0x1eca0cu: goto label_1eca0c;
        case 0x1eca10u: goto label_1eca10;
        case 0x1eca14u: goto label_1eca14;
        case 0x1eca18u: goto label_1eca18;
        case 0x1eca1cu: goto label_1eca1c;
        case 0x1eca20u: goto label_1eca20;
        case 0x1eca24u: goto label_1eca24;
        case 0x1eca28u: goto label_1eca28;
        case 0x1eca2cu: goto label_1eca2c;
        case 0x1eca30u: goto label_1eca30;
        case 0x1eca34u: goto label_1eca34;
        case 0x1eca38u: goto label_1eca38;
        case 0x1eca3cu: goto label_1eca3c;
        case 0x1eca40u: goto label_1eca40;
        case 0x1eca44u: goto label_1eca44;
        case 0x1eca48u: goto label_1eca48;
        case 0x1eca4cu: goto label_1eca4c;
        case 0x1eca50u: goto label_1eca50;
        case 0x1eca54u: goto label_1eca54;
        case 0x1eca58u: goto label_1eca58;
        case 0x1eca5cu: goto label_1eca5c;
        case 0x1eca60u: goto label_1eca60;
        case 0x1eca64u: goto label_1eca64;
        case 0x1eca68u: goto label_1eca68;
        case 0x1eca6cu: goto label_1eca6c;
        case 0x1eca70u: goto label_1eca70;
        case 0x1eca74u: goto label_1eca74;
        case 0x1eca78u: goto label_1eca78;
        case 0x1eca7cu: goto label_1eca7c;
        case 0x1eca80u: goto label_1eca80;
        case 0x1eca84u: goto label_1eca84;
        case 0x1eca88u: goto label_1eca88;
        case 0x1eca8cu: goto label_1eca8c;
        case 0x1eca90u: goto label_1eca90;
        case 0x1eca94u: goto label_1eca94;
        case 0x1eca98u: goto label_1eca98;
        case 0x1eca9cu: goto label_1eca9c;
        case 0x1ecaa0u: goto label_1ecaa0;
        case 0x1ecaa4u: goto label_1ecaa4;
        case 0x1ecaa8u: goto label_1ecaa8;
        case 0x1ecaacu: goto label_1ecaac;
        case 0x1ecab0u: goto label_1ecab0;
        case 0x1ecab4u: goto label_1ecab4;
        case 0x1ecab8u: goto label_1ecab8;
        case 0x1ecabcu: goto label_1ecabc;
        case 0x1ecac0u: goto label_1ecac0;
        case 0x1ecac4u: goto label_1ecac4;
        case 0x1ecac8u: goto label_1ecac8;
        case 0x1ecaccu: goto label_1ecacc;
        case 0x1ecad0u: goto label_1ecad0;
        case 0x1ecad4u: goto label_1ecad4;
        case 0x1ecad8u: goto label_1ecad8;
        case 0x1ecadcu: goto label_1ecadc;
        case 0x1ecae0u: goto label_1ecae0;
        case 0x1ecae4u: goto label_1ecae4;
        case 0x1ecae8u: goto label_1ecae8;
        case 0x1ecaecu: goto label_1ecaec;
        case 0x1ecaf0u: goto label_1ecaf0;
        case 0x1ecaf4u: goto label_1ecaf4;
        case 0x1ecaf8u: goto label_1ecaf8;
        case 0x1ecafcu: goto label_1ecafc;
        case 0x1ecb00u: goto label_1ecb00;
        case 0x1ecb04u: goto label_1ecb04;
        case 0x1ecb08u: goto label_1ecb08;
        case 0x1ecb0cu: goto label_1ecb0c;
        default: break;
    }

    ctx->pc = 0x1ec990u;

label_1ec990:
    // 0x1ec990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ec994:
    // 0x1ec994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ec998:
    // 0x1ec998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ec99c:
    // 0x1ec99c: 0x80830084  lb          $v1, 0x84($a0)
    ctx->pc = 0x1ec99cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
label_1ec9a0:
    // 0x1ec9a0: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1ec9a4:
    if (ctx->pc == 0x1EC9A4u) {
        ctx->pc = 0x1EC9A4u;
            // 0x1ec9a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9A8u;
        goto label_1ec9a8;
    }
    ctx->pc = 0x1EC9A0u;
    {
        const bool branch_taken_0x1ec9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9A0u;
            // 0x1ec9a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9a0) {
            ctx->pc = 0x1EC9E4u;
            goto label_1ec9e4;
        }
    }
    ctx->pc = 0x1EC9A8u;
label_1ec9a8:
    // 0x1ec9a8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ec9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1ec9ac:
    // 0x1ec9ac: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x1ec9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
label_1ec9b0:
    // 0x1ec9b0: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x1ec9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
label_1ec9b4:
    // 0x1ec9b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ec9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ec9b8:
    // 0x1ec9b8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1ec9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1ec9bc:
    // 0x1ec9bc: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x1ec9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
label_1ec9c0:
    // 0x1ec9c0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1ec9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ec9c4:
    // 0x1ec9c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ec9c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ec9c8:
    // 0x1ec9c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ec9c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ec9cc:
    // 0x1ec9cc: 0x320f809  jalr        $t9
label_1ec9d0:
    if (ctx->pc == 0x1EC9D0u) {
        ctx->pc = 0x1EC9D4u;
        goto label_1ec9d4;
    }
    ctx->pc = 0x1EC9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EC9D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC9D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC9D4u; }
            if (ctx->pc != 0x1EC9D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1EC9D4u;
label_1ec9d4:
    // 0x1ec9d4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1ec9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1ec9d8:
    // 0x1ec9d8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1ec9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1ec9dc:
    // 0x1ec9dc: 0xc091c60  jal         func_247180
label_1ec9e0:
    if (ctx->pc == 0x1EC9E0u) {
        ctx->pc = 0x1EC9E0u;
            // 0x1ec9e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EC9E4u;
        goto label_1ec9e4;
    }
    ctx->pc = 0x1EC9DCu;
    SET_GPR_U32(ctx, 31, 0x1EC9E4u);
    ctx->pc = 0x1EC9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9DCu;
            // 0x1ec9e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247180u;
    if (runtime->hasFunction(0x247180u)) {
        auto targetFn = runtime->lookupFunction(0x247180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC9E4u; }
        if (ctx->pc != 0x1EC9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247180_0x247180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC9E4u; }
        if (ctx->pc != 0x1EC9E4u) { return; }
    }
    ctx->pc = 0x1EC9E4u;
label_1ec9e4:
    // 0x1ec9e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec9e8:
    // 0x1ec9e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec9ec:
    // 0x1ec9ec: 0x3e00008  jr          $ra
label_1ec9f0:
    if (ctx->pc == 0x1EC9F0u) {
        ctx->pc = 0x1EC9F0u;
            // 0x1ec9f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1EC9F4u;
        goto label_1ec9f4;
    }
    ctx->pc = 0x1EC9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9ECu;
            // 0x1ec9f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC9F4u;
label_1ec9f4:
    // 0x1ec9f4: 0x0  nop
    ctx->pc = 0x1ec9f4u;
    // NOP
label_1ec9f8:
    // 0x1ec9f8: 0x0  nop
    ctx->pc = 0x1ec9f8u;
    // NOP
label_1ec9fc:
    // 0x1ec9fc: 0x0  nop
    ctx->pc = 0x1ec9fcu;
    // NOP
label_1eca00:
    // 0x1eca00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eca04:
    // 0x1eca04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eca08:
    // 0x1eca08: 0x80820084  lb          $v0, 0x84($a0)
    ctx->pc = 0x1eca08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
label_1eca0c:
    // 0x1eca0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1eca10:
    if (ctx->pc == 0x1ECA10u) {
        ctx->pc = 0x1ECA10u;
            // 0x1eca10: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x1ECA14u;
        goto label_1eca14;
    }
    ctx->pc = 0x1ECA0Cu;
    {
        const bool branch_taken_0x1eca0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eca0c) {
            ctx->pc = 0x1ECA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA0Cu;
            // 0x1eca10: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECA24u;
            goto label_1eca24;
        }
    }
    ctx->pc = 0x1ECA14u;
label_1eca14:
    // 0x1eca14: 0xc07bb64  jal         func_1EED90
label_1eca18:
    if (ctx->pc == 0x1ECA18u) {
        ctx->pc = 0x1ECA1Cu;
        goto label_1eca1c;
    }
    ctx->pc = 0x1ECA14u;
    SET_GPR_U32(ctx, 31, 0x1ECA1Cu);
    ctx->pc = 0x1EED90u;
    if (runtime->hasFunction(0x1EED90u)) {
        auto targetFn = runtime->lookupFunction(0x1EED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA1Cu; }
        if (ctx->pc != 0x1ECA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EED90_0x1eed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA1Cu; }
        if (ctx->pc != 0x1ECA1Cu) { return; }
    }
    ctx->pc = 0x1ECA1Cu;
label_1eca1c:
    // 0x1eca1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1eca20:
    if (ctx->pc == 0x1ECA20u) {
        ctx->pc = 0x1ECA20u;
            // 0x1eca20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1ECA24u;
        goto label_1eca24;
    }
    ctx->pc = 0x1ECA1Cu;
    {
        const bool branch_taken_0x1eca1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA1Cu;
            // 0x1eca20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca1c) {
            ctx->pc = 0x1ECA30u;
            goto label_1eca30;
        }
    }
    ctx->pc = 0x1ECA24u;
label_1eca24:
    // 0x1eca24: 0xc091720  jal         func_245C80
label_1eca28:
    if (ctx->pc == 0x1ECA28u) {
        ctx->pc = 0x1ECA2Cu;
        goto label_1eca2c;
    }
    ctx->pc = 0x1ECA24u;
    SET_GPR_U32(ctx, 31, 0x1ECA2Cu);
    ctx->pc = 0x245C80u;
    if (runtime->hasFunction(0x245C80u)) {
        auto targetFn = runtime->lookupFunction(0x245C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA2Cu; }
        if (ctx->pc != 0x1ECA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245C80_0x245c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA2Cu; }
        if (ctx->pc != 0x1ECA2Cu) { return; }
    }
    ctx->pc = 0x1ECA2Cu;
label_1eca2c:
    // 0x1eca2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eca2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eca30:
    // 0x1eca30: 0x3e00008  jr          $ra
label_1eca34:
    if (ctx->pc == 0x1ECA34u) {
        ctx->pc = 0x1ECA34u;
            // 0x1eca34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1ECA38u;
        goto label_1eca38;
    }
    ctx->pc = 0x1ECA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA30u;
            // 0x1eca34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECA38u;
label_1eca38:
    // 0x1eca38: 0x0  nop
    ctx->pc = 0x1eca38u;
    // NOP
label_1eca3c:
    // 0x1eca3c: 0x0  nop
    ctx->pc = 0x1eca3cu;
    // NOP
label_1eca40:
    // 0x1eca40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eca44:
    // 0x1eca44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eca44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eca48:
    // 0x1eca48: 0x80820084  lb          $v0, 0x84($a0)
    ctx->pc = 0x1eca48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
label_1eca4c:
    // 0x1eca4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1eca50:
    if (ctx->pc == 0x1ECA50u) {
        ctx->pc = 0x1ECA50u;
            // 0x1eca50: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x1ECA54u;
        goto label_1eca54;
    }
    ctx->pc = 0x1ECA4Cu;
    {
        const bool branch_taken_0x1eca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eca4c) {
            ctx->pc = 0x1ECA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA4Cu;
            // 0x1eca50: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECA64u;
            goto label_1eca64;
        }
    }
    ctx->pc = 0x1ECA54u;
label_1eca54:
    // 0x1eca54: 0xc07bba0  jal         func_1EEE80
label_1eca58:
    if (ctx->pc == 0x1ECA58u) {
        ctx->pc = 0x1ECA5Cu;
        goto label_1eca5c;
    }
    ctx->pc = 0x1ECA54u;
    SET_GPR_U32(ctx, 31, 0x1ECA5Cu);
    ctx->pc = 0x1EEE80u;
    if (runtime->hasFunction(0x1EEE80u)) {
        auto targetFn = runtime->lookupFunction(0x1EEE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA5Cu; }
        if (ctx->pc != 0x1ECA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEE80_0x1eee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA5Cu; }
        if (ctx->pc != 0x1ECA5Cu) { return; }
    }
    ctx->pc = 0x1ECA5Cu;
label_1eca5c:
    // 0x1eca5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1eca60:
    if (ctx->pc == 0x1ECA60u) {
        ctx->pc = 0x1ECA60u;
            // 0x1eca60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1ECA64u;
        goto label_1eca64;
    }
    ctx->pc = 0x1ECA5Cu;
    {
        const bool branch_taken_0x1eca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA5Cu;
            // 0x1eca60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca5c) {
            ctx->pc = 0x1ECA70u;
            goto label_1eca70;
        }
    }
    ctx->pc = 0x1ECA64u;
label_1eca64:
    // 0x1eca64: 0xc091780  jal         func_245E00
label_1eca68:
    if (ctx->pc == 0x1ECA68u) {
        ctx->pc = 0x1ECA6Cu;
        goto label_1eca6c;
    }
    ctx->pc = 0x1ECA64u;
    SET_GPR_U32(ctx, 31, 0x1ECA6Cu);
    ctx->pc = 0x245E00u;
    if (runtime->hasFunction(0x245E00u)) {
        auto targetFn = runtime->lookupFunction(0x245E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA6Cu; }
        if (ctx->pc != 0x1ECA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245E00_0x245e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA6Cu; }
        if (ctx->pc != 0x1ECA6Cu) { return; }
    }
    ctx->pc = 0x1ECA6Cu;
label_1eca6c:
    // 0x1eca6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eca6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eca70:
    // 0x1eca70: 0x3e00008  jr          $ra
label_1eca74:
    if (ctx->pc == 0x1ECA74u) {
        ctx->pc = 0x1ECA74u;
            // 0x1eca74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1ECA78u;
        goto label_1eca78;
    }
    ctx->pc = 0x1ECA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA70u;
            // 0x1eca74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECA78u;
label_1eca78:
    // 0x1eca78: 0x0  nop
    ctx->pc = 0x1eca78u;
    // NOP
label_1eca7c:
    // 0x1eca7c: 0x0  nop
    ctx->pc = 0x1eca7cu;
    // NOP
label_1eca80:
    // 0x1eca80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eca84:
    // 0x1eca84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eca88:
    // 0x1eca88: 0x80830084  lb          $v1, 0x84($a0)
    ctx->pc = 0x1eca88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
label_1eca8c:
    // 0x1eca8c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1eca90:
    if (ctx->pc == 0x1ECA90u) {
        ctx->pc = 0x1ECA90u;
            // 0x1eca90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1ECA94u;
        goto label_1eca94;
    }
    ctx->pc = 0x1ECA8Cu;
    {
        const bool branch_taken_0x1eca8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eca8c) {
            ctx->pc = 0x1ECA90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA8Cu;
            // 0x1eca90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECAA0u;
            goto label_1ecaa0;
        }
    }
    ctx->pc = 0x1ECA94u;
label_1eca94:
    // 0x1eca94: 0xc07bed8  jal         func_1EFB60
label_1eca98:
    if (ctx->pc == 0x1ECA98u) {
        ctx->pc = 0x1ECA9Cu;
        goto label_1eca9c;
    }
    ctx->pc = 0x1ECA94u;
    SET_GPR_U32(ctx, 31, 0x1ECA9Cu);
    ctx->pc = 0x1EFB60u;
    if (runtime->hasFunction(0x1EFB60u)) {
        auto targetFn = runtime->lookupFunction(0x1EFB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA9Cu; }
        if (ctx->pc != 0x1ECA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFB60_0x1efb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA9Cu; }
        if (ctx->pc != 0x1ECA9Cu) { return; }
    }
    ctx->pc = 0x1ECA9Cu;
label_1eca9c:
    // 0x1eca9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eca9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecaa0:
    // 0x1ecaa0: 0x3e00008  jr          $ra
label_1ecaa4:
    if (ctx->pc == 0x1ECAA4u) {
        ctx->pc = 0x1ECAA4u;
            // 0x1ecaa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1ECAA8u;
        goto label_1ecaa8;
    }
    ctx->pc = 0x1ECAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECAA0u;
            // 0x1ecaa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECAA8u;
label_1ecaa8:
    // 0x1ecaa8: 0x0  nop
    ctx->pc = 0x1ecaa8u;
    // NOP
label_1ecaac:
    // 0x1ecaac: 0x0  nop
    ctx->pc = 0x1ecaacu;
    // NOP
label_1ecab0:
    // 0x1ecab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ecab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ecab4:
    // 0x1ecab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ecab8:
    // 0x1ecab8: 0x80830084  lb          $v1, 0x84($a0)
    ctx->pc = 0x1ecab8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
label_1ecabc:
    // 0x1ecabc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1ecac0:
    if (ctx->pc == 0x1ECAC0u) {
        ctx->pc = 0x1ECAC0u;
            // 0x1ecac0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1ECAC4u;
        goto label_1ecac4;
    }
    ctx->pc = 0x1ECABCu;
    {
        const bool branch_taken_0x1ecabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecabc) {
            ctx->pc = 0x1ECAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECABCu;
            // 0x1ecac0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECAD0u;
            goto label_1ecad0;
        }
    }
    ctx->pc = 0x1ECAC4u;
label_1ecac4:
    // 0x1ecac4: 0xc07bef0  jal         func_1EFBC0
label_1ecac8:
    if (ctx->pc == 0x1ECAC8u) {
        ctx->pc = 0x1ECACCu;
        goto label_1ecacc;
    }
    ctx->pc = 0x1ECAC4u;
    SET_GPR_U32(ctx, 31, 0x1ECACCu);
    ctx->pc = 0x1EFBC0u;
    if (runtime->hasFunction(0x1EFBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EFBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECACCu; }
        if (ctx->pc != 0x1ECACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFBC0_0x1efbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECACCu; }
        if (ctx->pc != 0x1ECACCu) { return; }
    }
    ctx->pc = 0x1ECACCu;
label_1ecacc:
    // 0x1ecacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecad0:
    // 0x1ecad0: 0x3e00008  jr          $ra
label_1ecad4:
    if (ctx->pc == 0x1ECAD4u) {
        ctx->pc = 0x1ECAD4u;
            // 0x1ecad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1ECAD8u;
        goto label_1ecad8;
    }
    ctx->pc = 0x1ECAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECAD0u;
            // 0x1ecad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECAD8u;
label_1ecad8:
    // 0x1ecad8: 0x0  nop
    ctx->pc = 0x1ecad8u;
    // NOP
label_1ecadc:
    // 0x1ecadc: 0x0  nop
    ctx->pc = 0x1ecadcu;
    // NOP
label_1ecae0:
    // 0x1ecae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ecae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ecae4:
    // 0x1ecae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ecae8:
    // 0x1ecae8: 0x80830084  lb          $v1, 0x84($a0)
    ctx->pc = 0x1ecae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
label_1ecaec:
    // 0x1ecaec: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1ecaf0:
    if (ctx->pc == 0x1ECAF0u) {
        ctx->pc = 0x1ECAF0u;
            // 0x1ecaf0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1ECAF4u;
        goto label_1ecaf4;
    }
    ctx->pc = 0x1ECAECu;
    {
        const bool branch_taken_0x1ecaec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecaec) {
            ctx->pc = 0x1ECAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECAECu;
            // 0x1ecaf0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECB00u;
            goto label_1ecb00;
        }
    }
    ctx->pc = 0x1ECAF4u;
label_1ecaf4:
    // 0x1ecaf4: 0xc07bf04  jal         func_1EFC10
label_1ecaf8:
    if (ctx->pc == 0x1ECAF8u) {
        ctx->pc = 0x1ECAFCu;
        goto label_1ecafc;
    }
    ctx->pc = 0x1ECAF4u;
    SET_GPR_U32(ctx, 31, 0x1ECAFCu);
    ctx->pc = 0x1EFC10u;
    if (runtime->hasFunction(0x1EFC10u)) {
        auto targetFn = runtime->lookupFunction(0x1EFC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECAFCu; }
        if (ctx->pc != 0x1ECAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFC10_0x1efc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECAFCu; }
        if (ctx->pc != 0x1ECAFCu) { return; }
    }
    ctx->pc = 0x1ECAFCu;
label_1ecafc:
    // 0x1ecafc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecb00:
    // 0x1ecb00: 0x3e00008  jr          $ra
label_1ecb04:
    if (ctx->pc == 0x1ECB04u) {
        ctx->pc = 0x1ECB04u;
            // 0x1ecb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1ECB08u;
        goto label_1ecb08;
    }
    ctx->pc = 0x1ECB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECB00u;
            // 0x1ecb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECB08u;
label_1ecb08:
    // 0x1ecb08: 0x0  nop
    ctx->pc = 0x1ecb08u;
    // NOP
label_1ecb0c:
    // 0x1ecb0c: 0x0  nop
    ctx->pc = 0x1ecb0cu;
    // NOP
}
