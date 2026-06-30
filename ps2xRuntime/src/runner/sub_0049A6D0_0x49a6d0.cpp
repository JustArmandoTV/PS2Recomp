#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049A6D0
// Address: 0x49a6d0 - 0x49a960
void sub_0049A6D0_0x49a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A6D0_0x49a6d0");
#endif

    switch (ctx->pc) {
        case 0x49a700u: goto label_49a700;
        case 0x49a754u: goto label_49a754;
        case 0x49a7d0u: goto label_49a7d0;
        case 0x49a7f0u: goto label_49a7f0;
        case 0x49a804u: goto label_49a804;
        case 0x49a810u: goto label_49a810;
        case 0x49a814u: goto label_49a814;
        case 0x49a838u: goto label_49a838;
        case 0x49a884u: goto label_49a884;
        case 0x49a88cu: goto label_49a88c;
        case 0x49a8acu: goto label_49a8ac;
        case 0x49a8b4u: goto label_49a8b4;
        case 0x49a8f8u: goto label_49a8f8;
        case 0x49a900u: goto label_49a900;
        default: break;
    }

    ctx->pc = 0x49a6d0u;

    // 0x49a6d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x49a6d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x49a6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49a6d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49a6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x49a6dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x49a6e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49a6e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49a6e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49a6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49a6f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x49a6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a6f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x49a6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a6f8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x49A6F8u;
    SET_GPR_U32(ctx, 31, 0x49A700u);
    ctx->pc = 0x49A6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A6F8u;
            // 0x49a6fc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A700u; }
        if (ctx->pc != 0x49A700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A700u; }
        if (ctx->pc != 0x49A700u) { return; }
    }
    ctx->pc = 0x49A700u;
label_49a700:
    // 0x49a700: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49a700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x49a704: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49a704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x49a708: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x49a708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x49a70c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x49a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x49a710: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x49a710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x49a714: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x49a714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x49a718: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x49a718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x49a71c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x49a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49a720: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x49a720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x49a724: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49a728: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x49a728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x49a72c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x49a72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x49a730: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x49a730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x49a734: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x49a734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x49a738: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x49a738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x49a73c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x49a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x49a740: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x49a740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x49a744: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x49a744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x49a748: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x49a748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x49a74c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x49A74Cu;
    SET_GPR_U32(ctx, 31, 0x49A754u);
    ctx->pc = 0x49A750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A74Cu;
            // 0x49a750: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A754u; }
        if (ctx->pc != 0x49A754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A754u; }
        if (ctx->pc != 0x49A754u) { return; }
    }
    ctx->pc = 0x49A754u;
label_49a754:
    // 0x49a754: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49a754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49a758: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x49a758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x49a75c: 0x2463fb28  addiu       $v1, $v1, -0x4D8
    ctx->pc = 0x49a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966056));
    // 0x49a760: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x49a760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x49a764: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x49a764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x49a768: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49a768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49a76c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49a770: 0xac447c08  sw          $a0, 0x7C08($v0)
    ctx->pc = 0x49a770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31752), GPR_U32(ctx, 4));
    // 0x49a774: 0x2463fb40  addiu       $v1, $v1, -0x4C0
    ctx->pc = 0x49a774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966080));
    // 0x49a778: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49a778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49a77c: 0x2442fb78  addiu       $v0, $v0, -0x488
    ctx->pc = 0x49a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966136));
    // 0x49a780: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x49a780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x49a784: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x49a784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x49a788: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x49a788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x49a78c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x49a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x49a790: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x49a790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x49a794: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x49a794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x49a798: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x49a798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x49a79c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x49a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x49a7a0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x49a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x49a7a4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x49a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x49a7a8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x49a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x49a7ac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x49a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x49a7b0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x49a7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x49a7b4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x49A7B4u;
    {
        const bool branch_taken_0x49a7b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a7b4) {
            ctx->pc = 0x49A848u;
            goto label_49a848;
        }
    }
    ctx->pc = 0x49A7BCu;
    // 0x49a7bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x49a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x49a7c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x49a7c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x49a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x49a7c8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x49A7C8u;
    SET_GPR_U32(ctx, 31, 0x49A7D0u);
    ctx->pc = 0x49A7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A7C8u;
            // 0x49a7cc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A7D0u; }
        if (ctx->pc != 0x49A7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A7D0u; }
        if (ctx->pc != 0x49A7D0u) { return; }
    }
    ctx->pc = 0x49A7D0u;
label_49a7d0:
    // 0x49a7d0: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x49a7d4: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x49a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x49a7d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49a7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a7dc: 0x24a5a870  addiu       $a1, $a1, -0x5790
    ctx->pc = 0x49a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944880));
    // 0x49a7e0: 0x24c6a170  addiu       $a2, $a2, -0x5E90
    ctx->pc = 0x49a7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943088));
    // 0x49a7e4: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x49a7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x49a7e8: 0xc040840  jal         func_102100
    ctx->pc = 0x49A7E8u;
    SET_GPR_U32(ctx, 31, 0x49A7F0u);
    ctx->pc = 0x49A7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A7E8u;
            // 0x49a7ec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A7F0u; }
        if (ctx->pc != 0x49A7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A7F0u; }
        if (ctx->pc != 0x49A7F0u) { return; }
    }
    ctx->pc = 0x49A7F0u;
label_49a7f0:
    // 0x49a7f0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x49a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x49a7f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x49a7f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a7f8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x49a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x49a7fc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x49A7FCu;
    SET_GPR_U32(ctx, 31, 0x49A804u);
    ctx->pc = 0x49A800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A7FCu;
            // 0x49a800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A804u; }
        if (ctx->pc != 0x49A804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A804u; }
        if (ctx->pc != 0x49A804u) { return; }
    }
    ctx->pc = 0x49A804u;
label_49a804:
    // 0x49a804: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x49a804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x49a808: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x49A808u;
    SET_GPR_U32(ctx, 31, 0x49A810u);
    ctx->pc = 0x49A80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A808u;
            // 0x49a80c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A810u; }
        if (ctx->pc != 0x49A810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A810u; }
        if (ctx->pc != 0x49A810u) { return; }
    }
    ctx->pc = 0x49A810u;
label_49a810:
    // 0x49a810: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49a810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a814:
    // 0x49a814: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x49a814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x49a818: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x49a818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x49a81c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x49a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x49a820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49a820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a824: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x49a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x49a828: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x49a828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x49a82c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49a830: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x49A830u;
    SET_GPR_U32(ctx, 31, 0x49A838u);
    ctx->pc = 0x49A834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A830u;
            // 0x49a834: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A838u; }
        if (ctx->pc != 0x49A838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A838u; }
        if (ctx->pc != 0x49A838u) { return; }
    }
    ctx->pc = 0x49A838u;
label_49a838:
    // 0x49a838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x49a838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x49a83c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x49a83cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x49a840: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x49A840u;
    {
        const bool branch_taken_0x49a840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A840u;
            // 0x49a844: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a840) {
            ctx->pc = 0x49A814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49a814;
        }
    }
    ctx->pc = 0x49A848u;
label_49a848:
    // 0x49a848: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x49a848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a84c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x49a84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49a850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49a850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49a854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49a854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49a858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a85c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49a85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a860: 0x3e00008  jr          $ra
    ctx->pc = 0x49A860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A860u;
            // 0x49a864: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A868u;
    // 0x49a868: 0x0  nop
    ctx->pc = 0x49a868u;
    // NOP
    // 0x49a86c: 0x0  nop
    ctx->pc = 0x49a86cu;
    // NOP
    // 0x49a870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49a874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49a878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49a87c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x49A87Cu;
    SET_GPR_U32(ctx, 31, 0x49A884u);
    ctx->pc = 0x49A880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A87Cu;
            // 0x49a880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A884u; }
        if (ctx->pc != 0x49A884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A884u; }
        if (ctx->pc != 0x49A884u) { return; }
    }
    ctx->pc = 0x49A884u;
label_49a884:
    // 0x49a884: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x49A884u;
    SET_GPR_U32(ctx, 31, 0x49A88Cu);
    ctx->pc = 0x49A888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A884u;
            // 0x49a888: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A88Cu; }
        if (ctx->pc != 0x49A88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A88Cu; }
        if (ctx->pc != 0x49A88Cu) { return; }
    }
    ctx->pc = 0x49A88Cu;
label_49a88c:
    // 0x49a88c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x49a890: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49a890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x49a894: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x49a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x49a898: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x49a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x49a89c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49a8a0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x49a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x49a8a4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x49A8A4u;
    SET_GPR_U32(ctx, 31, 0x49A8ACu);
    ctx->pc = 0x49A8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A8A4u;
            // 0x49a8a8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A8ACu; }
        if (ctx->pc != 0x49A8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A8ACu; }
        if (ctx->pc != 0x49A8ACu) { return; }
    }
    ctx->pc = 0x49A8ACu;
label_49a8ac:
    // 0x49a8ac: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x49A8ACu;
    SET_GPR_U32(ctx, 31, 0x49A8B4u);
    ctx->pc = 0x49A8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A8ACu;
            // 0x49a8b0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A8B4u; }
        if (ctx->pc != 0x49A8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A8B4u; }
        if (ctx->pc != 0x49A8B4u) { return; }
    }
    ctx->pc = 0x49A8B4u;
label_49a8b4:
    // 0x49a8b4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x49a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x49a8b8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x49a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x49a8bc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x49a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x49a8c0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x49a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x49a8c4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x49a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x49a8c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a8cc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x49a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x49a8d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x49a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49a8d4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x49a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x49a8d8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x49a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x49a8dc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x49a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x49a8e0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x49a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x49a8e4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x49a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x49a8e8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x49a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x49a8ec: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x49a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x49a8f0: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x49A8F0u;
    SET_GPR_U32(ctx, 31, 0x49A8F8u);
    ctx->pc = 0x49A8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A8F0u;
            // 0x49a8f4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A8F8u; }
        if (ctx->pc != 0x49A8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A8F8u; }
        if (ctx->pc != 0x49A8F8u) { return; }
    }
    ctx->pc = 0x49A8F8u;
label_49a8f8:
    // 0x49a8f8: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x49A8F8u;
    SET_GPR_U32(ctx, 31, 0x49A900u);
    ctx->pc = 0x49A8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A8F8u;
            // 0x49a8fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A900u; }
        if (ctx->pc != 0x49A900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A900u; }
        if (ctx->pc != 0x49A900u) { return; }
    }
    ctx->pc = 0x49A900u;
label_49a900:
    // 0x49a900: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x49a900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x49a904: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x49a904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x49a908: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x49a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x49a90c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x49a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x49a910: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x49a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49a914: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x49a914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x49a918: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x49a918u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49a91c: 0x24a5fbe0  addiu       $a1, $a1, -0x420
    ctx->pc = 0x49a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966240));
    // 0x49a920: 0x2484fc20  addiu       $a0, $a0, -0x3E0
    ctx->pc = 0x49a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966304));
    // 0x49a924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a928: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x49a928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49a92c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49a92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a930: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x49a930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x49a934: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x49a934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x49a938: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x49a938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x49a93c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x49a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x49a940: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x49a940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x49a944: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x49a944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x49a948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a94c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49a94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a950: 0x3e00008  jr          $ra
    ctx->pc = 0x49A950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A950u;
            // 0x49a954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A958u;
    // 0x49a958: 0x0  nop
    ctx->pc = 0x49a958u;
    // NOP
    // 0x49a95c: 0x0  nop
    ctx->pc = 0x49a95cu;
    // NOP
}
