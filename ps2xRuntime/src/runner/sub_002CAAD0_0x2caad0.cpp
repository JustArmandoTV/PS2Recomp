#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CAAD0
// Address: 0x2caad0 - 0x2cad10
void sub_002CAAD0_0x2caad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAAD0_0x2caad0");
#endif

    switch (ctx->pc) {
        case 0x2cab00u: goto label_2cab00;
        case 0x2cab54u: goto label_2cab54;
        case 0x2cabd0u: goto label_2cabd0;
        case 0x2cabf0u: goto label_2cabf0;
        case 0x2cac04u: goto label_2cac04;
        case 0x2cac10u: goto label_2cac10;
        case 0x2cac14u: goto label_2cac14;
        case 0x2cac38u: goto label_2cac38;
        case 0x2cacc0u: goto label_2cacc0;
        case 0x2cacc8u: goto label_2cacc8;
        default: break;
    }

    ctx->pc = 0x2caad0u;

    // 0x2caad0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2caad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2caad4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2caad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2caad8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2caad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2caadc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2caadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2caae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2caae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2caae4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2caae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2caae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2caaec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2caaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2caaf0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2caaf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caaf4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2caaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caaf8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2CAAF8u;
    SET_GPR_U32(ctx, 31, 0x2CAB00u);
    ctx->pc = 0x2CAAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAF8u;
            // 0x2caafc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB00u; }
        if (ctx->pc != 0x2CAB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB00u; }
        if (ctx->pc != 0x2CAB00u) { return; }
    }
    ctx->pc = 0x2CAB00u;
label_2cab00:
    // 0x2cab00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cab00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cab04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cab04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cab08: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2cab08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2cab0c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2cab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2cab10: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cab10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cab14: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2cab14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2cab18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2cab18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2cab1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cab20: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2cab20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2cab24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cab28: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2cab28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2cab2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2cab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cab30: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2cab30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2cab34: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2cab34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2cab38: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2cab38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2cab3c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2cab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2cab40: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2cab40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2cab44: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2cab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2cab48: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2cab48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cab4c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2CAB4Cu;
    SET_GPR_U32(ctx, 31, 0x2CAB54u);
    ctx->pc = 0x2CAB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB4Cu;
            // 0x2cab50: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB54u; }
        if (ctx->pc != 0x2CAB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB54u; }
        if (ctx->pc != 0x2CAB54u) { return; }
    }
    ctx->pc = 0x2CAB54u;
label_2cab54:
    // 0x2cab54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cab54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cab58: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2cab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2cab5c: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x2cab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x2cab60: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2cab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2cab64: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2cab64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2cab68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cab6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cab70: 0xac440d98  sw          $a0, 0xD98($v0)
    ctx->pc = 0x2cab70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3480), GPR_U32(ctx, 4));
    // 0x2cab74: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x2cab74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x2cab78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cab78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cab7c: 0x244202f8  addiu       $v0, $v0, 0x2F8
    ctx->pc = 0x2cab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 760));
    // 0x2cab80: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cab80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cab84: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2cab84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2cab88: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2cab88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2cab8c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2cab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2cab90: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2cab90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2cab94: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2cab94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2cab98: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2cab98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2cab9c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2cab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2caba0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2caba0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2caba4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2caba4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2caba8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2caba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2cabac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2cabacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2cabb0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2cabb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2cabb4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CABB4u;
    {
        const bool branch_taken_0x2cabb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cabb4) {
            ctx->pc = 0x2CAC48u;
            goto label_2cac48;
        }
    }
    ctx->pc = 0x2CABBCu;
    // 0x2cabbc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2cabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2cabc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cabc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cabc8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2CABC8u;
    SET_GPR_U32(ctx, 31, 0x2CABD0u);
    ctx->pc = 0x2CABCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABC8u;
            // 0x2cabcc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABD0u; }
        if (ctx->pc != 0x2CABD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABD0u; }
        if (ctx->pc != 0x2CABD0u) { return; }
    }
    ctx->pc = 0x2CABD0u;
label_2cabd0:
    // 0x2cabd0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cabd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2cabd4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cabd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cabd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cabd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabdc: 0x24a5ac70  addiu       $a1, $a1, -0x5390
    ctx->pc = 0x2cabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945904));
    // 0x2cabe0: 0x24c6a8f0  addiu       $a2, $a2, -0x5710
    ctx->pc = 0x2cabe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945008));
    // 0x2cabe4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2cabe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cabe8: 0xc040840  jal         func_102100
    ctx->pc = 0x2CABE8u;
    SET_GPR_U32(ctx, 31, 0x2CABF0u);
    ctx->pc = 0x2CABECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABE8u;
            // 0x2cabec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABF0u; }
        if (ctx->pc != 0x2CABF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABF0u; }
        if (ctx->pc != 0x2CABF0u) { return; }
    }
    ctx->pc = 0x2CABF0u;
label_2cabf0:
    // 0x2cabf0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2cabf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2cabf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cabf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabf8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2cabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2cabfc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CABFCu;
    SET_GPR_U32(ctx, 31, 0x2CAC04u);
    ctx->pc = 0x2CAC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABFCu;
            // 0x2cac00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC04u; }
        if (ctx->pc != 0x2CAC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC04u; }
        if (ctx->pc != 0x2CAC04u) { return; }
    }
    ctx->pc = 0x2CAC04u;
label_2cac04:
    // 0x2cac04: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2cac04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2cac08: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CAC08u;
    SET_GPR_U32(ctx, 31, 0x2CAC10u);
    ctx->pc = 0x2CAC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC08u;
            // 0x2cac0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC10u; }
        if (ctx->pc != 0x2CAC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC10u; }
        if (ctx->pc != 0x2CAC10u) { return; }
    }
    ctx->pc = 0x2CAC10u;
label_2cac10:
    // 0x2cac10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cac10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cac14:
    // 0x2cac14: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2cac14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2cac18: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2cac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2cac1c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2cac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2cac20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cac20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cac24: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2cac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2cac28: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2cac28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2cac2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cac30: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2CAC30u;
    SET_GPR_U32(ctx, 31, 0x2CAC38u);
    ctx->pc = 0x2CAC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC30u;
            // 0x2cac34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC38u; }
        if (ctx->pc != 0x2CAC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC38u; }
        if (ctx->pc != 0x2CAC38u) { return; }
    }
    ctx->pc = 0x2CAC38u;
label_2cac38:
    // 0x2cac38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cac38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cac3c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2cac3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2cac40: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CAC40u;
    {
        const bool branch_taken_0x2cac40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC40u;
            // 0x2cac44: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac40) {
            ctx->pc = 0x2CAC14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cac14;
        }
    }
    ctx->pc = 0x2CAC48u;
label_2cac48:
    // 0x2cac48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cac48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cac4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cac50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cac50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cac54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cac54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cac58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cac58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cac5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cac5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cac60: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC60u;
            // 0x2cac64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CAC68u;
    // 0x2cac68: 0x0  nop
    ctx->pc = 0x2cac68u;
    // NOP
    // 0x2cac6c: 0x0  nop
    ctx->pc = 0x2cac6cu;
    // NOP
    // 0x2cac70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cac74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cac74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cac78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cac7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cac7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cac80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cac84: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2cac88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cac88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cac8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cac90: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2cac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2cac94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cac98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cac98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2cac9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cac9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caca0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2caca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2caca4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2caca4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2caca8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2caca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2cacac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cacacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2cacb0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2cacb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cacb4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2cacb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cacb8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2CACB8u;
    SET_GPR_U32(ctx, 31, 0x2CACC0u);
    ctx->pc = 0x2CACBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CACB8u;
            // 0x2cacbc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CACC0u; }
        if (ctx->pc != 0x2CACC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CACC0u; }
        if (ctx->pc != 0x2CACC0u) { return; }
    }
    ctx->pc = 0x2CACC0u;
label_2cacc0:
    // 0x2cacc0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2CACC0u;
    SET_GPR_U32(ctx, 31, 0x2CACC8u);
    ctx->pc = 0x2CACC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CACC0u;
            // 0x2cacc4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CACC8u; }
        if (ctx->pc != 0x2CACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CACC8u; }
        if (ctx->pc != 0x2CACC8u) { return; }
    }
    ctx->pc = 0x2CACC8u;
label_2cacc8:
    // 0x2cacc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2caccc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2cacccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2cacd0: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2cacd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2cacd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cacd8: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2cacd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2cacdc: 0x24630270  addiu       $v1, $v1, 0x270
    ctx->pc = 0x2cacdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 624));
    // 0x2cace0: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2cace0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2cace4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cace4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cace8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2cace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cacec: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2cacecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cacf0: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2cacf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cacf4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cacf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2cacf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cacf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cacfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cacfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cad00: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD00u;
            // 0x2cad04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CAD08u;
    // 0x2cad08: 0x0  nop
    ctx->pc = 0x2cad08u;
    // NOP
    // 0x2cad0c: 0x0  nop
    ctx->pc = 0x2cad0cu;
    // NOP
}
