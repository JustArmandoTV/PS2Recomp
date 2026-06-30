#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032A8F0
// Address: 0x32a8f0 - 0x32ab00
void sub_0032A8F0_0x32a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A8F0_0x32a8f0");
#endif

    switch (ctx->pc) {
        case 0x32a920u: goto label_32a920;
        case 0x32a974u: goto label_32a974;
        case 0x32a9f0u: goto label_32a9f0;
        case 0x32aa10u: goto label_32aa10;
        case 0x32aa24u: goto label_32aa24;
        case 0x32aa30u: goto label_32aa30;
        case 0x32aa34u: goto label_32aa34;
        case 0x32aa58u: goto label_32aa58;
        case 0x32aaa4u: goto label_32aaa4;
        default: break;
    }

    ctx->pc = 0x32a8f0u;

    // 0x32a8f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32a8f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x32a8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32a8f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32a8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32a8fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32a900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32a904: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32a904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a90c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a910: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32a910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a914: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x32a914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a918: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x32A918u;
    SET_GPR_U32(ctx, 31, 0x32A920u);
    ctx->pc = 0x32A91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A918u;
            // 0x32a91c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A920u; }
        if (ctx->pc != 0x32A920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A920u; }
        if (ctx->pc != 0x32A920u) { return; }
    }
    ctx->pc = 0x32A920u;
label_32a920:
    // 0x32a920: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32a924: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32a928: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x32a928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x32a92c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x32a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x32a930: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x32a930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x32a934: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x32a934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x32a938: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x32a938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x32a93c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32a940: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x32a940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x32a944: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x32a948: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x32a948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x32a94c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x32a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32a950: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x32a950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x32a954: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x32a954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x32a958: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x32a958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x32a95c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x32a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x32a960: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x32a960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x32a964: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x32a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32a968: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x32a968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x32a96c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x32A96Cu;
    SET_GPR_U32(ctx, 31, 0x32A974u);
    ctx->pc = 0x32A970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A96Cu;
            // 0x32a970: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A974u; }
        if (ctx->pc != 0x32A974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A974u; }
        if (ctx->pc != 0x32A974u) { return; }
    }
    ctx->pc = 0x32A974u;
label_32a974:
    // 0x32a974: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32a978: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x32a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x32a97c: 0x246346f8  addiu       $v1, $v1, 0x46F8
    ctx->pc = 0x32a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18168));
    // 0x32a980: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x32a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x32a984: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x32a984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x32a988: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32a988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x32a98c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32a990: 0xac443e48  sw          $a0, 0x3E48($v0)
    ctx->pc = 0x32a990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15944), GPR_U32(ctx, 4));
    // 0x32a994: 0x24634710  addiu       $v1, $v1, 0x4710
    ctx->pc = 0x32a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18192));
    // 0x32a998: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32a99c: 0x24424748  addiu       $v0, $v0, 0x4748
    ctx->pc = 0x32a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18248));
    // 0x32a9a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x32a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x32a9a4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x32a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x32a9a8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x32a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x32a9ac: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x32a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x32a9b0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x32a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x32a9b4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x32a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x32a9b8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x32a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x32a9bc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x32a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x32a9c0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x32a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x32a9c4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x32a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x32a9c8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x32a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x32a9cc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x32a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x32a9d0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x32a9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x32a9d4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x32A9D4u;
    {
        const bool branch_taken_0x32a9d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a9d4) {
            ctx->pc = 0x32AA68u;
            goto label_32aa68;
        }
    }
    ctx->pc = 0x32A9DCu;
    // 0x32a9dc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x32a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x32a9e0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x32a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32a9e4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x32a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32a9e8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x32A9E8u;
    SET_GPR_U32(ctx, 31, 0x32A9F0u);
    ctx->pc = 0x32A9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A9E8u;
            // 0x32a9ec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A9F0u; }
        if (ctx->pc != 0x32A9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A9F0u; }
        if (ctx->pc != 0x32A9F0u) { return; }
    }
    ctx->pc = 0x32A9F0u;
label_32a9f0:
    // 0x32a9f0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32a9f4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x32a9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x32a9f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a9fc: 0x24a5aa90  addiu       $a1, $a1, -0x5570
    ctx->pc = 0x32a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945424));
    // 0x32aa00: 0x24c6a2c0  addiu       $a2, $a2, -0x5D40
    ctx->pc = 0x32aa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943424));
    // 0x32aa04: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x32aa04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x32aa08: 0xc040840  jal         func_102100
    ctx->pc = 0x32AA08u;
    SET_GPR_U32(ctx, 31, 0x32AA10u);
    ctx->pc = 0x32AA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AA08u;
            // 0x32aa0c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AA10u; }
        if (ctx->pc != 0x32AA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AA10u; }
        if (ctx->pc != 0x32AA10u) { return; }
    }
    ctx->pc = 0x32AA10u;
label_32aa10:
    // 0x32aa10: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x32aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x32aa14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32aa14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa18: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x32aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x32aa1c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x32AA1Cu;
    SET_GPR_U32(ctx, 31, 0x32AA24u);
    ctx->pc = 0x32AA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AA1Cu;
            // 0x32aa20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AA24u; }
        if (ctx->pc != 0x32AA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AA24u; }
        if (ctx->pc != 0x32AA24u) { return; }
    }
    ctx->pc = 0x32AA24u;
label_32aa24:
    // 0x32aa24: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x32aa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x32aa28: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x32AA28u;
    SET_GPR_U32(ctx, 31, 0x32AA30u);
    ctx->pc = 0x32AA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AA28u;
            // 0x32aa2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AA30u; }
        if (ctx->pc != 0x32AA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AA30u; }
        if (ctx->pc != 0x32AA30u) { return; }
    }
    ctx->pc = 0x32AA30u;
label_32aa30:
    // 0x32aa30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32aa30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32aa34:
    // 0x32aa34: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x32aa34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x32aa38: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x32aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x32aa3c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x32aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x32aa40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32aa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32aa44: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x32aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x32aa48: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x32aa48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x32aa4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32aa50: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x32AA50u;
    SET_GPR_U32(ctx, 31, 0x32AA58u);
    ctx->pc = 0x32AA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AA50u;
            // 0x32aa54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AA58u; }
        if (ctx->pc != 0x32AA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AA58u; }
        if (ctx->pc != 0x32AA58u) { return; }
    }
    ctx->pc = 0x32AA58u;
label_32aa58:
    // 0x32aa58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32aa58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32aa5c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x32aa5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x32aa60: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x32AA60u;
    {
        const bool branch_taken_0x32aa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AA60u;
            // 0x32aa64: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa60) {
            ctx->pc = 0x32AA34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32aa34;
        }
    }
    ctx->pc = 0x32AA68u;
label_32aa68:
    // 0x32aa68: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x32aa68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32aa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32aa70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32aa70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32aa74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32aa74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32aa78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32aa78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32aa7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32aa7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aa80: 0x3e00008  jr          $ra
    ctx->pc = 0x32AA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AA80u;
            // 0x32aa84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32AA88u;
    // 0x32aa88: 0x0  nop
    ctx->pc = 0x32aa88u;
    // NOP
    // 0x32aa8c: 0x0  nop
    ctx->pc = 0x32aa8cu;
    // NOP
    // 0x32aa90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32aa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32aa94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32aa98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32aa9c: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x32AA9Cu;
    SET_GPR_U32(ctx, 31, 0x32AAA4u);
    ctx->pc = 0x32AAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AA9Cu;
            // 0x32aaa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AAA4u; }
        if (ctx->pc != 0x32AAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AAA4u; }
        if (ctx->pc != 0x32AAA4u) { return; }
    }
    ctx->pc = 0x32AAA4u;
label_32aaa4:
    // 0x32aaa4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32aaa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32aaac: 0x24636d00  addiu       $v1, $v1, 0x6D00
    ctx->pc = 0x32aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27904));
    // 0x32aab0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x32aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x32aab4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32aab8: 0x24426d40  addiu       $v0, $v0, 0x6D40
    ctx->pc = 0x32aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27968));
    // 0x32aabc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x32aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x32aac0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32aac4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x32aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x32aac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32aacc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x32aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x32aad0: 0x248447b0  addiu       $a0, $a0, 0x47B0
    ctx->pc = 0x32aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
    // 0x32aad4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x32aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x32aad8: 0x246347f0  addiu       $v1, $v1, 0x47F0
    ctx->pc = 0x32aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18416));
    // 0x32aadc: 0xa20500dc  sb          $a1, 0xDC($s0)
    ctx->pc = 0x32aadcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 5));
    // 0x32aae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32aae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aae4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x32aae8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x32aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x32aaec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32aaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32aaf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32aaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x32AAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AAF4u;
            // 0x32aaf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32AAFCu;
    // 0x32aafc: 0x0  nop
    ctx->pc = 0x32aafcu;
    // NOP
}
