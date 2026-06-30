#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DA340
// Address: 0x3da340 - 0x3da4e0
void sub_003DA340_0x3da340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA340_0x3da340");
#endif

    switch (ctx->pc) {
        case 0x3da35cu: goto label_3da35c;
        case 0x3da37cu: goto label_3da37c;
        case 0x3da3ccu: goto label_3da3cc;
        case 0x3da3ecu: goto label_3da3ec;
        case 0x3da410u: goto label_3da410;
        case 0x3da470u: goto label_3da470;
        case 0x3da47cu: goto label_3da47c;
        case 0x3da488u: goto label_3da488;
        case 0x3da494u: goto label_3da494;
        case 0x3da4a0u: goto label_3da4a0;
        case 0x3da4acu: goto label_3da4ac;
        case 0x3da4c4u: goto label_3da4c4;
        default: break;
    }

    ctx->pc = 0x3da340u;

    // 0x3da340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3da340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3da344: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3da344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3da348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3da348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3da34c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3da34cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x3da350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da354: 0xc0f6970  jal         func_3DA5C0
    ctx->pc = 0x3DA354u;
    SET_GPR_U32(ctx, 31, 0x3DA35Cu);
    ctx->pc = 0x3DA358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA354u;
            // 0x3da358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA5C0u;
    if (runtime->hasFunction(0x3DA5C0u)) {
        auto targetFn = runtime->lookupFunction(0x3DA5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA35Cu; }
        if (ctx->pc != 0x3DA35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA5C0_0x3da5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA35Cu; }
        if (ctx->pc != 0x3DA35Cu) { return; }
    }
    ctx->pc = 0x3DA35Cu;
label_3da35c:
    // 0x3da35c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3da35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3da360: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3da360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3da364: 0x24639890  addiu       $v1, $v1, -0x6770
    ctx->pc = 0x3da364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940816));
    // 0x3da368: 0x244298c8  addiu       $v0, $v0, -0x6738
    ctx->pc = 0x3da368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940872));
    // 0x3da36c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3da36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3da370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da374: 0xc0f696c  jal         func_3DA5B0
    ctx->pc = 0x3DA374u;
    SET_GPR_U32(ctx, 31, 0x3DA37Cu);
    ctx->pc = 0x3DA378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA374u;
            // 0x3da378: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA5B0u;
    if (runtime->hasFunction(0x3DA5B0u)) {
        auto targetFn = runtime->lookupFunction(0x3DA5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA37Cu; }
        if (ctx->pc != 0x3DA37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA5B0_0x3da5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA37Cu; }
        if (ctx->pc != 0x3DA37Cu) { return; }
    }
    ctx->pc = 0x3DA37Cu;
label_3da37c:
    // 0x3da37c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3da37cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3da380: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3da380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3da384: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3da384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3da388: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3da388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3da38c: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x3da38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3da390: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3da390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3da394: 0x24e7c4f0  addiu       $a3, $a3, -0x3B10
    ctx->pc = 0x3da394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952176));
    // 0x3da398: 0x24849790  addiu       $a0, $a0, -0x6870
    ctx->pc = 0x3da398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940560));
    // 0x3da39c: 0x246397c8  addiu       $v1, $v1, -0x6838
    ctx->pc = 0x3da39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940616));
    // 0x3da3a0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3da3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3da3a4: 0x8cc80968  lw          $t0, 0x968($a2)
    ctx->pc = 0x3da3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x3da3a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3da3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3da3ac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3da3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3da3b0: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x3da3b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3da3b4: 0xa20700a8  sb          $a3, 0xA8($s0)
    ctx->pc = 0x3da3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 7));
    // 0x3da3b8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3da3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3da3bc: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x3da3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x3da3c0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3da3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x3da3c4: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x3DA3C4u;
    SET_GPR_U32(ctx, 31, 0x3DA3CCu);
    ctx->pc = 0x3DA3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA3C4u;
            // 0x3da3c8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA3CCu; }
        if (ctx->pc != 0x3DA3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA3CCu; }
        if (ctx->pc != 0x3DA3CCu) { return; }
    }
    ctx->pc = 0x3DA3CCu;
label_3da3cc:
    // 0x3da3cc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3da3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3da3d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3da3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da3d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA3D4u;
    {
        const bool branch_taken_0x3da3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA3D4u;
            // 0x3da3d8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da3d4) {
            ctx->pc = 0x3DA3F0u;
            goto label_3da3f0;
        }
    }
    ctx->pc = 0x3DA3DCu;
    // 0x3da3dc: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x3da3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x3da3e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3da3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3da3e4: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x3DA3E4u;
    SET_GPR_U32(ctx, 31, 0x3DA3ECu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA3ECu; }
        if (ctx->pc != 0x3DA3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA3ECu; }
        if (ctx->pc != 0x3DA3ECu) { return; }
    }
    ctx->pc = 0x3DA3ECu;
label_3da3ec:
    // 0x3da3ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3da3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3da3f0:
    // 0x3da3f0: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x3da3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x3da3f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3da3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da3f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3da3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da3fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da400: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA400u;
            // 0x3da404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA408u;
    // 0x3da408: 0x0  nop
    ctx->pc = 0x3da408u;
    // NOP
    // 0x3da40c: 0x0  nop
    ctx->pc = 0x3da40cu;
    // NOP
label_3da410:
    // 0x3da410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3da410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3da414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3da414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3da418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3da418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3da41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da424: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3DA424u;
    {
        const bool branch_taken_0x3da424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA424u;
            // 0x3da428: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da424) {
            ctx->pc = 0x3DA4C4u;
            goto label_3da4c4;
        }
    }
    ctx->pc = 0x3DA42Cu;
    // 0x3da42c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3da42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3da430: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3da430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3da434: 0x24639890  addiu       $v1, $v1, -0x6770
    ctx->pc = 0x3da434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940816));
    // 0x3da438: 0x244298c8  addiu       $v0, $v0, -0x6738
    ctx->pc = 0x3da438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940872));
    // 0x3da43c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3da43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3da440: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DA440u;
    {
        const bool branch_taken_0x3da440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA440u;
            // 0x3da444: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da440) {
            ctx->pc = 0x3DA4ACu;
            goto label_3da4ac;
        }
    }
    ctx->pc = 0x3DA448u;
    // 0x3da448: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3da448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3da44c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3da44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3da450: 0x24639840  addiu       $v1, $v1, -0x67C0
    ctx->pc = 0x3da450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940736));
    // 0x3da454: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3da454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x3da458: 0x24429878  addiu       $v0, $v0, -0x6788
    ctx->pc = 0x3da458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940792));
    // 0x3da45c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3da45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3da460: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3da460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3da464: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3da464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3da468: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3DA468u;
    SET_GPR_U32(ctx, 31, 0x3DA470u);
    ctx->pc = 0x3DA46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA468u;
            // 0x3da46c: 0x24a59d70  addiu       $a1, $a1, -0x6290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA470u; }
        if (ctx->pc != 0x3DA470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA470u; }
        if (ctx->pc != 0x3DA470u) { return; }
    }
    ctx->pc = 0x3DA470u;
label_3da470:
    // 0x3da470: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3da470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3da474: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x3DA474u;
    SET_GPR_U32(ctx, 31, 0x3DA47Cu);
    ctx->pc = 0x3DA478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA474u;
            // 0x3da478: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA47Cu; }
        if (ctx->pc != 0x3DA47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA47Cu; }
        if (ctx->pc != 0x3DA47Cu) { return; }
    }
    ctx->pc = 0x3DA47Cu;
label_3da47c:
    // 0x3da47c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3da47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3da480: 0xc0f6950  jal         func_3DA540
    ctx->pc = 0x3DA480u;
    SET_GPR_U32(ctx, 31, 0x3DA488u);
    ctx->pc = 0x3DA484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA480u;
            // 0x3da484: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA540u;
    if (runtime->hasFunction(0x3DA540u)) {
        auto targetFn = runtime->lookupFunction(0x3DA540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA488u; }
        if (ctx->pc != 0x3DA488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA540_0x3da540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA488u; }
        if (ctx->pc != 0x3DA488u) { return; }
    }
    ctx->pc = 0x3DA488u;
label_3da488:
    // 0x3da488: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3da488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3da48c: 0xc0f6950  jal         func_3DA540
    ctx->pc = 0x3DA48Cu;
    SET_GPR_U32(ctx, 31, 0x3DA494u);
    ctx->pc = 0x3DA490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA48Cu;
            // 0x3da490: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA540u;
    if (runtime->hasFunction(0x3DA540u)) {
        auto targetFn = runtime->lookupFunction(0x3DA540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA494u; }
        if (ctx->pc != 0x3DA494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA540_0x3da540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA494u; }
        if (ctx->pc != 0x3DA494u) { return; }
    }
    ctx->pc = 0x3DA494u;
label_3da494:
    // 0x3da494: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3da494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x3da498: 0xc0f6938  jal         func_3DA4E0
    ctx->pc = 0x3DA498u;
    SET_GPR_U32(ctx, 31, 0x3DA4A0u);
    ctx->pc = 0x3DA49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA498u;
            // 0x3da49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA4E0u;
    if (runtime->hasFunction(0x3DA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x3DA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA4A0u; }
        if (ctx->pc != 0x3DA4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA4E0_0x3da4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA4A0u; }
        if (ctx->pc != 0x3DA4A0u) { return; }
    }
    ctx->pc = 0x3DA4A0u;
label_3da4a0:
    // 0x3da4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da4a4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x3DA4A4u;
    SET_GPR_U32(ctx, 31, 0x3DA4ACu);
    ctx->pc = 0x3DA4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA4A4u;
            // 0x3da4a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA4ACu; }
        if (ctx->pc != 0x3DA4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA4ACu; }
        if (ctx->pc != 0x3DA4ACu) { return; }
    }
    ctx->pc = 0x3DA4ACu;
label_3da4ac:
    // 0x3da4ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3da4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3da4b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3da4b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3da4b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA4B4u;
    {
        const bool branch_taken_0x3da4b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3da4b4) {
            ctx->pc = 0x3DA4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA4B4u;
            // 0x3da4b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DA4C8u;
            goto label_3da4c8;
        }
    }
    ctx->pc = 0x3DA4BCu;
    // 0x3da4bc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3DA4BCu;
    SET_GPR_U32(ctx, 31, 0x3DA4C4u);
    ctx->pc = 0x3DA4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA4BCu;
            // 0x3da4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA4C4u; }
        if (ctx->pc != 0x3DA4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA4C4u; }
        if (ctx->pc != 0x3DA4C4u) { return; }
    }
    ctx->pc = 0x3DA4C4u;
label_3da4c4:
    // 0x3da4c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3da4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da4c8:
    // 0x3da4c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3da4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3da4cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3da4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da4d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA4D4u;
            // 0x3da4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA4DCu;
    // 0x3da4dc: 0x0  nop
    ctx->pc = 0x3da4dcu;
    // NOP
}
