#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040EC50
// Address: 0x40ec50 - 0x40eec0
void sub_0040EC50_0x40ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040EC50_0x40ec50");
#endif

    switch (ctx->pc) {
        case 0x40ec50u: goto label_40ec50;
        case 0x40ec54u: goto label_40ec54;
        case 0x40ec58u: goto label_40ec58;
        case 0x40ec5cu: goto label_40ec5c;
        case 0x40ec60u: goto label_40ec60;
        case 0x40ec64u: goto label_40ec64;
        case 0x40ec68u: goto label_40ec68;
        case 0x40ec6cu: goto label_40ec6c;
        case 0x40ec70u: goto label_40ec70;
        case 0x40ec74u: goto label_40ec74;
        case 0x40ec78u: goto label_40ec78;
        case 0x40ec7cu: goto label_40ec7c;
        case 0x40ec80u: goto label_40ec80;
        case 0x40ec84u: goto label_40ec84;
        case 0x40ec88u: goto label_40ec88;
        case 0x40ec8cu: goto label_40ec8c;
        case 0x40ec90u: goto label_40ec90;
        case 0x40ec94u: goto label_40ec94;
        case 0x40ec98u: goto label_40ec98;
        case 0x40ec9cu: goto label_40ec9c;
        case 0x40eca0u: goto label_40eca0;
        case 0x40eca4u: goto label_40eca4;
        case 0x40eca8u: goto label_40eca8;
        case 0x40ecacu: goto label_40ecac;
        case 0x40ecb0u: goto label_40ecb0;
        case 0x40ecb4u: goto label_40ecb4;
        case 0x40ecb8u: goto label_40ecb8;
        case 0x40ecbcu: goto label_40ecbc;
        case 0x40ecc0u: goto label_40ecc0;
        case 0x40ecc4u: goto label_40ecc4;
        case 0x40ecc8u: goto label_40ecc8;
        case 0x40ecccu: goto label_40eccc;
        case 0x40ecd0u: goto label_40ecd0;
        case 0x40ecd4u: goto label_40ecd4;
        case 0x40ecd8u: goto label_40ecd8;
        case 0x40ecdcu: goto label_40ecdc;
        case 0x40ece0u: goto label_40ece0;
        case 0x40ece4u: goto label_40ece4;
        case 0x40ece8u: goto label_40ece8;
        case 0x40ececu: goto label_40ecec;
        case 0x40ecf0u: goto label_40ecf0;
        case 0x40ecf4u: goto label_40ecf4;
        case 0x40ecf8u: goto label_40ecf8;
        case 0x40ecfcu: goto label_40ecfc;
        case 0x40ed00u: goto label_40ed00;
        case 0x40ed04u: goto label_40ed04;
        case 0x40ed08u: goto label_40ed08;
        case 0x40ed0cu: goto label_40ed0c;
        case 0x40ed10u: goto label_40ed10;
        case 0x40ed14u: goto label_40ed14;
        case 0x40ed18u: goto label_40ed18;
        case 0x40ed1cu: goto label_40ed1c;
        case 0x40ed20u: goto label_40ed20;
        case 0x40ed24u: goto label_40ed24;
        case 0x40ed28u: goto label_40ed28;
        case 0x40ed2cu: goto label_40ed2c;
        case 0x40ed30u: goto label_40ed30;
        case 0x40ed34u: goto label_40ed34;
        case 0x40ed38u: goto label_40ed38;
        case 0x40ed3cu: goto label_40ed3c;
        case 0x40ed40u: goto label_40ed40;
        case 0x40ed44u: goto label_40ed44;
        case 0x40ed48u: goto label_40ed48;
        case 0x40ed4cu: goto label_40ed4c;
        case 0x40ed50u: goto label_40ed50;
        case 0x40ed54u: goto label_40ed54;
        case 0x40ed58u: goto label_40ed58;
        case 0x40ed5cu: goto label_40ed5c;
        case 0x40ed60u: goto label_40ed60;
        case 0x40ed64u: goto label_40ed64;
        case 0x40ed68u: goto label_40ed68;
        case 0x40ed6cu: goto label_40ed6c;
        case 0x40ed70u: goto label_40ed70;
        case 0x40ed74u: goto label_40ed74;
        case 0x40ed78u: goto label_40ed78;
        case 0x40ed7cu: goto label_40ed7c;
        case 0x40ed80u: goto label_40ed80;
        case 0x40ed84u: goto label_40ed84;
        case 0x40ed88u: goto label_40ed88;
        case 0x40ed8cu: goto label_40ed8c;
        case 0x40ed90u: goto label_40ed90;
        case 0x40ed94u: goto label_40ed94;
        case 0x40ed98u: goto label_40ed98;
        case 0x40ed9cu: goto label_40ed9c;
        case 0x40eda0u: goto label_40eda0;
        case 0x40eda4u: goto label_40eda4;
        case 0x40eda8u: goto label_40eda8;
        case 0x40edacu: goto label_40edac;
        case 0x40edb0u: goto label_40edb0;
        case 0x40edb4u: goto label_40edb4;
        case 0x40edb8u: goto label_40edb8;
        case 0x40edbcu: goto label_40edbc;
        case 0x40edc0u: goto label_40edc0;
        case 0x40edc4u: goto label_40edc4;
        case 0x40edc8u: goto label_40edc8;
        case 0x40edccu: goto label_40edcc;
        case 0x40edd0u: goto label_40edd0;
        case 0x40edd4u: goto label_40edd4;
        case 0x40edd8u: goto label_40edd8;
        case 0x40eddcu: goto label_40eddc;
        case 0x40ede0u: goto label_40ede0;
        case 0x40ede4u: goto label_40ede4;
        case 0x40ede8u: goto label_40ede8;
        case 0x40edecu: goto label_40edec;
        case 0x40edf0u: goto label_40edf0;
        case 0x40edf4u: goto label_40edf4;
        case 0x40edf8u: goto label_40edf8;
        case 0x40edfcu: goto label_40edfc;
        case 0x40ee00u: goto label_40ee00;
        case 0x40ee04u: goto label_40ee04;
        case 0x40ee08u: goto label_40ee08;
        case 0x40ee0cu: goto label_40ee0c;
        case 0x40ee10u: goto label_40ee10;
        case 0x40ee14u: goto label_40ee14;
        case 0x40ee18u: goto label_40ee18;
        case 0x40ee1cu: goto label_40ee1c;
        case 0x40ee20u: goto label_40ee20;
        case 0x40ee24u: goto label_40ee24;
        case 0x40ee28u: goto label_40ee28;
        case 0x40ee2cu: goto label_40ee2c;
        case 0x40ee30u: goto label_40ee30;
        case 0x40ee34u: goto label_40ee34;
        case 0x40ee38u: goto label_40ee38;
        case 0x40ee3cu: goto label_40ee3c;
        case 0x40ee40u: goto label_40ee40;
        case 0x40ee44u: goto label_40ee44;
        case 0x40ee48u: goto label_40ee48;
        case 0x40ee4cu: goto label_40ee4c;
        case 0x40ee50u: goto label_40ee50;
        case 0x40ee54u: goto label_40ee54;
        case 0x40ee58u: goto label_40ee58;
        case 0x40ee5cu: goto label_40ee5c;
        case 0x40ee60u: goto label_40ee60;
        case 0x40ee64u: goto label_40ee64;
        case 0x40ee68u: goto label_40ee68;
        case 0x40ee6cu: goto label_40ee6c;
        case 0x40ee70u: goto label_40ee70;
        case 0x40ee74u: goto label_40ee74;
        case 0x40ee78u: goto label_40ee78;
        case 0x40ee7cu: goto label_40ee7c;
        case 0x40ee80u: goto label_40ee80;
        case 0x40ee84u: goto label_40ee84;
        case 0x40ee88u: goto label_40ee88;
        case 0x40ee8cu: goto label_40ee8c;
        case 0x40ee90u: goto label_40ee90;
        case 0x40ee94u: goto label_40ee94;
        case 0x40ee98u: goto label_40ee98;
        case 0x40ee9cu: goto label_40ee9c;
        case 0x40eea0u: goto label_40eea0;
        case 0x40eea4u: goto label_40eea4;
        case 0x40eea8u: goto label_40eea8;
        case 0x40eeacu: goto label_40eeac;
        case 0x40eeb0u: goto label_40eeb0;
        case 0x40eeb4u: goto label_40eeb4;
        case 0x40eeb8u: goto label_40eeb8;
        case 0x40eebcu: goto label_40eebc;
        default: break;
    }

    ctx->pc = 0x40ec50u;

label_40ec50:
    // 0x40ec50: 0x3e00008  jr          $ra
label_40ec54:
    if (ctx->pc == 0x40EC54u) {
        ctx->pc = 0x40EC54u;
            // 0x40ec54: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->pc = 0x40EC58u;
        goto label_40ec58;
    }
    ctx->pc = 0x40EC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40EC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EC50u;
            // 0x40ec54: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40EC58u;
label_40ec58:
    // 0x40ec58: 0x0  nop
    ctx->pc = 0x40ec58u;
    // NOP
label_40ec5c:
    // 0x40ec5c: 0x0  nop
    ctx->pc = 0x40ec5cu;
    // NOP
label_40ec60:
    // 0x40ec60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40ec64:
    // 0x40ec64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40ec68:
    // 0x40ec68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40ec6c:
    // 0x40ec6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40ec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40ec70:
    // 0x40ec70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40ec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40ec74:
    // 0x40ec74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40ec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40ec78:
    // 0x40ec78: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x40ec78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_40ec7c:
    // 0x40ec7c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_40ec80:
    if (ctx->pc == 0x40EC80u) {
        ctx->pc = 0x40EC80u;
            // 0x40ec80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40EC84u;
        goto label_40ec84;
    }
    ctx->pc = 0x40EC7Cu;
    {
        const bool branch_taken_0x40ec7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EC7Cu;
            // 0x40ec80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ec7c) {
            ctx->pc = 0x40ECB8u;
            goto label_40ecb8;
        }
    }
    ctx->pc = 0x40EC84u;
label_40ec84:
    // 0x40ec84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x40ec84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ec88:
    // 0x40ec88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40ec88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ec8c:
    // 0x40ec8c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x40ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_40ec90:
    // 0x40ec90: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x40ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_40ec94:
    // 0x40ec94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x40ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40ec98:
    // 0x40ec98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40ec98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40ec9c:
    // 0x40ec9c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x40ec9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_40eca0:
    // 0x40eca0: 0x320f809  jalr        $t9
label_40eca4:
    if (ctx->pc == 0x40ECA4u) {
        ctx->pc = 0x40ECA8u;
        goto label_40eca8;
    }
    ctx->pc = 0x40ECA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40ECA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40ECA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40ECA8u; }
            if (ctx->pc != 0x40ECA8u) { return; }
        }
        }
    }
    ctx->pc = 0x40ECA8u;
label_40eca8:
    // 0x40eca8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x40eca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_40ecac:
    // 0x40ecac: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x40ecacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_40ecb0:
    // 0x40ecb0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_40ecb4:
    if (ctx->pc == 0x40ECB4u) {
        ctx->pc = 0x40ECB4u;
            // 0x40ecb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x40ECB8u;
        goto label_40ecb8;
    }
    ctx->pc = 0x40ECB0u;
    {
        const bool branch_taken_0x40ecb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40ECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40ECB0u;
            // 0x40ecb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ecb0) {
            ctx->pc = 0x40EC8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40ec8c;
        }
    }
    ctx->pc = 0x40ECB8u;
label_40ecb8:
    // 0x40ecb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40ecb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40ecbc:
    // 0x40ecbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40ecbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40ecc0:
    // 0x40ecc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40ecc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40ecc4:
    // 0x40ecc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40ecc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40ecc8:
    // 0x40ecc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40ecc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40eccc:
    // 0x40eccc: 0x3e00008  jr          $ra
label_40ecd0:
    if (ctx->pc == 0x40ECD0u) {
        ctx->pc = 0x40ECD0u;
            // 0x40ecd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40ECD4u;
        goto label_40ecd4;
    }
    ctx->pc = 0x40ECCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40ECD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40ECCCu;
            // 0x40ecd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40ECD4u;
label_40ecd4:
    // 0x40ecd4: 0x0  nop
    ctx->pc = 0x40ecd4u;
    // NOP
label_40ecd8:
    // 0x40ecd8: 0x0  nop
    ctx->pc = 0x40ecd8u;
    // NOP
label_40ecdc:
    // 0x40ecdc: 0x0  nop
    ctx->pc = 0x40ecdcu;
    // NOP
label_40ece0:
    // 0x40ece0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_40ece4:
    // 0x40ece4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40ece8:
    // 0x40ece8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40ecec:
    // 0x40ecec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40ececu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40ecf0:
    // 0x40ecf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40ecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40ecf4:
    // 0x40ecf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40ecf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40ecf8:
    // 0x40ecf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40ecfc:
    // 0x40ecfc: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x40ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_40ed00:
    // 0x40ed00: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_40ed04:
    if (ctx->pc == 0x40ED04u) {
        ctx->pc = 0x40ED04u;
            // 0x40ed04: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40ED08u;
        goto label_40ed08;
    }
    ctx->pc = 0x40ED00u;
    {
        const bool branch_taken_0x40ed00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x40ED04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40ED00u;
            // 0x40ed04: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ed00) {
            ctx->pc = 0x40ED24u;
            goto label_40ed24;
        }
    }
    ctx->pc = 0x40ED08u;
label_40ed08:
    // 0x40ed08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40ed0c:
    // 0x40ed0c: 0x50830062  beql        $a0, $v1, . + 4 + (0x62 << 2)
label_40ed10:
    if (ctx->pc == 0x40ED10u) {
        ctx->pc = 0x40ED10u;
            // 0x40ed10: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x40ED14u;
        goto label_40ed14;
    }
    ctx->pc = 0x40ED0Cu;
    {
        const bool branch_taken_0x40ed0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x40ed0c) {
            ctx->pc = 0x40ED10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40ED0Cu;
            // 0x40ed10: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40EE98u;
            goto label_40ee98;
        }
    }
    ctx->pc = 0x40ED14u;
label_40ed14:
    // 0x40ed14: 0x1080005f  beqz        $a0, . + 4 + (0x5F << 2)
label_40ed18:
    if (ctx->pc == 0x40ED18u) {
        ctx->pc = 0x40ED1Cu;
        goto label_40ed1c;
    }
    ctx->pc = 0x40ED14u;
    {
        const bool branch_taken_0x40ed14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ed14) {
            ctx->pc = 0x40EE94u;
            goto label_40ee94;
        }
    }
    ctx->pc = 0x40ED1Cu;
label_40ed1c:
    // 0x40ed1c: 0x1000005d  b           . + 4 + (0x5D << 2)
label_40ed20:
    if (ctx->pc == 0x40ED20u) {
        ctx->pc = 0x40ED24u;
        goto label_40ed24;
    }
    ctx->pc = 0x40ED1Cu;
    {
        const bool branch_taken_0x40ed1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ed1c) {
            ctx->pc = 0x40EE94u;
            goto label_40ee94;
        }
    }
    ctx->pc = 0x40ED24u;
label_40ed24:
    // 0x40ed24: 0x8e430e30  lw          $v1, 0xE30($s2)
    ctx->pc = 0x40ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
label_40ed28:
    // 0x40ed28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x40ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40ed2c:
    // 0x40ed2c: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_40ed30:
    if (ctx->pc == 0x40ED30u) {
        ctx->pc = 0x40ED30u;
            // 0x40ed30: 0x26510580  addiu       $s1, $s2, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
        ctx->pc = 0x40ED34u;
        goto label_40ed34;
    }
    ctx->pc = 0x40ED2Cu;
    {
        const bool branch_taken_0x40ed2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x40ED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40ED2Cu;
            // 0x40ed30: 0x26510580  addiu       $s1, $s2, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ed2c) {
            ctx->pc = 0x40EE24u;
            goto label_40ee24;
        }
    }
    ctx->pc = 0x40ED34u;
label_40ed34:
    // 0x40ed34: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x40ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_40ed38:
    // 0x40ed38: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x40ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_40ed3c:
    // 0x40ed3c: 0x5062003a  beql        $v1, $v0, . + 4 + (0x3A << 2)
label_40ed40:
    if (ctx->pc == 0x40ED40u) {
        ctx->pc = 0x40ED40u;
            // 0x40ed40: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x40ED44u;
        goto label_40ed44;
    }
    ctx->pc = 0x40ED3Cu;
    {
        const bool branch_taken_0x40ed3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x40ed3c) {
            ctx->pc = 0x40ED40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40ED3Cu;
            // 0x40ed40: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40EE28u;
            goto label_40ee28;
        }
    }
    ctx->pc = 0x40ED44u;
label_40ed44:
    // 0x40ed44: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x40ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_40ed48:
    // 0x40ed48: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x40ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
label_40ed4c:
    // 0x40ed4c: 0xc04cc04  jal         func_133010
label_40ed50:
    if (ctx->pc == 0x40ED50u) {
        ctx->pc = 0x40ED50u;
            // 0x40ed50: 0x24a5bd10  addiu       $a1, $a1, -0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950160));
        ctx->pc = 0x40ED54u;
        goto label_40ed54;
    }
    ctx->pc = 0x40ED4Cu;
    SET_GPR_U32(ctx, 31, 0x40ED54u);
    ctx->pc = 0x40ED50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40ED4Cu;
            // 0x40ed50: 0x24a5bd10  addiu       $a1, $a1, -0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40ED54u; }
        if (ctx->pc != 0x40ED54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40ED54u; }
        if (ctx->pc != 0x40ED54u) { return; }
    }
    ctx->pc = 0x40ED54u;
label_40ed54:
    // 0x40ed54: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x40ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_40ed58:
    // 0x40ed58: 0xc075318  jal         func_1D4C60
label_40ed5c:
    if (ctx->pc == 0x40ED5Cu) {
        ctx->pc = 0x40ED5Cu;
            // 0x40ed5c: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->pc = 0x40ED60u;
        goto label_40ed60;
    }
    ctx->pc = 0x40ED58u;
    SET_GPR_U32(ctx, 31, 0x40ED60u);
    ctx->pc = 0x40ED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40ED58u;
            // 0x40ed5c: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40ED60u; }
        if (ctx->pc != 0x40ED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40ED60u; }
        if (ctx->pc != 0x40ED60u) { return; }
    }
    ctx->pc = 0x40ED60u;
label_40ed60:
    // 0x40ed60: 0x264307e0  addiu       $v1, $s2, 0x7E0
    ctx->pc = 0x40ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
label_40ed64:
    // 0x40ed64: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x40ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_40ed68:
    // 0x40ed68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40ed68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40ed6c:
    // 0x40ed6c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x40ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_40ed70:
    // 0x40ed70: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x40ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_40ed74:
    // 0x40ed74: 0xc0c6250  jal         func_318940
label_40ed78:
    if (ctx->pc == 0x40ED78u) {
        ctx->pc = 0x40ED78u;
            // 0x40ed78: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x40ED7Cu;
        goto label_40ed7c;
    }
    ctx->pc = 0x40ED74u;
    SET_GPR_U32(ctx, 31, 0x40ED7Cu);
    ctx->pc = 0x40ED78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40ED74u;
            // 0x40ed78: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40ED7Cu; }
        if (ctx->pc != 0x40ED7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40ED7Cu; }
        if (ctx->pc != 0x40ED7Cu) { return; }
    }
    ctx->pc = 0x40ED7Cu;
label_40ed7c:
    // 0x40ed7c: 0xc0b9210  jal         func_2E4840
label_40ed80:
    if (ctx->pc == 0x40ED80u) {
        ctx->pc = 0x40ED80u;
            // 0x40ed80: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->pc = 0x40ED84u;
        goto label_40ed84;
    }
    ctx->pc = 0x40ED7Cu;
    SET_GPR_U32(ctx, 31, 0x40ED84u);
    ctx->pc = 0x40ED80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40ED7Cu;
            // 0x40ed80: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40ED84u; }
        if (ctx->pc != 0x40ED84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40ED84u; }
        if (ctx->pc != 0x40ED84u) { return; }
    }
    ctx->pc = 0x40ED84u;
label_40ed84:
    // 0x40ed84: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x40ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_40ed88:
    // 0x40ed88: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x40ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_40ed8c:
    // 0x40ed8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40ed8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40ed90:
    // 0x40ed90: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x40ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_40ed94:
    // 0x40ed94: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x40ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_40ed98:
    // 0x40ed98: 0xc0c6250  jal         func_318940
label_40ed9c:
    if (ctx->pc == 0x40ED9Cu) {
        ctx->pc = 0x40ED9Cu;
            // 0x40ed9c: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x40EDA0u;
        goto label_40eda0;
    }
    ctx->pc = 0x40ED98u;
    SET_GPR_U32(ctx, 31, 0x40EDA0u);
    ctx->pc = 0x40ED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40ED98u;
            // 0x40ed9c: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EDA0u; }
        if (ctx->pc != 0x40EDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EDA0u; }
        if (ctx->pc != 0x40EDA0u) { return; }
    }
    ctx->pc = 0x40EDA0u;
label_40eda0:
    // 0x40eda0: 0x8e500d74  lw          $s0, 0xD74($s2)
    ctx->pc = 0x40eda0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_40eda4:
    // 0x40eda4: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x40eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_40eda8:
    // 0x40eda8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x40eda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_40edac:
    // 0x40edac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x40edacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40edb0:
    // 0x40edb0: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x40edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_40edb4:
    // 0x40edb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x40edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40edb8:
    // 0x40edb8: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x40edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_40edbc:
    // 0x40edbc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x40edbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_40edc0:
    // 0x40edc0: 0xc0a545c  jal         func_295170
label_40edc4:
    if (ctx->pc == 0x40EDC4u) {
        ctx->pc = 0x40EDC4u;
            // 0x40edc4: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x40EDC8u;
        goto label_40edc8;
    }
    ctx->pc = 0x40EDC0u;
    SET_GPR_U32(ctx, 31, 0x40EDC8u);
    ctx->pc = 0x40EDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EDC0u;
            // 0x40edc4: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EDC8u; }
        if (ctx->pc != 0x40EDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EDC8u; }
        if (ctx->pc != 0x40EDC8u) { return; }
    }
    ctx->pc = 0x40EDC8u;
label_40edc8:
    // 0x40edc8: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x40edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_40edcc:
    // 0x40edcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40edccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40edd0:
    // 0x40edd0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x40edd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40edd4:
    // 0x40edd4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x40edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_40edd8:
    // 0x40edd8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x40edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40eddc:
    // 0x40eddc: 0xc08bf20  jal         func_22FC80
label_40ede0:
    if (ctx->pc == 0x40EDE0u) {
        ctx->pc = 0x40EDE0u;
            // 0x40ede0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40EDE4u;
        goto label_40ede4;
    }
    ctx->pc = 0x40EDDCu;
    SET_GPR_U32(ctx, 31, 0x40EDE4u);
    ctx->pc = 0x40EDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EDDCu;
            // 0x40ede0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EDE4u; }
        if (ctx->pc != 0x40EDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EDE4u; }
        if (ctx->pc != 0x40EDE4u) { return; }
    }
    ctx->pc = 0x40EDE4u;
label_40ede4:
    // 0x40ede4: 0xc04c968  jal         func_1325A0
label_40ede8:
    if (ctx->pc == 0x40EDE8u) {
        ctx->pc = 0x40EDE8u;
            // 0x40ede8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40EDECu;
        goto label_40edec;
    }
    ctx->pc = 0x40EDE4u;
    SET_GPR_U32(ctx, 31, 0x40EDECu);
    ctx->pc = 0x40EDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EDE4u;
            // 0x40ede8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EDECu; }
        if (ctx->pc != 0x40EDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EDECu; }
        if (ctx->pc != 0x40EDECu) { return; }
    }
    ctx->pc = 0x40EDECu;
label_40edec:
    // 0x40edec: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x40edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_40edf0:
    // 0x40edf0: 0xc04c74c  jal         func_131D30
label_40edf4:
    if (ctx->pc == 0x40EDF4u) {
        ctx->pc = 0x40EDF4u;
            // 0x40edf4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40EDF8u;
        goto label_40edf8;
    }
    ctx->pc = 0x40EDF0u;
    SET_GPR_U32(ctx, 31, 0x40EDF8u);
    ctx->pc = 0x40EDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EDF0u;
            // 0x40edf4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EDF8u; }
        if (ctx->pc != 0x40EDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EDF8u; }
        if (ctx->pc != 0x40EDF8u) { return; }
    }
    ctx->pc = 0x40EDF8u;
label_40edf8:
    // 0x40edf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40edf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40edfc:
    // 0x40edfc: 0xc04f278  jal         func_13C9E0
label_40ee00:
    if (ctx->pc == 0x40EE00u) {
        ctx->pc = 0x40EE00u;
            // 0x40ee00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40EE04u;
        goto label_40ee04;
    }
    ctx->pc = 0x40EDFCu;
    SET_GPR_U32(ctx, 31, 0x40EE04u);
    ctx->pc = 0x40EE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EDFCu;
            // 0x40ee00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE04u; }
        if (ctx->pc != 0x40EE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE04u; }
        if (ctx->pc != 0x40EE04u) { return; }
    }
    ctx->pc = 0x40EE04u;
label_40ee04:
    // 0x40ee04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40ee04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40ee08:
    // 0x40ee08: 0xc0ab808  jal         func_2AE020
label_40ee0c:
    if (ctx->pc == 0x40EE0Cu) {
        ctx->pc = 0x40EE0Cu;
            // 0x40ee0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40EE10u;
        goto label_40ee10;
    }
    ctx->pc = 0x40EE08u;
    SET_GPR_U32(ctx, 31, 0x40EE10u);
    ctx->pc = 0x40EE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EE08u;
            // 0x40ee0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE10u; }
        if (ctx->pc != 0x40EE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE10u; }
        if (ctx->pc != 0x40EE10u) { return; }
    }
    ctx->pc = 0x40EE10u;
label_40ee10:
    // 0x40ee10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40ee14:
    // 0x40ee14: 0xc0767c8  jal         func_1D9F20
label_40ee18:
    if (ctx->pc == 0x40EE18u) {
        ctx->pc = 0x40EE18u;
            // 0x40ee18: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->pc = 0x40EE1Cu;
        goto label_40ee1c;
    }
    ctx->pc = 0x40EE14u;
    SET_GPR_U32(ctx, 31, 0x40EE1Cu);
    ctx->pc = 0x40EE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EE14u;
            // 0x40ee18: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F20u;
    if (runtime->hasFunction(0x1D9F20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE1Cu; }
        if (ctx->pc != 0x40EE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F20_0x1d9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE1Cu; }
        if (ctx->pc != 0x40EE1Cu) { return; }
    }
    ctx->pc = 0x40EE1Cu;
label_40ee1c:
    // 0x40ee1c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_40ee20:
    if (ctx->pc == 0x40EE20u) {
        ctx->pc = 0x40EE24u;
        goto label_40ee24;
    }
    ctx->pc = 0x40EE1Cu;
    {
        const bool branch_taken_0x40ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ee1c) {
            ctx->pc = 0x40EE94u;
            goto label_40ee94;
        }
    }
    ctx->pc = 0x40EE24u;
label_40ee24:
    // 0x40ee24: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x40ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_40ee28:
    // 0x40ee28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40ee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40ee2c:
    // 0x40ee2c: 0xc0ab5f0  jal         func_2AD7C0
label_40ee30:
    if (ctx->pc == 0x40EE30u) {
        ctx->pc = 0x40EE30u;
            // 0x40ee30: 0x26440580  addiu       $a0, $s2, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
        ctx->pc = 0x40EE34u;
        goto label_40ee34;
    }
    ctx->pc = 0x40EE2Cu;
    SET_GPR_U32(ctx, 31, 0x40EE34u);
    ctx->pc = 0x40EE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EE2Cu;
            // 0x40ee30: 0x26440580  addiu       $a0, $s2, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD7C0u;
    if (runtime->hasFunction(0x2AD7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE34u; }
        if (ctx->pc != 0x40EE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD7C0_0x2ad7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE34u; }
        if (ctx->pc != 0x40EE34u) { return; }
    }
    ctx->pc = 0x40EE34u;
label_40ee34:
    // 0x40ee34: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x40ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_40ee38:
    // 0x40ee38: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x40ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
label_40ee3c:
    // 0x40ee3c: 0xc04cc04  jal         func_133010
label_40ee40:
    if (ctx->pc == 0x40EE40u) {
        ctx->pc = 0x40EE40u;
            // 0x40ee40: 0x24a5bd10  addiu       $a1, $a1, -0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950160));
        ctx->pc = 0x40EE44u;
        goto label_40ee44;
    }
    ctx->pc = 0x40EE3Cu;
    SET_GPR_U32(ctx, 31, 0x40EE44u);
    ctx->pc = 0x40EE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EE3Cu;
            // 0x40ee40: 0x24a5bd10  addiu       $a1, $a1, -0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE44u; }
        if (ctx->pc != 0x40EE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE44u; }
        if (ctx->pc != 0x40EE44u) { return; }
    }
    ctx->pc = 0x40EE44u;
label_40ee44:
    // 0x40ee44: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x40ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_40ee48:
    // 0x40ee48: 0xc075318  jal         func_1D4C60
label_40ee4c:
    if (ctx->pc == 0x40EE4Cu) {
        ctx->pc = 0x40EE4Cu;
            // 0x40ee4c: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->pc = 0x40EE50u;
        goto label_40ee50;
    }
    ctx->pc = 0x40EE48u;
    SET_GPR_U32(ctx, 31, 0x40EE50u);
    ctx->pc = 0x40EE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EE48u;
            // 0x40ee4c: 0x264502e0  addiu       $a1, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE50u; }
        if (ctx->pc != 0x40EE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE50u; }
        if (ctx->pc != 0x40EE50u) { return; }
    }
    ctx->pc = 0x40EE50u;
label_40ee50:
    // 0x40ee50: 0x26450560  addiu       $a1, $s2, 0x560
    ctx->pc = 0x40ee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_40ee54:
    // 0x40ee54: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x40ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
label_40ee58:
    // 0x40ee58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40ee58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40ee5c:
    // 0x40ee5c: 0xc0c6250  jal         func_318940
label_40ee60:
    if (ctx->pc == 0x40EE60u) {
        ctx->pc = 0x40EE60u;
            // 0x40ee60: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40EE64u;
        goto label_40ee64;
    }
    ctx->pc = 0x40EE5Cu;
    SET_GPR_U32(ctx, 31, 0x40EE64u);
    ctx->pc = 0x40EE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EE5Cu;
            // 0x40ee60: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE64u; }
        if (ctx->pc != 0x40EE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE64u; }
        if (ctx->pc != 0x40EE64u) { return; }
    }
    ctx->pc = 0x40EE64u;
label_40ee64:
    // 0x40ee64: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x40ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_40ee68:
    // 0x40ee68: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x40ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_40ee6c:
    // 0x40ee6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40ee6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40ee70:
    // 0x40ee70: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x40ee70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_40ee74:
    // 0x40ee74: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x40ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_40ee78:
    // 0x40ee78: 0xc0c6250  jal         func_318940
label_40ee7c:
    if (ctx->pc == 0x40EE7Cu) {
        ctx->pc = 0x40EE7Cu;
            // 0x40ee7c: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x40EE80u;
        goto label_40ee80;
    }
    ctx->pc = 0x40EE78u;
    SET_GPR_U32(ctx, 31, 0x40EE80u);
    ctx->pc = 0x40EE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EE78u;
            // 0x40ee7c: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE80u; }
        if (ctx->pc != 0x40EE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE80u; }
        if (ctx->pc != 0x40EE80u) { return; }
    }
    ctx->pc = 0x40EE80u;
label_40ee80:
    // 0x40ee80: 0xc0b9210  jal         func_2E4840
label_40ee84:
    if (ctx->pc == 0x40EE84u) {
        ctx->pc = 0x40EE84u;
            // 0x40ee84: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->pc = 0x40EE88u;
        goto label_40ee88;
    }
    ctx->pc = 0x40EE80u;
    SET_GPR_U32(ctx, 31, 0x40EE88u);
    ctx->pc = 0x40EE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EE80u;
            // 0x40ee84: 0x264407e0  addiu       $a0, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE88u; }
        if (ctx->pc != 0x40EE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE88u; }
        if (ctx->pc != 0x40EE88u) { return; }
    }
    ctx->pc = 0x40EE88u;
label_40ee88:
    // 0x40ee88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40ee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40ee8c:
    // 0x40ee8c: 0xc0767c8  jal         func_1D9F20
label_40ee90:
    if (ctx->pc == 0x40EE90u) {
        ctx->pc = 0x40EE90u;
            // 0x40ee90: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->pc = 0x40EE94u;
        goto label_40ee94;
    }
    ctx->pc = 0x40EE8Cu;
    SET_GPR_U32(ctx, 31, 0x40EE94u);
    ctx->pc = 0x40EE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40EE8Cu;
            // 0x40ee90: 0x26450300  addiu       $a1, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F20u;
    if (runtime->hasFunction(0x1D9F20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE94u; }
        if (ctx->pc != 0x40EE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F20_0x1d9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40EE94u; }
        if (ctx->pc != 0x40EE94u) { return; }
    }
    ctx->pc = 0x40EE94u;
label_40ee94:
    // 0x40ee94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40ee94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40ee98:
    // 0x40ee98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40ee98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40ee9c:
    // 0x40ee9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40ee9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40eea0:
    // 0x40eea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40eea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40eea4:
    // 0x40eea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40eea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40eea8:
    // 0x40eea8: 0x3e00008  jr          $ra
label_40eeac:
    if (ctx->pc == 0x40EEACu) {
        ctx->pc = 0x40EEACu;
            // 0x40eeac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x40EEB0u;
        goto label_40eeb0;
    }
    ctx->pc = 0x40EEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40EEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40EEA8u;
            // 0x40eeac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40EEB0u;
label_40eeb0:
    // 0x40eeb0: 0x3e00008  jr          $ra
label_40eeb4:
    if (ctx->pc == 0x40EEB4u) {
        ctx->pc = 0x40EEB8u;
        goto label_40eeb8;
    }
    ctx->pc = 0x40EEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40EEB8u;
label_40eeb8:
    // 0x40eeb8: 0x0  nop
    ctx->pc = 0x40eeb8u;
    // NOP
label_40eebc:
    // 0x40eebc: 0x0  nop
    ctx->pc = 0x40eebcu;
    // NOP
}
