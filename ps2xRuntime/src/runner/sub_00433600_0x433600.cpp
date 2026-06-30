#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00433600
// Address: 0x433600 - 0x4337a0
void sub_00433600_0x433600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433600_0x433600");
#endif

    switch (ctx->pc) {
        case 0x43361cu: goto label_43361c;
        case 0x43363cu: goto label_43363c;
        case 0x43368cu: goto label_43368c;
        case 0x4336acu: goto label_4336ac;
        case 0x4336d0u: goto label_4336d0;
        case 0x433730u: goto label_433730;
        case 0x43373cu: goto label_43373c;
        case 0x433748u: goto label_433748;
        case 0x433754u: goto label_433754;
        case 0x433760u: goto label_433760;
        case 0x43376cu: goto label_43376c;
        case 0x433784u: goto label_433784;
        default: break;
    }

    ctx->pc = 0x433600u;

    // 0x433600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x433600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x433604: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x433604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x433608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x433608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43360c: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x43360cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x433610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x433610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x433614: 0xc10ce20  jal         func_433880
    ctx->pc = 0x433614u;
    SET_GPR_U32(ctx, 31, 0x43361Cu);
    ctx->pc = 0x433618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433614u;
            // 0x433618: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x433880u;
    if (runtime->hasFunction(0x433880u)) {
        auto targetFn = runtime->lookupFunction(0x433880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43361Cu; }
        if (ctx->pc != 0x43361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00433880_0x433880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43361Cu; }
        if (ctx->pc != 0x43361Cu) { return; }
    }
    ctx->pc = 0x43361Cu;
label_43361c:
    // 0x43361c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43361cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x433620: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x433620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x433624: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x433624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x433628: 0x2442cb38  addiu       $v0, $v0, -0x34C8
    ctx->pc = 0x433628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953784));
    // 0x43362c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43362cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x433630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x433630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433634: 0xc10ce1c  jal         func_433870
    ctx->pc = 0x433634u;
    SET_GPR_U32(ctx, 31, 0x43363Cu);
    ctx->pc = 0x433638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433634u;
            // 0x433638: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x433870u;
    if (runtime->hasFunction(0x433870u)) {
        auto targetFn = runtime->lookupFunction(0x433870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43363Cu; }
        if (ctx->pc != 0x43363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00433870_0x433870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43363Cu; }
        if (ctx->pc != 0x43363Cu) { return; }
    }
    ctx->pc = 0x43363Cu;
label_43363c:
    // 0x43363c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x43363cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x433640: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x433640u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x433644: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x433644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x433648: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x433648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x43364c: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x43364cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x433650: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x433650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x433654: 0x24e7c4f0  addiu       $a3, $a3, -0x3B10
    ctx->pc = 0x433654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952176));
    // 0x433658: 0x2484c9b0  addiu       $a0, $a0, -0x3650
    ctx->pc = 0x433658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953392));
    // 0x43365c: 0x2463c9e8  addiu       $v1, $v1, -0x3618
    ctx->pc = 0x43365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953448));
    // 0x433660: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x433660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x433664: 0x8cc80968  lw          $t0, 0x968($a2)
    ctx->pc = 0x433664u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x433668: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x433668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x43366c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x43366cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x433670: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x433670u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x433674: 0xa2070090  sb          $a3, 0x90($s0)
    ctx->pc = 0x433674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 7));
    // 0x433678: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x433678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x43367c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x43367cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x433680: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x433680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x433684: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x433684u;
    SET_GPR_U32(ctx, 31, 0x43368Cu);
    ctx->pc = 0x433688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433684u;
            // 0x433688: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43368Cu; }
        if (ctx->pc != 0x43368Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43368Cu; }
        if (ctx->pc != 0x43368Cu) { return; }
    }
    ctx->pc = 0x43368Cu;
label_43368c:
    // 0x43368c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x43368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x433690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x433690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433694: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x433694u;
    {
        const bool branch_taken_0x433694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x433698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433694u;
            // 0x433698: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433694) {
            ctx->pc = 0x4336B0u;
            goto label_4336b0;
        }
    }
    ctx->pc = 0x43369Cu;
    // 0x43369c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x43369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x4336a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4336a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4336a4: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x4336A4u;
    SET_GPR_U32(ctx, 31, 0x4336ACu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4336ACu; }
        if (ctx->pc != 0x4336ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4336ACu; }
        if (ctx->pc != 0x4336ACu) { return; }
    }
    ctx->pc = 0x4336ACu;
label_4336ac:
    // 0x4336ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4336acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4336b0:
    // 0x4336b0: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4336b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4336b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4336b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4336b8: 0xa2000091  sb          $zero, 0x91($s0)
    ctx->pc = 0x4336b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 145), (uint8_t)GPR_U32(ctx, 0));
    // 0x4336bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4336bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4336c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4336c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4336c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4336C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4336C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4336C4u;
            // 0x4336c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4336CCu;
    // 0x4336cc: 0x0  nop
    ctx->pc = 0x4336ccu;
    // NOP
label_4336d0:
    // 0x4336d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4336d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4336d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4336d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4336d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4336d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4336dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4336dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4336e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4336e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4336e4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4336E4u;
    {
        const bool branch_taken_0x4336e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4336E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4336E4u;
            // 0x4336e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4336e4) {
            ctx->pc = 0x433784u;
            goto label_433784;
        }
    }
    ctx->pc = 0x4336ECu;
    // 0x4336ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4336ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4336f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4336f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4336f4: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x4336f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x4336f8: 0x2442cb38  addiu       $v0, $v0, -0x34C8
    ctx->pc = 0x4336f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953784));
    // 0x4336fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4336fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x433700: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x433700u;
    {
        const bool branch_taken_0x433700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x433704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433700u;
            // 0x433704: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433700) {
            ctx->pc = 0x43376Cu;
            goto label_43376c;
        }
    }
    ctx->pc = 0x433708u;
    // 0x433708: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x433708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43370c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43370cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x433710: 0x2463cab0  addiu       $v1, $v1, -0x3550
    ctx->pc = 0x433710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953648));
    // 0x433714: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x433714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x433718: 0x2442cae8  addiu       $v0, $v0, -0x3518
    ctx->pc = 0x433718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953704));
    // 0x43371c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43371cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x433720: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x433720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x433724: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x433724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x433728: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x433728u;
    SET_GPR_U32(ctx, 31, 0x433730u);
    ctx->pc = 0x43372Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433728u;
            // 0x43372c: 0x24a52cf0  addiu       $a1, $a1, 0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433730u; }
        if (ctx->pc != 0x433730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433730u; }
        if (ctx->pc != 0x433730u) { return; }
    }
    ctx->pc = 0x433730u;
label_433730:
    // 0x433730: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x433730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x433734: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x433734u;
    SET_GPR_U32(ctx, 31, 0x43373Cu);
    ctx->pc = 0x433738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433734u;
            // 0x433738: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43373Cu; }
        if (ctx->pc != 0x43373Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43373Cu; }
        if (ctx->pc != 0x43373Cu) { return; }
    }
    ctx->pc = 0x43373Cu;
label_43373c:
    // 0x43373c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x43373cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x433740: 0xc10ce00  jal         func_433800
    ctx->pc = 0x433740u;
    SET_GPR_U32(ctx, 31, 0x433748u);
    ctx->pc = 0x433744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433740u;
            // 0x433744: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x433800u;
    if (runtime->hasFunction(0x433800u)) {
        auto targetFn = runtime->lookupFunction(0x433800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433748u; }
        if (ctx->pc != 0x433748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00433800_0x433800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433748u; }
        if (ctx->pc != 0x433748u) { return; }
    }
    ctx->pc = 0x433748u;
label_433748:
    // 0x433748: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x433748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x43374c: 0xc10ce00  jal         func_433800
    ctx->pc = 0x43374Cu;
    SET_GPR_U32(ctx, 31, 0x433754u);
    ctx->pc = 0x433750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43374Cu;
            // 0x433750: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x433800u;
    if (runtime->hasFunction(0x433800u)) {
        auto targetFn = runtime->lookupFunction(0x433800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433754u; }
        if (ctx->pc != 0x433754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00433800_0x433800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433754u; }
        if (ctx->pc != 0x433754u) { return; }
    }
    ctx->pc = 0x433754u;
label_433754:
    // 0x433754: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x433754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x433758: 0xc10cde8  jal         func_4337A0
    ctx->pc = 0x433758u;
    SET_GPR_U32(ctx, 31, 0x433760u);
    ctx->pc = 0x43375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433758u;
            // 0x43375c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4337A0u;
    if (runtime->hasFunction(0x4337A0u)) {
        auto targetFn = runtime->lookupFunction(0x4337A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433760u; }
        if (ctx->pc != 0x433760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004337A0_0x4337a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433760u; }
        if (ctx->pc != 0x433760u) { return; }
    }
    ctx->pc = 0x433760u;
label_433760:
    // 0x433760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x433760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433764: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x433764u;
    SET_GPR_U32(ctx, 31, 0x43376Cu);
    ctx->pc = 0x433768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433764u;
            // 0x433768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43376Cu; }
        if (ctx->pc != 0x43376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43376Cu; }
        if (ctx->pc != 0x43376Cu) { return; }
    }
    ctx->pc = 0x43376Cu;
label_43376c:
    // 0x43376c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x43376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x433770: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x433770u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x433774: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x433774u;
    {
        const bool branch_taken_0x433774 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x433774) {
            ctx->pc = 0x433778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x433774u;
            // 0x433778: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x433788u;
            goto label_433788;
        }
    }
    ctx->pc = 0x43377Cu;
    // 0x43377c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43377Cu;
    SET_GPR_U32(ctx, 31, 0x433784u);
    ctx->pc = 0x433780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43377Cu;
            // 0x433780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433784u; }
        if (ctx->pc != 0x433784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433784u; }
        if (ctx->pc != 0x433784u) { return; }
    }
    ctx->pc = 0x433784u;
label_433784:
    // 0x433784: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x433784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_433788:
    // 0x433788: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x433788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43378c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43378cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x433790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x433790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x433794: 0x3e00008  jr          $ra
    ctx->pc = 0x433794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433794u;
            // 0x433798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43379Cu;
    // 0x43379c: 0x0  nop
    ctx->pc = 0x43379cu;
    // NOP
}
