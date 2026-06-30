#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C75D0
// Address: 0x2c75d0 - 0x2c7810
void sub_002C75D0_0x2c75d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C75D0_0x2c75d0");
#endif

    switch (ctx->pc) {
        case 0x2c7600u: goto label_2c7600;
        case 0x2c7654u: goto label_2c7654;
        case 0x2c76d0u: goto label_2c76d0;
        case 0x2c76f0u: goto label_2c76f0;
        case 0x2c7704u: goto label_2c7704;
        case 0x2c7710u: goto label_2c7710;
        case 0x2c7714u: goto label_2c7714;
        case 0x2c7738u: goto label_2c7738;
        case 0x2c77c0u: goto label_2c77c0;
        case 0x2c77c8u: goto label_2c77c8;
        default: break;
    }

    ctx->pc = 0x2c75d0u;

    // 0x2c75d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c75d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c75d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c75d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c75d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c75d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c75dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c75dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c75e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c75e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c75e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c75e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c75ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c75ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c75f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c75f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c75f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75f8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C75F8u;
    SET_GPR_U32(ctx, 31, 0x2C7600u);
    ctx->pc = 0x2C75FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75F8u;
            // 0x2c75fc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7600u; }
        if (ctx->pc != 0x2C7600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7600u; }
        if (ctx->pc != 0x2C7600u) { return; }
    }
    ctx->pc = 0x2C7600u;
label_2c7600:
    // 0x2c7600: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7604: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c7608: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c7608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c760c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c7610: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c7610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c7614: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c7614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c7618: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c7618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c761c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c7620: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c7620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c7624: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c7624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c7628: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c7628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c762c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c762cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c7630: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c7630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c7634: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c7634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c7638: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c7638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c763c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c7640: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c7640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c7644: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c7644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c7648: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c7648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c764c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C764Cu;
    SET_GPR_U32(ctx, 31, 0x2C7654u);
    ctx->pc = 0x2C7650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C764Cu;
            // 0x2c7650: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7654u; }
        if (ctx->pc != 0x2C7654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7654u; }
        if (ctx->pc != 0x2C7654u) { return; }
    }
    ctx->pc = 0x2C7654u;
label_2c7654:
    // 0x2c7654: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7658: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c7658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c765c: 0x24630928  addiu       $v1, $v1, 0x928
    ctx->pc = 0x2c765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2344));
    // 0x2c7660: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c7660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c7664: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c7664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c7668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c7668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c766c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c766cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7670: 0xac440df8  sw          $a0, 0xDF8($v0)
    ctx->pc = 0x2c7670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3576), GPR_U32(ctx, 4));
    // 0x2c7674: 0x24630940  addiu       $v1, $v1, 0x940
    ctx->pc = 0x2c7674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2368));
    // 0x2c7678: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c767c: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x2c767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x2c7680: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c7680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c7684: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c7684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c7688: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c7688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c768c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c768cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c7690: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c7690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c7694: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c7694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c7698: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c7698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c769c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c769cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c76a0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c76a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c76a4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c76a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c76a8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c76a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c76ac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c76acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c76b0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c76b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c76b4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C76B4u;
    {
        const bool branch_taken_0x2c76b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c76b4) {
            ctx->pc = 0x2C7748u;
            goto label_2c7748;
        }
    }
    ctx->pc = 0x2C76BCu;
    // 0x2c76bc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2c76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2c76c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c76c4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c76c8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C76C8u;
    SET_GPR_U32(ctx, 31, 0x2C76D0u);
    ctx->pc = 0x2C76CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76C8u;
            // 0x2c76cc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76D0u; }
        if (ctx->pc != 0x2C76D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76D0u; }
        if (ctx->pc != 0x2C76D0u) { return; }
    }
    ctx->pc = 0x2C76D0u;
label_2c76d0:
    // 0x2c76d0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c76d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c76d4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c76d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c76d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c76d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c76dc: 0x24a57770  addiu       $a1, $a1, 0x7770
    ctx->pc = 0x2c76dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30576));
    // 0x2c76e0: 0x24c673c0  addiu       $a2, $a2, 0x73C0
    ctx->pc = 0x2c76e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29632));
    // 0x2c76e4: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2c76e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2c76e8: 0xc040840  jal         func_102100
    ctx->pc = 0x2C76E8u;
    SET_GPR_U32(ctx, 31, 0x2C76F0u);
    ctx->pc = 0x2C76ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76E8u;
            // 0x2c76ec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76F0u; }
        if (ctx->pc != 0x2C76F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76F0u; }
        if (ctx->pc != 0x2C76F0u) { return; }
    }
    ctx->pc = 0x2C76F0u;
label_2c76f0:
    // 0x2c76f0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c76f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c76f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c76f8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c76fc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C76FCu;
    SET_GPR_U32(ctx, 31, 0x2C7704u);
    ctx->pc = 0x2C7700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76FCu;
            // 0x2c7700: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7704u; }
        if (ctx->pc != 0x2C7704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7704u; }
        if (ctx->pc != 0x2C7704u) { return; }
    }
    ctx->pc = 0x2C7704u;
label_2c7704:
    // 0x2c7704: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c7704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c7708: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C7708u;
    SET_GPR_U32(ctx, 31, 0x2C7710u);
    ctx->pc = 0x2C770Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7708u;
            // 0x2c770c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7710u; }
        if (ctx->pc != 0x2C7710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7710u; }
        if (ctx->pc != 0x2C7710u) { return; }
    }
    ctx->pc = 0x2C7710u;
label_2c7710:
    // 0x2c7710: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c7710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7714:
    // 0x2c7714: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c7714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c7718: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c7718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c771c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c7720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c7720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7724: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c7728: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c7728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c772c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c772cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c7730: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C7730u;
    SET_GPR_U32(ctx, 31, 0x2C7738u);
    ctx->pc = 0x2C7734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7730u;
            // 0x2c7734: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7738u; }
        if (ctx->pc != 0x2C7738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7738u; }
        if (ctx->pc != 0x2C7738u) { return; }
    }
    ctx->pc = 0x2C7738u;
label_2c7738:
    // 0x2c7738: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c7738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c773c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c773cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c7740: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C7740u;
    {
        const bool branch_taken_0x2c7740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7740u;
            // 0x2c7744: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7740) {
            ctx->pc = 0x2C7714u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7714;
        }
    }
    ctx->pc = 0x2C7748u;
label_2c7748:
    // 0x2c7748: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c7748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c774c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c774cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7750: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c7750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c775c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c775cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7760: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7760u;
            // 0x2c7764: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7768u;
    // 0x2c7768: 0x0  nop
    ctx->pc = 0x2c7768u;
    // NOP
    // 0x2c776c: 0x0  nop
    ctx->pc = 0x2c776cu;
    // NOP
    // 0x2c7770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c7770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7774: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c7778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c777c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c777cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c7780: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7784: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c7784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c7788: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c778c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c778cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c7790: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c7790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2c7794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7798: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c7798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c779c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c779cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77a0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c77a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c77a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c77a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c77a8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2c77ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c77acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c77b0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c77b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c77b4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c77b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c77b8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2C77B8u;
    SET_GPR_U32(ctx, 31, 0x2C77C0u);
    ctx->pc = 0x2C77BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C77B8u;
            // 0x2c77bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77C0u; }
        if (ctx->pc != 0x2C77C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77C0u; }
        if (ctx->pc != 0x2C77C0u) { return; }
    }
    ctx->pc = 0x2C77C0u;
label_2c77c0:
    // 0x2c77c0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2C77C0u;
    SET_GPR_U32(ctx, 31, 0x2C77C8u);
    ctx->pc = 0x2C77C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C77C0u;
            // 0x2c77c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77C8u; }
        if (ctx->pc != 0x2C77C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C77C8u; }
        if (ctx->pc != 0x2C77C8u) { return; }
    }
    ctx->pc = 0x2C77C8u;
label_2c77c8:
    // 0x2c77c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c77cc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2c77ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2c77d0: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2c77d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2c77d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c77d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2c77d8: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2c77d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2c77dc: 0x24633e70  addiu       $v1, $v1, 0x3E70
    ctx->pc = 0x2c77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15984));
    // 0x2c77e0: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2c77e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2c77e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c77e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c77e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c77ec: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2c77ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c77f0: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2c77f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c77f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c77f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c77f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c77f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c77fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c77fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7800: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7800u;
            // 0x2c7804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7808u;
    // 0x2c7808: 0x0  nop
    ctx->pc = 0x2c7808u;
    // NOP
    // 0x2c780c: 0x0  nop
    ctx->pc = 0x2c780cu;
    // NOP
}
