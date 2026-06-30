#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DA5C0
// Address: 0x3da5c0 - 0x3da950
void sub_003DA5C0_0x3da5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA5C0_0x3da5c0");
#endif

    switch (ctx->pc) {
        case 0x3da5f0u: goto label_3da5f0;
        case 0x3da644u: goto label_3da644;
        case 0x3da6d8u: goto label_3da6d8;
        case 0x3da6f8u: goto label_3da6f8;
        case 0x3da70cu: goto label_3da70c;
        case 0x3da718u: goto label_3da718;
        case 0x3da71cu: goto label_3da71c;
        case 0x3da740u: goto label_3da740;
        case 0x3da7c0u: goto label_3da7c0;
        case 0x3da7c8u: goto label_3da7c8;
        case 0x3da8ccu: goto label_3da8cc;
        case 0x3da908u: goto label_3da908;
        default: break;
    }

    ctx->pc = 0x3da5c0u;

    // 0x3da5c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3da5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3da5c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3da5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3da5c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3da5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3da5cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3da5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3da5d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3da5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3da5d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3da5d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da5d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3da5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3da5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da5e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3da5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da5e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3da5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da5e8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x3DA5E8u;
    SET_GPR_U32(ctx, 31, 0x3DA5F0u);
    ctx->pc = 0x3DA5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA5E8u;
            // 0x3da5ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA5F0u; }
        if (ctx->pc != 0x3DA5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA5F0u; }
        if (ctx->pc != 0x3DA5F0u) { return; }
    }
    ctx->pc = 0x3DA5F0u;
label_3da5f0:
    // 0x3da5f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3da5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3da5f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3da5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3da5f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3da5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x3da5fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3da5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x3da600: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3da600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x3da604: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3da604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x3da608: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3da608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3da60c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3da60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3da610: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3da610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x3da614: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3da614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3da618: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3da618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x3da61c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3da61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3da620: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3da620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x3da624: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3da624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x3da628: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3da628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x3da62c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3da62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x3da630: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3da630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x3da634: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3da634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3da638: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3da638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3da63c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x3DA63Cu;
    SET_GPR_U32(ctx, 31, 0x3DA644u);
    ctx->pc = 0x3DA640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA63Cu;
            // 0x3da640: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA644u; }
        if (ctx->pc != 0x3DA644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA644u; }
        if (ctx->pc != 0x3DA644u) { return; }
    }
    ctx->pc = 0x3DA644u;
label_3da644:
    // 0x3da644: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3da644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3da648: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x3da648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x3da64c: 0x24639830  addiu       $v1, $v1, -0x67D0
    ctx->pc = 0x3da64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940720));
    // 0x3da650: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3da650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x3da654: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3da654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x3da658: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3da658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3da65c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3da65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3da660: 0xac4465a0  sw          $a0, 0x65A0($v0)
    ctx->pc = 0x3da660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26016), GPR_U32(ctx, 4));
    // 0x3da664: 0x24639840  addiu       $v1, $v1, -0x67C0
    ctx->pc = 0x3da664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940736));
    // 0x3da668: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3da668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3da66c: 0x24429878  addiu       $v0, $v0, -0x6788
    ctx->pc = 0x3da66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940792));
    // 0x3da670: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3da670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x3da674: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3da674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x3da678: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3da678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x3da67c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3da67cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x3da680: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3da680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x3da684: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3da684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x3da688: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3da688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x3da68c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3da68cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x3da690: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3da690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x3da694: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3da694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x3da698: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x3da698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x3da69c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x3da69cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x3da6a0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x3da6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x3da6a4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x3da6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x3da6a8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x3da6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x3da6ac: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x3da6acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x3da6b0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x3da6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x3da6b4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x3da6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x3da6b8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x3da6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x3da6bc: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3DA6BCu;
    {
        const bool branch_taken_0x3da6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da6bc) {
            ctx->pc = 0x3DA750u;
            goto label_3da750;
        }
    }
    ctx->pc = 0x3DA6C4u;
    // 0x3da6c4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x3da6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3da6c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3da6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3da6cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3da6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3da6d0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3DA6D0u;
    SET_GPR_U32(ctx, 31, 0x3DA6D8u);
    ctx->pc = 0x3DA6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA6D0u;
            // 0x3da6d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA6D8u; }
        if (ctx->pc != 0x3DA6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA6D8u; }
        if (ctx->pc != 0x3DA6D8u) { return; }
    }
    ctx->pc = 0x3DA6D8u;
label_3da6d8:
    // 0x3da6d8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3da6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x3da6dc: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x3da6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x3da6e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3da6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da6e4: 0x24a5a770  addiu       $a1, $a1, -0x5890
    ctx->pc = 0x3da6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944624));
    // 0x3da6e8: 0x24c69d70  addiu       $a2, $a2, -0x6290
    ctx->pc = 0x3da6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942064));
    // 0x3da6ec: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x3da6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3da6f0: 0xc040840  jal         func_102100
    ctx->pc = 0x3DA6F0u;
    SET_GPR_U32(ctx, 31, 0x3DA6F8u);
    ctx->pc = 0x3DA6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA6F0u;
            // 0x3da6f4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA6F8u; }
        if (ctx->pc != 0x3DA6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA6F8u; }
        if (ctx->pc != 0x3DA6F8u) { return; }
    }
    ctx->pc = 0x3DA6F8u;
label_3da6f8:
    // 0x3da6f8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3da6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x3da6fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3da6fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da700: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3da700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x3da704: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x3DA704u;
    SET_GPR_U32(ctx, 31, 0x3DA70Cu);
    ctx->pc = 0x3DA708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA704u;
            // 0x3da708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA70Cu; }
        if (ctx->pc != 0x3DA70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA70Cu; }
        if (ctx->pc != 0x3DA70Cu) { return; }
    }
    ctx->pc = 0x3DA70Cu;
label_3da70c:
    // 0x3da70c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3da70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x3da710: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x3DA710u;
    SET_GPR_U32(ctx, 31, 0x3DA718u);
    ctx->pc = 0x3DA714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA710u;
            // 0x3da714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA718u; }
        if (ctx->pc != 0x3DA718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA718u; }
        if (ctx->pc != 0x3DA718u) { return; }
    }
    ctx->pc = 0x3DA718u;
label_3da718:
    // 0x3da718: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3da718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da71c:
    // 0x3da71c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3da71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x3da720: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3da720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x3da724: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3da724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x3da728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3da728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da72c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x3da72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x3da730: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3da730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x3da734: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3da734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3da738: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x3DA738u;
    SET_GPR_U32(ctx, 31, 0x3DA740u);
    ctx->pc = 0x3DA73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA738u;
            // 0x3da73c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA740u; }
        if (ctx->pc != 0x3DA740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA740u; }
        if (ctx->pc != 0x3DA740u) { return; }
    }
    ctx->pc = 0x3DA740u;
label_3da740:
    // 0x3da740: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3da740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3da744: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3da744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3da748: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3DA748u;
    {
        const bool branch_taken_0x3da748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA748u;
            // 0x3da74c: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da748) {
            ctx->pc = 0x3DA71Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3da71c;
        }
    }
    ctx->pc = 0x3DA750u;
label_3da750:
    // 0x3da750: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3da750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da754: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3da754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3da758: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3da758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3da75c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3da75cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3da760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3da760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da768: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA768u;
            // 0x3da76c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA770u;
    // 0x3da770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3da770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3da774: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3da774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3da778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3da778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3da77c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3da77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3da780: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da784: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3da784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x3da788: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3da788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3da78c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3da78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3da790: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x3da790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x3da794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3da794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da798: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3da798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3da79c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da7a0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3da7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x3da7a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3da7a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3da7a8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x3da7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x3da7ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3da7acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3da7b0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x3da7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da7b4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x3da7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x3da7b8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3DA7B8u;
    SET_GPR_U32(ctx, 31, 0x3DA7C0u);
    ctx->pc = 0x3DA7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA7B8u;
            // 0x3da7bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA7C0u; }
        if (ctx->pc != 0x3DA7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA7C0u; }
        if (ctx->pc != 0x3DA7C0u) { return; }
    }
    ctx->pc = 0x3DA7C0u;
label_3da7c0:
    // 0x3da7c0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3DA7C0u;
    SET_GPR_U32(ctx, 31, 0x3DA7C8u);
    ctx->pc = 0x3DA7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA7C0u;
            // 0x3da7c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA7C8u; }
        if (ctx->pc != 0x3DA7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA7C8u; }
        if (ctx->pc != 0x3DA7C8u) { return; }
    }
    ctx->pc = 0x3DA7C8u;
label_3da7c8:
    // 0x3da7c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3da7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3da7cc: 0x3c0d0064  lui         $t5, 0x64
    ctx->pc = 0x3da7ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)100 << 16));
    // 0x3da7d0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3da7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3da7d4: 0x3c0c006a  lui         $t4, 0x6A
    ctx->pc = 0x3da7d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)106 << 16));
    // 0x3da7d8: 0x3c0b006a  lui         $t3, 0x6A
    ctx->pc = 0x3da7d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)106 << 16));
    // 0x3da7dc: 0x3c0a006a  lui         $t2, 0x6A
    ctx->pc = 0x3da7dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)106 << 16));
    // 0x3da7e0: 0x3c09006b  lui         $t1, 0x6B
    ctx->pc = 0x3da7e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
    // 0x3da7e4: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x3da7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x3da7e8: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x3da7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x3da7ec: 0x25adc560  addiu       $t5, $t5, -0x3AA0
    ctx->pc = 0x3da7ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294952288));
    // 0x3da7f0: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x3da7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x3da7f4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x3da7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x3da7f8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x3da7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x3da7fc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3da7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3da800: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x3da800u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3da804: 0x258c2660  addiu       $t4, $t4, 0x2660
    ctx->pc = 0x3da804u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 9824));
    // 0x3da808: 0x91ad0000  lbu         $t5, 0x0($t5)
    ctx->pc = 0x3da808u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3da80c: 0x256b2670  addiu       $t3, $t3, 0x2670
    ctx->pc = 0x3da80cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9840));
    // 0x3da810: 0x254a26b0  addiu       $t2, $t2, 0x26B0
    ctx->pc = 0x3da810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9904));
    // 0x3da814: 0x252997e0  addiu       $t1, $t1, -0x6820
    ctx->pc = 0x3da814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940640));
    // 0x3da818: 0x25089820  addiu       $t0, $t0, -0x67E0
    ctx->pc = 0x3da818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940704));
    // 0x3da81c: 0x24e7cfe0  addiu       $a3, $a3, -0x3020
    ctx->pc = 0x3da81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
    // 0x3da820: 0xa20d004d  sb          $t5, 0x4D($s0)
    ctx->pc = 0x3da820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 13));
    // 0x3da824: 0x24c624a0  addiu       $a2, $a2, 0x24A0
    ctx->pc = 0x3da824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9376));
    // 0x3da828: 0xae0c0054  sw          $t4, 0x54($s0)
    ctx->pc = 0x3da828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 12));
    // 0x3da82c: 0x24a52460  addiu       $a1, $a1, 0x2460
    ctx->pc = 0x3da82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9312));
    // 0x3da830: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3da830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x3da834: 0x248498e0  addiu       $a0, $a0, -0x6720
    ctx->pc = 0x3da834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940896));
    // 0x3da838: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x3da838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x3da83c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3da83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3da840: 0xae0a0054  sw          $t2, 0x54($s0)
    ctx->pc = 0x3da840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 10));
    // 0x3da844: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3da844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da848: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x3da848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x3da84c: 0xae080054  sw          $t0, 0x54($s0)
    ctx->pc = 0x3da84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 8));
    // 0x3da850: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x3da850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
    // 0x3da854: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x3da854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x3da858: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x3da858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x3da85c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x3da85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x3da860: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x3da860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x3da864: 0xae100068  sw          $s0, 0x68($s0)
    ctx->pc = 0x3da864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 16));
    // 0x3da868: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x3da868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x3da86c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3da86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x3da870: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x3da870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x3da874: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x3da874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x3da878: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x3da878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x3da87c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x3da87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x3da880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3da880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da888: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA888u;
            // 0x3da88c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA890u;
    // 0x3da890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3da890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3da894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3da894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3da898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3da898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3da89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da8a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da8a4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DA8A4u;
    {
        const bool branch_taken_0x3da8a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA8A4u;
            // 0x3da8a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da8a4) {
            ctx->pc = 0x3DA908u;
            goto label_3da908;
        }
    }
    ctx->pc = 0x3DA8ACu;
    // 0x3da8ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3da8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3da8b0: 0x244298e0  addiu       $v0, $v0, -0x6720
    ctx->pc = 0x3da8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940896));
    // 0x3da8b4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3DA8B4u;
    {
        const bool branch_taken_0x3da8b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA8B4u;
            // 0x3da8b8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da8b4) {
            ctx->pc = 0x3DA8F0u;
            goto label_3da8f0;
        }
    }
    ctx->pc = 0x3DA8BCu;
    // 0x3da8bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3da8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3da8c0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x3da8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x3da8c4: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x3DA8C4u;
    SET_GPR_U32(ctx, 31, 0x3DA8CCu);
    ctx->pc = 0x3DA8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA8C4u;
            // 0x3da8c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA8CCu; }
        if (ctx->pc != 0x3DA8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA8CCu; }
        if (ctx->pc != 0x3DA8CCu) { return; }
    }
    ctx->pc = 0x3DA8CCu;
label_3da8cc:
    // 0x3da8cc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DA8CCu;
    {
        const bool branch_taken_0x3da8cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da8cc) {
            ctx->pc = 0x3DA8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA8CCu;
            // 0x3da8d0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DA8F4u;
            goto label_3da8f4;
        }
    }
    ctx->pc = 0x3DA8D4u;
    // 0x3da8d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3da8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3da8d8: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x3da8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x3da8dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA8DCu;
    {
        const bool branch_taken_0x3da8dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA8DCu;
            // 0x3da8e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da8dc) {
            ctx->pc = 0x3DA8F0u;
            goto label_3da8f0;
        }
    }
    ctx->pc = 0x3DA8E4u;
    // 0x3da8e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3da8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3da8e8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3da8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x3da8ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3da8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3da8f0:
    // 0x3da8f0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3da8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3da8f4:
    // 0x3da8f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3da8f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3da8f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA8F8u;
    {
        const bool branch_taken_0x3da8f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3da8f8) {
            ctx->pc = 0x3DA8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA8F8u;
            // 0x3da8fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DA90Cu;
            goto label_3da90c;
        }
    }
    ctx->pc = 0x3DA900u;
    // 0x3da900: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3DA900u;
    SET_GPR_U32(ctx, 31, 0x3DA908u);
    ctx->pc = 0x3DA904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA900u;
            // 0x3da904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA908u; }
        if (ctx->pc != 0x3DA908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA908u; }
        if (ctx->pc != 0x3DA908u) { return; }
    }
    ctx->pc = 0x3DA908u;
label_3da908:
    // 0x3da908: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3da908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da90c:
    // 0x3da90c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3da90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3da910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3da910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da918: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA918u;
            // 0x3da91c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA920u;
    // 0x3da920: 0x80d37dc  j           func_34DF70
    ctx->pc = 0x3DA920u;
    ctx->pc = 0x3DA924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA920u;
            // 0x3da924: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0034DF70_0x34df70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3DA928u;
    // 0x3da928: 0x0  nop
    ctx->pc = 0x3da928u;
    // NOP
    // 0x3da92c: 0x0  nop
    ctx->pc = 0x3da92cu;
    // NOP
    // 0x3da930: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA938u;
    // 0x3da938: 0x0  nop
    ctx->pc = 0x3da938u;
    // NOP
    // 0x3da93c: 0x0  nop
    ctx->pc = 0x3da93cu;
    // NOP
    // 0x3da940: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3da940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3da944: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA944u;
            // 0x3da948: 0xa083004c  sb          $v1, 0x4C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA94Cu;
    // 0x3da94c: 0x0  nop
    ctx->pc = 0x3da94cu;
    // NOP
}
