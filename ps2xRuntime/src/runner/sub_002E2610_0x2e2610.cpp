#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E2610
// Address: 0x2e2610 - 0x2e2790
void sub_002E2610_0x2e2610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2610_0x2e2610");
#endif

    switch (ctx->pc) {
        case 0x2e2658u: goto label_2e2658;
        case 0x2e266cu: goto label_2e266c;
        case 0x2e26a0u: goto label_2e26a0;
        case 0x2e26c0u: goto label_2e26c0;
        case 0x2e26ccu: goto label_2e26cc;
        case 0x2e26e0u: goto label_2e26e0;
        case 0x2e26fcu: goto label_2e26fc;
        case 0x2e2730u: goto label_2e2730;
        case 0x2e2738u: goto label_2e2738;
        case 0x2e2754u: goto label_2e2754;
        default: break;
    }

    ctx->pc = 0x2e2610u;

    // 0x2e2610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e2610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e2614: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2e2614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e2618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e2618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e261c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e2620: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e2620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e2624: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e2624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e2628: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e2628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e262c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2630: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e2630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2634: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e2634u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e2638: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x2e2638u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2e263c: 0xa4860054  sh          $a2, 0x54($a0)
    ctx->pc = 0x2e263cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 6));
    // 0x2e2640: 0xa4910052  sh          $s1, 0x52($a0)
    ctx->pc = 0x2e2640u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 17));
    // 0x2e2644: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2e2644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2648: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x2e2648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x2e264c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2650: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E2650u;
    SET_GPR_U32(ctx, 31, 0x2E2658u);
    ctx->pc = 0x2E2654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2650u;
            // 0x2e2654: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2658u; }
        if (ctx->pc != 0x2E2658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2658u; }
        if (ctx->pc != 0x2E2658u) { return; }
    }
    ctx->pc = 0x2E2658u;
label_2e2658:
    // 0x2e2658: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2e2658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2e265c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2e265cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e2660: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e2660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2664: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E2664u;
    SET_GPR_U32(ctx, 31, 0x2E266Cu);
    ctx->pc = 0x2E2668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2664u;
            // 0x2e2668: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E266Cu; }
        if (ctx->pc != 0x2E266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E266Cu; }
        if (ctx->pc != 0x2E266Cu) { return; }
    }
    ctx->pc = 0x2E266Cu;
label_2e266c:
    // 0x2e266c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x2e266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2e2670: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x2e2670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2e2674: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e2674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e2678: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2e2678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e267c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2E267Cu;
    {
        const bool branch_taken_0x2e267c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e267c) {
            ctx->pc = 0x2E2680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E267Cu;
            // 0x2e2680: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E26A8u;
            goto label_2e26a8;
        }
    }
    ctx->pc = 0x2E2684u;
    // 0x2e2684: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e2684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e2688: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x2e2688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e268c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e268cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e2690: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2e2690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e2694: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x2e2694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e2698: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E2698u;
    SET_GPR_U32(ctx, 31, 0x2E26A0u);
    ctx->pc = 0x2E269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2698u;
            // 0x2e269c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E26A0u; }
        if (ctx->pc != 0x2E26A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E26A0u; }
        if (ctx->pc != 0x2E26A0u) { return; }
    }
    ctx->pc = 0x2E26A0u;
label_2e26a0:
    // 0x2e26a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E26A0u;
    {
        const bool branch_taken_0x2e26a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E26A0u;
            // 0x2e26a4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26a0) {
            ctx->pc = 0x2E26C4u;
            goto label_2e26c4;
        }
    }
    ctx->pc = 0x2E26A8u;
label_2e26a8:
    // 0x2e26a8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2e26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e26ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e26acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e26b0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2e26b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e26b4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e26b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e26b8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E26B8u;
    SET_GPR_U32(ctx, 31, 0x2E26C0u);
    ctx->pc = 0x2E26BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E26B8u;
            // 0x2e26bc: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E26C0u; }
        if (ctx->pc != 0x2E26C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E26C0u; }
        if (ctx->pc != 0x2E26C0u) { return; }
    }
    ctx->pc = 0x2E26C0u;
label_2e26c0:
    // 0x2e26c0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2e26c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2e26c4:
    // 0x2e26c4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E26C4u;
    SET_GPR_U32(ctx, 31, 0x2E26CCu);
    ctx->pc = 0x2E26C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E26C4u;
            // 0x2e26c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E26CCu; }
        if (ctx->pc != 0x2E26CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E26CCu; }
        if (ctx->pc != 0x2E26CCu) { return; }
    }
    ctx->pc = 0x2E26CCu;
label_2e26cc:
    // 0x2e26cc: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2e26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2e26d0: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x2e26d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e26d4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2e26d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e26d8: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x2e26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x2e26dc: 0x108900  sll         $s1, $s0, 4
    ctx->pc = 0x2e26dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2e26e0:
    // 0x2e26e0: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x2e26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2e26e4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2e26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e26e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e26ec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e26ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e26f0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e26f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e26f4: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E26F4u;
    SET_GPR_U32(ctx, 31, 0x2E26FCu);
    ctx->pc = 0x2E26F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E26F4u;
            // 0x2e26f8: 0x712021  addu        $a0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E26FCu; }
        if (ctx->pc != 0x2E26FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E26FCu; }
        if (ctx->pc != 0x2E26FCu) { return; }
    }
    ctx->pc = 0x2E26FCu;
label_2e26fc:
    // 0x2e26fc: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x2e26fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2700: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e2700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e2704: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x2e2704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x2e2708: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e2708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e270c: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E270Cu;
    {
        const bool branch_taken_0x2e270c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E270Cu;
            // 0x2e2710: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e270c) {
            ctx->pc = 0x2E26E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e26e0;
        }
    }
    ctx->pc = 0x2E2714u;
    // 0x2e2714: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2e2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2e2718: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2e2718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e271c: 0x96500052  lhu         $s0, 0x52($s2)
    ctx->pc = 0x2e271cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
    // 0x2e2720: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e2720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2724: 0x108900  sll         $s1, $s0, 4
    ctx->pc = 0x2e2724u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2e2728: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E2728u;
    SET_GPR_U32(ctx, 31, 0x2E2730u);
    ctx->pc = 0x2E272Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2728u;
            // 0x2e272c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2730u; }
        if (ctx->pc != 0x2E2730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2730u; }
        if (ctx->pc != 0x2E2730u) { return; }
    }
    ctx->pc = 0x2E2730u;
label_2e2730:
    // 0x2e2730: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E2730u;
    {
        const bool branch_taken_0x2e2730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2730u;
            // 0x2e2734: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2730) {
            ctx->pc = 0x2E2768u;
            goto label_2e2768;
        }
    }
    ctx->pc = 0x2E2738u;
label_2e2738:
    // 0x2e2738: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x2e2738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2e273c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2e273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e2740: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e2740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e2744: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e2744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e2748: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e2748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e274c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E274Cu;
    SET_GPR_U32(ctx, 31, 0x2E2754u);
    ctx->pc = 0x2E2750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E274Cu;
            // 0x2e2750: 0x712021  addu        $a0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2754u; }
        if (ctx->pc != 0x2E2754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2754u; }
        if (ctx->pc != 0x2E2754u) { return; }
    }
    ctx->pc = 0x2E2754u;
label_2e2754:
    // 0x2e2754: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2e2754u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2e2758: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e2758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e275c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E275Cu;
    {
        const bool branch_taken_0x2e275c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E275Cu;
            // 0x2e2760: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e275c) {
            ctx->pc = 0x2E2738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e2738;
        }
    }
    ctx->pc = 0x2E2764u;
    // 0x2e2764: 0x0  nop
    ctx->pc = 0x2e2764u;
    // NOP
label_2e2768:
    // 0x2e2768: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x2e2768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e276c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2e276cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2e2770: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x2e2770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x2e2774: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e2774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e2778: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e2778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e277c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e277cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2780: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e2780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2784: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e2784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2788: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2788u;
            // 0x2e278c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2790u;
}
