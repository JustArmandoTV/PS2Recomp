#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AAD30
// Address: 0x2aad30 - 0x2aae10
void sub_002AAD30_0x2aad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAD30_0x2aad30");
#endif

    switch (ctx->pc) {
        case 0x2aad30u: goto label_2aad30;
        case 0x2aad34u: goto label_2aad34;
        case 0x2aad38u: goto label_2aad38;
        case 0x2aad3cu: goto label_2aad3c;
        case 0x2aad40u: goto label_2aad40;
        case 0x2aad44u: goto label_2aad44;
        case 0x2aad48u: goto label_2aad48;
        case 0x2aad4cu: goto label_2aad4c;
        case 0x2aad50u: goto label_2aad50;
        case 0x2aad54u: goto label_2aad54;
        case 0x2aad58u: goto label_2aad58;
        case 0x2aad5cu: goto label_2aad5c;
        case 0x2aad60u: goto label_2aad60;
        case 0x2aad64u: goto label_2aad64;
        case 0x2aad68u: goto label_2aad68;
        case 0x2aad6cu: goto label_2aad6c;
        case 0x2aad70u: goto label_2aad70;
        case 0x2aad74u: goto label_2aad74;
        case 0x2aad78u: goto label_2aad78;
        case 0x2aad7cu: goto label_2aad7c;
        case 0x2aad80u: goto label_2aad80;
        case 0x2aad84u: goto label_2aad84;
        case 0x2aad88u: goto label_2aad88;
        case 0x2aad8cu: goto label_2aad8c;
        case 0x2aad90u: goto label_2aad90;
        case 0x2aad94u: goto label_2aad94;
        case 0x2aad98u: goto label_2aad98;
        case 0x2aad9cu: goto label_2aad9c;
        case 0x2aada0u: goto label_2aada0;
        case 0x2aada4u: goto label_2aada4;
        case 0x2aada8u: goto label_2aada8;
        case 0x2aadacu: goto label_2aadac;
        case 0x2aadb0u: goto label_2aadb0;
        case 0x2aadb4u: goto label_2aadb4;
        case 0x2aadb8u: goto label_2aadb8;
        case 0x2aadbcu: goto label_2aadbc;
        case 0x2aadc0u: goto label_2aadc0;
        case 0x2aadc4u: goto label_2aadc4;
        case 0x2aadc8u: goto label_2aadc8;
        case 0x2aadccu: goto label_2aadcc;
        case 0x2aadd0u: goto label_2aadd0;
        case 0x2aadd4u: goto label_2aadd4;
        case 0x2aadd8u: goto label_2aadd8;
        case 0x2aaddcu: goto label_2aaddc;
        case 0x2aade0u: goto label_2aade0;
        case 0x2aade4u: goto label_2aade4;
        case 0x2aade8u: goto label_2aade8;
        case 0x2aadecu: goto label_2aadec;
        case 0x2aadf0u: goto label_2aadf0;
        case 0x2aadf4u: goto label_2aadf4;
        case 0x2aadf8u: goto label_2aadf8;
        case 0x2aadfcu: goto label_2aadfc;
        case 0x2aae00u: goto label_2aae00;
        case 0x2aae04u: goto label_2aae04;
        case 0x2aae08u: goto label_2aae08;
        case 0x2aae0cu: goto label_2aae0c;
        default: break;
    }

    ctx->pc = 0x2aad30u;

label_2aad30:
    // 0x2aad30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2aad34:
    // 0x2aad34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aad38:
    // 0x2aad38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2aad3c:
    // 0x2aad3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2aad40:
    // 0x2aad40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aad40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2aad44:
    // 0x2aad44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aad44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aad48:
    // 0x2aad48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2aad4c:
    // 0x2aad4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aad50:
    // 0x2aad50: 0x8c4267d8  lw          $v0, 0x67D8($v0)
    ctx->pc = 0x2aad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26584)));
label_2aad54:
    // 0x2aad54: 0x40f809  jalr        $v0
label_2aad58:
    if (ctx->pc == 0x2AAD58u) {
        ctx->pc = 0x2AAD58u;
            // 0x2aad58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD5Cu;
        goto label_2aad5c;
    }
    ctx->pc = 0x2AAD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AAD5Cu);
        ctx->pc = 0x2AAD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD54u;
            // 0x2aad58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAD5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD5Cu; }
            if (ctx->pc != 0x2AAD5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2AAD5Cu;
label_2aad5c:
    // 0x2aad5c: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x2aad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_2aad60:
    // 0x2aad60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aad60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aad64:
    // 0x2aad64: 0x8c4267e8  lw          $v0, 0x67E8($v0)
    ctx->pc = 0x2aad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
label_2aad68:
    // 0x2aad68: 0x40f809  jalr        $v0
label_2aad6c:
    if (ctx->pc == 0x2AAD6Cu) {
        ctx->pc = 0x2AAD70u;
        goto label_2aad70;
    }
    ctx->pc = 0x2AAD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AAD70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAD70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD70u; }
            if (ctx->pc != 0x2AAD70u) { return; }
        }
        }
    }
    ctx->pc = 0x2AAD70u;
label_2aad70:
    // 0x2aad70: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x2aad70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_2aad74:
    // 0x2aad74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aad78:
    // 0x2aad78: 0x8c5164a0  lw          $s1, 0x64A0($v0)
    ctx->pc = 0x2aad78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25760)));
label_2aad7c:
    // 0x2aad7c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2aad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2aad80:
    // 0x2aad80: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2aad84:
    if (ctx->pc == 0x2AAD84u) {
        ctx->pc = 0x2AAD84u;
            // 0x2aad84: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x2AAD88u;
        goto label_2aad88;
    }
    ctx->pc = 0x2AAD80u;
    {
        const bool branch_taken_0x2aad80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aad80) {
            ctx->pc = 0x2AAD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD80u;
            // 0x2aad84: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AADA0u;
            goto label_2aada0;
        }
    }
    ctx->pc = 0x2AAD88u;
label_2aad88:
    // 0x2aad88: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2aad88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2aad8c:
    // 0x2aad8c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2aad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2aad90:
    // 0x2aad90: 0xc0fe54c  jal         func_3F9530
label_2aad94:
    if (ctx->pc == 0x2AAD94u) {
        ctx->pc = 0x2AAD94u;
            // 0x2aad94: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x2AAD98u;
        goto label_2aad98;
    }
    ctx->pc = 0x2AAD90u;
    SET_GPR_U32(ctx, 31, 0x2AAD98u);
    ctx->pc = 0x2AAD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD90u;
            // 0x2aad94: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD98u; }
        if (ctx->pc != 0x2AAD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD98u; }
        if (ctx->pc != 0x2AAD98u) { return; }
    }
    ctx->pc = 0x2AAD98u;
label_2aad98:
    // 0x2aad98: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2aad98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2aad9c:
    // 0x2aad9c: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x2aad9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2aada0:
    // 0x2aada0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2aada0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2aada4:
    // 0x2aada4: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x2aada4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2aada8:
    // 0x2aada8: 0x24631f70  addiu       $v1, $v1, 0x1F70
    ctx->pc = 0x2aada8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8048));
label_2aadac:
    // 0x2aadac: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2aadacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2aadb0:
    // 0x2aadb0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2aadb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2aadb4:
    // 0x2aadb4: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2aadb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_2aadb8:
    // 0x2aadb8: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2aadb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_2aadbc:
    // 0x2aadbc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2aadbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2aadc0:
    // 0x2aadc0: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x2aadc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
label_2aadc4:
    // 0x2aadc4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2aadc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2aadc8:
    // 0x2aadc8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2aadc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2aadcc:
    // 0x2aadcc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2aadccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2aadd0:
    // 0x2aadd0: 0x320f809  jalr        $t9
label_2aadd4:
    if (ctx->pc == 0x2AADD4u) {
        ctx->pc = 0x2AADD4u;
            // 0x2aadd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AADD8u;
        goto label_2aadd8;
    }
    ctx->pc = 0x2AADD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AADD8u);
        ctx->pc = 0x2AADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADD0u;
            // 0x2aadd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AADD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AADD8u; }
            if (ctx->pc != 0x2AADD8u) { return; }
        }
        }
    }
    ctx->pc = 0x2AADD8u;
label_2aadd8:
    // 0x2aadd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aadd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aaddc:
    // 0x2aaddc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2aaddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2aade0:
    // 0x2aade0: 0xa204001c  sb          $a0, 0x1C($s0)
    ctx->pc = 0x2aade0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 4));
label_2aade4:
    // 0x2aade4: 0xa2400029  sb          $zero, 0x29($s2)
    ctx->pc = 0x2aade4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 0));
label_2aade8:
    // 0x2aade8: 0xa2400028  sb          $zero, 0x28($s2)
    ctx->pc = 0x2aade8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 0));
label_2aadec:
    // 0x2aadec: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x2aadecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_2aadf0:
    // 0x2aadf0: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x2aadf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_2aadf4:
    // 0x2aadf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aadf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2aadf8:
    // 0x2aadf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aadf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2aadfc:
    // 0x2aadfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aadfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aae00:
    // 0x2aae00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aae00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aae04:
    // 0x2aae04: 0x3e00008  jr          $ra
label_2aae08:
    if (ctx->pc == 0x2AAE08u) {
        ctx->pc = 0x2AAE08u;
            // 0x2aae08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2AAE0Cu;
        goto label_2aae0c;
    }
    ctx->pc = 0x2AAE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE04u;
            // 0x2aae08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAE0Cu;
label_2aae0c:
    // 0x2aae0c: 0x0  nop
    ctx->pc = 0x2aae0cu;
    // NOP
}
