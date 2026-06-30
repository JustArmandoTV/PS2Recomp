#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034EC70
// Address: 0x34ec70 - 0x34eed0
void sub_0034EC70_0x34ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EC70_0x34ec70");
#endif

    switch (ctx->pc) {
        case 0x34ec70u: goto label_34ec70;
        case 0x34ec74u: goto label_34ec74;
        case 0x34ec78u: goto label_34ec78;
        case 0x34ec7cu: goto label_34ec7c;
        case 0x34ec80u: goto label_34ec80;
        case 0x34ec84u: goto label_34ec84;
        case 0x34ec88u: goto label_34ec88;
        case 0x34ec8cu: goto label_34ec8c;
        case 0x34ec90u: goto label_34ec90;
        case 0x34ec94u: goto label_34ec94;
        case 0x34ec98u: goto label_34ec98;
        case 0x34ec9cu: goto label_34ec9c;
        case 0x34eca0u: goto label_34eca0;
        case 0x34eca4u: goto label_34eca4;
        case 0x34eca8u: goto label_34eca8;
        case 0x34ecacu: goto label_34ecac;
        case 0x34ecb0u: goto label_34ecb0;
        case 0x34ecb4u: goto label_34ecb4;
        case 0x34ecb8u: goto label_34ecb8;
        case 0x34ecbcu: goto label_34ecbc;
        case 0x34ecc0u: goto label_34ecc0;
        case 0x34ecc4u: goto label_34ecc4;
        case 0x34ecc8u: goto label_34ecc8;
        case 0x34ecccu: goto label_34eccc;
        case 0x34ecd0u: goto label_34ecd0;
        case 0x34ecd4u: goto label_34ecd4;
        case 0x34ecd8u: goto label_34ecd8;
        case 0x34ecdcu: goto label_34ecdc;
        case 0x34ece0u: goto label_34ece0;
        case 0x34ece4u: goto label_34ece4;
        case 0x34ece8u: goto label_34ece8;
        case 0x34ececu: goto label_34ecec;
        case 0x34ecf0u: goto label_34ecf0;
        case 0x34ecf4u: goto label_34ecf4;
        case 0x34ecf8u: goto label_34ecf8;
        case 0x34ecfcu: goto label_34ecfc;
        case 0x34ed00u: goto label_34ed00;
        case 0x34ed04u: goto label_34ed04;
        case 0x34ed08u: goto label_34ed08;
        case 0x34ed0cu: goto label_34ed0c;
        case 0x34ed10u: goto label_34ed10;
        case 0x34ed14u: goto label_34ed14;
        case 0x34ed18u: goto label_34ed18;
        case 0x34ed1cu: goto label_34ed1c;
        case 0x34ed20u: goto label_34ed20;
        case 0x34ed24u: goto label_34ed24;
        case 0x34ed28u: goto label_34ed28;
        case 0x34ed2cu: goto label_34ed2c;
        case 0x34ed30u: goto label_34ed30;
        case 0x34ed34u: goto label_34ed34;
        case 0x34ed38u: goto label_34ed38;
        case 0x34ed3cu: goto label_34ed3c;
        case 0x34ed40u: goto label_34ed40;
        case 0x34ed44u: goto label_34ed44;
        case 0x34ed48u: goto label_34ed48;
        case 0x34ed4cu: goto label_34ed4c;
        case 0x34ed50u: goto label_34ed50;
        case 0x34ed54u: goto label_34ed54;
        case 0x34ed58u: goto label_34ed58;
        case 0x34ed5cu: goto label_34ed5c;
        case 0x34ed60u: goto label_34ed60;
        case 0x34ed64u: goto label_34ed64;
        case 0x34ed68u: goto label_34ed68;
        case 0x34ed6cu: goto label_34ed6c;
        case 0x34ed70u: goto label_34ed70;
        case 0x34ed74u: goto label_34ed74;
        case 0x34ed78u: goto label_34ed78;
        case 0x34ed7cu: goto label_34ed7c;
        case 0x34ed80u: goto label_34ed80;
        case 0x34ed84u: goto label_34ed84;
        case 0x34ed88u: goto label_34ed88;
        case 0x34ed8cu: goto label_34ed8c;
        case 0x34ed90u: goto label_34ed90;
        case 0x34ed94u: goto label_34ed94;
        case 0x34ed98u: goto label_34ed98;
        case 0x34ed9cu: goto label_34ed9c;
        case 0x34eda0u: goto label_34eda0;
        case 0x34eda4u: goto label_34eda4;
        case 0x34eda8u: goto label_34eda8;
        case 0x34edacu: goto label_34edac;
        case 0x34edb0u: goto label_34edb0;
        case 0x34edb4u: goto label_34edb4;
        case 0x34edb8u: goto label_34edb8;
        case 0x34edbcu: goto label_34edbc;
        case 0x34edc0u: goto label_34edc0;
        case 0x34edc4u: goto label_34edc4;
        case 0x34edc8u: goto label_34edc8;
        case 0x34edccu: goto label_34edcc;
        case 0x34edd0u: goto label_34edd0;
        case 0x34edd4u: goto label_34edd4;
        case 0x34edd8u: goto label_34edd8;
        case 0x34eddcu: goto label_34eddc;
        case 0x34ede0u: goto label_34ede0;
        case 0x34ede4u: goto label_34ede4;
        case 0x34ede8u: goto label_34ede8;
        case 0x34edecu: goto label_34edec;
        case 0x34edf0u: goto label_34edf0;
        case 0x34edf4u: goto label_34edf4;
        case 0x34edf8u: goto label_34edf8;
        case 0x34edfcu: goto label_34edfc;
        case 0x34ee00u: goto label_34ee00;
        case 0x34ee04u: goto label_34ee04;
        case 0x34ee08u: goto label_34ee08;
        case 0x34ee0cu: goto label_34ee0c;
        case 0x34ee10u: goto label_34ee10;
        case 0x34ee14u: goto label_34ee14;
        case 0x34ee18u: goto label_34ee18;
        case 0x34ee1cu: goto label_34ee1c;
        case 0x34ee20u: goto label_34ee20;
        case 0x34ee24u: goto label_34ee24;
        case 0x34ee28u: goto label_34ee28;
        case 0x34ee2cu: goto label_34ee2c;
        case 0x34ee30u: goto label_34ee30;
        case 0x34ee34u: goto label_34ee34;
        case 0x34ee38u: goto label_34ee38;
        case 0x34ee3cu: goto label_34ee3c;
        case 0x34ee40u: goto label_34ee40;
        case 0x34ee44u: goto label_34ee44;
        case 0x34ee48u: goto label_34ee48;
        case 0x34ee4cu: goto label_34ee4c;
        case 0x34ee50u: goto label_34ee50;
        case 0x34ee54u: goto label_34ee54;
        case 0x34ee58u: goto label_34ee58;
        case 0x34ee5cu: goto label_34ee5c;
        case 0x34ee60u: goto label_34ee60;
        case 0x34ee64u: goto label_34ee64;
        case 0x34ee68u: goto label_34ee68;
        case 0x34ee6cu: goto label_34ee6c;
        case 0x34ee70u: goto label_34ee70;
        case 0x34ee74u: goto label_34ee74;
        case 0x34ee78u: goto label_34ee78;
        case 0x34ee7cu: goto label_34ee7c;
        case 0x34ee80u: goto label_34ee80;
        case 0x34ee84u: goto label_34ee84;
        case 0x34ee88u: goto label_34ee88;
        case 0x34ee8cu: goto label_34ee8c;
        case 0x34ee90u: goto label_34ee90;
        case 0x34ee94u: goto label_34ee94;
        case 0x34ee98u: goto label_34ee98;
        case 0x34ee9cu: goto label_34ee9c;
        case 0x34eea0u: goto label_34eea0;
        case 0x34eea4u: goto label_34eea4;
        case 0x34eea8u: goto label_34eea8;
        case 0x34eeacu: goto label_34eeac;
        case 0x34eeb0u: goto label_34eeb0;
        case 0x34eeb4u: goto label_34eeb4;
        case 0x34eeb8u: goto label_34eeb8;
        case 0x34eebcu: goto label_34eebc;
        case 0x34eec0u: goto label_34eec0;
        case 0x34eec4u: goto label_34eec4;
        case 0x34eec8u: goto label_34eec8;
        case 0x34eeccu: goto label_34eecc;
        default: break;
    }

    ctx->pc = 0x34ec70u;

label_34ec70:
    // 0x34ec70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x34ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_34ec74:
    // 0x34ec74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x34ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_34ec78:
    // 0x34ec78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_34ec7c:
    // 0x34ec7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_34ec80:
    // 0x34ec80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34ec84:
    // 0x34ec84: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x34ec84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_34ec88:
    // 0x34ec88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34ec8c:
    // 0x34ec8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34ec8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34ec90:
    // 0x34ec90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34ec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34ec94:
    // 0x34ec94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34ec94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34ec98:
    // 0x34ec98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34ec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34ec9c:
    // 0x34ec9c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x34ec9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34eca0:
    // 0x34eca0: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x34eca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_34eca4:
    // 0x34eca4: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x34eca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_34eca8:
    // 0x34eca8: 0xc04f278  jal         func_13C9E0
label_34ecac:
    if (ctx->pc == 0x34ECACu) {
        ctx->pc = 0x34ECACu;
            // 0x34ecac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ECB0u;
        goto label_34ecb0;
    }
    ctx->pc = 0x34ECA8u;
    SET_GPR_U32(ctx, 31, 0x34ECB0u);
    ctx->pc = 0x34ECACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ECA8u;
            // 0x34ecac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECB0u; }
        if (ctx->pc != 0x34ECB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECB0u; }
        if (ctx->pc != 0x34ECB0u) { return; }
    }
    ctx->pc = 0x34ECB0u;
label_34ecb0:
    // 0x34ecb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ecb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34ecb4:
    // 0x34ecb4: 0xc04ce80  jal         func_133A00
label_34ecb8:
    if (ctx->pc == 0x34ECB8u) {
        ctx->pc = 0x34ECB8u;
            // 0x34ecb8: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x34ECBCu;
        goto label_34ecbc;
    }
    ctx->pc = 0x34ECB4u;
    SET_GPR_U32(ctx, 31, 0x34ECBCu);
    ctx->pc = 0x34ECB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ECB4u;
            // 0x34ecb8: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECBCu; }
        if (ctx->pc != 0x34ECBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECBCu; }
        if (ctx->pc != 0x34ECBCu) { return; }
    }
    ctx->pc = 0x34ECBCu;
label_34ecbc:
    // 0x34ecbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34ecc0:
    // 0x34ecc0: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x34ecc0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_34ecc4:
    // 0x34ecc4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x34ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_34ecc8:
    // 0x34ecc8: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x34ecc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_34eccc:
    // 0x34eccc: 0xc07698c  jal         func_1DA630
label_34ecd0:
    if (ctx->pc == 0x34ECD0u) {
        ctx->pc = 0x34ECD0u;
            // 0x34ecd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ECD4u;
        goto label_34ecd4;
    }
    ctx->pc = 0x34ECCCu;
    SET_GPR_U32(ctx, 31, 0x34ECD4u);
    ctx->pc = 0x34ECD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ECCCu;
            // 0x34ecd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECD4u; }
        if (ctx->pc != 0x34ECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECD4u; }
        if (ctx->pc != 0x34ECD4u) { return; }
    }
    ctx->pc = 0x34ECD4u;
label_34ecd4:
    // 0x34ecd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34ecd8:
    // 0x34ecd8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_34ecdc:
    if (ctx->pc == 0x34ECDCu) {
        ctx->pc = 0x34ECE0u;
        goto label_34ece0;
    }
    ctx->pc = 0x34ECD8u;
    {
        const bool branch_taken_0x34ecd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34ecd8) {
            ctx->pc = 0x34ECE8u;
            goto label_34ece8;
        }
    }
    ctx->pc = 0x34ECE0u;
label_34ece0:
    // 0x34ece0: 0x10000033  b           . + 4 + (0x33 << 2)
label_34ece4:
    if (ctx->pc == 0x34ECE4u) {
        ctx->pc = 0x34ECE4u;
            // 0x34ece4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x34ECE8u;
        goto label_34ece8;
    }
    ctx->pc = 0x34ECE0u;
    {
        const bool branch_taken_0x34ece0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34ECE0u;
            // 0x34ece4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ece0) {
            ctx->pc = 0x34EDB0u;
            goto label_34edb0;
        }
    }
    ctx->pc = 0x34ECE8u;
label_34ece8:
    // 0x34ece8: 0xc0576f4  jal         func_15DBD0
label_34ecec:
    if (ctx->pc == 0x34ECECu) {
        ctx->pc = 0x34ECF0u;
        goto label_34ecf0;
    }
    ctx->pc = 0x34ECE8u;
    SET_GPR_U32(ctx, 31, 0x34ECF0u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECF0u; }
        if (ctx->pc != 0x34ECF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECF0u; }
        if (ctx->pc != 0x34ECF0u) { return; }
    }
    ctx->pc = 0x34ECF0u;
label_34ecf0:
    // 0x34ecf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34ecf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34ecf4:
    // 0x34ecf4: 0xc076984  jal         func_1DA610
label_34ecf8:
    if (ctx->pc == 0x34ECF8u) {
        ctx->pc = 0x34ECF8u;
            // 0x34ecf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ECFCu;
        goto label_34ecfc;
    }
    ctx->pc = 0x34ECF4u;
    SET_GPR_U32(ctx, 31, 0x34ECFCu);
    ctx->pc = 0x34ECF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ECF4u;
            // 0x34ecf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECFCu; }
        if (ctx->pc != 0x34ECFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECFCu; }
        if (ctx->pc != 0x34ECFCu) { return; }
    }
    ctx->pc = 0x34ECFCu;
label_34ecfc:
    // 0x34ecfc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x34ecfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ed00:
    // 0x34ed00: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x34ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_34ed04:
    // 0x34ed04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_34ed08:
    // 0x34ed08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34ed08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34ed0c:
    // 0x34ed0c: 0xc4421690  lwc1        $f2, 0x1690($v0)
    ctx->pc = 0x34ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34ed10:
    // 0x34ed10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x34ed10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34ed14:
    // 0x34ed14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_34ed18:
    // 0x34ed18: 0xc4411698  lwc1        $f1, 0x1698($v0)
    ctx->pc = 0x34ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34ed1c:
    // 0x34ed1c: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x34ed1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_34ed20:
    // 0x34ed20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_34ed24:
    // 0x34ed24: 0xc440169c  lwc1        $f0, 0x169C($v0)
    ctx->pc = 0x34ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34ed28:
    // 0x34ed28: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x34ed28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_34ed2c:
    // 0x34ed2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_34ed30:
    // 0x34ed30: 0x8c421694  lw          $v0, 0x1694($v0)
    ctx->pc = 0x34ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5780)));
label_34ed34:
    // 0x34ed34: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x34ed34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_34ed38:
    // 0x34ed38: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x34ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_34ed3c:
    // 0x34ed3c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x34ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34ed40:
    // 0x34ed40: 0xc04cca0  jal         func_133280
label_34ed44:
    if (ctx->pc == 0x34ED44u) {
        ctx->pc = 0x34ED44u;
            // 0x34ed44: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x34ED48u;
        goto label_34ed48;
    }
    ctx->pc = 0x34ED40u;
    SET_GPR_U32(ctx, 31, 0x34ED48u);
    ctx->pc = 0x34ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ED40u;
            // 0x34ed44: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED48u; }
        if (ctx->pc != 0x34ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED48u; }
        if (ctx->pc != 0x34ED48u) { return; }
    }
    ctx->pc = 0x34ED48u;
label_34ed48:
    // 0x34ed48: 0xc076980  jal         func_1DA600
label_34ed4c:
    if (ctx->pc == 0x34ED4Cu) {
        ctx->pc = 0x34ED4Cu;
            // 0x34ed4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ED50u;
        goto label_34ed50;
    }
    ctx->pc = 0x34ED48u;
    SET_GPR_U32(ctx, 31, 0x34ED50u);
    ctx->pc = 0x34ED4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ED48u;
            // 0x34ed4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED50u; }
        if (ctx->pc != 0x34ED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED50u; }
        if (ctx->pc != 0x34ED50u) { return; }
    }
    ctx->pc = 0x34ED50u;
label_34ed50:
    // 0x34ed50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34ed50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ed54:
    // 0x34ed54: 0xc04cc34  jal         func_1330D0
label_34ed58:
    if (ctx->pc == 0x34ED58u) {
        ctx->pc = 0x34ED58u;
            // 0x34ed58: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x34ED5Cu;
        goto label_34ed5c;
    }
    ctx->pc = 0x34ED54u;
    SET_GPR_U32(ctx, 31, 0x34ED5Cu);
    ctx->pc = 0x34ED58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ED54u;
            // 0x34ed58: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED5Cu; }
        if (ctx->pc != 0x34ED5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED5Cu; }
        if (ctx->pc != 0x34ED5Cu) { return; }
    }
    ctx->pc = 0x34ED5Cu;
label_34ed5c:
    // 0x34ed5c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_34ed60:
    // 0x34ed60: 0xc4413520  lwc1        $f1, 0x3520($v0)
    ctx->pc = 0x34ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34ed64:
    // 0x34ed64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34ed64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34ed68:
    // 0x34ed68: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_34ed6c:
    if (ctx->pc == 0x34ED6Cu) {
        ctx->pc = 0x34ED6Cu;
            // 0x34ed6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ED70u;
        goto label_34ed70;
    }
    ctx->pc = 0x34ED68u;
    {
        const bool branch_taken_0x34ed68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ed68) {
            ctx->pc = 0x34ED6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34ED68u;
            // 0x34ed6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34ED78u;
            goto label_34ed78;
        }
    }
    ctx->pc = 0x34ED70u;
label_34ed70:
    // 0x34ed70: 0x1000000f  b           . + 4 + (0xF << 2)
label_34ed74:
    if (ctx->pc == 0x34ED74u) {
        ctx->pc = 0x34ED74u;
            // 0x34ed74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x34ED78u;
        goto label_34ed78;
    }
    ctx->pc = 0x34ED70u;
    {
        const bool branch_taken_0x34ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ED74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34ED70u;
            // 0x34ed74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed70) {
            ctx->pc = 0x34EDB0u;
            goto label_34edb0;
        }
    }
    ctx->pc = 0x34ED78u;
label_34ed78:
    // 0x34ed78: 0xc07697c  jal         func_1DA5F0
label_34ed7c:
    if (ctx->pc == 0x34ED7Cu) {
        ctx->pc = 0x34ED80u;
        goto label_34ed80;
    }
    ctx->pc = 0x34ED78u;
    SET_GPR_U32(ctx, 31, 0x34ED80u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED80u; }
        if (ctx->pc != 0x34ED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED80u; }
        if (ctx->pc != 0x34ED80u) { return; }
    }
    ctx->pc = 0x34ED80u;
label_34ed80:
    // 0x34ed80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34ed80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ed84:
    // 0x34ed84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_34ed88:
    // 0x34ed88: 0xc04cd60  jal         func_133580
label_34ed8c:
    if (ctx->pc == 0x34ED8Cu) {
        ctx->pc = 0x34ED8Cu;
            // 0x34ed8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ED90u;
        goto label_34ed90;
    }
    ctx->pc = 0x34ED88u;
    SET_GPR_U32(ctx, 31, 0x34ED90u);
    ctx->pc = 0x34ED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ED88u;
            // 0x34ed8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED90u; }
        if (ctx->pc != 0x34ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED90u; }
        if (ctx->pc != 0x34ED90u) { return; }
    }
    ctx->pc = 0x34ED90u;
label_34ed90:
    // 0x34ed90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34ed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34ed94:
    // 0x34ed94: 0xc04c650  jal         func_131940
label_34ed98:
    if (ctx->pc == 0x34ED98u) {
        ctx->pc = 0x34ED98u;
            // 0x34ed98: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x34ED9Cu;
        goto label_34ed9c;
    }
    ctx->pc = 0x34ED94u;
    SET_GPR_U32(ctx, 31, 0x34ED9Cu);
    ctx->pc = 0x34ED98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ED94u;
            // 0x34ed98: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED9Cu; }
        if (ctx->pc != 0x34ED9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED9Cu; }
        if (ctx->pc != 0x34ED9Cu) { return; }
    }
    ctx->pc = 0x34ED9Cu;
label_34ed9c:
    // 0x34ed9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x34ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_34eda0:
    // 0x34eda0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x34eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_34eda4:
    // 0x34eda4: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x34eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_34eda8:
    // 0x34eda8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34edac:
    // 0x34edac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34edb0:
    // 0x34edb0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x34edb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_34edb4:
    // 0x34edb4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_34edb8:
    if (ctx->pc == 0x34EDB8u) {
        ctx->pc = 0x34EDB8u;
            // 0x34edb8: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x34EDBCu;
        goto label_34edbc;
    }
    ctx->pc = 0x34EDB4u;
    {
        const bool branch_taken_0x34edb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EDB4u;
            // 0x34edb8: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34edb4) {
            ctx->pc = 0x34EDC4u;
            goto label_34edc4;
        }
    }
    ctx->pc = 0x34EDBCu;
label_34edbc:
    // 0x34edbc: 0x10000038  b           . + 4 + (0x38 << 2)
label_34edc0:
    if (ctx->pc == 0x34EDC0u) {
        ctx->pc = 0x34EDC0u;
            // 0x34edc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34EDC4u;
        goto label_34edc4;
    }
    ctx->pc = 0x34EDBCu;
    {
        const bool branch_taken_0x34edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EDBCu;
            // 0x34edc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34edbc) {
            ctx->pc = 0x34EEA0u;
            goto label_34eea0;
        }
    }
    ctx->pc = 0x34EDC4u;
label_34edc4:
    // 0x34edc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34edc8:
    // 0x34edc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34edcc:
    // 0x34edcc: 0xa26200a4  sb          $v0, 0xA4($s3)
    ctx->pc = 0x34edccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 164), (uint8_t)GPR_U32(ctx, 2));
label_34edd0:
    // 0x34edd0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x34edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_34edd4:
    // 0x34edd4: 0x8c68e3c0  lw          $t0, -0x1C40($v1)
    ctx->pc = 0x34edd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_34edd8:
    // 0x34edd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34eddc:
    // 0x34eddc: 0x8c47e3d8  lw          $a3, -0x1C28($v0)
    ctx->pc = 0x34eddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_34ede0:
    // 0x34ede0: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x34ede0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_34ede4:
    // 0x34ede4: 0x8c85e360  lw          $a1, -0x1CA0($a0)
    ctx->pc = 0x34ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959968)));
label_34ede8:
    // 0x34ede8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34edec:
    // 0x34edec: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x34edecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_34edf0:
    // 0x34edf0: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x34edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_34edf4:
    // 0x34edf4: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x34edf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_34edf8:
    // 0x34edf8: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x34edf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_34edfc:
    // 0x34edfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34ee00:
    // 0x34ee00: 0xa7a821  addu        $s5, $a1, $a3
    ctx->pc = 0x34ee00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_34ee04:
    // 0x34ee04: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x34ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_34ee08:
    // 0x34ee08: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x34ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_34ee0c:
    // 0x34ee0c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x34ee0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_34ee10:
    // 0x34ee10: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x34ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
label_34ee14:
    // 0x34ee14: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x34ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_34ee18:
    // 0x34ee18: 0x8c49e3d8  lw          $t1, -0x1C28($v0)
    ctx->pc = 0x34ee18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_34ee1c:
    // 0x34ee1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34ee20:
    // 0x34ee20: 0x8cc8e378  lw          $t0, -0x1C88($a2)
    ctx->pc = 0x34ee20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294959992)));
label_34ee24:
    // 0x34ee24: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x34ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_34ee28:
    // 0x34ee28: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x34ee28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_34ee2c:
    // 0x34ee2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34ee30:
    // 0x34ee30: 0x109a021  addu        $s4, $t0, $t1
    ctx->pc = 0x34ee30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_34ee34:
    // 0x34ee34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34ee34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ee38:
    // 0x34ee38: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x34ee38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_34ee3c:
    // 0x34ee3c: 0xad140000  sw          $s4, 0x0($t0)
    ctx->pc = 0x34ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 20));
label_34ee40:
    // 0x34ee40: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x34ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_34ee44:
    // 0x34ee44: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x34ee44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_34ee48:
    // 0x34ee48: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x34ee48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_34ee4c:
    // 0x34ee4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34ee50:
    // 0x34ee50: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x34ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_34ee54:
    // 0x34ee54: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x34ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_34ee58:
    // 0x34ee58: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x34ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_34ee5c:
    // 0x34ee5c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x34ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_34ee60:
    // 0x34ee60: 0xc04e4a4  jal         func_139290
label_34ee64:
    if (ctx->pc == 0x34EE64u) {
        ctx->pc = 0x34EE64u;
            // 0x34ee64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34EE68u;
        goto label_34ee68;
    }
    ctx->pc = 0x34EE60u;
    SET_GPR_U32(ctx, 31, 0x34EE68u);
    ctx->pc = 0x34EE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EE60u;
            // 0x34ee64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EE68u; }
        if (ctx->pc != 0x34EE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EE68u; }
        if (ctx->pc != 0x34EE68u) { return; }
    }
    ctx->pc = 0x34EE68u;
label_34ee68:
    // 0x34ee68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34ee68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34ee6c:
    // 0x34ee6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34ee6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34ee70:
    // 0x34ee70: 0xc04cd60  jal         func_133580
label_34ee74:
    if (ctx->pc == 0x34EE74u) {
        ctx->pc = 0x34EE74u;
            // 0x34ee74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34EE78u;
        goto label_34ee78;
    }
    ctx->pc = 0x34EE70u;
    SET_GPR_U32(ctx, 31, 0x34EE78u);
    ctx->pc = 0x34EE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EE70u;
            // 0x34ee74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EE78u; }
        if (ctx->pc != 0x34EE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EE78u; }
        if (ctx->pc != 0x34EE78u) { return; }
    }
    ctx->pc = 0x34EE78u;
label_34ee78:
    // 0x34ee78: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x34ee78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34ee7c:
    // 0x34ee7c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x34ee7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_34ee80:
    // 0x34ee80: 0x320f809  jalr        $t9
label_34ee84:
    if (ctx->pc == 0x34EE84u) {
        ctx->pc = 0x34EE84u;
            // 0x34ee84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34EE88u;
        goto label_34ee88;
    }
    ctx->pc = 0x34EE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34EE88u);
        ctx->pc = 0x34EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EE80u;
            // 0x34ee84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34EE88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34EE88u; }
            if (ctx->pc != 0x34EE88u) { return; }
        }
        }
    }
    ctx->pc = 0x34EE88u;
label_34ee88:
    // 0x34ee88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34ee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34ee8c:
    // 0x34ee8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34ee8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34ee90:
    // 0x34ee90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x34ee90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34ee94:
    // 0x34ee94: 0xc054fd4  jal         func_153F50
label_34ee98:
    if (ctx->pc == 0x34EE98u) {
        ctx->pc = 0x34EE98u;
            // 0x34ee98: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34EE9Cu;
        goto label_34ee9c;
    }
    ctx->pc = 0x34EE94u;
    SET_GPR_U32(ctx, 31, 0x34EE9Cu);
    ctx->pc = 0x34EE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EE94u;
            // 0x34ee98: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EE9Cu; }
        if (ctx->pc != 0x34EE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EE9Cu; }
        if (ctx->pc != 0x34EE9Cu) { return; }
    }
    ctx->pc = 0x34EE9Cu;
label_34ee9c:
    // 0x34ee9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34eea0:
    // 0x34eea0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x34eea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_34eea4:
    // 0x34eea4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34eea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34eea8:
    // 0x34eea8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34eea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34eeac:
    // 0x34eeac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34eeacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34eeb0:
    // 0x34eeb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34eeb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34eeb4:
    // 0x34eeb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34eeb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34eeb8:
    // 0x34eeb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34eeb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34eebc:
    // 0x34eebc: 0x3e00008  jr          $ra
label_34eec0:
    if (ctx->pc == 0x34EEC0u) {
        ctx->pc = 0x34EEC0u;
            // 0x34eec0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x34EEC4u;
        goto label_34eec4;
    }
    ctx->pc = 0x34EEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EEBCu;
            // 0x34eec0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34EEC4u;
label_34eec4:
    // 0x34eec4: 0x0  nop
    ctx->pc = 0x34eec4u;
    // NOP
label_34eec8:
    // 0x34eec8: 0x0  nop
    ctx->pc = 0x34eec8u;
    // NOP
label_34eecc:
    // 0x34eecc: 0x0  nop
    ctx->pc = 0x34eeccu;
    // NOP
}
