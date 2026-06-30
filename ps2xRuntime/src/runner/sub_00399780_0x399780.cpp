#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00399780
// Address: 0x399780 - 0x399970
void sub_00399780_0x399780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399780_0x399780");
#endif

    switch (ctx->pc) {
        case 0x3997a4u: goto label_3997a4;
        case 0x3997c4u: goto label_3997c4;
        case 0x3997d8u: goto label_3997d8;
        case 0x3997f4u: goto label_3997f4;
        case 0x399820u: goto label_399820;
        case 0x39988cu: goto label_39988c;
        case 0x399894u: goto label_399894;
        case 0x39989cu: goto label_39989c;
        case 0x3998b4u: goto label_3998b4;
        case 0x3998bcu: goto label_3998bc;
        case 0x3998ccu: goto label_3998cc;
        case 0x399900u: goto label_399900;
        case 0x399914u: goto label_399914;
        case 0x399928u: goto label_399928;
        case 0x39993cu: goto label_39993c;
        default: break;
    }

    ctx->pc = 0x399780u;

    // 0x399780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x399780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x399784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x399784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x399788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x399788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39978c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x399790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x399790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399794: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x399794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399798: 0x101240  sll         $v0, $s0, 9
    ctx->pc = 0x399798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
    // 0x39979c: 0xc040138  jal         func_1004E0
    ctx->pc = 0x39979Cu;
    SET_GPR_U32(ctx, 31, 0x3997A4u);
    ctx->pc = 0x3997A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39979Cu;
            // 0x3997a0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3997A4u; }
        if (ctx->pc != 0x3997A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3997A4u; }
        if (ctx->pc != 0x3997A4u) { return; }
    }
    ctx->pc = 0x3997A4u;
label_3997a4:
    // 0x3997a4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x3997a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x3997a8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x3997a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x3997ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3997acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3997b0: 0x24a59840  addiu       $a1, $a1, -0x67C0
    ctx->pc = 0x3997b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940736));
    // 0x3997b4: 0x24c696f0  addiu       $a2, $a2, -0x6910
    ctx->pc = 0x3997b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940400));
    // 0x3997b8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x3997b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3997bc: 0xc040840  jal         func_102100
    ctx->pc = 0x3997BCu;
    SET_GPR_U32(ctx, 31, 0x3997C4u);
    ctx->pc = 0x3997C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3997BCu;
            // 0x3997c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3997C4u; }
        if (ctx->pc != 0x3997C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3997C4u; }
        if (ctx->pc != 0x3997C4u) { return; }
    }
    ctx->pc = 0x3997C4u;
label_3997c4:
    // 0x3997c4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3997c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x3997c8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3997c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3997cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3997ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3997d0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3997D0u;
    SET_GPR_U32(ctx, 31, 0x3997D8u);
    ctx->pc = 0x3997D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3997D0u;
            // 0x3997d4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3997D8u; }
        if (ctx->pc != 0x3997D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3997D8u; }
        if (ctx->pc != 0x3997D8u) { return; }
    }
    ctx->pc = 0x3997D8u;
label_3997d8:
    // 0x3997d8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3997d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x3997dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3997dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3997e0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3997e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3997e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3997e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3997e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3997e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3997ec: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3997ECu;
    SET_GPR_U32(ctx, 31, 0x3997F4u);
    ctx->pc = 0x3997F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3997ECu;
            // 0x3997f0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3997F4u; }
        if (ctx->pc != 0x3997F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3997F4u; }
        if (ctx->pc != 0x3997F4u) { return; }
    }
    ctx->pc = 0x3997F4u;
label_3997f4:
    // 0x3997f4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3997f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3997f8: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x3997f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3997fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3997fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399800: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x399800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x399804: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x399804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x399808: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x399808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x39980c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x39980cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x399810: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x399810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x399814: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x399814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x399818: 0xc0e665c  jal         func_399970
    ctx->pc = 0x399818u;
    SET_GPR_U32(ctx, 31, 0x399820u);
    ctx->pc = 0x39981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399818u;
            // 0x39981c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399970u;
    if (runtime->hasFunction(0x399970u)) {
        auto targetFn = runtime->lookupFunction(0x399970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399820u; }
        if (ctx->pc != 0x399820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399970_0x399970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399820u; }
        if (ctx->pc != 0x399820u) { return; }
    }
    ctx->pc = 0x399820u;
label_399820:
    // 0x399820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x399824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x399828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39982c: 0x3e00008  jr          $ra
    ctx->pc = 0x39982Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39982Cu;
            // 0x399830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x399834u;
    // 0x399834: 0x0  nop
    ctx->pc = 0x399834u;
    // NOP
    // 0x399838: 0x0  nop
    ctx->pc = 0x399838u;
    // NOP
    // 0x39983c: 0x0  nop
    ctx->pc = 0x39983cu;
    // NOP
    // 0x399840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x399840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x399844: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x399844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x399848: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x399848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39984c: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x39984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x399850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x399850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x399854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x399854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x399858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x399858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39985c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39985cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x399860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399864: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x399864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x399868: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x399868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x39986c: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x39986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x399870: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x399870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x399874: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x399874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x399878: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x399878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x39987c: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x39987cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x399880: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x399880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x399884: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x399884u;
    SET_GPR_U32(ctx, 31, 0x39988Cu);
    ctx->pc = 0x399888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399884u;
            // 0x399888: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39988Cu; }
        if (ctx->pc != 0x39988Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39988Cu; }
        if (ctx->pc != 0x39988Cu) { return; }
    }
    ctx->pc = 0x39988Cu;
label_39988c:
    // 0x39988c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x39988Cu;
    SET_GPR_U32(ctx, 31, 0x399894u);
    ctx->pc = 0x399890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39988Cu;
            // 0x399890: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399894u; }
        if (ctx->pc != 0x399894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399894u; }
        if (ctx->pc != 0x399894u) { return; }
    }
    ctx->pc = 0x399894u;
label_399894:
    // 0x399894: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x399894u;
    SET_GPR_U32(ctx, 31, 0x39989Cu);
    ctx->pc = 0x399898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399894u;
            // 0x399898: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39989Cu; }
        if (ctx->pc != 0x39989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39989Cu; }
        if (ctx->pc != 0x39989Cu) { return; }
    }
    ctx->pc = 0x39989Cu;
label_39989c:
    // 0x39989c: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x39989cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x3998a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3998a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3998a4: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x3998a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x3998a8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x3998a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x3998ac: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x3998ACu;
    SET_GPR_U32(ctx, 31, 0x3998B4u);
    ctx->pc = 0x3998B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3998ACu;
            // 0x3998b0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3998B4u; }
        if (ctx->pc != 0x3998B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3998B4u; }
        if (ctx->pc != 0x3998B4u) { return; }
    }
    ctx->pc = 0x3998B4u;
label_3998b4:
    // 0x3998b4: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3998B4u;
    SET_GPR_U32(ctx, 31, 0x3998BCu);
    ctx->pc = 0x3998B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3998B4u;
            // 0x3998b8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3998BCu; }
        if (ctx->pc != 0x3998BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3998BCu; }
        if (ctx->pc != 0x3998BCu) { return; }
    }
    ctx->pc = 0x3998BCu;
label_3998bc:
    // 0x3998bc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3998bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3998c0: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x3998c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3998c4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3998C4u;
    SET_GPR_U32(ctx, 31, 0x3998CCu);
    ctx->pc = 0x3998C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3998C4u;
            // 0x3998c8: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3998CCu; }
        if (ctx->pc != 0x3998CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3998CCu; }
        if (ctx->pc != 0x3998CCu) { return; }
    }
    ctx->pc = 0x3998CCu;
label_3998cc:
    // 0x3998cc: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x3998ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x3998d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3998d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3998d4: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x3998d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x3998d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3998d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3998dc: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x3998dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x3998e0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x3998e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x3998e4: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x3998e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
    // 0x3998e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3998e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3998ec: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x3998ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x3998f0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3998f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3998f4: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x3998f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
    // 0x3998f8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3998F8u;
    SET_GPR_U32(ctx, 31, 0x399900u);
    ctx->pc = 0x3998FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3998F8u;
            // 0x3998fc: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399900u; }
        if (ctx->pc != 0x399900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399900u; }
        if (ctx->pc != 0x399900u) { return; }
    }
    ctx->pc = 0x399900u;
label_399900:
    // 0x399900: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x399900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399904: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x399904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x399908: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x399908u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x39990c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x39990Cu;
    SET_GPR_U32(ctx, 31, 0x399914u);
    ctx->pc = 0x399910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39990Cu;
            // 0x399910: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399914u; }
        if (ctx->pc != 0x399914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399914u; }
        if (ctx->pc != 0x399914u) { return; }
    }
    ctx->pc = 0x399914u;
label_399914:
    // 0x399914: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x399914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399918: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x399918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x39991c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x39991cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x399920: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x399920u;
    SET_GPR_U32(ctx, 31, 0x399928u);
    ctx->pc = 0x399924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399920u;
            // 0x399924: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399928u; }
        if (ctx->pc != 0x399928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399928u; }
        if (ctx->pc != 0x399928u) { return; }
    }
    ctx->pc = 0x399928u;
label_399928:
    // 0x399928: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x399928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39992c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x39992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x399930: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x399930u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x399934: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x399934u;
    SET_GPR_U32(ctx, 31, 0x39993Cu);
    ctx->pc = 0x399938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399934u;
            // 0x399938: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39993Cu; }
        if (ctx->pc != 0x39993Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39993Cu; }
        if (ctx->pc != 0x39993Cu) { return; }
    }
    ctx->pc = 0x39993Cu;
label_39993c:
    // 0x39993c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39993cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x399940: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399944: 0x24638260  addiu       $v1, $v1, -0x7DA0
    ctx->pc = 0x399944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935136));
    // 0x399948: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x399948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x39994c: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x39994cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x399950: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x399950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x399954: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x399954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x399958: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x399958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39995c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39995cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x399960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399964: 0x3e00008  jr          $ra
    ctx->pc = 0x399964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399964u;
            // 0x399968: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39996Cu;
    // 0x39996c: 0x0  nop
    ctx->pc = 0x39996cu;
    // NOP
}
