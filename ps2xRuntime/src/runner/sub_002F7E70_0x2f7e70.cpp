#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7E70
// Address: 0x2f7e70 - 0x2f7f50
void sub_002F7E70_0x2f7e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7E70_0x2f7e70");
#endif

    switch (ctx->pc) {
        case 0x2f7e70u: goto label_2f7e70;
        case 0x2f7e74u: goto label_2f7e74;
        case 0x2f7e78u: goto label_2f7e78;
        case 0x2f7e7cu: goto label_2f7e7c;
        case 0x2f7e80u: goto label_2f7e80;
        case 0x2f7e84u: goto label_2f7e84;
        case 0x2f7e88u: goto label_2f7e88;
        case 0x2f7e8cu: goto label_2f7e8c;
        case 0x2f7e90u: goto label_2f7e90;
        case 0x2f7e94u: goto label_2f7e94;
        case 0x2f7e98u: goto label_2f7e98;
        case 0x2f7e9cu: goto label_2f7e9c;
        case 0x2f7ea0u: goto label_2f7ea0;
        case 0x2f7ea4u: goto label_2f7ea4;
        case 0x2f7ea8u: goto label_2f7ea8;
        case 0x2f7eacu: goto label_2f7eac;
        case 0x2f7eb0u: goto label_2f7eb0;
        case 0x2f7eb4u: goto label_2f7eb4;
        case 0x2f7eb8u: goto label_2f7eb8;
        case 0x2f7ebcu: goto label_2f7ebc;
        case 0x2f7ec0u: goto label_2f7ec0;
        case 0x2f7ec4u: goto label_2f7ec4;
        case 0x2f7ec8u: goto label_2f7ec8;
        case 0x2f7eccu: goto label_2f7ecc;
        case 0x2f7ed0u: goto label_2f7ed0;
        case 0x2f7ed4u: goto label_2f7ed4;
        case 0x2f7ed8u: goto label_2f7ed8;
        case 0x2f7edcu: goto label_2f7edc;
        case 0x2f7ee0u: goto label_2f7ee0;
        case 0x2f7ee4u: goto label_2f7ee4;
        case 0x2f7ee8u: goto label_2f7ee8;
        case 0x2f7eecu: goto label_2f7eec;
        case 0x2f7ef0u: goto label_2f7ef0;
        case 0x2f7ef4u: goto label_2f7ef4;
        case 0x2f7ef8u: goto label_2f7ef8;
        case 0x2f7efcu: goto label_2f7efc;
        case 0x2f7f00u: goto label_2f7f00;
        case 0x2f7f04u: goto label_2f7f04;
        case 0x2f7f08u: goto label_2f7f08;
        case 0x2f7f0cu: goto label_2f7f0c;
        case 0x2f7f10u: goto label_2f7f10;
        case 0x2f7f14u: goto label_2f7f14;
        case 0x2f7f18u: goto label_2f7f18;
        case 0x2f7f1cu: goto label_2f7f1c;
        case 0x2f7f20u: goto label_2f7f20;
        case 0x2f7f24u: goto label_2f7f24;
        case 0x2f7f28u: goto label_2f7f28;
        case 0x2f7f2cu: goto label_2f7f2c;
        case 0x2f7f30u: goto label_2f7f30;
        case 0x2f7f34u: goto label_2f7f34;
        case 0x2f7f38u: goto label_2f7f38;
        case 0x2f7f3cu: goto label_2f7f3c;
        case 0x2f7f40u: goto label_2f7f40;
        case 0x2f7f44u: goto label_2f7f44;
        case 0x2f7f48u: goto label_2f7f48;
        case 0x2f7f4cu: goto label_2f7f4c;
        default: break;
    }

    ctx->pc = 0x2f7e70u;

label_2f7e70:
    // 0x2f7e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f7e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f7e74:
    // 0x2f7e74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f7e78:
    // 0x2f7e78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f7e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2f7e7c:
    // 0x2f7e7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f7e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f7e80:
    // 0x2f7e80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f7e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f7e84:
    // 0x2f7e84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f7e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f7e88:
    // 0x2f7e88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f7e8c:
    // 0x2f7e8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f7e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f7e90:
    // 0x2f7e90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f7e90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f7e94:
    // 0x2f7e94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f7e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f7e98:
    // 0x2f7e98: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2f7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2f7e9c:
    // 0x2f7e9c: 0x8c420964  lw          $v0, 0x964($v0)
    ctx->pc = 0x2f7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2404)));
label_2f7ea0:
    // 0x2f7ea0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2f7ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2f7ea4:
    // 0x2f7ea4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2f7ea8:
    if (ctx->pc == 0x2F7EA8u) {
        ctx->pc = 0x2F7EA8u;
            // 0x2f7ea8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2F7EACu;
        goto label_2f7eac;
    }
    ctx->pc = 0x2F7EA4u;
    {
        const bool branch_taken_0x2f7ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7EA4u;
            // 0x2f7ea8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ea4) {
            ctx->pc = 0x2F7EFCu;
            goto label_2f7efc;
        }
    }
    ctx->pc = 0x2F7EACu;
label_2f7eac:
    // 0x2f7eac: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2f7eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f7eb0:
    // 0x2f7eb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7eb4:
    // 0x2f7eb4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f7eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f7eb8:
    // 0x2f7eb8: 0x320f809  jalr        $t9
label_2f7ebc:
    if (ctx->pc == 0x2F7EBCu) {
        ctx->pc = 0x2F7EC0u;
        goto label_2f7ec0;
    }
    ctx->pc = 0x2F7EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7EC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7EC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7EC0u; }
            if (ctx->pc != 0x2F7EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7EC0u;
label_2f7ec0:
    // 0x2f7ec0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f7ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f7ec4:
    // 0x2f7ec4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_2f7ec8:
    if (ctx->pc == 0x2F7EC8u) {
        ctx->pc = 0x2F7ECCu;
        goto label_2f7ecc;
    }
    ctx->pc = 0x2F7EC4u;
    {
        const bool branch_taken_0x2f7ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f7ec4) {
            ctx->pc = 0x2F7EECu;
            goto label_2f7eec;
        }
    }
    ctx->pc = 0x2F7ECCu;
label_2f7ecc:
    // 0x2f7ecc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2f7eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f7ed0:
    // 0x2f7ed0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7ed4:
    // 0x2f7ed4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f7ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f7ed8:
    // 0x2f7ed8: 0x320f809  jalr        $t9
label_2f7edc:
    if (ctx->pc == 0x2F7EDCu) {
        ctx->pc = 0x2F7EE0u;
        goto label_2f7ee0;
    }
    ctx->pc = 0x2F7ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7EE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7EE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7EE0u; }
            if (ctx->pc != 0x2F7EE0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7EE0u;
label_2f7ee0:
    // 0x2f7ee0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f7ee4:
    // 0x2f7ee4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_2f7ee8:
    if (ctx->pc == 0x2F7EE8u) {
        ctx->pc = 0x2F7EE8u;
            // 0x2f7ee8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F7EECu;
        goto label_2f7eec;
    }
    ctx->pc = 0x2F7EE4u;
    {
        const bool branch_taken_0x2f7ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7ee4) {
            ctx->pc = 0x2F7EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7EE4u;
            // 0x2f7ee8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7F00u;
            goto label_2f7f00;
        }
    }
    ctx->pc = 0x2F7EECu;
label_2f7eec:
    // 0x2f7eec: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2f7ef0:
    if (ctx->pc == 0x2F7EF0u) {
        ctx->pc = 0x2F7EF4u;
        goto label_2f7ef4;
    }
    ctx->pc = 0x2F7EECu;
    {
        const bool branch_taken_0x2f7eec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7eec) {
            ctx->pc = 0x2F7EFCu;
            goto label_2f7efc;
        }
    }
    ctx->pc = 0x2F7EF4u;
label_2f7ef4:
    // 0x2f7ef4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f7ef8:
    if (ctx->pc == 0x2F7EF8u) {
        ctx->pc = 0x2F7EF8u;
            // 0x2f7ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7EFCu;
        goto label_2f7efc;
    }
    ctx->pc = 0x2F7EF4u;
    {
        const bool branch_taken_0x2f7ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7EF4u;
            // 0x2f7ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ef4) {
            ctx->pc = 0x2F7F30u;
            goto label_2f7f30;
        }
    }
    ctx->pc = 0x2F7EFCu;
label_2f7efc:
    // 0x2f7efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7f00:
    // 0x2f7f00: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2f7f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2f7f04:
    // 0x2f7f04: 0xa24300dd  sb          $v1, 0xDD($s2)
    ctx->pc = 0x2f7f04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 3));
label_2f7f08:
    // 0x2f7f08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f7f08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f7f0c:
    // 0x2f7f0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f7f10:
    // 0x2f7f10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f7f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f14:
    // 0x2f7f14: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2f7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2f7f18:
    // 0x2f7f18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f1c:
    // 0x2f7f1c: 0x244222f8  addiu       $v0, $v0, 0x22F8
    ctx->pc = 0x2f7f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8952));
label_2f7f20:
    // 0x2f7f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f7f24:
    // 0x2f7f24: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2f7f24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7f28:
    // 0x2f7f28: 0xc0bdfd4  jal         func_2F7F50
label_2f7f2c:
    if (ctx->pc == 0x2F7F2Cu) {
        ctx->pc = 0x2F7F2Cu;
            // 0x2f7f2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7F30u;
        goto label_2f7f30;
    }
    ctx->pc = 0x2F7F28u;
    SET_GPR_U32(ctx, 31, 0x2F7F30u);
    ctx->pc = 0x2F7F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F28u;
            // 0x2f7f2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F50u;
    if (runtime->hasFunction(0x2F7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F30u; }
        if (ctx->pc != 0x2F7F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7F50_0x2f7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F30u; }
        if (ctx->pc != 0x2F7F30u) { return; }
    }
    ctx->pc = 0x2F7F30u;
label_2f7f30:
    // 0x2f7f30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f7f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f7f34:
    // 0x2f7f34: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f7f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f7f38:
    // 0x2f7f38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f7f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f7f3c:
    // 0x2f7f3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f7f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f7f40:
    // 0x2f7f40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f7f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f7f44:
    // 0x2f7f44: 0x3e00008  jr          $ra
label_2f7f48:
    if (ctx->pc == 0x2F7F48u) {
        ctx->pc = 0x2F7F48u;
            // 0x2f7f48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2F7F4Cu;
        goto label_2f7f4c;
    }
    ctx->pc = 0x2F7F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F44u;
            // 0x2f7f48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7F4Cu;
label_2f7f4c:
    // 0x2f7f4c: 0x0  nop
    ctx->pc = 0x2f7f4cu;
    // NOP
}
