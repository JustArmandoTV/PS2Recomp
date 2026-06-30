#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C53E0
// Address: 0x2c53e0 - 0x2c5590
void sub_002C53E0_0x2c53e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C53E0_0x2c53e0");
#endif

    switch (ctx->pc) {
        case 0x2c5410u: goto label_2c5410;
        case 0x2c5464u: goto label_2c5464;
        case 0x2c54f8u: goto label_2c54f8;
        case 0x2c5518u: goto label_2c5518;
        case 0x2c552cu: goto label_2c552c;
        case 0x2c5538u: goto label_2c5538;
        case 0x2c553cu: goto label_2c553c;
        case 0x2c5560u: goto label_2c5560;
        default: break;
    }

    ctx->pc = 0x2c53e0u;

    // 0x2c53e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c53e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c53e4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c53e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c53e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c53e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c53ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c53ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c53f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c53f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c53f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c53f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c53f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c53fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c53fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5400: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c5400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5404: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c5404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5408: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C5408u;
    SET_GPR_U32(ctx, 31, 0x2C5410u);
    ctx->pc = 0x2C540Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5408u;
            // 0x2c540c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5410u; }
        if (ctx->pc != 0x2C5410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5410u; }
        if (ctx->pc != 0x2C5410u) { return; }
    }
    ctx->pc = 0x2C5410u;
label_2c5410:
    // 0x2c5410: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5414: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5418: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c5418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c541c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c541cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c5420: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c5420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c5424: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c5424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c5428: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c5428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c542c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5430: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c5430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c5434: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c5434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c5438: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c5438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c543c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c543cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c5440: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c5440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c5444: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c5444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c5448: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c5448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c544c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c5450: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c5450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c5454: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c5454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c5458: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c5458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c545c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C545Cu;
    SET_GPR_U32(ctx, 31, 0x2C5464u);
    ctx->pc = 0x2C5460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C545Cu;
            // 0x2c5460: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5464u; }
        if (ctx->pc != 0x2C5464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5464u; }
        if (ctx->pc != 0x2C5464u) { return; }
    }
    ctx->pc = 0x2C5464u;
label_2c5464:
    // 0x2c5464: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5468: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c546c: 0x24630e50  addiu       $v1, $v1, 0xE50
    ctx->pc = 0x2c546cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3664));
    // 0x2c5470: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c5470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c5474: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c5474u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c5478: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c5478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c547c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c547cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5480: 0xac440db8  sw          $a0, 0xDB8($v0)
    ctx->pc = 0x2c5480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3512), GPR_U32(ctx, 4));
    // 0x2c5484: 0x24630e60  addiu       $v1, $v1, 0xE60
    ctx->pc = 0x2c5484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3680));
    // 0x2c5488: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c548c: 0x24420e98  addiu       $v0, $v0, 0xE98
    ctx->pc = 0x2c548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3736));
    // 0x2c5490: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c5490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c5494: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c5494u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c5498: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c5498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c549c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c549cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c54a0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c54a4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c54a8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c54ac: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c54acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c54b0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c54b4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c54b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c54b8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c54bc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c54bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c54c0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x2c54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x2c54c4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x2c54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x2c54c8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x2c54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x2c54cc: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x2c54ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x2c54d0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x2c54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x2c54d4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x2c54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x2c54d8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c54d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c54dc: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C54DCu;
    {
        const bool branch_taken_0x2c54dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c54dc) {
            ctx->pc = 0x2C5570u;
            goto label_2c5570;
        }
    }
    ctx->pc = 0x2C54E4u;
    // 0x2c54e4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2c54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2c54e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c54ec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c54f0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C54F0u;
    SET_GPR_U32(ctx, 31, 0x2C54F8u);
    ctx->pc = 0x2C54F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54F0u;
            // 0x2c54f4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54F8u; }
        if (ctx->pc != 0x2C54F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54F8u; }
        if (ctx->pc != 0x2C54F8u) { return; }
    }
    ctx->pc = 0x2C54F8u;
label_2c54f8:
    // 0x2c54f8: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x2c54f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x2c54fc: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c54fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c5500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5504: 0x24a50210  addiu       $a1, $a1, 0x210
    ctx->pc = 0x2c5504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
    // 0x2c5508: 0x24c65170  addiu       $a2, $a2, 0x5170
    ctx->pc = 0x2c5508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20848));
    // 0x2c550c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2c550cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2c5510: 0xc040840  jal         func_102100
    ctx->pc = 0x2C5510u;
    SET_GPR_U32(ctx, 31, 0x2C5518u);
    ctx->pc = 0x2C5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5510u;
            // 0x2c5514: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5518u; }
        if (ctx->pc != 0x2C5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5518u; }
        if (ctx->pc != 0x2C5518u) { return; }
    }
    ctx->pc = 0x2C5518u;
label_2c5518:
    // 0x2c5518: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c5518u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c551c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c551cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5520: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c5520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c5524: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C5524u;
    SET_GPR_U32(ctx, 31, 0x2C552Cu);
    ctx->pc = 0x2C5528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5524u;
            // 0x2c5528: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C552Cu; }
        if (ctx->pc != 0x2C552Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C552Cu; }
        if (ctx->pc != 0x2C552Cu) { return; }
    }
    ctx->pc = 0x2C552Cu;
label_2c552c:
    // 0x2c552c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c552cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c5530: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C5530u;
    SET_GPR_U32(ctx, 31, 0x2C5538u);
    ctx->pc = 0x2C5534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5530u;
            // 0x2c5534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5538u; }
        if (ctx->pc != 0x2C5538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5538u; }
        if (ctx->pc != 0x2C5538u) { return; }
    }
    ctx->pc = 0x2C5538u;
label_2c5538:
    // 0x2c5538: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c5538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c553c:
    // 0x2c553c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c553cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c5540: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c5540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c5544: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c5544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c5548: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c554c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c5550: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c5550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c5554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c5554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c5558: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C5558u;
    SET_GPR_U32(ctx, 31, 0x2C5560u);
    ctx->pc = 0x2C555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5558u;
            // 0x2c555c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5560u; }
        if (ctx->pc != 0x2C5560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5560u; }
        if (ctx->pc != 0x2C5560u) { return; }
    }
    ctx->pc = 0x2C5560u;
label_2c5560:
    // 0x2c5560: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c5560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c5564: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c5564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c5568: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C5568u;
    {
        const bool branch_taken_0x2c5568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C556Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5568u;
            // 0x2c556c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5568) {
            ctx->pc = 0x2C553Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c553c;
        }
    }
    ctx->pc = 0x2C5570u;
label_2c5570:
    // 0x2c5570: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c5570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5574: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c5574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5578: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c5578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c557c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c557cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5588: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5588u;
            // 0x2c558c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5590u;
}
