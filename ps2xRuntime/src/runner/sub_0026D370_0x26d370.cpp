#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026D370
// Address: 0x26d370 - 0x26db60
void sub_0026D370_0x26d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D370_0x26d370");
#endif

    switch (ctx->pc) {
        case 0x26d3e8u: goto label_26d3e8;
        case 0x26d428u: goto label_26d428;
        case 0x26d460u: goto label_26d460;
        case 0x26d474u: goto label_26d474;
        case 0x26d490u: goto label_26d490;
        case 0x26d4a8u: goto label_26d4a8;
        case 0x26d4e0u: goto label_26d4e0;
        case 0x26d4ecu: goto label_26d4ec;
        case 0x26d4fcu: goto label_26d4fc;
        case 0x26d52cu: goto label_26d52c;
        case 0x26d55cu: goto label_26d55c;
        case 0x26d5acu: goto label_26d5ac;
        case 0x26d6a8u: goto label_26d6a8;
        case 0x26d700u: goto label_26d700;
        case 0x26d718u: goto label_26d718;
        case 0x26d734u: goto label_26d734;
        case 0x26d7c0u: goto label_26d7c0;
        case 0x26d7f8u: goto label_26d7f8;
        case 0x26d808u: goto label_26d808;
        case 0x26d874u: goto label_26d874;
        case 0x26d960u: goto label_26d960;
        case 0x26d9a0u: goto label_26d9a0;
        case 0x26d9b8u: goto label_26d9b8;
        case 0x26d9d4u: goto label_26d9d4;
        case 0x26da60u: goto label_26da60;
        case 0x26da98u: goto label_26da98;
        case 0x26daa8u: goto label_26daa8;
        case 0x26db14u: goto label_26db14;
        case 0x26db2cu: goto label_26db2c;
        default: break;
    }

    ctx->pc = 0x26d370u;

label_26d370:
    // 0x26d370: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x26d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x26d374: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26d374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26d378: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26d37c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26d37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26d380: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26d380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26d384: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26d384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26d388: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26d38c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x26d38cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26d394: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26d394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26d398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26d3a0: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x26d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x26d3a4: 0xafa800b4  sw          $t0, 0xB4($sp)
    ctx->pc = 0x26d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 8));
    // 0x26d3a8: 0xafa900b0  sw          $t1, 0xB0($sp)
    ctx->pc = 0x26d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 9));
    // 0x26d3ac: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x26d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x26d3b0: 0x8cb00040  lw          $s0, 0x40($a1)
    ctx->pc = 0x26d3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x26d3b4: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x26D3B4u;
    {
        const bool branch_taken_0x26d3b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x26D3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3B4u;
            // 0x26d3b8: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3b4) {
            ctx->pc = 0x26D508u;
            goto label_26d508;
        }
    }
    ctx->pc = 0x26D3BCu;
    // 0x26d3bc: 0x82820004  lb          $v0, 0x4($s4)
    ctx->pc = 0x26d3bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26d3c0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x26D3C0u;
    {
        const bool branch_taken_0x26d3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d3c0) {
            ctx->pc = 0x26D508u;
            goto label_26d508;
        }
    }
    ctx->pc = 0x26D3C8u;
    // 0x26d3c8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x26d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x26d3cc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x26d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x26d3d0: 0x8eb20010  lw          $s2, 0x10($s5)
    ctx->pc = 0x26d3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26d3d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x26d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26d3d8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x26d3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d3dc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x26d3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26d3e0: 0xc09a868  jal         func_26A1A0
    ctx->pc = 0x26D3E0u;
    SET_GPR_U32(ctx, 31, 0x26D3E8u);
    ctx->pc = 0x26D3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3E0u;
            // 0x26d3e4: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A1A0u;
    if (runtime->hasFunction(0x26A1A0u)) {
        auto targetFn = runtime->lookupFunction(0x26A1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D3E8u; }
        if (ctx->pc != 0x26D3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A1A0_0x26a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D3E8u; }
        if (ctx->pc != 0x26D3E8u) { return; }
    }
    ctx->pc = 0x26D3E8u;
label_26d3e8:
    // 0x26d3e8: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x26d3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x26d3ec: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x26d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26d3f0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x26d3f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d3f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d3f8: 0x27b001a8  addiu       $s0, $sp, 0x1A8
    ctx->pc = 0x26d3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x26d3fc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26d3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d400: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26d400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d404: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x26d404u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x26d408: 0xa2820004  sb          $v0, 0x4($s4)
    ctx->pc = 0x26d408u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d40c: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x26d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x26d410: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26d414: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x26d414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x26d418: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x26d418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x26d41c: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x26d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x26d420: 0xc09b4dc  jal         func_26D370
    ctx->pc = 0x26D420u;
    SET_GPR_U32(ctx, 31, 0x26D428u);
    ctx->pc = 0x26D424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D420u;
            // 0x26d424: 0x27a901a0  addiu       $t1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D370u;
    goto label_26d370;
    ctx->pc = 0x26D428u;
label_26d428:
    // 0x26d428: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x26d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x26d42c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x26d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26d430: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26D430u;
    {
        const bool branch_taken_0x26d430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d430) {
            ctx->pc = 0x26D460u;
            goto label_26d460;
        }
    }
    ctx->pc = 0x26D438u;
    // 0x26d438: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x26d438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26d43c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d440: 0x8fa601a4  lw          $a2, 0x1A4($sp)
    ctx->pc = 0x26d440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x26d444: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d448: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x26d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26d44c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x26d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x26d450: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26d450u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d454: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x26d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x26d458: 0xc09b874  jal         func_26E1D0
    ctx->pc = 0x26D458u;
    SET_GPR_U32(ctx, 31, 0x26D460u);
    ctx->pc = 0x26D45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D458u;
            // 0x26d45c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E1D0u;
    if (runtime->hasFunction(0x26E1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26E1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D460u; }
        if (ctx->pc != 0x26D460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E1D0_0x26e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D460u; }
        if (ctx->pc != 0x26D460u) { return; }
    }
    ctx->pc = 0x26D460u;
label_26d460:
    // 0x26d460: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26d460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26d464: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26d464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26d468: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x26d468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26d46c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x26D46Cu;
    SET_GPR_U32(ctx, 31, 0x26D474u);
    ctx->pc = 0x26D470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D46Cu;
            // 0x26d470: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D474u; }
        if (ctx->pc != 0x26D474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D474u; }
        if (ctx->pc != 0x26D474u) { return; }
    }
    ctx->pc = 0x26D474u;
label_26d474:
    // 0x26d474: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x26d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26d478: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26d478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d47c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D47Cu;
    {
        const bool branch_taken_0x26d47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D47Cu;
            // 0x26d480: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d47c) {
            ctx->pc = 0x26D490u;
            goto label_26d490;
        }
    }
    ctx->pc = 0x26D484u;
    // 0x26d484: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x26d484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26d488: 0xc09a868  jal         func_26A1A0
    ctx->pc = 0x26D488u;
    SET_GPR_U32(ctx, 31, 0x26D490u);
    ctx->pc = 0x26D48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D488u;
            // 0x26d48c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A1A0u;
    if (runtime->hasFunction(0x26A1A0u)) {
        auto targetFn = runtime->lookupFunction(0x26A1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D490u; }
        if (ctx->pc != 0x26D490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A1A0_0x26a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D490u; }
        if (ctx->pc != 0x26D490u) { return; }
    }
    ctx->pc = 0x26D490u;
label_26d490:
    // 0x26d490: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x26d490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x26d494: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26d494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26d498: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x26d498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x26d49c: 0x8ea60010  lw          $a2, 0x10($s5)
    ctx->pc = 0x26d49cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26d4a0: 0xc09b464  jal         func_26D190
    ctx->pc = 0x26D4A0u;
    SET_GPR_U32(ctx, 31, 0x26D4A8u);
    ctx->pc = 0x26D4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4A0u;
            // 0x26d4a4: 0x27a701a0  addiu       $a3, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D190u;
    if (runtime->hasFunction(0x26D190u)) {
        auto targetFn = runtime->lookupFunction(0x26D190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4A8u; }
        if (ctx->pc != 0x26D4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D190_0x26d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4A8u; }
        if (ctx->pc != 0x26D4A8u) { return; }
    }
    ctx->pc = 0x26D4A8u;
label_26d4a8:
    // 0x26d4a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d4ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26d4b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26d4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26d4b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26D4B4u;
    {
        const bool branch_taken_0x26d4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d4b4) {
            ctx->pc = 0x26D4E0u;
            goto label_26d4e0;
        }
    }
    ctx->pc = 0x26D4BCu;
    // 0x26d4bc: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x26d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x26d4c0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26d4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26d4c4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26d4c8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x26d4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x26d4cc: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x26d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x26d4d0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x26d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x26d4d4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x26d4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x26d4d8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x26D4D8u;
    SET_GPR_U32(ctx, 31, 0x26D4E0u);
    ctx->pc = 0x26D4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4D8u;
            // 0x26d4dc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4E0u; }
        if (ctx->pc != 0x26D4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4E0u; }
        if (ctx->pc != 0x26D4E0u) { return; }
    }
    ctx->pc = 0x26D4E0u;
label_26d4e0:
    // 0x26d4e0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x26d4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26d4e4: 0xc09a888  jal         func_26A220
    ctx->pc = 0x26D4E4u;
    SET_GPR_U32(ctx, 31, 0x26D4ECu);
    ctx->pc = 0x26D4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4E4u;
            // 0x26d4e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A220u;
    if (runtime->hasFunction(0x26A220u)) {
        auto targetFn = runtime->lookupFunction(0x26A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4ECu; }
        if (ctx->pc != 0x26D4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A220_0x26a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4ECu; }
        if (ctx->pc != 0x26D4ECu) { return; }
    }
    ctx->pc = 0x26D4ECu;
label_26d4ec:
    // 0x26d4ec: 0xaeb20010  sw          $s2, 0x10($s5)
    ctx->pc = 0x26d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 18));
    // 0x26d4f0: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x26d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x26d4f4: 0xc09c0ec  jal         func_2703B0
    ctx->pc = 0x26D4F4u;
    SET_GPR_U32(ctx, 31, 0x26D4FCu);
    ctx->pc = 0x26D4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4F4u;
            // 0x26d4f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2703B0u;
    if (runtime->hasFunction(0x2703B0u)) {
        auto targetFn = runtime->lookupFunction(0x2703B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4FCu; }
        if (ctx->pc != 0x26D4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002703B0_0x2703b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4FCu; }
        if (ctx->pc != 0x26D4FCu) { return; }
    }
    ctx->pc = 0x26D4FCu;
label_26d4fc:
    // 0x26d4fc: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x26D4FCu;
    {
        const bool branch_taken_0x26d4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d4fc) {
            ctx->pc = 0x26DB30u;
            goto label_26db30;
        }
    }
    ctx->pc = 0x26D504u;
    // 0x26d504: 0x0  nop
    ctx->pc = 0x26d504u;
    // NOP
label_26d508:
    // 0x26d508: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x26d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x26d50c: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x26d50cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26d510: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26D510u;
    {
        const bool branch_taken_0x26d510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d510) {
            ctx->pc = 0x26D590u;
            goto label_26d590;
        }
    }
    ctx->pc = 0x26D518u;
    // 0x26d518: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x26d518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x26d51c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26d51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d520: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x26d520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x26d524: 0xc09c074  jal         func_2701D0
    ctx->pc = 0x26D524u;
    SET_GPR_U32(ctx, 31, 0x26D52Cu);
    ctx->pc = 0x26D528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D524u;
            // 0x26d528: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2701D0u;
    if (runtime->hasFunction(0x2701D0u)) {
        auto targetFn = runtime->lookupFunction(0x2701D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D52Cu; }
        if (ctx->pc != 0x26D52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002701D0_0x2701d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D52Cu; }
        if (ctx->pc != 0x26D52Cu) { return; }
    }
    ctx->pc = 0x26D52Cu;
label_26d52c:
    // 0x26d52c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x26d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x26d530: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x26d530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x26d534: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x26d534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26d538: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x26d538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26d53c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x26d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26d540: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x26d540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x26d544: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x26d544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x26d548: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D548u;
    {
        const bool branch_taken_0x26d548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26D54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D548u;
            // 0x26d54c: 0x24b00010  addiu       $s0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d548) {
            ctx->pc = 0x26D560u;
            goto label_26d560;
        }
    }
    ctx->pc = 0x26D550u;
    // 0x26d550: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x26d550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26d554: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x26D554u;
    SET_GPR_U32(ctx, 31, 0x26D55Cu);
    ctx->pc = 0x26D558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D554u;
            // 0x26d558: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D55Cu; }
        if (ctx->pc != 0x26D55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D55Cu; }
        if (ctx->pc != 0x26D55Cu) { return; }
    }
    ctx->pc = 0x26D55Cu;
label_26d55c:
    // 0x26d55c: 0x0  nop
    ctx->pc = 0x26d55cu;
    // NOP
label_26d560:
    // 0x26d560: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x26d560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26d564: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x26d564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26d568: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x26d568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26d56c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x26d56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26d570: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x26d570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26d574: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x26d574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26d578: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x26d578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x26d57c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x26d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26d580: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26d580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d584: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d588: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x26D588u;
    {
        const bool branch_taken_0x26d588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D588u;
            // 0x26d58c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d588) {
            ctx->pc = 0x26DB30u;
            goto label_26db30;
        }
    }
    ctx->pc = 0x26D590u;
label_26d590:
    // 0x26d590: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x26d590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x26d594: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x26d594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x26d598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26d598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d59c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26d59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5a0: 0x27a80160  addiu       $t0, $sp, 0x160
    ctx->pc = 0x26d5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x26d5a4: 0xc09aee8  jal         func_26BBA0
    ctx->pc = 0x26D5A4u;
    SET_GPR_U32(ctx, 31, 0x26D5ACu);
    ctx->pc = 0x26D5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5A4u;
            // 0x26d5a8: 0xa3a00160  sb          $zero, 0x160($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BBA0u;
    if (runtime->hasFunction(0x26BBA0u)) {
        auto targetFn = runtime->lookupFunction(0x26BBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5ACu; }
        if (ctx->pc != 0x26D5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BBA0_0x26bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5ACu; }
        if (ctx->pc != 0x26D5ACu) { return; }
    }
    ctx->pc = 0x26D5ACu;
label_26d5ac:
    // 0x26d5ac: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x26d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x26d5b0: 0x27a80138  addiu       $t0, $sp, 0x138
    ctx->pc = 0x26d5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x26d5b4: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x26d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x26d5b8: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x26d5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x26d5bc: 0x27a60154  addiu       $a2, $sp, 0x154
    ctx->pc = 0x26d5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x26d5c0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x26d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x26d5c4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x26d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x26d5c8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x26d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26d5cc: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x26d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x26d5d0: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x26d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x26d5d4: 0x92890004  lbu         $t1, 0x4($s4)
    ctx->pc = 0x26d5d4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26d5d8: 0x27a50114  addiu       $a1, $sp, 0x114
    ctx->pc = 0x26d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x26d5dc: 0xa0a90000  sb          $t1, 0x0($a1)
    ctx->pc = 0x26d5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x26d5e0: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x26d5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26d5e4: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x26d5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x26d5e8: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x26d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x26d5ec: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x26d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26d5f0: 0x27a5011c  addiu       $a1, $sp, 0x11C
    ctx->pc = 0x26d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x26d5f4: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x26d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d5f8: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x26d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d5fc: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x26d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d600: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x26d600u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x26d604: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x26d604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x26d608: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x26d608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x26d60c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x26d60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x26d610: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x26d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d614: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x26d614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d618: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x26d618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x26d61c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x26d61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x26d620: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x26d620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x26d624: 0xafa50134  sw          $a1, 0x134($sp)
    ctx->pc = 0x26d624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 5));
    // 0x26d628: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x26d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d62c: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x26d62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d630: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x26d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d634: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x26d634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x26d638: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x26d638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x26d63c: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x26d63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x26d640: 0x8e850034  lw          $a1, 0x34($s4)
    ctx->pc = 0x26d640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x26d644: 0xafa50144  sw          $a1, 0x144($sp)
    ctx->pc = 0x26d644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
    // 0x26d648: 0x8e850038  lw          $a1, 0x38($s4)
    ctx->pc = 0x26d648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x26d64c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26d650: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x26d650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x26d654: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x26d654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x26d658: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x26d658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d65c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x26d65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x26d660: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x26d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d664: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x26d664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x26d668: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x26d668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26d66c: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x26d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x26d670: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x26d670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x26d674: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26d674u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26d678: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26d678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26d67c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x26d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26d680: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x26d680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x26d684: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26d684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26d688: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26d68c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x26d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26d690: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x26d690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26d694: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x26D694u;
    {
        const bool branch_taken_0x26d694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D694u;
            // 0x26d698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d694) {
            ctx->pc = 0x26D6E0u;
            goto label_26d6e0;
        }
    }
    ctx->pc = 0x26D69Cu;
    // 0x26d69c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x26d69cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26d6a0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x26d6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x26d6a4: 0x0  nop
    ctx->pc = 0x26d6a4u;
    // NOP
label_26d6a8:
    // 0x26d6a8: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26d6ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26d6b0: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x26d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x26d6b4: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x26d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x26d6b8: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26d6bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d6c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x26d6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x26d6c4: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x26d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x26d6c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26d6cc: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x26d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26d6d0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x26d6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26d6d4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x26D6D4u;
    {
        const bool branch_taken_0x26d6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D6D4u;
            // 0x26d6d8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6d4) {
            ctx->pc = 0x26D6A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d6a8;
        }
    }
    ctx->pc = 0x26D6DCu;
    // 0x26d6dc: 0x0  nop
    ctx->pc = 0x26d6dcu;
    // NOP
label_26d6e0:
    // 0x26d6e0: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x26d6e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26d6e4: 0x26b30030  addiu       $s3, $s5, 0x30
    ctx->pc = 0x26d6e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x26d6e8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x26d6e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26d6ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6f0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x26d6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6f4: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x26d6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x26d6f8: 0x26b7003c  addiu       $s7, $s5, 0x3C
    ctx->pc = 0x26d6f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
    // 0x26d6fc: 0x0  nop
    ctx->pc = 0x26d6fcu;
    // NOP
label_26d700:
    // 0x26d700: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x26d700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d704: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d708: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x26d708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d70c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26d70cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26d710: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26D710u;
    SET_GPR_U32(ctx, 31, 0x26D718u);
    ctx->pc = 0x26D714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D710u;
            // 0x26d714: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D718u; }
        if (ctx->pc != 0x26D718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D718u; }
        if (ctx->pc != 0x26D718u) { return; }
    }
    ctx->pc = 0x26D718u;
label_26d718:
    // 0x26d718: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26d718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26d71c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x26d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d720: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d724: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x26d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d728: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26d728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26d72c: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26D72Cu;
    SET_GPR_U32(ctx, 31, 0x26D734u);
    ctx->pc = 0x26D730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D72Cu;
            // 0x26d730: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D734u; }
        if (ctx->pc != 0x26D734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D734u; }
        if (ctx->pc != 0x26D734u) { return; }
    }
    ctx->pc = 0x26D734u;
label_26d734:
    // 0x26d734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d738: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x26d738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x26d73c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26d740: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26d744: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26d744u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d748: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x26d748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x26d74c: 0x41f00a  movz        $fp, $v0, $at
    ctx->pc = 0x26d74cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
    // 0x26d750: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x26d750u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x26d754: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26d754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x26d758: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x26d758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26d75c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x26d75cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x26d760: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x26D760u;
    {
        const bool branch_taken_0x26d760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D760u;
            // 0x26d764: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d760) {
            ctx->pc = 0x26D700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d700;
        }
    }
    ctx->pc = 0x26D768u;
    // 0x26d768: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x26d768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26d76c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d770: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x26d770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x26d774: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x26d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x26d778: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x26d778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d77c: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x26d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x26d780: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x26d780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26d784: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26d784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26d788: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x26d788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x26d78c: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x26d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x26d790: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26d790u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26d794: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26d794u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d798: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26d798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26d79c: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26d79cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26d7a0: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x26d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26d7a4: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x26d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x26d7a8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d7ac: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26d7acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26d7b0: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26d7b0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26d7b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26d7b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7b8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26D7B8u;
    {
        const bool branch_taken_0x26d7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7B8u;
            // 0x26d7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7b8) {
            ctx->pc = 0x26D7E0u;
            goto label_26d7e0;
        }
    }
    ctx->pc = 0x26D7C0u;
label_26d7c0:
    // 0x26d7c0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x26d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x26d7c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d7c8: 0x0  nop
    ctx->pc = 0x26d7c8u;
    // NOP
    // 0x26d7cc: 0x0  nop
    ctx->pc = 0x26d7ccu;
    // NOP
    // 0x26d7d0: 0x0  nop
    ctx->pc = 0x26d7d0u;
    // NOP
    // 0x26d7d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26D7D4u;
    {
        const bool branch_taken_0x26d7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d7d4) {
            ctx->pc = 0x26D7C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d7c0;
        }
    }
    ctx->pc = 0x26D7DCu;
    // 0x26d7dc: 0x0  nop
    ctx->pc = 0x26d7dcu;
    // NOP
label_26d7e0:
    // 0x26d7e0: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x26d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26d7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d7e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26d7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26d7ec: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x26d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x26d7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7f4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x26d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26d7f8:
    // 0x26d7f8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26d7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26D7FCu;
    {
        const bool branch_taken_0x26d7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7FCu;
            // 0x26d800: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7fc) {
            ctx->pc = 0x26D828u;
            goto label_26d828;
        }
    }
    ctx->pc = 0x26D804u;
    // 0x26d804: 0x0  nop
    ctx->pc = 0x26d804u;
    // NOP
label_26d808:
    // 0x26d808: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x26d808u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x26d80c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26d810: 0x0  nop
    ctx->pc = 0x26d810u;
    // NOP
    // 0x26d814: 0x0  nop
    ctx->pc = 0x26d814u;
    // NOP
    // 0x26d818: 0x0  nop
    ctx->pc = 0x26d818u;
    // NOP
    // 0x26d81c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26D81Cu;
    {
        const bool branch_taken_0x26d81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d81c) {
            ctx->pc = 0x26D808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d808;
        }
    }
    ctx->pc = 0x26D824u;
    // 0x26d824: 0x0  nop
    ctx->pc = 0x26d824u;
    // NOP
label_26d828:
    // 0x26d828: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x26d828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26d82c: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x26d82cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x26d830: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26d830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26d834: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x26d834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26d838: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x26D838u;
    {
        const bool branch_taken_0x26d838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D838u;
            // 0x26d83c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d838) {
            ctx->pc = 0x26D7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d7f8;
        }
    }
    ctx->pc = 0x26D840u;
    // 0x26d840: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x26d840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x26d844: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26D844u;
    {
        const bool branch_taken_0x26d844 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d844) {
            ctx->pc = 0x26D850u;
            goto label_26d850;
        }
    }
    ctx->pc = 0x26D84Cu;
    // 0x26d84c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x26d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_26d850:
    // 0x26d850: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x26d850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x26d854: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26d854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d858: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x26d858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x26d85c: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x26d85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x26d860: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x26d860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26d864: 0x8fa800b4  lw          $t0, 0xB4($sp)
    ctx->pc = 0x26d864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x26d868: 0x8fa900b0  lw          $t1, 0xB0($sp)
    ctx->pc = 0x26d868u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26d86c: 0xc09b4dc  jal         func_26D370
    ctx->pc = 0x26D86Cu;
    SET_GPR_U32(ctx, 31, 0x26D874u);
    ctx->pc = 0x26D870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D86Cu;
            // 0x26d870: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D370u;
    goto label_26d370;
    ctx->pc = 0x26D874u;
label_26d874:
    // 0x26d874: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x26d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x26d878: 0x27a800e8  addiu       $t0, $sp, 0xE8
    ctx->pc = 0x26d878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x26d87c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x26d87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26d880: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x26d880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x26d884: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x26d884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26d888: 0x27a60104  addiu       $a2, $sp, 0x104
    ctx->pc = 0x26d888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x26d88c: 0x8c5e0070  lw          $fp, 0x70($v0)
    ctx->pc = 0x26d88cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x26d890: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x26d890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x26d894: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x26d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x26d898: 0x92890004  lbu         $t1, 0x4($s4)
    ctx->pc = 0x26d898u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26d89c: 0x27a500c4  addiu       $a1, $sp, 0xC4
    ctx->pc = 0x26d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x26d8a0: 0xa0a90000  sb          $t1, 0x0($a1)
    ctx->pc = 0x26d8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x26d8a4: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x26d8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26d8a8: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x26d8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x26d8ac: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x26d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x26d8b0: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x26d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26d8b4: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x26d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x26d8b8: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x26d8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d8bc: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x26d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d8c0: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x26d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d8c4: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x26d8c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x26d8c8: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x26d8c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x26d8cc: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x26d8ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x26d8d0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x26d8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x26d8d4: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x26d8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d8d8: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x26d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d8dc: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x26d8dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x26d8e0: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x26d8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x26d8e4: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x26d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x26d8e8: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x26d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
    // 0x26d8ec: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x26d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d8f0: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x26d8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d8f4: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x26d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d8f8: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x26d8f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x26d8fc: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x26d8fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x26d900: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x26d900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x26d904: 0x8e850034  lw          $a1, 0x34($s4)
    ctx->pc = 0x26d904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x26d908: 0xafa500f4  sw          $a1, 0xF4($sp)
    ctx->pc = 0x26d908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
    // 0x26d90c: 0x8e850038  lw          $a1, 0x38($s4)
    ctx->pc = 0x26d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x26d910: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26d910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26d914: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x26d914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x26d918: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x26d918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x26d91c: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x26d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d920: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x26d920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x26d924: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x26d924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d928: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x26d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x26d92c: 0x8fc60028  lw          $a2, 0x28($fp)
    ctx->pc = 0x26d92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x26d930: 0x8fc50024  lw          $a1, 0x24($fp)
    ctx->pc = 0x26d930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x26d934: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26d934u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26d938: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26d938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26d93c: 0x8fc3002c  lw          $v1, 0x2C($fp)
    ctx->pc = 0x26d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x26d940: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26d940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26d944: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x26d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x26d948: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x26d948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26d94c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x26D94Cu;
    {
        const bool branch_taken_0x26d94c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D94Cu;
            // 0x26d950: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d94c) {
            ctx->pc = 0x26D990u;
            goto label_26d990;
        }
    }
    ctx->pc = 0x26D954u;
    // 0x26d954: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x26d954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d958: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x26d958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26d95c: 0x0  nop
    ctx->pc = 0x26d95cu;
    // NOP
label_26d960:
    // 0x26d960: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26d964: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26d964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26d968: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x26d968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x26d96c: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x26d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x26d970: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26d974: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26d974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d978: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x26d978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x26d97c: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x26d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x26d980: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x26d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x26d984: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x26d984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26d988: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x26D988u;
    {
        const bool branch_taken_0x26d988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D988u;
            // 0x26d98c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d988) {
            ctx->pc = 0x26D960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d960;
        }
    }
    ctx->pc = 0x26D990u;
label_26d990:
    // 0x26d990: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26d990u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d994: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26d994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d998: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x26d998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d99c: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x26d99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_26d9a0:
    // 0x26d9a0: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x26d9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d9a4: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x26d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d9a8: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x26d9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d9ac: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26d9acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26d9b0: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26D9B0u;
    SET_GPR_U32(ctx, 31, 0x26D9B8u);
    ctx->pc = 0x26D9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9B0u;
            // 0x26d9b4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9B8u; }
        if (ctx->pc != 0x26D9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9B8u; }
        if (ctx->pc != 0x26D9B8u) { return; }
    }
    ctx->pc = 0x26D9B8u;
label_26d9b8:
    // 0x26d9b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26d9bc: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x26d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d9c0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x26d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d9c4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x26d9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d9c8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26d9c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26d9cc: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26D9CCu;
    SET_GPR_U32(ctx, 31, 0x26D9D4u);
    ctx->pc = 0x26D9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9CCu;
            // 0x26d9d0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9D4u; }
        if (ctx->pc != 0x26D9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9D4u; }
        if (ctx->pc != 0x26D9D4u) { return; }
    }
    ctx->pc = 0x26D9D4u;
label_26d9d4:
    // 0x26d9d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d9d8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x26d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x26d9dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26d9e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26d9e4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d9e8: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x26d9e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x26d9ec: 0x41b00a  movz        $s6, $v0, $at
    ctx->pc = 0x26d9ecu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
    // 0x26d9f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26d9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x26d9f4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x26d9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x26d9f8: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x26d9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26d9fc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x26d9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x26da00: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x26DA00u;
    {
        const bool branch_taken_0x26da00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA00u;
            // 0x26da04: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da00) {
            ctx->pc = 0x26D9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d9a0;
        }
    }
    ctx->pc = 0x26DA08u;
    // 0x26da08: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x26da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26da0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26da10: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x26da10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x26da14: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x26da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x26da18: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x26da18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26da1c: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x26da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x26da20: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x26da20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26da24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26da24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26da28: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x26da28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x26da2c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x26da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x26da30: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26da30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26da34: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26da34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26da38: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26da38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26da3c: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26da3cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26da40: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x26da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26da44: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x26da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x26da48: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26da48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26da4c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26da4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26da50: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26da50u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26da54: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26da54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da58: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DA58u;
    {
        const bool branch_taken_0x26da58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA58u;
            // 0x26da5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da58) {
            ctx->pc = 0x26DA80u;
            goto label_26da80;
        }
    }
    ctx->pc = 0x26DA60u;
label_26da60:
    // 0x26da60: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x26da60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x26da64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26da68: 0x0  nop
    ctx->pc = 0x26da68u;
    // NOP
    // 0x26da6c: 0x0  nop
    ctx->pc = 0x26da6cu;
    // NOP
    // 0x26da70: 0x0  nop
    ctx->pc = 0x26da70u;
    // NOP
    // 0x26da74: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26DA74u;
    {
        const bool branch_taken_0x26da74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26da74) {
            ctx->pc = 0x26DA60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26da60;
        }
    }
    ctx->pc = 0x26DA7Cu;
    // 0x26da7c: 0x0  nop
    ctx->pc = 0x26da7cu;
    // NOP
label_26da80:
    // 0x26da80: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x26da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26da84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26da88: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26da88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26da8c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x26da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x26da90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da94: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x26da94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26da98:
    // 0x26da98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26da98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da9c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26DA9Cu;
    {
        const bool branch_taken_0x26da9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA9Cu;
            // 0x26daa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da9c) {
            ctx->pc = 0x26DAC8u;
            goto label_26dac8;
        }
    }
    ctx->pc = 0x26DAA4u;
    // 0x26daa4: 0x0  nop
    ctx->pc = 0x26daa4u;
    // NOP
label_26daa8:
    // 0x26daa8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x26daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x26daac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26daacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26dab0: 0x0  nop
    ctx->pc = 0x26dab0u;
    // NOP
    // 0x26dab4: 0x0  nop
    ctx->pc = 0x26dab4u;
    // NOP
    // 0x26dab8: 0x0  nop
    ctx->pc = 0x26dab8u;
    // NOP
    // 0x26dabc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26DABCu;
    {
        const bool branch_taken_0x26dabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dabc) {
            ctx->pc = 0x26DAA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26daa8;
        }
    }
    ctx->pc = 0x26DAC4u;
    // 0x26dac4: 0x0  nop
    ctx->pc = 0x26dac4u;
    // NOP
label_26dac8:
    // 0x26dac8: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x26dac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26dacc: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x26daccu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x26dad0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26dad4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x26dad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26dad8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x26DAD8u;
    {
        const bool branch_taken_0x26dad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DAD8u;
            // 0x26dadc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dad8) {
            ctx->pc = 0x26DA98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26da98;
        }
    }
    ctx->pc = 0x26DAE0u;
    // 0x26dae0: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x26dae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x26dae4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26DAE4u;
    {
        const bool branch_taken_0x26dae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dae4) {
            ctx->pc = 0x26DAF0u;
            goto label_26daf0;
        }
    }
    ctx->pc = 0x26DAECu;
    // 0x26daec: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x26daecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_26daf0:
    // 0x26daf0: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x26daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x26daf4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x26daf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26daf8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x26daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x26dafc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26dafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db00: 0x8fa800b4  lw          $t0, 0xB4($sp)
    ctx->pc = 0x26db00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x26db04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26db04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db08: 0x8fa900b0  lw          $t1, 0xB0($sp)
    ctx->pc = 0x26db08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26db0c: 0xc09b4dc  jal         func_26D370
    ctx->pc = 0x26DB0Cu;
    SET_GPR_U32(ctx, 31, 0x26DB14u);
    ctx->pc = 0x26DB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB0Cu;
            // 0x26db10: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D370u;
    goto label_26d370;
    ctx->pc = 0x26DB14u;
label_26db14:
    // 0x26db14: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x26db14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x26db18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26db18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db1c: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x26db1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x26db20: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26db20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db24: 0xc09c0a0  jal         func_270280
    ctx->pc = 0x26DB24u;
    SET_GPR_U32(ctx, 31, 0x26DB2Cu);
    ctx->pc = 0x26DB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB24u;
            // 0x26db28: 0x27a80160  addiu       $t0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270280u;
    if (runtime->hasFunction(0x270280u)) {
        auto targetFn = runtime->lookupFunction(0x270280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB2Cu; }
        if (ctx->pc != 0x26DB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270280_0x270280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB2Cu; }
        if (ctx->pc != 0x26DB2Cu) { return; }
    }
    ctx->pc = 0x26DB2Cu;
label_26db2c:
    // 0x26db2c: 0x0  nop
    ctx->pc = 0x26db2cu;
    // NOP
label_26db30:
    // 0x26db30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26db30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26db34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26db34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26db38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26db38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26db3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26db3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26db40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26db40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26db44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26db44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26db48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26db48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26db4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26db4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26db50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26db50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26db54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26db54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26db58: 0x3e00008  jr          $ra
    ctx->pc = 0x26DB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB58u;
            // 0x26db5c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26DB60u;
}
