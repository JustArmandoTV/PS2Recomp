#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00308630
// Address: 0x308630 - 0x308740
void sub_00308630_0x308630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308630_0x308630");
#endif

    switch (ctx->pc) {
        case 0x308698u: goto label_308698;
        case 0x3086a4u: goto label_3086a4;
        case 0x3086c0u: goto label_3086c0;
        case 0x30870cu: goto label_30870c;
        case 0x30871cu: goto label_30871c;
        default: break;
    }

    ctx->pc = 0x308630u;

    // 0x308630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x308630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x308634: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x308634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x308638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x308638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30863c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x308640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x308644: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x308644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30864c: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x30864cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
    // 0x308650: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x308650u;
    {
        const bool branch_taken_0x308650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x308654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308650u;
            // 0x308654: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308650) {
            ctx->pc = 0x3086B0u;
            goto label_3086b0;
        }
    }
    ctx->pc = 0x308658u;
    // 0x308658: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x308658u;
    {
        const bool branch_taken_0x308658 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x308658) {
            ctx->pc = 0x30865Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308658u;
            // 0x30865c: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308690u;
            goto label_308690;
        }
    }
    ctx->pc = 0x308660u;
    // 0x308660: 0x8222005c  lb          $v0, 0x5C($s1)
    ctx->pc = 0x308660u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x308664: 0x82230070  lb          $v1, 0x70($s1)
    ctx->pc = 0x308664u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x308668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30866c: 0xa222005c  sb          $v0, 0x5C($s1)
    ctx->pc = 0x30866cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x308670: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x308670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x308674: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x308674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x308678: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x308678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30867c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30867Cu;
    {
        const bool branch_taken_0x30867c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30867c) {
            ctx->pc = 0x30868Cu;
            goto label_30868c;
        }
    }
    ctx->pc = 0x308684u;
    // 0x308684: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x308684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308688: 0xa222005c  sb          $v0, 0x5C($s1)
    ctx->pc = 0x308688u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 2));
label_30868c:
    // 0x30868c: 0x8e040188  lw          $a0, 0x188($s0)
    ctx->pc = 0x30868cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_308690:
    // 0x308690: 0xc05d85a  jal         func_176168
    ctx->pc = 0x308690u;
    SET_GPR_U32(ctx, 31, 0x308698u);
    ctx->pc = 0x308694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308690u;
            // 0x308694: 0x26250054  addiu       $a1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308698u; }
        if (ctx->pc != 0x308698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308698u; }
        if (ctx->pc != 0x308698u) { return; }
    }
    ctx->pc = 0x308698u;
label_308698:
    // 0x308698: 0x8e040188  lw          $a0, 0x188($s0)
    ctx->pc = 0x308698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x30869c: 0xc05d416  jal         func_175058
    ctx->pc = 0x30869Cu;
    SET_GPR_U32(ctx, 31, 0x3086A4u);
    ctx->pc = 0x3086A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30869Cu;
            // 0x3086a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086A4u; }
        if (ctx->pc != 0x3086A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086A4u; }
        if (ctx->pc != 0x3086A4u) { return; }
    }
    ctx->pc = 0x3086A4u;
label_3086a4:
    // 0x3086a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3086a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3086a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3086A8u;
    {
        const bool branch_taken_0x3086a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3086ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3086A8u;
            // 0x3086ac: 0xa2230073  sb          $v1, 0x73($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086a8) {
            ctx->pc = 0x308720u;
            goto label_308720;
        }
    }
    ctx->pc = 0x3086B0u;
label_3086b0:
    // 0x3086b0: 0x860502fc  lh          $a1, 0x2FC($s0)
    ctx->pc = 0x3086b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x3086b4: 0xa6050308  sh          $a1, 0x308($s0)
    ctx->pc = 0x3086b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 776), (uint16_t)GPR_U32(ctx, 5));
    // 0x3086b8: 0xc05d006  jal         func_174018
    ctx->pc = 0x3086B8u;
    SET_GPR_U32(ctx, 31, 0x3086C0u);
    ctx->pc = 0x3086BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3086B8u;
            // 0x3086bc: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086C0u; }
        if (ctx->pc != 0x3086C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086C0u; }
        if (ctx->pc != 0x3086C0u) { return; }
    }
    ctx->pc = 0x3086C0u;
label_3086c0:
    // 0x3086c0: 0x92220073  lbu         $v0, 0x73($s1)
    ctx->pc = 0x3086c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 115)));
    // 0x3086c4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3086C4u;
    {
        const bool branch_taken_0x3086c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3086c4) {
            ctx->pc = 0x3086C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3086C4u;
            // 0x3086c8: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308714u;
            goto label_308714;
        }
    }
    ctx->pc = 0x3086CCu;
    // 0x3086cc: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3086CCu;
    {
        const bool branch_taken_0x3086cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3086cc) {
            ctx->pc = 0x3086D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3086CCu;
            // 0x3086d0: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308704u;
            goto label_308704;
        }
    }
    ctx->pc = 0x3086D4u;
    // 0x3086d4: 0x8222005c  lb          $v0, 0x5C($s1)
    ctx->pc = 0x3086d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3086d8: 0x82230070  lb          $v1, 0x70($s1)
    ctx->pc = 0x3086d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x3086dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3086dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3086e0: 0xa222005c  sb          $v0, 0x5C($s1)
    ctx->pc = 0x3086e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x3086e4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3086e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3086e8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3086e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3086ec: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3086ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3086f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3086F0u;
    {
        const bool branch_taken_0x3086f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3086f0) {
            ctx->pc = 0x308700u;
            goto label_308700;
        }
    }
    ctx->pc = 0x3086F8u;
    // 0x3086f8: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x3086f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x3086fc: 0xa222005c  sb          $v0, 0x5C($s1)
    ctx->pc = 0x3086fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 2));
label_308700:
    // 0x308700: 0x8e040188  lw          $a0, 0x188($s0)
    ctx->pc = 0x308700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_308704:
    // 0x308704: 0xc05d85a  jal         func_176168
    ctx->pc = 0x308704u;
    SET_GPR_U32(ctx, 31, 0x30870Cu);
    ctx->pc = 0x308708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308704u;
            // 0x308708: 0x26250054  addiu       $a1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30870Cu; }
        if (ctx->pc != 0x30870Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30870Cu; }
        if (ctx->pc != 0x30870Cu) { return; }
    }
    ctx->pc = 0x30870Cu;
label_30870c:
    // 0x30870c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30870Cu;
    {
        const bool branch_taken_0x30870c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30870Cu;
            // 0x308710: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30870c) {
            ctx->pc = 0x308724u;
            goto label_308724;
        }
    }
    ctx->pc = 0x308714u;
label_308714:
    // 0x308714: 0xc05d416  jal         func_175058
    ctx->pc = 0x308714u;
    SET_GPR_U32(ctx, 31, 0x30871Cu);
    ctx->pc = 0x308718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308714u;
            // 0x308718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30871Cu; }
        if (ctx->pc != 0x30871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30871Cu; }
        if (ctx->pc != 0x30871Cu) { return; }
    }
    ctx->pc = 0x30871Cu;
label_30871c:
    // 0x30871c: 0xa2200073  sb          $zero, 0x73($s1)
    ctx->pc = 0x30871cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 0));
label_308720:
    // 0x308720: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x308720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_308724:
    // 0x308724: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x308724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x308728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30872c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30872cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308730: 0x3e00008  jr          $ra
    ctx->pc = 0x308730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308730u;
            // 0x308734: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308738u;
    // 0x308738: 0x0  nop
    ctx->pc = 0x308738u;
    // NOP
    // 0x30873c: 0x0  nop
    ctx->pc = 0x30873cu;
    // NOP
}
