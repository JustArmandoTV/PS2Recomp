#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CA1C0
// Address: 0x3ca1c0 - 0x3ca460
void sub_003CA1C0_0x3ca1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA1C0_0x3ca1c0");
#endif

    switch (ctx->pc) {
        case 0x3ca1f0u: goto label_3ca1f0;
        case 0x3ca244u: goto label_3ca244;
        case 0x3ca2e0u: goto label_3ca2e0;
        case 0x3ca300u: goto label_3ca300;
        case 0x3ca314u: goto label_3ca314;
        case 0x3ca320u: goto label_3ca320;
        case 0x3ca324u: goto label_3ca324;
        case 0x3ca348u: goto label_3ca348;
        case 0x3ca394u: goto label_3ca394;
        case 0x3ca39cu: goto label_3ca39c;
        case 0x3ca3bcu: goto label_3ca3bc;
        case 0x3ca3c4u: goto label_3ca3c4;
        case 0x3ca408u: goto label_3ca408;
        case 0x3ca410u: goto label_3ca410;
        default: break;
    }

    ctx->pc = 0x3ca1c0u;

    // 0x3ca1c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ca1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ca1c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3ca1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ca1c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ca1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ca1cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ca1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ca1d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ca1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ca1d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ca1d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca1d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ca1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ca1dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ca1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ca1e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ca1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca1e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3ca1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca1e8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x3CA1E8u;
    SET_GPR_U32(ctx, 31, 0x3CA1F0u);
    ctx->pc = 0x3CA1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA1E8u;
            // 0x3ca1ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA1F0u; }
        if (ctx->pc != 0x3CA1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA1F0u; }
        if (ctx->pc != 0x3CA1F0u) { return; }
    }
    ctx->pc = 0x3CA1F0u;
label_3ca1f0:
    // 0x3ca1f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3ca1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3ca1f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3ca1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3ca1f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3ca1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x3ca1fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3ca1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x3ca200: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3ca200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x3ca204: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3ca204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x3ca208: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3ca208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3ca20c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ca20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ca210: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3ca210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x3ca214: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ca214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3ca218: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3ca218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x3ca21c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3ca21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ca220: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3ca220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x3ca224: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3ca224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x3ca228: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3ca228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x3ca22c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3ca22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x3ca230: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3ca230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x3ca234: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3ca234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3ca238: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3ca238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3ca23c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x3CA23Cu;
    SET_GPR_U32(ctx, 31, 0x3CA244u);
    ctx->pc = 0x3CA240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA23Cu;
            // 0x3ca240: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA244u; }
        if (ctx->pc != 0x3CA244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA244u; }
        if (ctx->pc != 0x3CA244u) { return; }
    }
    ctx->pc = 0x3CA244u;
label_3ca244:
    // 0x3ca244: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ca244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3ca248: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x3ca248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x3ca24c: 0x24638ee8  addiu       $v1, $v1, -0x7118
    ctx->pc = 0x3ca24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938344));
    // 0x3ca250: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3ca250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x3ca254: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3ca254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x3ca258: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ca258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3ca25c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ca25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3ca260: 0xac4465b0  sw          $a0, 0x65B0($v0)
    ctx->pc = 0x3ca260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26032), GPR_U32(ctx, 4));
    // 0x3ca264: 0x24638f00  addiu       $v1, $v1, -0x7100
    ctx->pc = 0x3ca264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938368));
    // 0x3ca268: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ca268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3ca26c: 0x24428f38  addiu       $v0, $v0, -0x70C8
    ctx->pc = 0x3ca26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938424));
    // 0x3ca270: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3ca270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x3ca274: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3ca274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x3ca278: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3ca278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x3ca27c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3ca27cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x3ca280: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3ca280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x3ca284: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3ca284u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x3ca288: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3ca288u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x3ca28c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3ca28cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x3ca290: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3ca290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x3ca294: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3ca294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x3ca298: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x3ca298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x3ca29c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x3ca29cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x3ca2a0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x3ca2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x3ca2a4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x3ca2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x3ca2a8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x3ca2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x3ca2ac: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x3ca2acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x3ca2b0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x3ca2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x3ca2b4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x3ca2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x3ca2b8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x3ca2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x3ca2bc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3CA2BCu;
    {
        const bool branch_taken_0x3ca2bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca2bc) {
            ctx->pc = 0x3CA358u;
            goto label_3ca358;
        }
    }
    ctx->pc = 0x3CA2C4u;
    // 0x3ca2c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3ca2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3ca2c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ca2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3ca2cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ca2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ca2d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ca2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3ca2d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3ca2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3ca2d8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3CA2D8u;
    SET_GPR_U32(ctx, 31, 0x3CA2E0u);
    ctx->pc = 0x3CA2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA2D8u;
            // 0x3ca2dc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA2E0u; }
        if (ctx->pc != 0x3CA2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA2E0u; }
        if (ctx->pc != 0x3CA2E0u) { return; }
    }
    ctx->pc = 0x3CA2E0u;
label_3ca2e0:
    // 0x3ca2e0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3ca2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3ca2e4: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3ca2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3ca2e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ca2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca2ec: 0x24a5a380  addiu       $a1, $a1, -0x5C80
    ctx->pc = 0x3ca2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
    // 0x3ca2f0: 0x24c696b0  addiu       $a2, $a2, -0x6950
    ctx->pc = 0x3ca2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940336));
    // 0x3ca2f4: 0x24070160  addiu       $a3, $zero, 0x160
    ctx->pc = 0x3ca2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x3ca2f8: 0xc040840  jal         func_102100
    ctx->pc = 0x3CA2F8u;
    SET_GPR_U32(ctx, 31, 0x3CA300u);
    ctx->pc = 0x3CA2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA2F8u;
            // 0x3ca2fc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA300u; }
        if (ctx->pc != 0x3CA300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA300u; }
        if (ctx->pc != 0x3CA300u) { return; }
    }
    ctx->pc = 0x3CA300u;
label_3ca300:
    // 0x3ca300: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3ca300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x3ca304: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ca304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca308: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3ca308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x3ca30c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x3CA30Cu;
    SET_GPR_U32(ctx, 31, 0x3CA314u);
    ctx->pc = 0x3CA310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA30Cu;
            // 0x3ca310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA314u; }
        if (ctx->pc != 0x3CA314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA314u; }
        if (ctx->pc != 0x3CA314u) { return; }
    }
    ctx->pc = 0x3CA314u;
label_3ca314:
    // 0x3ca314: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3ca314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x3ca318: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x3CA318u;
    SET_GPR_U32(ctx, 31, 0x3CA320u);
    ctx->pc = 0x3CA31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA318u;
            // 0x3ca31c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA320u; }
        if (ctx->pc != 0x3CA320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA320u; }
        if (ctx->pc != 0x3CA320u) { return; }
    }
    ctx->pc = 0x3CA320u;
label_3ca320:
    // 0x3ca320: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ca320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ca324:
    // 0x3ca324: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3ca324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x3ca328: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3ca328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x3ca32c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3ca32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x3ca330: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ca330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca334: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x3ca334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x3ca338: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3ca338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x3ca33c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ca33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ca340: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x3CA340u;
    SET_GPR_U32(ctx, 31, 0x3CA348u);
    ctx->pc = 0x3CA344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA340u;
            // 0x3ca344: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA348u; }
        if (ctx->pc != 0x3CA348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA348u; }
        if (ctx->pc != 0x3CA348u) { return; }
    }
    ctx->pc = 0x3CA348u;
label_3ca348:
    // 0x3ca348: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3ca348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3ca34c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3ca34cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3ca350: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3CA350u;
    {
        const bool branch_taken_0x3ca350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA350u;
            // 0x3ca354: 0x26520160  addiu       $s2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca350) {
            ctx->pc = 0x3CA324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ca324;
        }
    }
    ctx->pc = 0x3CA358u;
label_3ca358:
    // 0x3ca358: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3ca358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca35c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ca35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ca360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ca360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ca364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ca364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ca368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca36c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca370: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA370u;
            // 0x3ca374: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CA378u;
    // 0x3ca378: 0x0  nop
    ctx->pc = 0x3ca378u;
    // NOP
    // 0x3ca37c: 0x0  nop
    ctx->pc = 0x3ca37cu;
    // NOP
    // 0x3ca380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ca380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ca384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ca384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ca388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ca388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ca38c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x3CA38Cu;
    SET_GPR_U32(ctx, 31, 0x3CA394u);
    ctx->pc = 0x3CA390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA38Cu;
            // 0x3ca390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA394u; }
        if (ctx->pc != 0x3CA394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA394u; }
        if (ctx->pc != 0x3CA394u) { return; }
    }
    ctx->pc = 0x3CA394u;
label_3ca394:
    // 0x3ca394: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x3CA394u;
    SET_GPR_U32(ctx, 31, 0x3CA39Cu);
    ctx->pc = 0x3CA398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA394u;
            // 0x3ca398: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA39Cu; }
        if (ctx->pc != 0x3CA39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA39Cu; }
        if (ctx->pc != 0x3CA39Cu) { return; }
    }
    ctx->pc = 0x3CA39Cu;
label_3ca39c:
    // 0x3ca39c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3ca39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3ca3a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3ca3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3ca3a4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3ca3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x3ca3a8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3ca3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x3ca3ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ca3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3ca3b0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3ca3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x3ca3b4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x3CA3B4u;
    SET_GPR_U32(ctx, 31, 0x3CA3BCu);
    ctx->pc = 0x3CA3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA3B4u;
            // 0x3ca3b8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA3BCu; }
        if (ctx->pc != 0x3CA3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA3BCu; }
        if (ctx->pc != 0x3CA3BCu) { return; }
    }
    ctx->pc = 0x3CA3BCu;
label_3ca3bc:
    // 0x3ca3bc: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x3CA3BCu;
    SET_GPR_U32(ctx, 31, 0x3CA3C4u);
    ctx->pc = 0x3CA3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA3BCu;
            // 0x3ca3c0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA3C4u; }
        if (ctx->pc != 0x3CA3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA3C4u; }
        if (ctx->pc != 0x3CA3C4u) { return; }
    }
    ctx->pc = 0x3CA3C4u;
label_3ca3c4:
    // 0x3ca3c4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3ca3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x3ca3c8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x3ca3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x3ca3cc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3ca3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x3ca3d0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x3ca3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x3ca3d4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3ca3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x3ca3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ca3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca3dc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x3ca3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x3ca3e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ca3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ca3e4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x3ca3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x3ca3e8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x3ca3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x3ca3ec: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3ca3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x3ca3f0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3ca3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x3ca3f4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3ca3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x3ca3f8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x3ca3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x3ca3fc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x3ca3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x3ca400: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x3CA400u;
    SET_GPR_U32(ctx, 31, 0x3CA408u);
    ctx->pc = 0x3CA404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA400u;
            // 0x3ca404: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA408u; }
        if (ctx->pc != 0x3CA408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA408u; }
        if (ctx->pc != 0x3CA408u) { return; }
    }
    ctx->pc = 0x3CA408u;
label_3ca408:
    // 0x3ca408: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x3CA408u;
    SET_GPR_U32(ctx, 31, 0x3CA410u);
    ctx->pc = 0x3CA40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA408u;
            // 0x3ca40c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA410u; }
        if (ctx->pc != 0x3CA410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA410u; }
        if (ctx->pc != 0x3CA410u) { return; }
    }
    ctx->pc = 0x3CA410u;
label_3ca410:
    // 0x3ca410: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3ca410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3ca414: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3ca414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3ca418: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x3ca418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x3ca41c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x3ca41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x3ca420: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ca420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ca424: 0x24848fa0  addiu       $a0, $a0, -0x7060
    ctx->pc = 0x3ca424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938528));
    // 0x3ca428: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3ca428u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ca42c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ca42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3ca430: 0x24638fe0  addiu       $v1, $v1, -0x7020
    ctx->pc = 0x3ca430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938592));
    // 0x3ca434: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x3ca434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3ca438: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ca438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca43c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x3ca43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x3ca440: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3ca440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3ca444: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3ca444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x3ca448: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3ca448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x3ca44c: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x3ca44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x3ca450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ca450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca458: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA458u;
            // 0x3ca45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CA460u;
}
