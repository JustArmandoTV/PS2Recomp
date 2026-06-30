#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045BE40
// Address: 0x45be40 - 0x45bfd0
void sub_0045BE40_0x45be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045BE40_0x45be40");
#endif

    switch (ctx->pc) {
        case 0x45be40u: goto label_45be40;
        case 0x45be44u: goto label_45be44;
        case 0x45be48u: goto label_45be48;
        case 0x45be4cu: goto label_45be4c;
        case 0x45be50u: goto label_45be50;
        case 0x45be54u: goto label_45be54;
        case 0x45be58u: goto label_45be58;
        case 0x45be5cu: goto label_45be5c;
        case 0x45be60u: goto label_45be60;
        case 0x45be64u: goto label_45be64;
        case 0x45be68u: goto label_45be68;
        case 0x45be6cu: goto label_45be6c;
        case 0x45be70u: goto label_45be70;
        case 0x45be74u: goto label_45be74;
        case 0x45be78u: goto label_45be78;
        case 0x45be7cu: goto label_45be7c;
        case 0x45be80u: goto label_45be80;
        case 0x45be84u: goto label_45be84;
        case 0x45be88u: goto label_45be88;
        case 0x45be8cu: goto label_45be8c;
        case 0x45be90u: goto label_45be90;
        case 0x45be94u: goto label_45be94;
        case 0x45be98u: goto label_45be98;
        case 0x45be9cu: goto label_45be9c;
        case 0x45bea0u: goto label_45bea0;
        case 0x45bea4u: goto label_45bea4;
        case 0x45bea8u: goto label_45bea8;
        case 0x45beacu: goto label_45beac;
        case 0x45beb0u: goto label_45beb0;
        case 0x45beb4u: goto label_45beb4;
        case 0x45beb8u: goto label_45beb8;
        case 0x45bebcu: goto label_45bebc;
        case 0x45bec0u: goto label_45bec0;
        case 0x45bec4u: goto label_45bec4;
        case 0x45bec8u: goto label_45bec8;
        case 0x45beccu: goto label_45becc;
        case 0x45bed0u: goto label_45bed0;
        case 0x45bed4u: goto label_45bed4;
        case 0x45bed8u: goto label_45bed8;
        case 0x45bedcu: goto label_45bedc;
        case 0x45bee0u: goto label_45bee0;
        case 0x45bee4u: goto label_45bee4;
        case 0x45bee8u: goto label_45bee8;
        case 0x45beecu: goto label_45beec;
        case 0x45bef0u: goto label_45bef0;
        case 0x45bef4u: goto label_45bef4;
        case 0x45bef8u: goto label_45bef8;
        case 0x45befcu: goto label_45befc;
        case 0x45bf00u: goto label_45bf00;
        case 0x45bf04u: goto label_45bf04;
        case 0x45bf08u: goto label_45bf08;
        case 0x45bf0cu: goto label_45bf0c;
        case 0x45bf10u: goto label_45bf10;
        case 0x45bf14u: goto label_45bf14;
        case 0x45bf18u: goto label_45bf18;
        case 0x45bf1cu: goto label_45bf1c;
        case 0x45bf20u: goto label_45bf20;
        case 0x45bf24u: goto label_45bf24;
        case 0x45bf28u: goto label_45bf28;
        case 0x45bf2cu: goto label_45bf2c;
        case 0x45bf30u: goto label_45bf30;
        case 0x45bf34u: goto label_45bf34;
        case 0x45bf38u: goto label_45bf38;
        case 0x45bf3cu: goto label_45bf3c;
        case 0x45bf40u: goto label_45bf40;
        case 0x45bf44u: goto label_45bf44;
        case 0x45bf48u: goto label_45bf48;
        case 0x45bf4cu: goto label_45bf4c;
        case 0x45bf50u: goto label_45bf50;
        case 0x45bf54u: goto label_45bf54;
        case 0x45bf58u: goto label_45bf58;
        case 0x45bf5cu: goto label_45bf5c;
        case 0x45bf60u: goto label_45bf60;
        case 0x45bf64u: goto label_45bf64;
        case 0x45bf68u: goto label_45bf68;
        case 0x45bf6cu: goto label_45bf6c;
        case 0x45bf70u: goto label_45bf70;
        case 0x45bf74u: goto label_45bf74;
        case 0x45bf78u: goto label_45bf78;
        case 0x45bf7cu: goto label_45bf7c;
        case 0x45bf80u: goto label_45bf80;
        case 0x45bf84u: goto label_45bf84;
        case 0x45bf88u: goto label_45bf88;
        case 0x45bf8cu: goto label_45bf8c;
        case 0x45bf90u: goto label_45bf90;
        case 0x45bf94u: goto label_45bf94;
        case 0x45bf98u: goto label_45bf98;
        case 0x45bf9cu: goto label_45bf9c;
        case 0x45bfa0u: goto label_45bfa0;
        case 0x45bfa4u: goto label_45bfa4;
        case 0x45bfa8u: goto label_45bfa8;
        case 0x45bfacu: goto label_45bfac;
        case 0x45bfb0u: goto label_45bfb0;
        case 0x45bfb4u: goto label_45bfb4;
        case 0x45bfb8u: goto label_45bfb8;
        case 0x45bfbcu: goto label_45bfbc;
        case 0x45bfc0u: goto label_45bfc0;
        case 0x45bfc4u: goto label_45bfc4;
        case 0x45bfc8u: goto label_45bfc8;
        case 0x45bfccu: goto label_45bfcc;
        default: break;
    }

    ctx->pc = 0x45be40u;

label_45be40:
    // 0x45be40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x45be40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_45be44:
    // 0x45be44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45be44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_45be48:
    // 0x45be48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45be48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45be4c:
    // 0x45be4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45be4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45be50:
    // 0x45be50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x45be50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45be54:
    // 0x45be54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45be54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45be58:
    // 0x45be58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45be5c:
    // 0x45be5c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_45be60:
    // 0x45be60: 0xc0c9a58  jal         func_326960
label_45be64:
    if (ctx->pc == 0x45BE64u) {
        ctx->pc = 0x45BE64u;
            // 0x45be64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45BE68u;
        goto label_45be68;
    }
    ctx->pc = 0x45BE60u;
    SET_GPR_U32(ctx, 31, 0x45BE68u);
    ctx->pc = 0x45BE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BE60u;
            // 0x45be64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BE68u; }
        if (ctx->pc != 0x45BE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BE68u; }
        if (ctx->pc != 0x45BE68u) { return; }
    }
    ctx->pc = 0x45BE68u;
label_45be68:
    // 0x45be68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45be68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45be6c:
    // 0x45be6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45be70:
    // 0x45be70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45be70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45be74:
    // 0x45be74: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x45be74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_45be78:
    // 0x45be78: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x45be78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_45be7c:
    // 0x45be7c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x45be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_45be80:
    // 0x45be80: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x45be80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_45be84:
    // 0x45be84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x45be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_45be88:
    // 0x45be88: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45be88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45be8c:
    // 0x45be8c: 0x94840046  lhu         $a0, 0x46($a0)
    ctx->pc = 0x45be8cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_45be90:
    // 0x45be90: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_45be94:
    if (ctx->pc == 0x45BE94u) {
        ctx->pc = 0x45BE94u;
            // 0x45be94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BE98u;
        goto label_45be98;
    }
    ctx->pc = 0x45BE90u;
    {
        const bool branch_taken_0x45be90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x45BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BE90u;
            // 0x45be94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45be90) {
            ctx->pc = 0x45BEE4u;
            goto label_45bee4;
        }
    }
    ctx->pc = 0x45BE98u;
label_45be98:
    // 0x45be98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x45be98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45be9c:
    // 0x45be9c: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x45be9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_45bea0:
    // 0x45bea0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x45bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45bea4:
    // 0x45bea4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x45bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_45bea8:
    // 0x45bea8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x45bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_45beac:
    // 0x45beac: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x45beacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_45beb0:
    // 0x45beb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45beb4:
    // 0x45beb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45beb8:
    // 0x45beb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45bebc:
    // 0x45bebc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x45bebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45bec0:
    // 0x45bec0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x45bec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_45bec4:
    // 0x45bec4: 0x320f809  jalr        $t9
label_45bec8:
    if (ctx->pc == 0x45BEC8u) {
        ctx->pc = 0x45BEC8u;
            // 0x45bec8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BECCu;
        goto label_45becc;
    }
    ctx->pc = 0x45BEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45BECCu);
        ctx->pc = 0x45BEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BEC4u;
            // 0x45bec8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45BECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45BECCu; }
            if (ctx->pc != 0x45BECCu) { return; }
        }
        }
    }
    ctx->pc = 0x45BECCu;
label_45becc:
    // 0x45becc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x45beccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_45bed0:
    // 0x45bed0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x45bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_45bed4:
    // 0x45bed4: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x45bed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_45bed8:
    // 0x45bed8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_45bedc:
    if (ctx->pc == 0x45BEDCu) {
        ctx->pc = 0x45BEDCu;
            // 0x45bedc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x45BEE0u;
        goto label_45bee0;
    }
    ctx->pc = 0x45BED8u;
    {
        const bool branch_taken_0x45bed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x45BEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BED8u;
            // 0x45bedc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45bed8) {
            ctx->pc = 0x45BEA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_45bea0;
        }
    }
    ctx->pc = 0x45BEE0u;
label_45bee0:
    // 0x45bee0: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x45bee0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_45bee4:
    // 0x45bee4: 0x50c00031  beql        $a2, $zero, . + 4 + (0x31 << 2)
label_45bee8:
    if (ctx->pc == 0x45BEE8u) {
        ctx->pc = 0x45BEE8u;
            // 0x45bee8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x45BEECu;
        goto label_45beec;
    }
    ctx->pc = 0x45BEE4u;
    {
        const bool branch_taken_0x45bee4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bee4) {
            ctx->pc = 0x45BEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BEE4u;
            // 0x45bee8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BFACu;
            goto label_45bfac;
        }
    }
    ctx->pc = 0x45BEECu;
label_45beec:
    // 0x45beec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x45beecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_45bef0:
    // 0x45bef0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x45bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_45bef4:
    // 0x45bef4: 0x50830018  beql        $a0, $v1, . + 4 + (0x18 << 2)
label_45bef8:
    if (ctx->pc == 0x45BEF8u) {
        ctx->pc = 0x45BEF8u;
            // 0x45bef8: 0x8e650070  lw          $a1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x45BEFCu;
        goto label_45befc;
    }
    ctx->pc = 0x45BEF4u;
    {
        const bool branch_taken_0x45bef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x45bef4) {
            ctx->pc = 0x45BEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BEF4u;
            // 0x45bef8: 0x8e650070  lw          $a1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BF58u;
            goto label_45bf58;
        }
    }
    ctx->pc = 0x45BEFCu;
label_45befc:
    // 0x45befc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x45befcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_45bf00:
    // 0x45bf00: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_45bf04:
    if (ctx->pc == 0x45BF04u) {
        ctx->pc = 0x45BF04u;
            // 0x45bf04: 0x8e650070  lw          $a1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x45BF08u;
        goto label_45bf08;
    }
    ctx->pc = 0x45BF00u;
    {
        const bool branch_taken_0x45bf00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x45bf00) {
            ctx->pc = 0x45BF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BF00u;
            // 0x45bf04: 0x8e650070  lw          $a1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BF10u;
            goto label_45bf10;
        }
    }
    ctx->pc = 0x45BF08u;
label_45bf08:
    // 0x45bf08: 0x10000027  b           . + 4 + (0x27 << 2)
label_45bf0c:
    if (ctx->pc == 0x45BF0Cu) {
        ctx->pc = 0x45BF10u;
        goto label_45bf10;
    }
    ctx->pc = 0x45BF08u;
    {
        const bool branch_taken_0x45bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bf08) {
            ctx->pc = 0x45BFA8u;
            goto label_45bfa8;
        }
    }
    ctx->pc = 0x45BF10u;
label_45bf10:
    // 0x45bf10: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_45bf14:
    if (ctx->pc == 0x45BF14u) {
        ctx->pc = 0x45BF14u;
            // 0x45bf14: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x45BF18u;
        goto label_45bf18;
    }
    ctx->pc = 0x45BF10u;
    {
        const bool branch_taken_0x45bf10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bf10) {
            ctx->pc = 0x45BF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BF10u;
            // 0x45bf14: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BF34u;
            goto label_45bf34;
        }
    }
    ctx->pc = 0x45BF18u;
label_45bf18:
    // 0x45bf18: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_45bf1c:
    if (ctx->pc == 0x45BF1Cu) {
        ctx->pc = 0x45BF20u;
        goto label_45bf20;
    }
    ctx->pc = 0x45BF18u;
    {
        const bool branch_taken_0x45bf18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bf18) {
            ctx->pc = 0x45BF30u;
            goto label_45bf30;
        }
    }
    ctx->pc = 0x45BF20u;
label_45bf20:
    // 0x45bf20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45bf24:
    // 0x45bf24: 0xc0fe404  jal         func_3F9010
label_45bf28:
    if (ctx->pc == 0x45BF28u) {
        ctx->pc = 0x45BF28u;
            // 0x45bf28: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x45BF2Cu;
        goto label_45bf2c;
    }
    ctx->pc = 0x45BF24u;
    SET_GPR_U32(ctx, 31, 0x45BF2Cu);
    ctx->pc = 0x45BF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BF24u;
            // 0x45bf28: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9010u;
    if (runtime->hasFunction(0x3F9010u)) {
        auto targetFn = runtime->lookupFunction(0x3F9010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BF2Cu; }
        if (ctx->pc != 0x45BF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9010_0x3f9010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BF2Cu; }
        if (ctx->pc != 0x45BF2Cu) { return; }
    }
    ctx->pc = 0x45BF2Cu;
label_45bf2c:
    // 0x45bf2c: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x45bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_45bf30:
    // 0x45bf30: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x45bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_45bf34:
    // 0x45bf34: 0xc0ca190  jal         func_328640
label_45bf38:
    if (ctx->pc == 0x45BF38u) {
        ctx->pc = 0x45BF38u;
            // 0x45bf38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45BF3Cu;
        goto label_45bf3c;
    }
    ctx->pc = 0x45BF34u;
    SET_GPR_U32(ctx, 31, 0x45BF3Cu);
    ctx->pc = 0x45BF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BF34u;
            // 0x45bf38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x328640u;
    if (runtime->hasFunction(0x328640u)) {
        auto targetFn = runtime->lookupFunction(0x328640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BF3Cu; }
        if (ctx->pc != 0x45BF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328640_0x328640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BF3Cu; }
        if (ctx->pc != 0x45BF3Cu) { return; }
    }
    ctx->pc = 0x45BF3Cu;
label_45bf3c:
    // 0x45bf3c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45bf3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45bf40:
    // 0x45bf40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45bf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45bf44:
    // 0x45bf44: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x45bf44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_45bf48:
    // 0x45bf48: 0x320f809  jalr        $t9
label_45bf4c:
    if (ctx->pc == 0x45BF4Cu) {
        ctx->pc = 0x45BF4Cu;
            // 0x45bf4c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45BF50u;
        goto label_45bf50;
    }
    ctx->pc = 0x45BF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45BF50u);
        ctx->pc = 0x45BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BF48u;
            // 0x45bf4c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45BF50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45BF50u; }
            if (ctx->pc != 0x45BF50u) { return; }
        }
        }
    }
    ctx->pc = 0x45BF50u;
label_45bf50:
    // 0x45bf50: 0x10000015  b           . + 4 + (0x15 << 2)
label_45bf54:
    if (ctx->pc == 0x45BF54u) {
        ctx->pc = 0x45BF58u;
        goto label_45bf58;
    }
    ctx->pc = 0x45BF50u;
    {
        const bool branch_taken_0x45bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bf50) {
            ctx->pc = 0x45BFA8u;
            goto label_45bfa8;
        }
    }
    ctx->pc = 0x45BF58u;
label_45bf58:
    // 0x45bf58: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_45bf5c:
    if (ctx->pc == 0x45BF5Cu) {
        ctx->pc = 0x45BF60u;
        goto label_45bf60;
    }
    ctx->pc = 0x45BF58u;
    {
        const bool branch_taken_0x45bf58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bf58) {
            ctx->pc = 0x45BF78u;
            goto label_45bf78;
        }
    }
    ctx->pc = 0x45BF60u;
label_45bf60:
    // 0x45bf60: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_45bf64:
    if (ctx->pc == 0x45BF64u) {
        ctx->pc = 0x45BF68u;
        goto label_45bf68;
    }
    ctx->pc = 0x45BF60u;
    {
        const bool branch_taken_0x45bf60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bf60) {
            ctx->pc = 0x45BF78u;
            goto label_45bf78;
        }
    }
    ctx->pc = 0x45BF68u;
label_45bf68:
    // 0x45bf68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45bf6c:
    // 0x45bf6c: 0xc0fe404  jal         func_3F9010
label_45bf70:
    if (ctx->pc == 0x45BF70u) {
        ctx->pc = 0x45BF70u;
            // 0x45bf70: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x45BF74u;
        goto label_45bf74;
    }
    ctx->pc = 0x45BF6Cu;
    SET_GPR_U32(ctx, 31, 0x45BF74u);
    ctx->pc = 0x45BF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BF6Cu;
            // 0x45bf70: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9010u;
    if (runtime->hasFunction(0x3F9010u)) {
        auto targetFn = runtime->lookupFunction(0x3F9010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BF74u; }
        if (ctx->pc != 0x45BF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9010_0x3f9010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BF74u; }
        if (ctx->pc != 0x45BF74u) { return; }
    }
    ctx->pc = 0x45BF74u;
label_45bf74:
    // 0x45bf74: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x45bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_45bf78:
    // 0x45bf78: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45bf7c:
    // 0x45bf7c: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x45bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_45bf80:
    // 0x45bf80: 0xc05cc84  jal         func_173210
label_45bf84:
    if (ctx->pc == 0x45BF84u) {
        ctx->pc = 0x45BF84u;
            // 0x45bf84: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->pc = 0x45BF88u;
        goto label_45bf88;
    }
    ctx->pc = 0x45BF80u;
    SET_GPR_U32(ctx, 31, 0x45BF88u);
    ctx->pc = 0x45BF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BF80u;
            // 0x45bf84: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BF88u; }
        if (ctx->pc != 0x45BF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BF88u; }
        if (ctx->pc != 0x45BF88u) { return; }
    }
    ctx->pc = 0x45BF88u;
label_45bf88:
    // 0x45bf88: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x45bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_45bf8c:
    // 0x45bf8c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x45bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_45bf90:
    // 0x45bf90: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x45bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_45bf94:
    // 0x45bf94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x45bf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45bf98:
    // 0x45bf98: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x45bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
label_45bf9c:
    // 0x45bf9c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x45bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_45bfa0:
    // 0x45bfa0: 0xc057b7c  jal         func_15EDF0
label_45bfa4:
    if (ctx->pc == 0x45BFA4u) {
        ctx->pc = 0x45BFA4u;
            // 0x45bfa4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45BFA8u;
        goto label_45bfa8;
    }
    ctx->pc = 0x45BFA0u;
    SET_GPR_U32(ctx, 31, 0x45BFA8u);
    ctx->pc = 0x45BFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BFA0u;
            // 0x45bfa4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BFA8u; }
        if (ctx->pc != 0x45BFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BFA8u; }
        if (ctx->pc != 0x45BFA8u) { return; }
    }
    ctx->pc = 0x45BFA8u;
label_45bfa8:
    // 0x45bfa8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45bfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_45bfac:
    // 0x45bfac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45bfacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45bfb0:
    // 0x45bfb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45bfb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45bfb4:
    // 0x45bfb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45bfb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45bfb8:
    // 0x45bfb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45bfb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45bfbc:
    // 0x45bfbc: 0x3e00008  jr          $ra
label_45bfc0:
    if (ctx->pc == 0x45BFC0u) {
        ctx->pc = 0x45BFC0u;
            // 0x45bfc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x45BFC4u;
        goto label_45bfc4;
    }
    ctx->pc = 0x45BFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45BFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BFBCu;
            // 0x45bfc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45BFC4u;
label_45bfc4:
    // 0x45bfc4: 0x0  nop
    ctx->pc = 0x45bfc4u;
    // NOP
label_45bfc8:
    // 0x45bfc8: 0x0  nop
    ctx->pc = 0x45bfc8u;
    // NOP
label_45bfcc:
    // 0x45bfcc: 0x0  nop
    ctx->pc = 0x45bfccu;
    // NOP
}
