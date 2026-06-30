#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A340
// Address: 0x26a340 - 0x26a560
void sub_0026A340_0x26a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A340_0x26a340");
#endif

    switch (ctx->pc) {
        case 0x26a370u: goto label_26a370;
        case 0x26a3f8u: goto label_26a3f8;
        case 0x26a428u: goto label_26a428;
        case 0x26a44cu: goto label_26a44c;
        case 0x26a45cu: goto label_26a45c;
        case 0x26a4f4u: goto label_26a4f4;
        case 0x26a53cu: goto label_26a53c;
        default: break;
    }

    ctx->pc = 0x26a340u;

    // 0x26a340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26a344: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a348: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26a34c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x26a34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x26a350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a358: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26a358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a360: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x26a360u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26a364: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26a364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26a368: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x26A368u;
    SET_GPR_U32(ctx, 31, 0x26A370u);
    ctx->pc = 0x26A36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A368u;
            // 0x26a36c: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A370u; }
        if (ctx->pc != 0x26A370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A370u; }
        if (ctx->pc != 0x26A370u) { return; }
    }
    ctx->pc = 0x26A370u;
label_26a370:
    // 0x26a370: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x26a370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x26a374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a378: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26A378u;
    {
        const bool branch_taken_0x26a378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A378u;
            // 0x26a37c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a378) {
            ctx->pc = 0x26A3D0u;
            goto label_26a3d0;
        }
    }
    ctx->pc = 0x26A380u;
    // 0x26a380: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a384: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x26a384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x26a388: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x26a388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x26a38c: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x26a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
    // 0x26a390: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x26a390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x26a394: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x26a394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x26a398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a39c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x26a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x26a3a0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x26a3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x26a3a4: 0x2463f2c0  addiu       $v1, $v1, -0xD40
    ctx->pc = 0x26a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963904));
    // 0x26a3a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26a3ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x26a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x26a3b0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x26a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x26a3b4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x26a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x26a3b8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x26a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x26a3bc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x26a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x26a3c0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x26a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x26a3c4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x26a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x26a3c8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x26a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x26a3cc: 0x0  nop
    ctx->pc = 0x26a3ccu;
    // NOP
label_26a3d0:
    // 0x26a3d0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x26a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x26a3d4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x26a3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x26a3d8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x26a3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x26a3dc: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x26a3dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26a3e0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A3E0u;
    {
        const bool branch_taken_0x26a3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a3e0) {
            ctx->pc = 0x26A3F8u;
            goto label_26a3f8;
        }
    }
    ctx->pc = 0x26A3E8u;
    // 0x26a3e8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x26a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26a3ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26a3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a3f0: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x26A3F0u;
    SET_GPR_U32(ctx, 31, 0x26A3F8u);
    ctx->pc = 0x26A3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3F0u;
            // 0x26a3f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3F8u; }
        if (ctx->pc != 0x26A3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3F8u; }
        if (ctx->pc != 0x26A3F8u) { return; }
    }
    ctx->pc = 0x26A3F8u;
label_26a3f8:
    // 0x26a3f8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x26a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x26a3fc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x26a3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x26a400: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x26a400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x26a404: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x26a404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26a408: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A408u;
    {
        const bool branch_taken_0x26a408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a408) {
            ctx->pc = 0x26A428u;
            goto label_26a428;
        }
    }
    ctx->pc = 0x26A410u;
    // 0x26a410: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x26a410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26a414: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x26a414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26a418: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x26a418u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x26a41c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x26a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26a420: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x26A420u;
    SET_GPR_U32(ctx, 31, 0x26A428u);
    ctx->pc = 0x26A424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A420u;
            // 0x26a424: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A428u; }
        if (ctx->pc != 0x26A428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A428u; }
        if (ctx->pc != 0x26A428u) { return; }
    }
    ctx->pc = 0x26A428u;
label_26a428:
    // 0x26a428: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x26a428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x26a42c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26a42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26a430: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26a430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a434: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26a434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26a438: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x26a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26a43c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x26a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26a440: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x26a440u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26a444: 0xc0a8448  jal         func_2A1120
    ctx->pc = 0x26A444u;
    SET_GPR_U32(ctx, 31, 0x26A44Cu);
    ctx->pc = 0x26A448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A444u;
            // 0x26a448: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A44Cu; }
        if (ctx->pc != 0x26A44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A44Cu; }
        if (ctx->pc != 0x26A44Cu) { return; }
    }
    ctx->pc = 0x26A44Cu;
label_26a44c:
    // 0x26a44c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a450: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26a450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26a454: 0xc0a7a48  jal         func_29E920
    ctx->pc = 0x26A454u;
    SET_GPR_U32(ctx, 31, 0x26A45Cu);
    ctx->pc = 0x26A458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A454u;
            // 0x26a458: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A45Cu; }
        if (ctx->pc != 0x26A45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A45Cu; }
        if (ctx->pc != 0x26A45Cu) { return; }
    }
    ctx->pc = 0x26A45Cu;
label_26a45c:
    // 0x26a45c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x26a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x26a460: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26a460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a464: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x26a464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x26a468: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x26a468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x26a46c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26a46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a47c: 0x3e00008  jr          $ra
    ctx->pc = 0x26A47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A47Cu;
            // 0x26a480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A484u;
    // 0x26a484: 0x0  nop
    ctx->pc = 0x26a484u;
    // NOP
    // 0x26a488: 0x0  nop
    ctx->pc = 0x26a488u;
    // NOP
    // 0x26a48c: 0x0  nop
    ctx->pc = 0x26a48cu;
    // NOP
    // 0x26a490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a49c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a4a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a4a4: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x26A4A4u;
    {
        const bool branch_taken_0x26a4a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4A4u;
            // 0x26a4a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4a4) {
            ctx->pc = 0x26A540u;
            goto label_26a540;
        }
    }
    ctx->pc = 0x26A4ACu;
    // 0x26a4ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x26a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x26a4b0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x26a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x26a4b4: 0x2463f2c0  addiu       $v1, $v1, -0xD40
    ctx->pc = 0x26a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963904));
    // 0x26a4b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26A4B8u;
    {
        const bool branch_taken_0x26a4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4B8u;
            // 0x26a4bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4b8) {
            ctx->pc = 0x26A4F8u;
            goto label_26a4f8;
        }
    }
    ctx->pc = 0x26A4C0u;
    // 0x26a4c0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x26a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x26a4c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26a4c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26a4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26a4cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26A4CCu;
    {
        const bool branch_taken_0x26a4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a4cc) {
            ctx->pc = 0x26A4F8u;
            goto label_26a4f8;
        }
    }
    ctx->pc = 0x26A4D4u;
    // 0x26a4d4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x26a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x26a4d8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a4dc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26a4e0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x26a4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x26a4e4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x26a4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26a4e8: 0x230bc  dsll32      $a2, $v0, 2
    ctx->pc = 0x26a4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 2));
    // 0x26a4ec: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x26A4ECu;
    SET_GPR_U32(ctx, 31, 0x26A4F4u);
    ctx->pc = 0x26A4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4ECu;
            // 0x26a4f0: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4F4u; }
        if (ctx->pc != 0x26A4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4F4u; }
        if (ctx->pc != 0x26A4F4u) { return; }
    }
    ctx->pc = 0x26A4F4u;
label_26a4f4:
    // 0x26a4f4: 0x0  nop
    ctx->pc = 0x26a4f4u;
    // NOP
label_26a4f8:
    // 0x26a4f8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A4F8u;
    {
        const bool branch_taken_0x26a4f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4F8u;
            // 0x26a4fc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4f8) {
            ctx->pc = 0x26A518u;
            goto label_26a518;
        }
    }
    ctx->pc = 0x26A500u;
    // 0x26a500: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x26a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x26a504: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A504u;
    {
        const bool branch_taken_0x26a504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A504u;
            // 0x26a508: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a504) {
            ctx->pc = 0x26A518u;
            goto label_26a518;
        }
    }
    ctx->pc = 0x26A50Cu;
    // 0x26a50c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a510: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x26a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x26a514: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x26a514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_26a518:
    // 0x26a518: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x26a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x26a51c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a51cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a520: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A520u;
    {
        const bool branch_taken_0x26a520 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26A524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A520u;
            // 0x26a524: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a520) {
            ctx->pc = 0x26A540u;
            goto label_26a540;
        }
    }
    ctx->pc = 0x26A528u;
    // 0x26a528: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x26a528u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26a52c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26a530: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26a530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a534: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x26A534u;
    SET_GPR_U32(ctx, 31, 0x26A53Cu);
    ctx->pc = 0x26A538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A534u;
            // 0x26a538: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A53Cu; }
        if (ctx->pc != 0x26A53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A53Cu; }
        if (ctx->pc != 0x26A53Cu) { return; }
    }
    ctx->pc = 0x26A53Cu;
label_26a53c:
    // 0x26a53c: 0x0  nop
    ctx->pc = 0x26a53cu;
    // NOP
label_26a540:
    // 0x26a540: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26a540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a544: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a54c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a550: 0x3e00008  jr          $ra
    ctx->pc = 0x26A550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A550u;
            // 0x26a554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A558u;
    // 0x26a558: 0x0  nop
    ctx->pc = 0x26a558u;
    // NOP
    // 0x26a55c: 0x0  nop
    ctx->pc = 0x26a55cu;
    // NOP
}
