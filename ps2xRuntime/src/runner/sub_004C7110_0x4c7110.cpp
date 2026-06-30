#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C7110
// Address: 0x4c7110 - 0x4c7380
void sub_004C7110_0x4c7110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C7110_0x4c7110");
#endif

    switch (ctx->pc) {
        case 0x4c7140u: goto label_4c7140;
        case 0x4c7194u: goto label_4c7194;
        case 0x4c7228u: goto label_4c7228;
        case 0x4c7248u: goto label_4c7248;
        case 0x4c725cu: goto label_4c725c;
        case 0x4c7268u: goto label_4c7268;
        case 0x4c726cu: goto label_4c726c;
        case 0x4c7290u: goto label_4c7290;
        case 0x4c7310u: goto label_4c7310;
        case 0x4c7318u: goto label_4c7318;
        default: break;
    }

    ctx->pc = 0x4c7110u;

    // 0x4c7110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c7110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4c7114: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4c7114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c7118: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c7118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4c711c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4c7120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c7120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4c7124: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c7124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c7128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c712c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c7130: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c7130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7134: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4c7134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7138: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4C7138u;
    SET_GPR_U32(ctx, 31, 0x4C7140u);
    ctx->pc = 0x4C713Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7138u;
            // 0x4c713c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7140u; }
        if (ctx->pc != 0x4C7140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7140u; }
        if (ctx->pc != 0x4C7140u) { return; }
    }
    ctx->pc = 0x4C7140u;
label_4c7140:
    // 0x4c7140: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c7140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4c7144: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c7144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4c7148: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4c7148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4c714c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4c714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4c7150: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c7150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c7154: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4c7154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4c7158: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4c7158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4c715c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4c7160: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4c7160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4c7164: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c7164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4c7168: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4c7168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4c716c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4c716cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4c7170: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4c7170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4c7174: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4c7174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4c7178: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4c7178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4c717c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4c717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4c7180: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4c7180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4c7184: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4c7184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4c7188: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4c7188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4c718c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4C718Cu;
    SET_GPR_U32(ctx, 31, 0x4C7194u);
    ctx->pc = 0x4C7190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C718Cu;
            // 0x4c7190: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7194u; }
        if (ctx->pc != 0x4C7194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7194u; }
        if (ctx->pc != 0x4C7194u) { return; }
    }
    ctx->pc = 0x4C7194u;
label_4c7194:
    // 0x4c7194: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c7194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c7198: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4c7198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4c719c: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x4c719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
    // 0x4c71a0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4c71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4c71a4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4c71a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4c71a8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4c71ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c71acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c71b0: 0xac44aa00  sw          $a0, -0x5600($v0)
    ctx->pc = 0x4c71b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945280), GPR_U32(ctx, 4));
    // 0x4c71b4: 0x24631790  addiu       $v1, $v1, 0x1790
    ctx->pc = 0x4c71b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6032));
    // 0x4c71b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c71bc: 0x244217c8  addiu       $v0, $v0, 0x17C8
    ctx->pc = 0x4c71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6088));
    // 0x4c71c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c71c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c71c4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4c71c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4c71c8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4c71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4c71cc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4c71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4c71d0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4c71d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4c71d4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4c71d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4c71d8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4c71d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4c71dc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4c71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4c71e0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4c71e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4c71e4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4c71e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4c71e8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4c71e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4c71ec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4c71ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4c71f0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4c71f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x4c71f4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4c71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x4c71f8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x4c71f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x4c71fc: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x4c71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x4c7200: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x4c7200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x4c7204: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x4c7204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x4c7208: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4c7208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4c720c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4C720Cu;
    {
        const bool branch_taken_0x4c720c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c720c) {
            ctx->pc = 0x4C72A0u;
            goto label_4c72a0;
        }
    }
    ctx->pc = 0x4C7214u;
    // 0x4c7214: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4c7214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4c7218: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c7218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4c721c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4c721cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4c7220: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4C7220u;
    SET_GPR_U32(ctx, 31, 0x4C7228u);
    ctx->pc = 0x4C7224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7220u;
            // 0x4c7224: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7228u; }
        if (ctx->pc != 0x4C7228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7228u; }
        if (ctx->pc != 0x4C7228u) { return; }
    }
    ctx->pc = 0x4C7228u;
label_4c7228:
    // 0x4c7228: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c7228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4c722c: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x4c722cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x4c7230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c7230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7234: 0x24a572c0  addiu       $a1, $a1, 0x72C0
    ctx->pc = 0x4c7234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29376));
    // 0x4c7238: 0x24c66b80  addiu       $a2, $a2, 0x6B80
    ctx->pc = 0x4c7238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27520));
    // 0x4c723c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x4c723cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4c7240: 0xc040840  jal         func_102100
    ctx->pc = 0x4C7240u;
    SET_GPR_U32(ctx, 31, 0x4C7248u);
    ctx->pc = 0x4C7244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7240u;
            // 0x4c7244: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7248u; }
        if (ctx->pc != 0x4C7248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7248u; }
        if (ctx->pc != 0x4C7248u) { return; }
    }
    ctx->pc = 0x4C7248u;
label_4c7248:
    // 0x4c7248: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4c7248u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4c724c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4c724cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7250: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4c7250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4c7254: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4C7254u;
    SET_GPR_U32(ctx, 31, 0x4C725Cu);
    ctx->pc = 0x4C7258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7254u;
            // 0x4c7258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C725Cu; }
        if (ctx->pc != 0x4C725Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C725Cu; }
        if (ctx->pc != 0x4C725Cu) { return; }
    }
    ctx->pc = 0x4C725Cu;
label_4c725c:
    // 0x4c725c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4c725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4c7260: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4C7260u;
    SET_GPR_U32(ctx, 31, 0x4C7268u);
    ctx->pc = 0x4C7264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7260u;
            // 0x4c7264: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7268u; }
        if (ctx->pc != 0x4C7268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7268u; }
        if (ctx->pc != 0x4C7268u) { return; }
    }
    ctx->pc = 0x4C7268u;
label_4c7268:
    // 0x4c7268: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c7268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c726c:
    // 0x4c726c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4c726cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4c7270: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4c7270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4c7274: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4c7274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4c7278: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c7278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c727c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4c727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4c7280: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4c7280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4c7284: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c7284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c7288: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4C7288u;
    SET_GPR_U32(ctx, 31, 0x4C7290u);
    ctx->pc = 0x4C728Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7288u;
            // 0x4c728c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7290u; }
        if (ctx->pc != 0x4C7290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7290u; }
        if (ctx->pc != 0x4C7290u) { return; }
    }
    ctx->pc = 0x4C7290u;
label_4c7290:
    // 0x4c7290: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4c7290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4c7294: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4c7294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4c7298: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4C7298u;
    {
        const bool branch_taken_0x4c7298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C729Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7298u;
            // 0x4c729c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7298) {
            ctx->pc = 0x4C726Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c726c;
        }
    }
    ctx->pc = 0x4C72A0u;
label_4c72a0:
    // 0x4c72a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c72a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c72a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c72a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c72a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c72a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c72ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c72acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c72b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c72b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c72b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c72b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c72b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C72B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C72BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C72B8u;
            // 0x4c72bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C72C0u;
    // 0x4c72c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c72c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c72c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4c72c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c72c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c72cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4c72ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4c72d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c72d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c72d4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4c72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4c72d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4c72dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c72dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c72e0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4c72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x4c72e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c72e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c72e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c72ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c72ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c72f0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4c72f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x4c72f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4c72f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4c72f8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4c72f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x4c72fc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4c72fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x4c7300: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4c7300u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x4c7304: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4c7304u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c7308: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4C7308u;
    SET_GPR_U32(ctx, 31, 0x4C7310u);
    ctx->pc = 0x4C730Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7308u;
            // 0x4c730c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7310u; }
        if (ctx->pc != 0x4C7310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7310u; }
        if (ctx->pc != 0x4C7310u) { return; }
    }
    ctx->pc = 0x4C7310u;
label_4c7310:
    // 0x4c7310: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4C7310u;
    SET_GPR_U32(ctx, 31, 0x4C7318u);
    ctx->pc = 0x4C7314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7310u;
            // 0x4c7314: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7318u; }
        if (ctx->pc != 0x4C7318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7318u; }
        if (ctx->pc != 0x4C7318u) { return; }
    }
    ctx->pc = 0x4C7318u;
label_4c7318:
    // 0x4c7318: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c7318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4c731c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x4c731cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x4c7320: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x4c7320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4c7324: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c7324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c7328: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x4c7328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x4c732c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x4c732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x4c7330: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x4c7330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x4c7334: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c7334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7338: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4c7338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4c733c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x4c733cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c7340: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x4c7340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x4c7344: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c7344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c7348: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4c7348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x4c734c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x4c734cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x4c7350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c7350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c7354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c7358: 0x3e00008  jr          $ra
    ctx->pc = 0x4C7358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7358u;
            // 0x4c735c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7360u;
    // 0x4c7360: 0x3e00008  jr          $ra
    ctx->pc = 0x4C7360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7368u;
    // 0x4c7368: 0x0  nop
    ctx->pc = 0x4c7368u;
    // NOP
    // 0x4c736c: 0x0  nop
    ctx->pc = 0x4c736cu;
    // NOP
    // 0x4c7370: 0x3e00008  jr          $ra
    ctx->pc = 0x4C7370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7378u;
    // 0x4c7378: 0x0  nop
    ctx->pc = 0x4c7378u;
    // NOP
    // 0x4c737c: 0x0  nop
    ctx->pc = 0x4c737cu;
    // NOP
}
