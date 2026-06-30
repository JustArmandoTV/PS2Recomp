#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C32F0
// Address: 0x2c32f0 - 0x2c3480
void sub_002C32F0_0x2c32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C32F0_0x2c32f0");
#endif

    switch (ctx->pc) {
        case 0x2c3318u: goto label_2c3318;
        case 0x2c3338u: goto label_2c3338;
        case 0x2c3370u: goto label_2c3370;
        case 0x2c338cu: goto label_2c338c;
        case 0x2c33b0u: goto label_2c33b0;
        case 0x2c3410u: goto label_2c3410;
        case 0x2c341cu: goto label_2c341c;
        case 0x2c3428u: goto label_2c3428;
        case 0x2c3434u: goto label_2c3434;
        case 0x2c3440u: goto label_2c3440;
        case 0x2c344cu: goto label_2c344c;
        case 0x2c3464u: goto label_2c3464;
        default: break;
    }

    ctx->pc = 0x2c32f0u;

    // 0x2c32f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c32f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c32f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c32f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c32fc: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2c32fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x2c3300: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c3304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c330c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c330cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3310: 0xc0b0d94  jal         func_2C3650
    ctx->pc = 0x2C3310u;
    SET_GPR_U32(ctx, 31, 0x2C3318u);
    ctx->pc = 0x2C3314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3310u;
            // 0x2c3314: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3650u;
    if (runtime->hasFunction(0x2C3650u)) {
        auto targetFn = runtime->lookupFunction(0x2C3650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3318u; }
        if (ctx->pc != 0x2C3318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3650_0x2c3650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3318u; }
        if (ctx->pc != 0x2C3318u) { return; }
    }
    ctx->pc = 0x2C3318u;
label_2c3318:
    // 0x2c3318: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c3318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c331c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c3320: 0x24631220  addiu       $v1, $v1, 0x1220
    ctx->pc = 0x2c3320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4640));
    // 0x2c3324: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x2c3324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x2c3328: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c3328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2c332c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3330: 0xc0b0d90  jal         func_2C3640
    ctx->pc = 0x2C3330u;
    SET_GPR_U32(ctx, 31, 0x2C3338u);
    ctx->pc = 0x2C3334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3330u;
            // 0x2c3334: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3640u;
    if (runtime->hasFunction(0x2C3640u)) {
        auto targetFn = runtime->lookupFunction(0x2C3640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3338u; }
        if (ctx->pc != 0x2C3338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3640_0x2c3640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3338u; }
        if (ctx->pc != 0x2C3338u) { return; }
    }
    ctx->pc = 0x2C3338u;
label_2c3338:
    // 0x2c3338: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c3338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c333c: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x2c333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2c3340: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c3344: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2c3344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c3348: 0x244211d0  addiu       $v0, $v0, 0x11D0
    ctx->pc = 0x2c3348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4560));
    // 0x2c334c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c334cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3350: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c3350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2c3354: 0x26320084  addiu       $s2, $s1, 0x84
    ctx->pc = 0x2c3354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x2c3358: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c335c: 0x24421208  addiu       $v0, $v0, 0x1208
    ctx->pc = 0x2c335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4616));
    // 0x2c3360: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c3360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2c3364: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c3364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c3368: 0xc040140  jal         func_100500
    ctx->pc = 0x2C3368u;
    SET_GPR_U32(ctx, 31, 0x2C3370u);
    ctx->pc = 0x2C336Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3368u;
            // 0x2c336c: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3370u; }
        if (ctx->pc != 0x2C3370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3370u; }
        if (ctx->pc != 0x2C3370u) { return; }
    }
    ctx->pc = 0x2C3370u;
label_2c3370:
    // 0x2c3370: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3370u;
    {
        const bool branch_taken_0x2c3370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3370) {
            ctx->pc = 0x2C3374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3370u;
            // 0x2c3374: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3390u;
            goto label_2c3390;
        }
    }
    ctx->pc = 0x2C3378u;
    // 0x2c3378: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2c3378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c337c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c337cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3384: 0xc0b4554  jal         func_2D1550
    ctx->pc = 0x2C3384u;
    SET_GPR_U32(ctx, 31, 0x2C338Cu);
    ctx->pc = 0x2C3388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3384u;
            // 0x2c3388: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C338Cu; }
        if (ctx->pc != 0x2C338Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C338Cu; }
        if (ctx->pc != 0x2C338Cu) { return; }
    }
    ctx->pc = 0x2C338Cu;
label_2c338c:
    // 0x2c338c: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x2c338cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_2c3390:
    // 0x2c3390: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c3390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c3394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c339c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c339cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c33a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c33a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c33a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C33A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C33A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33A4u;
            // 0x2c33a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C33ACu;
    // 0x2c33ac: 0x0  nop
    ctx->pc = 0x2c33acu;
    // NOP
label_2c33b0:
    // 0x2c33b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c33b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c33b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c33b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c33b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c33b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c33bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c33bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c33c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c33c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33c4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C33C4u;
    {
        const bool branch_taken_0x2c33c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C33C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33C4u;
            // 0x2c33c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33c4) {
            ctx->pc = 0x2C3464u;
            goto label_2c3464;
        }
    }
    ctx->pc = 0x2C33CCu;
    // 0x2c33cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c33ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c33d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c33d4: 0x24631220  addiu       $v1, $v1, 0x1220
    ctx->pc = 0x2c33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4640));
    // 0x2c33d8: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x2c33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x2c33dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c33dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c33e0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C33E0u;
    {
        const bool branch_taken_0x2c33e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C33E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33E0u;
            // 0x2c33e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33e0) {
            ctx->pc = 0x2C344Cu;
            goto label_2c344c;
        }
    }
    ctx->pc = 0x2C33E8u;
    // 0x2c33e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c33ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c33f0: 0x24631180  addiu       $v1, $v1, 0x1180
    ctx->pc = 0x2c33f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
    // 0x2c33f4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c33f8: 0x244211b8  addiu       $v0, $v0, 0x11B8
    ctx->pc = 0x2c33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4536));
    // 0x2c33fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c3400: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c3400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c3404: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c3404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c3408: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C3408u;
    SET_GPR_U32(ctx, 31, 0x2C3410u);
    ctx->pc = 0x2C340Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3408u;
            // 0x2c340c: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3410u; }
        if (ctx->pc != 0x2C3410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3410u; }
        if (ctx->pc != 0x2C3410u) { return; }
    }
    ctx->pc = 0x2C3410u;
label_2c3410:
    // 0x2c3410: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c3410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c3414: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2C3414u;
    SET_GPR_U32(ctx, 31, 0x2C341Cu);
    ctx->pc = 0x2C3418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3414u;
            // 0x2c3418: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C341Cu; }
        if (ctx->pc != 0x2C341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C341Cu; }
        if (ctx->pc != 0x2C341Cu) { return; }
    }
    ctx->pc = 0x2C341Cu;
label_2c341c:
    // 0x2c341c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c341cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c3420: 0xc0b0b90  jal         func_2C2E40
    ctx->pc = 0x2C3420u;
    SET_GPR_U32(ctx, 31, 0x2C3428u);
    ctx->pc = 0x2C3424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3420u;
            // 0x2c3424: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E40u;
    if (runtime->hasFunction(0x2C2E40u)) {
        auto targetFn = runtime->lookupFunction(0x2C2E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3428u; }
        if (ctx->pc != 0x2C3428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2E40_0x2c2e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3428u; }
        if (ctx->pc != 0x2C3428u) { return; }
    }
    ctx->pc = 0x2C3428u;
label_2c3428:
    // 0x2c3428: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c3428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c342c: 0xc0b0b90  jal         func_2C2E40
    ctx->pc = 0x2C342Cu;
    SET_GPR_U32(ctx, 31, 0x2C3434u);
    ctx->pc = 0x2C3430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C342Cu;
            // 0x2c3430: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E40u;
    if (runtime->hasFunction(0x2C2E40u)) {
        auto targetFn = runtime->lookupFunction(0x2C2E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3434u; }
        if (ctx->pc != 0x2C3434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2E40_0x2c2e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3434u; }
        if (ctx->pc != 0x2C3434u) { return; }
    }
    ctx->pc = 0x2C3434u;
label_2c3434:
    // 0x2c3434: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c3434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c3438: 0xc0b0d20  jal         func_2C3480
    ctx->pc = 0x2C3438u;
    SET_GPR_U32(ctx, 31, 0x2C3440u);
    ctx->pc = 0x2C343Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3438u;
            // 0x2c343c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3480u;
    if (runtime->hasFunction(0x2C3480u)) {
        auto targetFn = runtime->lookupFunction(0x2C3480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3440u; }
        if (ctx->pc != 0x2C3440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3480_0x2c3480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3440u; }
        if (ctx->pc != 0x2C3440u) { return; }
    }
    ctx->pc = 0x2C3440u;
label_2c3440:
    // 0x2c3440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3444: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C3444u;
    SET_GPR_U32(ctx, 31, 0x2C344Cu);
    ctx->pc = 0x2C3448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3444u;
            // 0x2c3448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C344Cu; }
        if (ctx->pc != 0x2C344Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C344Cu; }
        if (ctx->pc != 0x2C344Cu) { return; }
    }
    ctx->pc = 0x2C344Cu;
label_2c344c:
    // 0x2c344c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c344cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c3450: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c3450u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c3454: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3454u;
    {
        const bool branch_taken_0x2c3454 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c3454) {
            ctx->pc = 0x2C3458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3454u;
            // 0x2c3458: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3468u;
            goto label_2c3468;
        }
    }
    ctx->pc = 0x2C345Cu;
    // 0x2c345c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C345Cu;
    SET_GPR_U32(ctx, 31, 0x2C3464u);
    ctx->pc = 0x2C3460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C345Cu;
            // 0x2c3460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3464u; }
        if (ctx->pc != 0x2C3464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3464u; }
        if (ctx->pc != 0x2C3464u) { return; }
    }
    ctx->pc = 0x2C3464u;
label_2c3464:
    // 0x2c3464: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c3464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3468:
    // 0x2c3468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c3468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c346c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c346cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3474: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3474u;
            // 0x2c3478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C347Cu;
    // 0x2c347c: 0x0  nop
    ctx->pc = 0x2c347cu;
    // NOP
}
