#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CC320
// Address: 0x2cc320 - 0x2cc4f0
void sub_002CC320_0x2cc320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC320_0x2cc320");
#endif

    switch (ctx->pc) {
        case 0x2cc33cu: goto label_2cc33c;
        case 0x2cc35cu: goto label_2cc35c;
        case 0x2cc3b0u: goto label_2cc3b0;
        case 0x2cc3d0u: goto label_2cc3d0;
        case 0x2cc420u: goto label_2cc420;
        case 0x2cc480u: goto label_2cc480;
        case 0x2cc48cu: goto label_2cc48c;
        case 0x2cc498u: goto label_2cc498;
        case 0x2cc4a4u: goto label_2cc4a4;
        case 0x2cc4b0u: goto label_2cc4b0;
        case 0x2cc4bcu: goto label_2cc4bc;
        case 0x2cc4d4u: goto label_2cc4d4;
        default: break;
    }

    ctx->pc = 0x2cc320u;

    // 0x2cc320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc324: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2cc324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2cc328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc32c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2cc32cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2cc330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc334: 0xc0b320c  jal         func_2CC830
    ctx->pc = 0x2CC334u;
    SET_GPR_U32(ctx, 31, 0x2CC33Cu);
    ctx->pc = 0x2CC338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC334u;
            // 0x2cc338: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC830u;
    if (runtime->hasFunction(0x2CC830u)) {
        auto targetFn = runtime->lookupFunction(0x2CC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC33Cu; }
        if (ctx->pc != 0x2CC33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CC830_0x2cc830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC33Cu; }
        if (ctx->pc != 0x2CC33Cu) { return; }
    }
    ctx->pc = 0x2CC33Cu;
label_2cc33c:
    // 0x2cc33c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc340: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cc344: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x2cc344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2cc348: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x2cc348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x2cc34c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cc34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2cc350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc354: 0xc0b3208  jal         func_2CC820
    ctx->pc = 0x2CC354u;
    SET_GPR_U32(ctx, 31, 0x2CC35Cu);
    ctx->pc = 0x2CC358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC354u;
            // 0x2cc358: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC820u;
    if (runtime->hasFunction(0x2CC820u)) {
        auto targetFn = runtime->lookupFunction(0x2CC820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC35Cu; }
        if (ctx->pc != 0x2CC35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CC820_0x2cc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC35Cu; }
        if (ctx->pc != 0x2CC35Cu) { return; }
    }
    ctx->pc = 0x2CC35Cu;
label_2cc35c:
    // 0x2cc35c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cc35cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cc360: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x2cc360u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x2cc364: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cc364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cc368: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2cc368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2cc36c: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x2cc36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2cc370: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc374: 0x24e7c4f0  addiu       $a3, $a3, -0x3B10
    ctx->pc = 0x2cc374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952176));
    // 0x2cc378: 0x24845c20  addiu       $a0, $a0, 0x5C20
    ctx->pc = 0x2cc378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23584));
    // 0x2cc37c: 0x24635c58  addiu       $v1, $v1, 0x5C58
    ctx->pc = 0x2cc37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23640));
    // 0x2cc380: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cc380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cc384: 0x8cc80968  lw          $t0, 0x968($a2)
    ctx->pc = 0x2cc384u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x2cc388: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cc388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2cc38c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2cc38cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2cc390: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x2cc390u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc394: 0xa2070090  sb          $a3, 0x90($s0)
    ctx->pc = 0x2cc394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 7));
    // 0x2cc398: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2cc398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2cc39c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2cc39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2cc3a0: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2cc3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x2cc3a4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2cc3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2cc3a8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2CC3A8u;
    SET_GPR_U32(ctx, 31, 0x2CC3B0u);
    ctx->pc = 0x2CC3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC3A8u;
            // 0x2cc3ac: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC3B0u; }
        if (ctx->pc != 0x2CC3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC3B0u; }
        if (ctx->pc != 0x2CC3B0u) { return; }
    }
    ctx->pc = 0x2CC3B0u;
label_2cc3b0:
    // 0x2cc3b0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2cc3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cc3b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3b8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC3B8u;
    {
        const bool branch_taken_0x2cc3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC3B8u;
            // 0x2cc3bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc3b8) {
            ctx->pc = 0x2CC3D4u;
            goto label_2cc3d4;
        }
    }
    ctx->pc = 0x2CC3C0u;
    // 0x2cc3c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2cc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2cc3c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cc3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc3c8: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x2CC3C8u;
    SET_GPR_U32(ctx, 31, 0x2CC3D0u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC3D0u; }
        if (ctx->pc != 0x2CC3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC3D0u; }
        if (ctx->pc != 0x2CC3D0u) { return; }
    }
    ctx->pc = 0x2CC3D0u;
label_2cc3d0:
    // 0x2cc3d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc3d4:
    // 0x2cc3d4: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x2cc3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x2cc3d8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2cc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2cc3dc: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x2cc3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x2cc3e0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x2cc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x2cc3e4: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x2cc3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    // 0x2cc3e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cc3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3ec: 0x8ca50968  lw          $a1, 0x968($a1)
    ctx->pc = 0x2cc3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2408)));
    // 0x2cc3f0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2cc3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2cc3f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2cc3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cc3f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2cc3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cc3fc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2cc3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc400: 0xe4603fd8  swc1        $f0, 0x3FD8($v1)
    ctx->pc = 0x2cc400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16344), bits); }
    // 0x2cc404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cc404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc40c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC40Cu;
            // 0x2cc410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC414u;
    // 0x2cc414: 0x0  nop
    ctx->pc = 0x2cc414u;
    // NOP
    // 0x2cc418: 0x0  nop
    ctx->pc = 0x2cc418u;
    // NOP
    // 0x2cc41c: 0x0  nop
    ctx->pc = 0x2cc41cu;
    // NOP
label_2cc420:
    // 0x2cc420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cc420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cc424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cc424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cc428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cc430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc434: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CC434u;
    {
        const bool branch_taken_0x2cc434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC434u;
            // 0x2cc438: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc434) {
            ctx->pc = 0x2CC4D4u;
            goto label_2cc4d4;
        }
    }
    ctx->pc = 0x2CC43Cu;
    // 0x2cc43c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc440: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cc444: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x2cc444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2cc448: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x2cc448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x2cc44c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cc44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2cc450: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CC450u;
    {
        const bool branch_taken_0x2cc450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC450u;
            // 0x2cc454: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc450) {
            ctx->pc = 0x2CC4BCu;
            goto label_2cc4bc;
        }
    }
    ctx->pc = 0x2CC458u;
    // 0x2cc458: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc45c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cc460: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2cc460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x2cc464: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cc464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2cc468: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2cc468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2cc46c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cc46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2cc470: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2cc470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2cc474: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2cc474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2cc478: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2CC478u;
    SET_GPR_U32(ctx, 31, 0x2CC480u);
    ctx->pc = 0x2CC47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC478u;
            // 0x2cc47c: 0x24a5c5c0  addiu       $a1, $a1, -0x3A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC480u; }
        if (ctx->pc != 0x2CC480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC480u; }
        if (ctx->pc != 0x2CC480u) { return; }
    }
    ctx->pc = 0x2CC480u;
label_2cc480:
    // 0x2cc480: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2cc480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2cc484: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2CC484u;
    SET_GPR_U32(ctx, 31, 0x2CC48Cu);
    ctx->pc = 0x2CC488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC484u;
            // 0x2cc488: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC48Cu; }
        if (ctx->pc != 0x2CC48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC48Cu; }
        if (ctx->pc != 0x2CC48Cu) { return; }
    }
    ctx->pc = 0x2CC48Cu;
label_2cc48c:
    // 0x2cc48c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2cc48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2cc490: 0xc0b3154  jal         func_2CC550
    ctx->pc = 0x2CC490u;
    SET_GPR_U32(ctx, 31, 0x2CC498u);
    ctx->pc = 0x2CC494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC490u;
            // 0x2cc494: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC550u;
    if (runtime->hasFunction(0x2CC550u)) {
        auto targetFn = runtime->lookupFunction(0x2CC550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC498u; }
        if (ctx->pc != 0x2CC498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CC550_0x2cc550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC498u; }
        if (ctx->pc != 0x2CC498u) { return; }
    }
    ctx->pc = 0x2CC498u;
label_2cc498:
    // 0x2cc498: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2cc498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2cc49c: 0xc0b3154  jal         func_2CC550
    ctx->pc = 0x2CC49Cu;
    SET_GPR_U32(ctx, 31, 0x2CC4A4u);
    ctx->pc = 0x2CC4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC49Cu;
            // 0x2cc4a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC550u;
    if (runtime->hasFunction(0x2CC550u)) {
        auto targetFn = runtime->lookupFunction(0x2CC550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC4A4u; }
        if (ctx->pc != 0x2CC4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CC550_0x2cc550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC4A4u; }
        if (ctx->pc != 0x2CC4A4u) { return; }
    }
    ctx->pc = 0x2CC4A4u;
label_2cc4a4:
    // 0x2cc4a4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2cc4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2cc4a8: 0xc0b313c  jal         func_2CC4F0
    ctx->pc = 0x2CC4A8u;
    SET_GPR_U32(ctx, 31, 0x2CC4B0u);
    ctx->pc = 0x2CC4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC4A8u;
            // 0x2cc4ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4F0u;
    if (runtime->hasFunction(0x2CC4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2CC4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC4B0u; }
        if (ctx->pc != 0x2CC4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CC4F0_0x2cc4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC4B0u; }
        if (ctx->pc != 0x2CC4B0u) { return; }
    }
    ctx->pc = 0x2CC4B0u;
label_2cc4b0:
    // 0x2cc4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc4b4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2CC4B4u;
    SET_GPR_U32(ctx, 31, 0x2CC4BCu);
    ctx->pc = 0x2CC4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC4B4u;
            // 0x2cc4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC4BCu; }
        if (ctx->pc != 0x2CC4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC4BCu; }
        if (ctx->pc != 0x2CC4BCu) { return; }
    }
    ctx->pc = 0x2CC4BCu;
label_2cc4bc:
    // 0x2cc4bc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2cc4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2cc4c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cc4c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cc4c4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC4C4u;
    {
        const bool branch_taken_0x2cc4c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cc4c4) {
            ctx->pc = 0x2CC4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC4C4u;
            // 0x2cc4c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC4D8u;
            goto label_2cc4d8;
        }
    }
    ctx->pc = 0x2CC4CCu;
    // 0x2cc4cc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CC4CCu;
    SET_GPR_U32(ctx, 31, 0x2CC4D4u);
    ctx->pc = 0x2CC4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC4CCu;
            // 0x2cc4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC4D4u; }
        if (ctx->pc != 0x2CC4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC4D4u; }
        if (ctx->pc != 0x2CC4D4u) { return; }
    }
    ctx->pc = 0x2CC4D4u;
label_2cc4d4:
    // 0x2cc4d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cc4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc4d8:
    // 0x2cc4d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cc4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc4dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc4dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc4e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC4E4u;
            // 0x2cc4e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC4ECu;
    // 0x2cc4ec: 0x0  nop
    ctx->pc = 0x2cc4ecu;
    // NOP
}
