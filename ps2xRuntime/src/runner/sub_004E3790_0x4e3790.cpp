#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E3790
// Address: 0x4e3790 - 0x4e38a0
void sub_004E3790_0x4e3790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3790_0x4e3790");
#endif

    switch (ctx->pc) {
        case 0x4e37bcu: goto label_4e37bc;
        case 0x4e3810u: goto label_4e3810;
        case 0x4e3868u: goto label_4e3868;
        case 0x4e3880u: goto label_4e3880;
        default: break;
    }

    ctx->pc = 0x4e3790u;

    // 0x4e3790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e3790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e3794: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4e3794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4e3798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e379c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4e379cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4e37a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e37a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e37a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4e37a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4e37a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e37a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e37ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e37acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e37b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e37b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e37b4: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4E37B4u;
    SET_GPR_U32(ctx, 31, 0x4E37BCu);
    ctx->pc = 0x4E37B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E37B4u;
            // 0x4e37b8: 0x3445abe2  ori         $a1, $v0, 0xABE2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44002);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E37BCu; }
        if (ctx->pc != 0x4E37BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E37BCu; }
        if (ctx->pc != 0x4E37BCu) { return; }
    }
    ctx->pc = 0x4E37BCu;
label_4e37bc:
    // 0x4e37bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e37bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4e37c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e37c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e37c4: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4e37c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4e37c8: 0x24423760  addiu       $v0, $v0, 0x3760
    ctx->pc = 0x4e37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14176));
    // 0x4e37cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e37ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e37d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e37d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e37d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4e37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4e37d8: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x4e37d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x4e37dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e37dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e37e0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x4e37e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x4e37e4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4e37e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x4e37e8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4e37e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4e37ec: 0x246305d8  addiu       $v1, $v1, 0x5D8
    ctx->pc = 0x4e37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1496));
    // 0x4e37f0: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x4e37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x4e37f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e37f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e37f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e37f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e37fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e37fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3800: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3800u;
            // 0x4e3804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3808u;
    // 0x4e3808: 0x0  nop
    ctx->pc = 0x4e3808u;
    // NOP
    // 0x4e380c: 0x0  nop
    ctx->pc = 0x4e380cu;
    // NOP
label_4e3810:
    // 0x4e3810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e3810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e3814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e3814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e3818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e3818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e381c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e3820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e3820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3824: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4E3824u;
    {
        const bool branch_taken_0x4e3824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3824u;
            // 0x4e3828: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3824) {
            ctx->pc = 0x4E3880u;
            goto label_4e3880;
        }
    }
    ctx->pc = 0x4E382Cu;
    // 0x4e382c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e382cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e3830: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e3830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e3834: 0x24633790  addiu       $v1, $v1, 0x3790
    ctx->pc = 0x4e3834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14224));
    // 0x4e3838: 0x244237c8  addiu       $v0, $v0, 0x37C8
    ctx->pc = 0x4e3838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14280));
    // 0x4e383c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e383cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e3840: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4E3840u;
    {
        const bool branch_taken_0x4e3840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3840u;
            // 0x4e3844: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3840) {
            ctx->pc = 0x4E3868u;
            goto label_4e3868;
        }
    }
    ctx->pc = 0x4E3848u;
    // 0x4e3848: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e3848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e384c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e3850: 0x246338e0  addiu       $v1, $v1, 0x38E0
    ctx->pc = 0x4e3850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14560));
    // 0x4e3854: 0x24423918  addiu       $v0, $v0, 0x3918
    ctx->pc = 0x4e3854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14616));
    // 0x4e3858: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e3858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e385c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e385cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3860: 0xc138e28  jal         func_4E38A0
    ctx->pc = 0x4E3860u;
    SET_GPR_U32(ctx, 31, 0x4E3868u);
    ctx->pc = 0x4E3864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3860u;
            // 0x4e3864: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E38A0u;
    if (runtime->hasFunction(0x4E38A0u)) {
        auto targetFn = runtime->lookupFunction(0x4E38A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3868u; }
        if (ctx->pc != 0x4E3868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E38A0_0x4e38a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3868u; }
        if (ctx->pc != 0x4E3868u) { return; }
    }
    ctx->pc = 0x4E3868u;
label_4e3868:
    // 0x4e3868: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e3868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4e386c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e386cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4e3870: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E3870u;
    {
        const bool branch_taken_0x4e3870 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e3870) {
            ctx->pc = 0x4E3874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3870u;
            // 0x4e3874: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3884u;
            goto label_4e3884;
        }
    }
    ctx->pc = 0x4E3878u;
    // 0x4e3878: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4E3878u;
    SET_GPR_U32(ctx, 31, 0x4E3880u);
    ctx->pc = 0x4E387Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3878u;
            // 0x4e387c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3880u; }
        if (ctx->pc != 0x4E3880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3880u; }
        if (ctx->pc != 0x4E3880u) { return; }
    }
    ctx->pc = 0x4E3880u;
label_4e3880:
    // 0x4e3880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e3880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3884:
    // 0x4e3884: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e3884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e3888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e3888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e388c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e388cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3890: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3890u;
            // 0x4e3894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3898u;
    // 0x4e3898: 0x0  nop
    ctx->pc = 0x4e3898u;
    // NOP
    // 0x4e389c: 0x0  nop
    ctx->pc = 0x4e389cu;
    // NOP
}
