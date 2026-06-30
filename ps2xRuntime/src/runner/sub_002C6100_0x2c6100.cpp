#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6100
// Address: 0x2c6100 - 0x2c6390
void sub_002C6100_0x2c6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6100_0x2c6100");
#endif

    switch (ctx->pc) {
        case 0x2c6130u: goto label_2c6130;
        case 0x2c6184u: goto label_2c6184;
        case 0x2c6200u: goto label_2c6200;
        case 0x2c6220u: goto label_2c6220;
        case 0x2c6234u: goto label_2c6234;
        case 0x2c6240u: goto label_2c6240;
        case 0x2c6244u: goto label_2c6244;
        case 0x2c6268u: goto label_2c6268;
        case 0x2c62b4u: goto label_2c62b4;
        case 0x2c62bcu: goto label_2c62bc;
        case 0x2c62dcu: goto label_2c62dc;
        case 0x2c62e4u: goto label_2c62e4;
        case 0x2c6328u: goto label_2c6328;
        case 0x2c6330u: goto label_2c6330;
        default: break;
    }

    ctx->pc = 0x2c6100u;

    // 0x2c6100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c6104: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c6104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6108: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c6108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c610c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c6110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c6110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c6114: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c6114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c611c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6120: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c6120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6124: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c6124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6128: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C6128u;
    SET_GPR_U32(ctx, 31, 0x2C6130u);
    ctx->pc = 0x2C612Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6128u;
            // 0x2c612c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6130u; }
        if (ctx->pc != 0x2C6130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6130u; }
        if (ctx->pc != 0x2C6130u) { return; }
    }
    ctx->pc = 0x2C6130u;
label_2c6130:
    // 0x2c6130: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6134: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c6138: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c6138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c613c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c6140: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c6140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c6144: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c6144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c6148: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c6148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c614c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6150: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c6150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c6154: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c6154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c6158: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c6158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c615c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c615cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c6160: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c6160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c6164: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c6164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c6168: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c6168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c616c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c6170: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c6170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c6174: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c6178: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c6178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c617c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C617Cu;
    SET_GPR_U32(ctx, 31, 0x2C6184u);
    ctx->pc = 0x2C6180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C617Cu;
            // 0x2c6180: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6184u; }
        if (ctx->pc != 0x2C6184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6184u; }
        if (ctx->pc != 0x2C6184u) { return; }
    }
    ctx->pc = 0x2C6184u;
label_2c6184:
    // 0x2c6184: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6188: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c6188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c618c: 0x24630bd8  addiu       $v1, $v1, 0xBD8
    ctx->pc = 0x2c618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3032));
    // 0x2c6190: 0x2444ff90  addiu       $a0, $v0, -0x70
    ctx->pc = 0x2c6190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x2c6194: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c6194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c6198: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c6198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c619c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c619cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c61a0: 0xac440dd0  sw          $a0, 0xDD0($v0)
    ctx->pc = 0x2c61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3536), GPR_U32(ctx, 4));
    // 0x2c61a4: 0x24630bf0  addiu       $v1, $v1, 0xBF0
    ctx->pc = 0x2c61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3056));
    // 0x2c61a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c61ac: 0x24420c28  addiu       $v0, $v0, 0xC28
    ctx->pc = 0x2c61acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3112));
    // 0x2c61b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c61b4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c61b8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c61bc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c61bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c61c0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c61c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c61c4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c61c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c61c8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c61cc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c61ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c61d0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c61d4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c61d8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c61d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c61dc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c61e0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c61e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c61e4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C61E4u;
    {
        const bool branch_taken_0x2c61e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c61e4) {
            ctx->pc = 0x2C6278u;
            goto label_2c6278;
        }
    }
    ctx->pc = 0x2C61ECu;
    // 0x2c61ec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2c61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c61f0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c61f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c61f8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C61F8u;
    SET_GPR_U32(ctx, 31, 0x2C6200u);
    ctx->pc = 0x2C61FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61F8u;
            // 0x2c61fc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6200u; }
        if (ctx->pc != 0x2C6200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6200u; }
        if (ctx->pc != 0x2C6200u) { return; }
    }
    ctx->pc = 0x2C6200u;
label_2c6200:
    // 0x2c6200: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c6200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c6204: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c6204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c6208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c620c: 0x24a562a0  addiu       $a1, $a1, 0x62A0
    ctx->pc = 0x2c620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25248));
    // 0x2c6210: 0x24c65e80  addiu       $a2, $a2, 0x5E80
    ctx->pc = 0x2c6210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24192));
    // 0x2c6214: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x2c6214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2c6218: 0xc040840  jal         func_102100
    ctx->pc = 0x2C6218u;
    SET_GPR_U32(ctx, 31, 0x2C6220u);
    ctx->pc = 0x2C621Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6218u;
            // 0x2c621c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6220u; }
        if (ctx->pc != 0x2C6220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6220u; }
        if (ctx->pc != 0x2C6220u) { return; }
    }
    ctx->pc = 0x2C6220u;
label_2c6220:
    // 0x2c6220: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c6220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c6224: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c6224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6228: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c6228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c622c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C622Cu;
    SET_GPR_U32(ctx, 31, 0x2C6234u);
    ctx->pc = 0x2C6230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C622Cu;
            // 0x2c6230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6234u; }
        if (ctx->pc != 0x2C6234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6234u; }
        if (ctx->pc != 0x2C6234u) { return; }
    }
    ctx->pc = 0x2C6234u;
label_2c6234:
    // 0x2c6234: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c6234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c6238: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C6238u;
    SET_GPR_U32(ctx, 31, 0x2C6240u);
    ctx->pc = 0x2C623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6238u;
            // 0x2c623c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6240u; }
        if (ctx->pc != 0x2C6240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6240u; }
        if (ctx->pc != 0x2C6240u) { return; }
    }
    ctx->pc = 0x2C6240u;
label_2c6240:
    // 0x2c6240: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c6240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6244:
    // 0x2c6244: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c6244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c6248: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c6248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c624c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c6250: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c6250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6254: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c6254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c6258: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c6258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c625c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c625cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c6260: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C6260u;
    SET_GPR_U32(ctx, 31, 0x2C6268u);
    ctx->pc = 0x2C6264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6260u;
            // 0x2c6264: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6268u; }
        if (ctx->pc != 0x2C6268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6268u; }
        if (ctx->pc != 0x2C6268u) { return; }
    }
    ctx->pc = 0x2C6268u;
label_2c6268:
    // 0x2c6268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c6268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c626c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c626cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c6270: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C6270u;
    {
        const bool branch_taken_0x2c6270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6270u;
            // 0x2c6274: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6270) {
            ctx->pc = 0x2C6244u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c6244;
        }
    }
    ctx->pc = 0x2C6278u;
label_2c6278:
    // 0x2c6278: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c6278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c627c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c627cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6280: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c6280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c6284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c6288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c628c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c628cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6290: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6290u;
            // 0x2c6294: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6298u;
    // 0x2c6298: 0x0  nop
    ctx->pc = 0x2c6298u;
    // NOP
    // 0x2c629c: 0x0  nop
    ctx->pc = 0x2c629cu;
    // NOP
    // 0x2c62a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c62a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c62a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c62a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c62a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c62a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c62ac: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x2C62ACu;
    SET_GPR_U32(ctx, 31, 0x2C62B4u);
    ctx->pc = 0x2C62B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62ACu;
            // 0x2c62b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62B4u; }
        if (ctx->pc != 0x2C62B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62B4u; }
        if (ctx->pc != 0x2C62B4u) { return; }
    }
    ctx->pc = 0x2C62B4u;
label_2c62b4:
    // 0x2c62b4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x2C62B4u;
    SET_GPR_U32(ctx, 31, 0x2C62BCu);
    ctx->pc = 0x2C62B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62B4u;
            // 0x2c62b8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62BCu; }
        if (ctx->pc != 0x2C62BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62BCu; }
        if (ctx->pc != 0x2C62BCu) { return; }
    }
    ctx->pc = 0x2C62BCu;
label_2c62bc:
    // 0x2c62bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c62bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c62c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c62c4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x2c62c8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x2c62cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c62d0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c62d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2c62d4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x2C62D4u;
    SET_GPR_U32(ctx, 31, 0x2C62DCu);
    ctx->pc = 0x2C62D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62D4u;
            // 0x2c62d8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62DCu; }
        if (ctx->pc != 0x2C62DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62DCu; }
        if (ctx->pc != 0x2C62DCu) { return; }
    }
    ctx->pc = 0x2C62DCu;
label_2c62dc:
    // 0x2c62dc: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x2C62DCu;
    SET_GPR_U32(ctx, 31, 0x2C62E4u);
    ctx->pc = 0x2C62E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62DCu;
            // 0x2c62e0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62E4u; }
        if (ctx->pc != 0x2C62E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62E4u; }
        if (ctx->pc != 0x2C62E4u) { return; }
    }
    ctx->pc = 0x2C62E4u;
label_2c62e4:
    // 0x2c62e4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c62e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2c62e8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x2c62e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2c62ec: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2c62ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2c62f0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2c62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2c62f4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2c62f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2c62f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c62fc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2c62fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2c6300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c6300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6304: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2c6304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2c6308: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x2c6308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x2c630c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2c630cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2c6310: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2c6310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2c6314: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2c6314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2c6318: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x2c6318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x2c631c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2c631cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x2c6320: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x2C6320u;
    SET_GPR_U32(ctx, 31, 0x2C6328u);
    ctx->pc = 0x2C6324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6320u;
            // 0x2c6324: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6328u; }
        if (ctx->pc != 0x2C6328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6328u; }
        if (ctx->pc != 0x2C6328u) { return; }
    }
    ctx->pc = 0x2C6328u;
label_2c6328:
    // 0x2c6328: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x2C6328u;
    SET_GPR_U32(ctx, 31, 0x2C6330u);
    ctx->pc = 0x2C632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6328u;
            // 0x2c632c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6330u; }
        if (ctx->pc != 0x2C6330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6330u; }
        if (ctx->pc != 0x2C6330u) { return; }
    }
    ctx->pc = 0x2C6330u;
label_2c6330:
    // 0x2c6330: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x2c6330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x2c6334: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2c6334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2c6338: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x2c6338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x2c633c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2c633cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2c6340: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c6340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6344: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x2c6344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2c6348: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2c6348u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c634c: 0x24a5da10  addiu       $a1, $a1, -0x25F0
    ctx->pc = 0x2c634cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957584));
    // 0x2c6350: 0x2484da50  addiu       $a0, $a0, -0x25B0
    ctx->pc = 0x2c6350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957648));
    // 0x2c6354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6358: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x2c6358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2c635c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c635cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6360: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x2c6360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x2c6364: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2c6364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2c6368: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x2c6368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x2c636c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2c636cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2c6370: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2c6370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x2c6374: 0xa20300e0  sb          $v1, 0xE0($s0)
    ctx->pc = 0x2c6374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 224), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c6378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c637c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c637cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6380: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6380u;
            // 0x2c6384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6388u;
    // 0x2c6388: 0x0  nop
    ctx->pc = 0x2c6388u;
    // NOP
    // 0x2c638c: 0x0  nop
    ctx->pc = 0x2c638cu;
    // NOP
}
