#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003929E0
// Address: 0x3929e0 - 0x392b30
void sub_003929E0_0x3929e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003929E0_0x3929e0");
#endif

    switch (ctx->pc) {
        case 0x3929e0u: goto label_3929e0;
        case 0x3929e4u: goto label_3929e4;
        case 0x3929e8u: goto label_3929e8;
        case 0x3929ecu: goto label_3929ec;
        case 0x3929f0u: goto label_3929f0;
        case 0x3929f4u: goto label_3929f4;
        case 0x3929f8u: goto label_3929f8;
        case 0x3929fcu: goto label_3929fc;
        case 0x392a00u: goto label_392a00;
        case 0x392a04u: goto label_392a04;
        case 0x392a08u: goto label_392a08;
        case 0x392a0cu: goto label_392a0c;
        case 0x392a10u: goto label_392a10;
        case 0x392a14u: goto label_392a14;
        case 0x392a18u: goto label_392a18;
        case 0x392a1cu: goto label_392a1c;
        case 0x392a20u: goto label_392a20;
        case 0x392a24u: goto label_392a24;
        case 0x392a28u: goto label_392a28;
        case 0x392a2cu: goto label_392a2c;
        case 0x392a30u: goto label_392a30;
        case 0x392a34u: goto label_392a34;
        case 0x392a38u: goto label_392a38;
        case 0x392a3cu: goto label_392a3c;
        case 0x392a40u: goto label_392a40;
        case 0x392a44u: goto label_392a44;
        case 0x392a48u: goto label_392a48;
        case 0x392a4cu: goto label_392a4c;
        case 0x392a50u: goto label_392a50;
        case 0x392a54u: goto label_392a54;
        case 0x392a58u: goto label_392a58;
        case 0x392a5cu: goto label_392a5c;
        case 0x392a60u: goto label_392a60;
        case 0x392a64u: goto label_392a64;
        case 0x392a68u: goto label_392a68;
        case 0x392a6cu: goto label_392a6c;
        case 0x392a70u: goto label_392a70;
        case 0x392a74u: goto label_392a74;
        case 0x392a78u: goto label_392a78;
        case 0x392a7cu: goto label_392a7c;
        case 0x392a80u: goto label_392a80;
        case 0x392a84u: goto label_392a84;
        case 0x392a88u: goto label_392a88;
        case 0x392a8cu: goto label_392a8c;
        case 0x392a90u: goto label_392a90;
        case 0x392a94u: goto label_392a94;
        case 0x392a98u: goto label_392a98;
        case 0x392a9cu: goto label_392a9c;
        case 0x392aa0u: goto label_392aa0;
        case 0x392aa4u: goto label_392aa4;
        case 0x392aa8u: goto label_392aa8;
        case 0x392aacu: goto label_392aac;
        case 0x392ab0u: goto label_392ab0;
        case 0x392ab4u: goto label_392ab4;
        case 0x392ab8u: goto label_392ab8;
        case 0x392abcu: goto label_392abc;
        case 0x392ac0u: goto label_392ac0;
        case 0x392ac4u: goto label_392ac4;
        case 0x392ac8u: goto label_392ac8;
        case 0x392accu: goto label_392acc;
        case 0x392ad0u: goto label_392ad0;
        case 0x392ad4u: goto label_392ad4;
        case 0x392ad8u: goto label_392ad8;
        case 0x392adcu: goto label_392adc;
        case 0x392ae0u: goto label_392ae0;
        case 0x392ae4u: goto label_392ae4;
        case 0x392ae8u: goto label_392ae8;
        case 0x392aecu: goto label_392aec;
        case 0x392af0u: goto label_392af0;
        case 0x392af4u: goto label_392af4;
        case 0x392af8u: goto label_392af8;
        case 0x392afcu: goto label_392afc;
        case 0x392b00u: goto label_392b00;
        case 0x392b04u: goto label_392b04;
        case 0x392b08u: goto label_392b08;
        case 0x392b0cu: goto label_392b0c;
        case 0x392b10u: goto label_392b10;
        case 0x392b14u: goto label_392b14;
        case 0x392b18u: goto label_392b18;
        case 0x392b1cu: goto label_392b1c;
        case 0x392b20u: goto label_392b20;
        case 0x392b24u: goto label_392b24;
        case 0x392b28u: goto label_392b28;
        case 0x392b2cu: goto label_392b2c;
        default: break;
    }

    ctx->pc = 0x3929e0u;

label_3929e0:
    // 0x3929e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3929e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3929e4:
    // 0x3929e4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3929e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3929e8:
    // 0x3929e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3929e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3929ec:
    // 0x3929ec: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x3929ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_3929f0:
    // 0x3929f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3929f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3929f4:
    // 0x3929f4: 0x24a56110  addiu       $a1, $a1, 0x6110
    ctx->pc = 0x3929f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
label_3929f8:
    // 0x3929f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3929f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3929fc:
    // 0x3929fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3929fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392a00:
    // 0x392a00: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x392a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_392a04:
    // 0x392a04: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x392a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_392a08:
    // 0x392a08: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x392a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_392a0c:
    // 0x392a0c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x392a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_392a10:
    // 0x392a10: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x392a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_392a14:
    // 0x392a14: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x392a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_392a18:
    // 0x392a18: 0xc04cc04  jal         func_133010
label_392a1c:
    if (ctx->pc == 0x392A1Cu) {
        ctx->pc = 0x392A1Cu;
            // 0x392a1c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x392A20u;
        goto label_392a20;
    }
    ctx->pc = 0x392A18u;
    SET_GPR_U32(ctx, 31, 0x392A20u);
    ctx->pc = 0x392A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392A18u;
            // 0x392a1c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392A20u; }
        if (ctx->pc != 0x392A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392A20u; }
        if (ctx->pc != 0x392A20u) { return; }
    }
    ctx->pc = 0x392A20u;
label_392a20:
    // 0x392a20: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x392a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_392a24:
    // 0x392a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x392a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392a28:
    // 0x392a28: 0xc04cc04  jal         func_133010
label_392a2c:
    if (ctx->pc == 0x392A2Cu) {
        ctx->pc = 0x392A2Cu;
            // 0x392a2c: 0x24a56110  addiu       $a1, $a1, 0x6110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
        ctx->pc = 0x392A30u;
        goto label_392a30;
    }
    ctx->pc = 0x392A28u;
    SET_GPR_U32(ctx, 31, 0x392A30u);
    ctx->pc = 0x392A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392A28u;
            // 0x392a2c: 0x24a56110  addiu       $a1, $a1, 0x6110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392A30u; }
        if (ctx->pc != 0x392A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392A30u; }
        if (ctx->pc != 0x392A30u) { return; }
    }
    ctx->pc = 0x392A30u;
label_392a30:
    // 0x392a30: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x392a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_392a34:
    // 0x392a34: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x392a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_392a38:
    // 0x392a38: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x392a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_392a3c:
    // 0x392a3c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x392a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_392a40:
    // 0x392a40: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x392a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_392a44:
    // 0x392a44: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x392a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
label_392a48:
    // 0x392a48: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x392a48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_392a4c:
    // 0x392a4c: 0xc088b74  jal         func_222DD0
label_392a50:
    if (ctx->pc == 0x392A50u) {
        ctx->pc = 0x392A50u;
            // 0x392a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392A54u;
        goto label_392a54;
    }
    ctx->pc = 0x392A4Cu;
    SET_GPR_U32(ctx, 31, 0x392A54u);
    ctx->pc = 0x392A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392A4Cu;
            // 0x392a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392A54u; }
        if (ctx->pc != 0x392A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392A54u; }
        if (ctx->pc != 0x392A54u) { return; }
    }
    ctx->pc = 0x392A54u;
label_392a54:
    // 0x392a54: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x392a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_392a58:
    // 0x392a58: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x392a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_392a5c:
    // 0x392a5c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x392a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_392a60:
    // 0x392a60: 0x320f809  jalr        $t9
label_392a64:
    if (ctx->pc == 0x392A64u) {
        ctx->pc = 0x392A64u;
            // 0x392a64: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x392A68u;
        goto label_392a68;
    }
    ctx->pc = 0x392A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392A68u);
        ctx->pc = 0x392A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392A60u;
            // 0x392a64: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x392A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392A68u; }
            if (ctx->pc != 0x392A68u) { return; }
        }
        }
    }
    ctx->pc = 0x392A68u;
label_392a68:
    // 0x392a68: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x392a68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_392a6c:
    // 0x392a6c: 0xc088b74  jal         func_222DD0
label_392a70:
    if (ctx->pc == 0x392A70u) {
        ctx->pc = 0x392A70u;
            // 0x392a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392A74u;
        goto label_392a74;
    }
    ctx->pc = 0x392A6Cu;
    SET_GPR_U32(ctx, 31, 0x392A74u);
    ctx->pc = 0x392A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392A6Cu;
            // 0x392a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392A74u; }
        if (ctx->pc != 0x392A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392A74u; }
        if (ctx->pc != 0x392A74u) { return; }
    }
    ctx->pc = 0x392A74u;
label_392a74:
    // 0x392a74: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x392a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_392a78:
    // 0x392a78: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x392a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_392a7c:
    // 0x392a7c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x392a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_392a80:
    // 0x392a80: 0x320f809  jalr        $t9
label_392a84:
    if (ctx->pc == 0x392A84u) {
        ctx->pc = 0x392A84u;
            // 0x392a84: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x392A88u;
        goto label_392a88;
    }
    ctx->pc = 0x392A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392A88u);
        ctx->pc = 0x392A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392A80u;
            // 0x392a84: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x392A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392A88u; }
            if (ctx->pc != 0x392A88u) { return; }
        }
        }
    }
    ctx->pc = 0x392A88u;
label_392a88:
    // 0x392a88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x392a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_392a8c:
    // 0x392a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x392a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_392a90:
    // 0x392a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_392a94:
    // 0x392a94: 0x3e00008  jr          $ra
label_392a98:
    if (ctx->pc == 0x392A98u) {
        ctx->pc = 0x392A98u;
            // 0x392a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x392A9Cu;
        goto label_392a9c;
    }
    ctx->pc = 0x392A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392A94u;
            // 0x392a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x392A9Cu;
label_392a9c:
    // 0x392a9c: 0x0  nop
    ctx->pc = 0x392a9cu;
    // NOP
label_392aa0:
    // 0x392aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x392aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_392aa4:
    // 0x392aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x392aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_392aa8:
    // 0x392aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x392aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_392aac:
    // 0x392aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x392aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_392ab0:
    // 0x392ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392ab4:
    // 0x392ab4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_392ab8:
    if (ctx->pc == 0x392AB8u) {
        ctx->pc = 0x392AB8u;
            // 0x392ab8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392ABCu;
        goto label_392abc;
    }
    ctx->pc = 0x392AB4u;
    {
        const bool branch_taken_0x392ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392AB4u;
            // 0x392ab8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ab4) {
            ctx->pc = 0x392B10u;
            goto label_392b10;
        }
    }
    ctx->pc = 0x392ABCu;
label_392abc:
    // 0x392abc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x392abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_392ac0:
    // 0x392ac0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x392ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_392ac4:
    // 0x392ac4: 0x24637e80  addiu       $v1, $v1, 0x7E80
    ctx->pc = 0x392ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32384));
label_392ac8:
    // 0x392ac8: 0x24427eb8  addiu       $v0, $v0, 0x7EB8
    ctx->pc = 0x392ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32440));
label_392acc:
    // 0x392acc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x392accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_392ad0:
    // 0x392ad0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_392ad4:
    if (ctx->pc == 0x392AD4u) {
        ctx->pc = 0x392AD4u;
            // 0x392ad4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x392AD8u;
        goto label_392ad8;
    }
    ctx->pc = 0x392AD0u;
    {
        const bool branch_taken_0x392ad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392AD0u;
            // 0x392ad4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ad0) {
            ctx->pc = 0x392AF8u;
            goto label_392af8;
        }
    }
    ctx->pc = 0x392AD8u;
label_392ad8:
    // 0x392ad8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x392ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_392adc:
    // 0x392adc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x392adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_392ae0:
    // 0x392ae0: 0x24637f30  addiu       $v1, $v1, 0x7F30
    ctx->pc = 0x392ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32560));
label_392ae4:
    // 0x392ae4: 0x24427f68  addiu       $v0, $v0, 0x7F68
    ctx->pc = 0x392ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32616));
label_392ae8:
    // 0x392ae8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x392ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_392aec:
    // 0x392aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x392aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392af0:
    // 0x392af0: 0xc0e4acc  jal         func_392B30
label_392af4:
    if (ctx->pc == 0x392AF4u) {
        ctx->pc = 0x392AF4u;
            // 0x392af4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x392AF8u;
        goto label_392af8;
    }
    ctx->pc = 0x392AF0u;
    SET_GPR_U32(ctx, 31, 0x392AF8u);
    ctx->pc = 0x392AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392AF0u;
            // 0x392af4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x392B30u;
    if (runtime->hasFunction(0x392B30u)) {
        auto targetFn = runtime->lookupFunction(0x392B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392AF8u; }
        if (ctx->pc != 0x392AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00392B30_0x392b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392AF8u; }
        if (ctx->pc != 0x392AF8u) { return; }
    }
    ctx->pc = 0x392AF8u;
label_392af8:
    // 0x392af8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x392af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_392afc:
    // 0x392afc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x392afcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_392b00:
    // 0x392b00: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_392b04:
    if (ctx->pc == 0x392B04u) {
        ctx->pc = 0x392B04u;
            // 0x392b04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392B08u;
        goto label_392b08;
    }
    ctx->pc = 0x392B00u;
    {
        const bool branch_taken_0x392b00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x392b00) {
            ctx->pc = 0x392B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392B00u;
            // 0x392b04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392B14u;
            goto label_392b14;
        }
    }
    ctx->pc = 0x392B08u;
label_392b08:
    // 0x392b08: 0xc0400a8  jal         func_1002A0
label_392b0c:
    if (ctx->pc == 0x392B0Cu) {
        ctx->pc = 0x392B0Cu;
            // 0x392b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392B10u;
        goto label_392b10;
    }
    ctx->pc = 0x392B08u;
    SET_GPR_U32(ctx, 31, 0x392B10u);
    ctx->pc = 0x392B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392B08u;
            // 0x392b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392B10u; }
        if (ctx->pc != 0x392B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392B10u; }
        if (ctx->pc != 0x392B10u) { return; }
    }
    ctx->pc = 0x392B10u;
label_392b10:
    // 0x392b10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x392b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392b14:
    // 0x392b14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x392b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_392b18:
    // 0x392b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x392b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_392b1c:
    // 0x392b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_392b20:
    // 0x392b20: 0x3e00008  jr          $ra
label_392b24:
    if (ctx->pc == 0x392B24u) {
        ctx->pc = 0x392B24u;
            // 0x392b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x392B28u;
        goto label_392b28;
    }
    ctx->pc = 0x392B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392B20u;
            // 0x392b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x392B28u;
label_392b28:
    // 0x392b28: 0x0  nop
    ctx->pc = 0x392b28u;
    // NOP
label_392b2c:
    // 0x392b2c: 0x0  nop
    ctx->pc = 0x392b2cu;
    // NOP
}
