#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FFEA0
// Address: 0x4ffea0 - 0x5004e0
void sub_004FFEA0_0x4ffea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FFEA0_0x4ffea0");
#endif

    switch (ctx->pc) {
        case 0x4fff7cu: goto label_4fff7c;
        case 0x4fffb8u: goto label_4fffb8;
        case 0x500088u: goto label_500088;
        case 0x50013cu: goto label_50013c;
        case 0x5001c8u: goto label_5001c8;
        case 0x50020cu: goto label_50020c;
        case 0x500220u: goto label_500220;
        case 0x500238u: goto label_500238;
        case 0x500244u: goto label_500244;
        case 0x50024cu: goto label_50024c;
        case 0x50025cu: goto label_50025c;
        case 0x500264u: goto label_500264;
        case 0x500274u: goto label_500274;
        case 0x50027cu: goto label_50027c;
        case 0x500288u: goto label_500288;
        case 0x5002a8u: goto label_5002a8;
        case 0x5002b8u: goto label_5002b8;
        case 0x500328u: goto label_500328;
        case 0x500360u: goto label_500360;
        case 0x500370u: goto label_500370;
        case 0x500398u: goto label_500398;
        case 0x5003a8u: goto label_5003a8;
        case 0x50041cu: goto label_50041c;
        case 0x500424u: goto label_500424;
        case 0x500468u: goto label_500468;
        case 0x500478u: goto label_500478;
        case 0x500498u: goto label_500498;
        case 0x5004a4u: goto label_5004a4;
        default: break;
    }

    ctx->pc = 0x4ffea0u;

    // 0x4ffea0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x4ffea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x4ffea4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4ffea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ffea8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4ffea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4ffeac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4ffeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4ffeb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ffeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4ffeb4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ffeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4ffeb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ffeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4ffebc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ffebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ffec0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4ffec0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4ffec4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4ffec4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4ffec8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4ffec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4ffecc: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x4ffeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x4ffed0: 0x1066002c  beq         $v1, $a2, . + 4 + (0x2C << 2)
    ctx->pc = 0x4FFED0u;
    {
        const bool branch_taken_0x4ffed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x4FFED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFED0u;
            // 0x4ffed4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffed0) {
            ctx->pc = 0x4FFF84u;
            goto label_4fff84;
        }
    }
    ctx->pc = 0x4FFED8u;
    // 0x4ffed8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4ffed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ffedc: 0x50650022  beql        $v1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x4FFEDCu;
    {
        const bool branch_taken_0x4ffedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4ffedc) {
            ctx->pc = 0x4FFEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFEDCu;
            // 0x4ffee0: 0x8e420084  lw          $v0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FFF68u;
            goto label_4fff68;
        }
    }
    ctx->pc = 0x4FFEE4u;
    // 0x4ffee4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FFEE4u;
    {
        const bool branch_taken_0x4ffee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffee4) {
            ctx->pc = 0x4FFEF4u;
            goto label_4ffef4;
        }
    }
    ctx->pc = 0x4FFEECu;
    // 0x4ffeec: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x4FFEECu;
    {
        const bool branch_taken_0x4ffeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffeec) {
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x4FFEF4u;
label_4ffef4:
    // 0x4ffef4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ffef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4ffef8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4ffef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4ffefc: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x4ffefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x4fff00: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x4fff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x4fff04: 0x54640010  bnel        $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4FFF04u;
    {
        const bool branch_taken_0x4fff04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4fff04) {
            ctx->pc = 0x4FFF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFF04u;
            // 0x4fff08: 0x8e430084  lw          $v1, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FFF48u;
            goto label_4fff48;
        }
    }
    ctx->pc = 0x4FFF0Cu;
    // 0x4fff0c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4fff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4fff10: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4fff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4fff14: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4fff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4fff18: 0x8c630cc4  lw          $v1, 0xCC4($v1)
    ctx->pc = 0x4fff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3268)));
    // 0x4fff1c: 0x10640164  beq         $v1, $a0, . + 4 + (0x164 << 2)
    ctx->pc = 0x4FFF1Cu;
    {
        const bool branch_taken_0x4fff1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4fff1c) {
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x4FFF24u;
    // 0x4fff24: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x4fff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x4fff28: 0x54600161  bnel        $v1, $zero, . + 4 + (0x161 << 2)
    ctx->pc = 0x4FFF28u;
    {
        const bool branch_taken_0x4fff28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fff28) {
            ctx->pc = 0x4FFF2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFF28u;
            // 0x4fff2c: 0xae460060  sw          $a2, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x4FFF30u;
    // 0x4fff30: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x4FFF30u;
    {
        const bool branch_taken_0x4fff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FFF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFF30u;
            // 0x4fff34: 0xae450060  sw          $a1, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fff30) {
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x4FFF38u;
    // 0x4fff38: 0xae460060  sw          $a2, 0x60($s2)
    ctx->pc = 0x4fff38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 6));
    // 0x4fff3c: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x4FFF3Cu;
    {
        const bool branch_taken_0x4fff3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fff3c) {
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x4FFF44u;
    // 0x4fff44: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x4fff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4fff48:
    // 0x4fff48: 0x54600159  bnel        $v1, $zero, . + 4 + (0x159 << 2)
    ctx->pc = 0x4FFF48u;
    {
        const bool branch_taken_0x4fff48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fff48) {
            ctx->pc = 0x4FFF4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFF48u;
            // 0x4fff4c: 0xae460060  sw          $a2, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x4FFF50u;
    // 0x4fff50: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x4FFF50u;
    {
        const bool branch_taken_0x4fff50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FFF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFF50u;
            // 0x4fff54: 0xae450060  sw          $a1, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fff50) {
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x4FFF58u;
    // 0x4fff58: 0xae460060  sw          $a2, 0x60($s2)
    ctx->pc = 0x4fff58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 6));
    // 0x4fff5c: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x4FFF5Cu;
    {
        const bool branch_taken_0x4fff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fff5c) {
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x4FFF64u;
    // 0x4fff64: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x4fff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4fff68:
    // 0x4fff68: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x4fff68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x4fff6c: 0x83a60214  lb          $a2, 0x214($sp)
    ctx->pc = 0x4fff6cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x4fff70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fff70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fff74: 0xc140678  jal         func_5019E0
    ctx->pc = 0x4FFF74u;
    SET_GPR_U32(ctx, 31, 0x4FFF7Cu);
    ctx->pc = 0x4FFF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFF74u;
            // 0x4fff78: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5019E0u;
    if (runtime->hasFunction(0x5019E0u)) {
        auto targetFn = runtime->lookupFunction(0x5019E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFF7Cu; }
        if (ctx->pc != 0x4FFF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005019E0_0x5019e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFF7Cu; }
        if (ctx->pc != 0x4FFF7Cu) { return; }
    }
    ctx->pc = 0x4FFF7Cu;
label_4fff7c:
    // 0x4fff7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fff80: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x4fff80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_4fff84:
    // 0x4fff84: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x4fff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x4fff88: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x4fff88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4fff8c: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x4FFF8Cu;
    {
        const bool branch_taken_0x4fff8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fff8c) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x4FFF94u;
    // 0x4fff94: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4fff94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x4fff98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fff98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fff9c: 0x2463afe0  addiu       $v1, $v1, -0x5020
    ctx->pc = 0x4fff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946784));
    // 0x4fffa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fffa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fffa8: 0x400008  jr          $v0
    ctx->pc = 0x4FFFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4FFFB0u: goto label_4fffb0;
            case 0x500010u: goto label_500010;
            case 0x500058u: goto label_500058;
            case 0x50009Cu: goto label_50009c;
            case 0x500110u: goto label_500110;
            case 0x500154u: goto label_500154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4FFFB0u;
label_4fffb0:
    // 0x4fffb0: 0xc140228  jal         func_5008A0
    ctx->pc = 0x4FFFB0u;
    SET_GPR_U32(ctx, 31, 0x4FFFB8u);
    ctx->pc = 0x4FFFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFFB0u;
            // 0x4fffb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5008A0u;
    if (runtime->hasFunction(0x5008A0u)) {
        auto targetFn = runtime->lookupFunction(0x5008A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFFB8u; }
        if (ctx->pc != 0x4FFFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005008A0_0x5008a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFFB8u; }
        if (ctx->pc != 0x4FFFB8u) { return; }
    }
    ctx->pc = 0x4FFFB8u;
label_4fffb8:
    // 0x4fffb8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4fffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4fffbc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4fffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x4fffc0: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x4fffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x4fffc4: 0x2463af70  addiu       $v1, $v1, -0x5090
    ctx->pc = 0x4fffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946672));
    // 0x4fffc8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x4fffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4fffcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4fffccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fffd0: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x4fffd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x4fffd4: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x4fffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x4fffd8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4fffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4fffdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4fffe0: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x4fffe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4fffe4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FFFE4u;
    {
        const bool branch_taken_0x4fffe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fffe4) {
            ctx->pc = 0x4FFFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFFE4u;
            // 0x4fffe8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FFFFCu;
            goto label_4ffffc;
        }
    }
    ctx->pc = 0x4FFFECu;
    // 0x4fffec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4ffff0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x4FFFF0u;
    {
        const bool branch_taken_0x4ffff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FFFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFFF0u;
            // 0x4ffff4: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffff0) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x4FFFF8u;
    // 0x4ffff8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4ffff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4ffffc:
    // 0x4ffffc: 0x14620055  bne         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x4FFFFCu;
    {
        const bool branch_taken_0x4ffffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ffffc) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x500004u;
    // 0x500004: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x500004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x500008: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x500008u;
    {
        const bool branch_taken_0x500008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50000Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500008u;
            // 0x50000c: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500008) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x500010u;
label_500010:
    // 0x500010: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x500010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x500014: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x500014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x500018: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x500018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x50001c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50001cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500020: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x500020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x500024: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x500024u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x500028: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x500028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50002c: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x50002Cu;
    {
        const bool branch_taken_0x50002c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x500030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50002Cu;
            // 0x500030: 0xe641006c  swc1        $f1, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50002c) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x500034u;
    // 0x500034: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x500034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x500038: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x500038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x50003c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x50003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x500040: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x500040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x500044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x500048: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x500048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x50004c: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x50004cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
    // 0x500050: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x500050u;
    {
        const bool branch_taken_0x500050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x500054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500050u;
            // 0x500054: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500050) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x500058u;
label_500058:
    // 0x500058: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x500058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x50005c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x500060: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x500060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x500064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x500064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500068: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x500068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x50006c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x50006cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x500070: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x500070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x500074: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x500074u;
    {
        const bool branch_taken_0x500074 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x500078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500074u;
            // 0x500078: 0xe641006c  swc1        $f1, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x500074) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x50007Cu;
    // 0x50007c: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x50007cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x500080: 0xc1402b4  jal         func_500AD0
    ctx->pc = 0x500080u;
    SET_GPR_U32(ctx, 31, 0x500088u);
    ctx->pc = 0x500084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500080u;
            // 0x500084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500AD0u;
    if (runtime->hasFunction(0x500AD0u)) {
        auto targetFn = runtime->lookupFunction(0x500AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500088u; }
        if (ctx->pc != 0x500088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500AD0_0x500ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500088u; }
        if (ctx->pc != 0x500088u) { return; }
    }
    ctx->pc = 0x500088u;
label_500088:
    // 0x500088: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x500088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x50008c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x50008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x500090: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x500090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
    // 0x500094: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x500094u;
    {
        const bool branch_taken_0x500094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x500098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500094u;
            // 0x500098: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500094) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x50009Cu;
label_50009c:
    // 0x50009c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50009cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x5000a0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x5000a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x5000a4: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x5000a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5000a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5000a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5000ac: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x5000acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x5000b0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x5000b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x5000b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x5000b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5000b8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x5000B8u;
    {
        const bool branch_taken_0x5000b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5000BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5000B8u;
            // 0x5000bc: 0xe641006c  swc1        $f1, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5000b8) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x5000C0u;
    // 0x5000c0: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x5000c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x5000c4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5000c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x5000c8: 0x2463af70  addiu       $v1, $v1, -0x5090
    ctx->pc = 0x5000c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946672));
    // 0x5000cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x5000ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x5000d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x5000d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x5000d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5000d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5000d8: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x5000d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x5000dc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x5000DCu;
    {
        const bool branch_taken_0x5000dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x5000dc) {
            ctx->pc = 0x5000E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5000DCu;
            // 0x5000e0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500100u;
            goto label_500100;
        }
    }
    ctx->pc = 0x5000E4u;
    // 0x5000e4: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x5000e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x5000e8: 0x3c024452  lui         $v0, 0x4452
    ctx->pc = 0x5000e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17490 << 16));
    // 0x5000ec: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x5000ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x5000f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x5000f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x5000f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x5000F4u;
    {
        const bool branch_taken_0x5000f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5000F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5000F4u;
            // 0x5000f8: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5000f4) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x5000FCu;
    // 0x5000fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x5000fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_500100:
    // 0x500100: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x500100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x500104: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x500104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
    // 0x500108: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x500108u;
    {
        const bool branch_taken_0x500108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50010Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500108u;
            // 0x50010c: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500108) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x500110u;
label_500110:
    // 0x500110: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x500110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x500114: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x500114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x500118: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x500118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x50011c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50011cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500120: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x500120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x500124: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x500124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x500128: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x500128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50012c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x50012Cu;
    {
        const bool branch_taken_0x50012c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x500130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50012Cu;
            // 0x500130: 0xe641006c  swc1        $f1, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50012c) {
            ctx->pc = 0x500154u;
            goto label_500154;
        }
    }
    ctx->pc = 0x500134u;
    // 0x500134: 0xc140228  jal         func_5008A0
    ctx->pc = 0x500134u;
    SET_GPR_U32(ctx, 31, 0x50013Cu);
    ctx->pc = 0x500138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500134u;
            // 0x500138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5008A0u;
    if (runtime->hasFunction(0x5008A0u)) {
        auto targetFn = runtime->lookupFunction(0x5008A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50013Cu; }
        if (ctx->pc != 0x50013Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005008A0_0x5008a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50013Cu; }
        if (ctx->pc != 0x50013Cu) { return; }
    }
    ctx->pc = 0x50013Cu;
label_50013c:
    // 0x50013c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x500140: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x500140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x500144: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x500144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x500148: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x500148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50014c: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x50014cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x500150: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x500150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_500154:
    // 0x500154: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x500154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x500158: 0x26450068  addiu       $a1, $s2, 0x68
    ctx->pc = 0x500158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x50015c: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x50015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x500160: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x500160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x500164: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x500164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500168: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x500168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x50016c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x500170: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x500170u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x500174: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x500174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x500178: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x500178u;
    {
        const bool branch_taken_0x500178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x50017Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500178u;
            // 0x50017c: 0xe6410068  swc1        $f1, 0x68($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x500178) {
            ctx->pc = 0x500184u;
            goto label_500184;
        }
    }
    ctx->pc = 0x500180u;
    // 0x500180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x500180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_500184:
    // 0x500184: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x500184u;
    {
        const bool branch_taken_0x500184 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x500184) {
            ctx->pc = 0x500188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500184u;
            // 0x500188: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50019Cu;
            goto label_50019c;
        }
    }
    ctx->pc = 0x50018Cu;
    // 0x50018c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50018cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500190: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x500190u;
    {
        const bool branch_taken_0x500190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x500194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500190u;
            // 0x500194: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x500190) {
            ctx->pc = 0x5001B4u;
            goto label_5001b4;
        }
    }
    ctx->pc = 0x500198u;
    // 0x500198: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x500198u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_50019c:
    // 0x50019c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x50019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x5001a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5001a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5001a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5001a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5001a8: 0x0  nop
    ctx->pc = 0x5001a8u;
    // NOP
    // 0x5001ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5001acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x5001b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x5001b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_5001b4:
    // 0x5001b4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x5001b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5001b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5001b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5001bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5001bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5001c0: 0xc140224  jal         func_500890
    ctx->pc = 0x5001C0u;
    SET_GPR_U32(ctx, 31, 0x5001C8u);
    ctx->pc = 0x5001C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5001C0u;
            // 0x5001c4: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x500890u;
    if (runtime->hasFunction(0x500890u)) {
        auto targetFn = runtime->lookupFunction(0x500890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5001C8u; }
        if (ctx->pc != 0x5001C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500890_0x500890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5001C8u; }
        if (ctx->pc != 0x5001C8u) { return; }
    }
    ctx->pc = 0x5001C8u;
label_5001c8:
    // 0x5001c8: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x5001c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x5001cc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x5001CCu;
    {
        const bool branch_taken_0x5001cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5001cc) {
            ctx->pc = 0x5001D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5001CCu;
            // 0x5001d0: 0x28430002  slti        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5001E4u;
            goto label_5001e4;
        }
    }
    ctx->pc = 0x5001D4u;
    // 0x5001d4: 0x28430007  slti        $v1, $v0, 0x7
    ctx->pc = 0x5001d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x5001d8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x5001D8u;
    {
        const bool branch_taken_0x5001d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5001d8) {
            ctx->pc = 0x5001DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5001D8u;
            // 0x5001dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500204u;
            goto label_500204;
        }
    }
    ctx->pc = 0x5001E0u;
    // 0x5001e0: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x5001e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_5001e4:
    // 0x5001e4: 0x146000b2  bnez        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x5001E4u;
    {
        const bool branch_taken_0x5001e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5001e4) {
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x5001ECu;
    // 0x5001ec: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x5001ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x5001f0: 0x146000af  bnez        $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x5001F0u;
    {
        const bool branch_taken_0x5001f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5001f0) {
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x5001F8u;
    // 0x5001f8: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x5001F8u;
    {
        const bool branch_taken_0x5001f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5001f8) {
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x500200u;
    // 0x500200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x500200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_500204:
    // 0x500204: 0xc140338  jal         func_500CE0
    ctx->pc = 0x500204u;
    SET_GPR_U32(ctx, 31, 0x50020Cu);
    ctx->pc = 0x500CE0u;
    if (runtime->hasFunction(0x500CE0u)) {
        auto targetFn = runtime->lookupFunction(0x500CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50020Cu; }
        if (ctx->pc != 0x50020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500CE0_0x500ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50020Cu; }
        if (ctx->pc != 0x50020Cu) { return; }
    }
    ctx->pc = 0x50020Cu;
label_50020c:
    // 0x50020c: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x50020Cu;
    {
        const bool branch_taken_0x50020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50020c) {
            ctx->pc = 0x5004B0u;
            goto label_5004b0;
        }
    }
    ctx->pc = 0x500214u;
    // 0x500214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x500214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500218: 0xc14021c  jal         func_500870
    ctx->pc = 0x500218u;
    SET_GPR_U32(ctx, 31, 0x500220u);
    ctx->pc = 0x50021Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500218u;
            // 0x50021c: 0x26510074  addiu       $s1, $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500870u;
    if (runtime->hasFunction(0x500870u)) {
        auto targetFn = runtime->lookupFunction(0x500870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500220u; }
        if (ctx->pc != 0x500220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500870_0x500870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500220u; }
        if (ctx->pc != 0x500220u) { return; }
    }
    ctx->pc = 0x500220u;
label_500220:
    // 0x500220: 0x2653008c  addiu       $s3, $s2, 0x8C
    ctx->pc = 0x500220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
    // 0x500224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x500224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500228: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x500228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x50022c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x50022cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500230: 0xc140218  jal         func_500860
    ctx->pc = 0x500230u;
    SET_GPR_U32(ctx, 31, 0x500238u);
    ctx->pc = 0x500234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500230u;
            // 0x500234: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500860u;
    if (runtime->hasFunction(0x500860u)) {
        auto targetFn = runtime->lookupFunction(0x500860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500238u; }
        if (ctx->pc != 0x500238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500860_0x500860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500238u; }
        if (ctx->pc != 0x500238u) { return; }
    }
    ctx->pc = 0x500238u;
label_500238:
    // 0x500238: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x500238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50023c: 0xc140210  jal         func_500840
    ctx->pc = 0x50023Cu;
    SET_GPR_U32(ctx, 31, 0x500244u);
    ctx->pc = 0x500240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50023Cu;
            // 0x500240: 0x27a4020c  addiu       $a0, $sp, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500840u;
    if (runtime->hasFunction(0x500840u)) {
        auto targetFn = runtime->lookupFunction(0x500840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500244u; }
        if (ctx->pc != 0x500244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500840_0x500840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500244u; }
        if (ctx->pc != 0x500244u) { return; }
    }
    ctx->pc = 0x500244u;
label_500244:
    // 0x500244: 0xc14020c  jal         func_500830
    ctx->pc = 0x500244u;
    SET_GPR_U32(ctx, 31, 0x50024Cu);
    ctx->pc = 0x500248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500244u;
            // 0x500248: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500830u;
    if (runtime->hasFunction(0x500830u)) {
        auto targetFn = runtime->lookupFunction(0x500830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50024Cu; }
        if (ctx->pc != 0x50024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500830_0x500830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50024Cu; }
        if (ctx->pc != 0x50024Cu) { return; }
    }
    ctx->pc = 0x50024Cu;
label_50024c:
    // 0x50024c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x50024cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x500250: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x500250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x500254: 0xc140150  jal         func_500540
    ctx->pc = 0x500254u;
    SET_GPR_U32(ctx, 31, 0x50025Cu);
    ctx->pc = 0x500258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500254u;
            // 0x500258: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50025Cu; }
        if (ctx->pc != 0x50025Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50025Cu; }
        if (ctx->pc != 0x50025Cu) { return; }
    }
    ctx->pc = 0x50025Cu;
label_50025c:
    // 0x50025c: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x50025Cu;
    SET_GPR_U32(ctx, 31, 0x500264u);
    ctx->pc = 0x500260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50025Cu;
            // 0x500260: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500264u; }
        if (ctx->pc != 0x500264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500264u; }
        if (ctx->pc != 0x500264u) { return; }
    }
    ctx->pc = 0x500264u;
label_500264:
    // 0x500264: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x500264u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500268: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x500268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x50026c: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x50026Cu;
    SET_GPR_U32(ctx, 31, 0x500274u);
    ctx->pc = 0x500270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50026Cu;
            // 0x500270: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500274u; }
        if (ctx->pc != 0x500274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500274u; }
        if (ctx->pc != 0x500274u) { return; }
    }
    ctx->pc = 0x500274u;
label_500274:
    // 0x500274: 0xc110e98  jal         func_443A60
    ctx->pc = 0x500274u;
    SET_GPR_U32(ctx, 31, 0x50027Cu);
    ctx->pc = 0x500278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500274u;
            // 0x500278: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (runtime->hasFunction(0x443A60u)) {
        auto targetFn = runtime->lookupFunction(0x443A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50027Cu; }
        if (ctx->pc != 0x50027Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A60_0x443a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50027Cu; }
        if (ctx->pc != 0x50027Cu) { return; }
    }
    ctx->pc = 0x50027Cu;
label_50027c:
    // 0x50027c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x50027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500280: 0xc110e94  jal         func_443A50
    ctx->pc = 0x500280u;
    SET_GPR_U32(ctx, 31, 0x500288u);
    ctx->pc = 0x500284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500280u;
            // 0x500284: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500288u; }
        if (ctx->pc != 0x500288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500288u; }
        if (ctx->pc != 0x500288u) { return; }
    }
    ctx->pc = 0x500288u;
label_500288:
    // 0x500288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x500288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x50028c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x50028cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x500290: 0x0  nop
    ctx->pc = 0x500290u;
    // NOP
    // 0x500294: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x500294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x500298: 0x1640003d  bnez        $s2, . + 4 + (0x3D << 2)
    ctx->pc = 0x500298u;
    {
        const bool branch_taken_0x500298 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x50029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500298u;
            // 0x50029c: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x500298) {
            ctx->pc = 0x500390u;
            goto label_500390;
        }
    }
    ctx->pc = 0x5002A0u;
    // 0x5002a0: 0xc14014c  jal         func_500530
    ctx->pc = 0x5002A0u;
    SET_GPR_U32(ctx, 31, 0x5002A8u);
    ctx->pc = 0x5002A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5002A0u;
            // 0x5002a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500530u;
    if (runtime->hasFunction(0x500530u)) {
        auto targetFn = runtime->lookupFunction(0x500530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5002A8u; }
        if (ctx->pc != 0x5002A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500530_0x500530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5002A8u; }
        if (ctx->pc != 0x5002A8u) { return; }
    }
    ctx->pc = 0x5002A8u;
label_5002a8:
    // 0x5002a8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x5002A8u;
    {
        const bool branch_taken_0x5002a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5002a8) {
            ctx->pc = 0x500368u;
            goto label_500368;
        }
    }
    ctx->pc = 0x5002B0u;
    // 0x5002b0: 0xc140148  jal         func_500520
    ctx->pc = 0x5002B0u;
    SET_GPR_U32(ctx, 31, 0x5002B8u);
    ctx->pc = 0x5002B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5002B0u;
            // 0x5002b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500520u;
    if (runtime->hasFunction(0x500520u)) {
        auto targetFn = runtime->lookupFunction(0x500520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5002B8u; }
        if (ctx->pc != 0x5002B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500520_0x500520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5002B8u; }
        if (ctx->pc != 0x5002B8u) { return; }
    }
    ctx->pc = 0x5002B8u;
label_5002b8:
    // 0x5002b8: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x5002b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x5002bc: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x5002bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
    // 0x5002c0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x5002c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5002c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x5002c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x5002c8: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x5002c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x5002cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5002ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x5002d0: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x5002d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[1] = ctx->f[5] / ctx->f[1];
    // 0x5002d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5002d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5002d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x5002d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x5002dc: 0x0  nop
    ctx->pc = 0x5002dcu;
    // NOP
    // 0x5002e0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x5002e0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x5002e4: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x5002e4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x5002e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5002e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5002ec: 0x0  nop
    ctx->pc = 0x5002ecu;
    // NOP
    // 0x5002f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5002f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x5002f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5002f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5002f8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x5002f8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x5002fc: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x5002fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x500300: 0x0  nop
    ctx->pc = 0x500300u;
    // NOP
    // 0x500304: 0x4604a8c1  sub.s       $f3, $f21, $f4
    ctx->pc = 0x500304u;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[4]);
    // 0x500308: 0x46051d03  div.s       $f20, $f3, $f5
    ctx->pc = 0x500308u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[20] = ctx->f[3] / ctx->f[5];
    // 0x50030c: 0x0  nop
    ctx->pc = 0x50030cu;
    // NOP
    // 0x500310: 0x0  nop
    ctx->pc = 0x500310u;
    // NOP
    // 0x500314: 0x46002583  div.s       $f22, $f4, $f0
    ctx->pc = 0x500314u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[22] = ctx->f[4] / ctx->f[0];
    // 0x500318: 0x0  nop
    ctx->pc = 0x500318u;
    // NOP
    // 0x50031c: 0x0  nop
    ctx->pc = 0x50031cu;
    // NOP
    // 0x500320: 0xc140148  jal         func_500520
    ctx->pc = 0x500320u;
    SET_GPR_U32(ctx, 31, 0x500328u);
    ctx->pc = 0x500520u;
    if (runtime->hasFunction(0x500520u)) {
        auto targetFn = runtime->lookupFunction(0x500520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500328u; }
        if (ctx->pc != 0x500328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500520_0x500520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500328u; }
        if (ctx->pc != 0x500328u) { return; }
    }
    ctx->pc = 0x500328u;
label_500328:
    // 0x500328: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x500328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x50032c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500330: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x500330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x500334: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x500334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x500338: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x500338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x50033c: 0x46151018  adda.s      $f2, $f21
    ctx->pc = 0x50033cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
    // 0x500340: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x500340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x500344: 0x0  nop
    ctx->pc = 0x500344u;
    // NOP
    // 0x500348: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x500348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x50034c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x50034cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x500350: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x500350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x500354: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x500354u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x500358: 0xc145e30  jal         func_5178C0
    ctx->pc = 0x500358u;
    SET_GPR_U32(ctx, 31, 0x500360u);
    ctx->pc = 0x50035Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500358u;
            // 0x50035c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x5178C0u;
    if (runtime->hasFunction(0x5178C0u)) {
        auto targetFn = runtime->lookupFunction(0x5178C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500360u; }
        if (ctx->pc != 0x500360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005178C0_0x5178c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500360u; }
        if (ctx->pc != 0x500360u) { return; }
    }
    ctx->pc = 0x500360u;
label_500360:
    // 0x500360: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x500360u;
    {
        const bool branch_taken_0x500360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x500360) {
            ctx->pc = 0x500388u;
            goto label_500388;
        }
    }
    ctx->pc = 0x500368u;
label_500368:
    // 0x500368: 0xc140148  jal         func_500520
    ctx->pc = 0x500368u;
    SET_GPR_U32(ctx, 31, 0x500370u);
    ctx->pc = 0x50036Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500368u;
            // 0x50036c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500520u;
    if (runtime->hasFunction(0x500520u)) {
        auto targetFn = runtime->lookupFunction(0x500520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500370u; }
        if (ctx->pc != 0x500370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500520_0x500520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500370u; }
        if (ctx->pc != 0x500370u) { return; }
    }
    ctx->pc = 0x500370u;
label_500370:
    // 0x500370: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x500370u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x500374: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x500374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x500378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x500378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x50037c: 0x0  nop
    ctx->pc = 0x50037cu;
    // NOP
    // 0x500380: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x500380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x500384: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x500384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_500388:
    // 0x500388: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x500388u;
    {
        const bool branch_taken_0x500388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50038Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500388u;
            // 0x50038c: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x500388) {
            ctx->pc = 0x500490u;
            goto label_500490;
        }
    }
    ctx->pc = 0x500390u;
label_500390:
    // 0x500390: 0xc14014c  jal         func_500530
    ctx->pc = 0x500390u;
    SET_GPR_U32(ctx, 31, 0x500398u);
    ctx->pc = 0x500394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500390u;
            // 0x500394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500530u;
    if (runtime->hasFunction(0x500530u)) {
        auto targetFn = runtime->lookupFunction(0x500530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500398u; }
        if (ctx->pc != 0x500398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500530_0x500530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500398u; }
        if (ctx->pc != 0x500398u) { return; }
    }
    ctx->pc = 0x500398u;
label_500398:
    // 0x500398: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x500398u;
    {
        const bool branch_taken_0x500398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x500398) {
            ctx->pc = 0x500470u;
            goto label_500470;
        }
    }
    ctx->pc = 0x5003A0u;
    // 0x5003a0: 0xc140148  jal         func_500520
    ctx->pc = 0x5003A0u;
    SET_GPR_U32(ctx, 31, 0x5003A8u);
    ctx->pc = 0x5003A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5003A0u;
            // 0x5003a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500520u;
    if (runtime->hasFunction(0x500520u)) {
        auto targetFn = runtime->lookupFunction(0x500520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5003A8u; }
        if (ctx->pc != 0x5003A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500520_0x500520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5003A8u; }
        if (ctx->pc != 0x5003A8u) { return; }
    }
    ctx->pc = 0x5003A8u;
label_5003a8:
    // 0x5003a8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x5003a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x5003ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x5003acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x5003b0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x5003b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x5003b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5003b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5003b8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x5003b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x5003bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5003bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5003c0: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x5003c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x5003c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5003c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x5003c8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x5003c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x5003cc: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x5003ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[1] = ctx->f[5] / ctx->f[1];
    // 0x5003d0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x5003d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x5003d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x5003d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x5003d8: 0x0  nop
    ctx->pc = 0x5003d8u;
    // NOP
    // 0x5003dc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x5003dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x5003e0: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x5003e0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x5003e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5003e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5003e8: 0x0  nop
    ctx->pc = 0x5003e8u;
    // NOP
    // 0x5003ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5003ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x5003f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5003f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x5003f4: 0x4604a8c1  sub.s       $f3, $f21, $f4
    ctx->pc = 0x5003f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[4]);
    // 0x5003f8: 0x46051d03  div.s       $f20, $f3, $f5
    ctx->pc = 0x5003f8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[20] = ctx->f[3] / ctx->f[5];
    // 0x5003fc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x5003fcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x500400: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x500400u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x500404: 0x0  nop
    ctx->pc = 0x500404u;
    // NOP
    // 0x500408: 0x46002583  div.s       $f22, $f4, $f0
    ctx->pc = 0x500408u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[22] = ctx->f[4] / ctx->f[0];
    // 0x50040c: 0x0  nop
    ctx->pc = 0x50040cu;
    // NOP
    // 0x500410: 0x0  nop
    ctx->pc = 0x500410u;
    // NOP
    // 0x500414: 0xc145e30  jal         func_5178C0
    ctx->pc = 0x500414u;
    SET_GPR_U32(ctx, 31, 0x50041Cu);
    ctx->pc = 0x500418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500414u;
            // 0x500418: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x5178C0u;
    if (runtime->hasFunction(0x5178C0u)) {
        auto targetFn = runtime->lookupFunction(0x5178C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50041Cu; }
        if (ctx->pc != 0x50041Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005178C0_0x5178c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50041Cu; }
        if (ctx->pc != 0x50041Cu) { return; }
    }
    ctx->pc = 0x50041Cu;
label_50041c:
    // 0x50041c: 0xc140148  jal         func_500520
    ctx->pc = 0x50041Cu;
    SET_GPR_U32(ctx, 31, 0x500424u);
    ctx->pc = 0x500420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50041Cu;
            // 0x500420: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500520u;
    if (runtime->hasFunction(0x500520u)) {
        auto targetFn = runtime->lookupFunction(0x500520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500424u; }
        if (ctx->pc != 0x500424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500520_0x500520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500424u; }
        if (ctx->pc != 0x500424u) { return; }
    }
    ctx->pc = 0x500424u;
label_500424:
    // 0x500424: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x500424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x500428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x500428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50042c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x50042cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x500430: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x500430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x500434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x500434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x500438: 0x0  nop
    ctx->pc = 0x500438u;
    // NOP
    // 0x50043c: 0x46150880  add.s       $f2, $f1, $f21
    ctx->pc = 0x50043cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x500440: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x500440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x500444: 0x0  nop
    ctx->pc = 0x500444u;
    // NOP
    // 0x500448: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x500448u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x50044c: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x50044cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x500450: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x500450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500454: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x500454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x500458: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x500458u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x50045c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x50045cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x500460: 0xc145e30  jal         func_5178C0
    ctx->pc = 0x500460u;
    SET_GPR_U32(ctx, 31, 0x500468u);
    ctx->pc = 0x500464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500460u;
            // 0x500464: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x5178C0u;
    if (runtime->hasFunction(0x5178C0u)) {
        auto targetFn = runtime->lookupFunction(0x5178C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500468u; }
        if (ctx->pc != 0x500468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005178C0_0x5178c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500468u; }
        if (ctx->pc != 0x500468u) { return; }
    }
    ctx->pc = 0x500468u;
label_500468:
    // 0x500468: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x500468u;
    {
        const bool branch_taken_0x500468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x500468) {
            ctx->pc = 0x500490u;
            goto label_500490;
        }
    }
    ctx->pc = 0x500470u;
label_500470:
    // 0x500470: 0xc140148  jal         func_500520
    ctx->pc = 0x500470u;
    SET_GPR_U32(ctx, 31, 0x500478u);
    ctx->pc = 0x500474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500470u;
            // 0x500474: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500520u;
    if (runtime->hasFunction(0x500520u)) {
        auto targetFn = runtime->lookupFunction(0x500520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500478u; }
        if (ctx->pc != 0x500478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500520_0x500520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500478u; }
        if (ctx->pc != 0x500478u) { return; }
    }
    ctx->pc = 0x500478u;
label_500478:
    // 0x500478: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x500478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x50047c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x50047cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x500480: 0x0  nop
    ctx->pc = 0x500480u;
    // NOP
    // 0x500484: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x500484u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x500488: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x500488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x50048c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x50048cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_500490:
    // 0x500490: 0xc140140  jal         func_500500
    ctx->pc = 0x500490u;
    SET_GPR_U32(ctx, 31, 0x500498u);
    ctx->pc = 0x500494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500490u;
            // 0x500494: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500500u;
    if (runtime->hasFunction(0x500500u)) {
        auto targetFn = runtime->lookupFunction(0x500500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500498u; }
        if (ctx->pc != 0x500498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500500_0x500500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500498u; }
        if (ctx->pc != 0x500498u) { return; }
    }
    ctx->pc = 0x500498u;
label_500498:
    // 0x500498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x500498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50049c: 0xc140138  jal         func_5004E0
    ctx->pc = 0x50049Cu;
    SET_GPR_U32(ctx, 31, 0x5004A4u);
    ctx->pc = 0x5004A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50049Cu;
            // 0x5004a0: 0x27a5020c  addiu       $a1, $sp, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5004E0u;
    if (runtime->hasFunction(0x5004E0u)) {
        auto targetFn = runtime->lookupFunction(0x5004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5004A4u; }
        if (ctx->pc != 0x5004A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005004E0_0x5004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5004A4u; }
        if (ctx->pc != 0x5004A4u) { return; }
    }
    ctx->pc = 0x5004A4u;
label_5004a4:
    // 0x5004a4: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x5004A4u;
    {
        const bool branch_taken_0x5004a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5004a4) {
            ctx->pc = 0x500244u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_500244;
        }
    }
    ctx->pc = 0x5004ACu;
    // 0x5004ac: 0x0  nop
    ctx->pc = 0x5004acu;
    // NOP
label_5004b0:
    // 0x5004b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x5004b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x5004b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5004b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5004b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x5004b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x5004bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5004bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5004c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5004c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x5004c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5004c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5004c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5004c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5004cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5004ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5004d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5004d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5004d4: 0x3e00008  jr          $ra
    ctx->pc = 0x5004D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5004D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5004D4u;
            // 0x5004d8: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5004DCu;
    // 0x5004dc: 0x0  nop
    ctx->pc = 0x5004dcu;
    // NOP
}
