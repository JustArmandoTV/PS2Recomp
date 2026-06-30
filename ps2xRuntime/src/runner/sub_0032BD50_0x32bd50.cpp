#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032BD50
// Address: 0x32bd50 - 0x32bfd0
void sub_0032BD50_0x32bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BD50_0x32bd50");
#endif

    switch (ctx->pc) {
        case 0x32bd80u: goto label_32bd80;
        case 0x32bdd4u: goto label_32bdd4;
        case 0x32be50u: goto label_32be50;
        case 0x32be70u: goto label_32be70;
        case 0x32be84u: goto label_32be84;
        case 0x32be90u: goto label_32be90;
        case 0x32be94u: goto label_32be94;
        case 0x32beb8u: goto label_32beb8;
        case 0x32bf04u: goto label_32bf04;
        case 0x32bf0cu: goto label_32bf0c;
        case 0x32bf2cu: goto label_32bf2c;
        case 0x32bf34u: goto label_32bf34;
        case 0x32bf78u: goto label_32bf78;
        case 0x32bf80u: goto label_32bf80;
        default: break;
    }

    ctx->pc = 0x32bd50u;

    // 0x32bd50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32bd54: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x32bd54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32bd58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32bd5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32bd60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32bd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32bd64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32bd64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32bd6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32bd70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32bd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x32bd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd78: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x32BD78u;
    SET_GPR_U32(ctx, 31, 0x32BD80u);
    ctx->pc = 0x32BD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BD78u;
            // 0x32bd7c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BD80u; }
        if (ctx->pc != 0x32BD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BD80u; }
        if (ctx->pc != 0x32BD80u) { return; }
    }
    ctx->pc = 0x32BD80u;
label_32bd80:
    // 0x32bd80: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32bd84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32bd88: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x32bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x32bd8c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x32bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x32bd90: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x32bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x32bd94: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x32bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x32bd98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x32bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x32bd9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32bda0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x32bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x32bda4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x32bda8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x32bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x32bdac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x32bdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32bdb0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x32bdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x32bdb4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x32bdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x32bdb8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x32bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x32bdbc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x32bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x32bdc0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x32bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x32bdc4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x32bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32bdc8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x32bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x32bdcc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x32BDCCu;
    SET_GPR_U32(ctx, 31, 0x32BDD4u);
    ctx->pc = 0x32BDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BDCCu;
            // 0x32bdd0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BDD4u; }
        if (ctx->pc != 0x32BDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BDD4u; }
        if (ctx->pc != 0x32BDD4u) { return; }
    }
    ctx->pc = 0x32BDD4u;
label_32bdd4:
    // 0x32bdd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32bdd8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x32bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x32bddc: 0x24634898  addiu       $v1, $v1, 0x4898
    ctx->pc = 0x32bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18584));
    // 0x32bde0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x32bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x32bde4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x32bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x32bde8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x32bdec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32bdf0: 0xac443e50  sw          $a0, 0x3E50($v0)
    ctx->pc = 0x32bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15952), GPR_U32(ctx, 4));
    // 0x32bdf4: 0x246348b0  addiu       $v1, $v1, 0x48B0
    ctx->pc = 0x32bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18608));
    // 0x32bdf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32bdfc: 0x244248e8  addiu       $v0, $v0, 0x48E8
    ctx->pc = 0x32bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18664));
    // 0x32be00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x32be00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x32be04: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x32be04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x32be08: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x32be08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x32be0c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x32be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x32be10: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x32be10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x32be14: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x32be14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x32be18: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x32be18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x32be1c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x32be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x32be20: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x32be20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x32be24: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x32be24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x32be28: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x32be28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x32be2c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x32be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x32be30: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x32be30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x32be34: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x32BE34u;
    {
        const bool branch_taken_0x32be34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32be34) {
            ctx->pc = 0x32BEC8u;
            goto label_32bec8;
        }
    }
    ctx->pc = 0x32BE3Cu;
    // 0x32be3c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x32be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x32be40: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x32be40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32be44: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x32be44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32be48: 0xc040138  jal         func_1004E0
    ctx->pc = 0x32BE48u;
    SET_GPR_U32(ctx, 31, 0x32BE50u);
    ctx->pc = 0x32BE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BE48u;
            // 0x32be4c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BE50u; }
        if (ctx->pc != 0x32BE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BE50u; }
        if (ctx->pc != 0x32BE50u) { return; }
    }
    ctx->pc = 0x32BE50u;
label_32be50:
    // 0x32be50: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32be50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32be54: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x32be54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x32be58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32be58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be5c: 0x24a5bef0  addiu       $a1, $a1, -0x4110
    ctx->pc = 0x32be5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950640));
    // 0x32be60: 0x24c6b700  addiu       $a2, $a2, -0x4900
    ctx->pc = 0x32be60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948608));
    // 0x32be64: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x32be64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x32be68: 0xc040840  jal         func_102100
    ctx->pc = 0x32BE68u;
    SET_GPR_U32(ctx, 31, 0x32BE70u);
    ctx->pc = 0x32BE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BE68u;
            // 0x32be6c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BE70u; }
        if (ctx->pc != 0x32BE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BE70u; }
        if (ctx->pc != 0x32BE70u) { return; }
    }
    ctx->pc = 0x32BE70u;
label_32be70:
    // 0x32be70: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x32be70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x32be74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32be74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be78: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x32be78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x32be7c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x32BE7Cu;
    SET_GPR_U32(ctx, 31, 0x32BE84u);
    ctx->pc = 0x32BE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BE7Cu;
            // 0x32be80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BE84u; }
        if (ctx->pc != 0x32BE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BE84u; }
        if (ctx->pc != 0x32BE84u) { return; }
    }
    ctx->pc = 0x32BE84u;
label_32be84:
    // 0x32be84: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x32be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x32be88: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x32BE88u;
    SET_GPR_U32(ctx, 31, 0x32BE90u);
    ctx->pc = 0x32BE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BE88u;
            // 0x32be8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BE90u; }
        if (ctx->pc != 0x32BE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BE90u; }
        if (ctx->pc != 0x32BE90u) { return; }
    }
    ctx->pc = 0x32BE90u;
label_32be90:
    // 0x32be90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32be90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32be94:
    // 0x32be94: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x32be94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x32be98: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x32be98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x32be9c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x32be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x32bea0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32bea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bea4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x32bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x32bea8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x32bea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x32beac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32beacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32beb0: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x32BEB0u;
    SET_GPR_U32(ctx, 31, 0x32BEB8u);
    ctx->pc = 0x32BEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BEB0u;
            // 0x32beb4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BEB8u; }
        if (ctx->pc != 0x32BEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BEB8u; }
        if (ctx->pc != 0x32BEB8u) { return; }
    }
    ctx->pc = 0x32BEB8u;
label_32beb8:
    // 0x32beb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32beb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32bebc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x32bebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x32bec0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x32BEC0u;
    {
        const bool branch_taken_0x32bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BEC0u;
            // 0x32bec4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bec0) {
            ctx->pc = 0x32BE94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32be94;
        }
    }
    ctx->pc = 0x32BEC8u;
label_32bec8:
    // 0x32bec8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x32bec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32becc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32beccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32bed0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32bed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32bed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32bed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32bed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bedc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bee0: 0x3e00008  jr          $ra
    ctx->pc = 0x32BEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BEE0u;
            // 0x32bee4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32BEE8u;
    // 0x32bee8: 0x0  nop
    ctx->pc = 0x32bee8u;
    // NOP
    // 0x32beec: 0x0  nop
    ctx->pc = 0x32beecu;
    // NOP
    // 0x32bef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32bef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32befc: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x32BEFCu;
    SET_GPR_U32(ctx, 31, 0x32BF04u);
    ctx->pc = 0x32BF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BEFCu;
            // 0x32bf00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF04u; }
        if (ctx->pc != 0x32BF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF04u; }
        if (ctx->pc != 0x32BF04u) { return; }
    }
    ctx->pc = 0x32BF04u;
label_32bf04:
    // 0x32bf04: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x32BF04u;
    SET_GPR_U32(ctx, 31, 0x32BF0Cu);
    ctx->pc = 0x32BF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BF04u;
            // 0x32bf08: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF0Cu; }
        if (ctx->pc != 0x32BF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF0Cu; }
        if (ctx->pc != 0x32BF0Cu) { return; }
    }
    ctx->pc = 0x32BF0Cu;
label_32bf0c:
    // 0x32bf0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32bf10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32bf14: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x32bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x32bf18: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x32bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x32bf1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32bf20: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x32bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x32bf24: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x32BF24u;
    SET_GPR_U32(ctx, 31, 0x32BF2Cu);
    ctx->pc = 0x32BF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BF24u;
            // 0x32bf28: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF2Cu; }
        if (ctx->pc != 0x32BF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF2Cu; }
        if (ctx->pc != 0x32BF2Cu) { return; }
    }
    ctx->pc = 0x32BF2Cu;
label_32bf2c:
    // 0x32bf2c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x32BF2Cu;
    SET_GPR_U32(ctx, 31, 0x32BF34u);
    ctx->pc = 0x32BF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BF2Cu;
            // 0x32bf30: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF34u; }
        if (ctx->pc != 0x32BF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF34u; }
        if (ctx->pc != 0x32BF34u) { return; }
    }
    ctx->pc = 0x32BF34u;
label_32bf34:
    // 0x32bf34: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x32bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x32bf38: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x32bf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x32bf3c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x32bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x32bf40: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x32bf40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x32bf44: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x32bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x32bf48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bf4c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x32bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x32bf50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32bf54: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x32bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x32bf58: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x32bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x32bf5c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x32bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x32bf60: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x32bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x32bf64: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x32bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x32bf68: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x32bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x32bf6c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x32bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x32bf70: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x32BF70u;
    SET_GPR_U32(ctx, 31, 0x32BF78u);
    ctx->pc = 0x32BF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BF70u;
            // 0x32bf74: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF78u; }
        if (ctx->pc != 0x32BF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF78u; }
        if (ctx->pc != 0x32BF78u) { return; }
    }
    ctx->pc = 0x32BF78u;
label_32bf78:
    // 0x32bf78: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x32BF78u;
    SET_GPR_U32(ctx, 31, 0x32BF80u);
    ctx->pc = 0x32BF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BF78u;
            // 0x32bf7c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF80u; }
        if (ctx->pc != 0x32BF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BF80u; }
        if (ctx->pc != 0x32BF80u) { return; }
    }
    ctx->pc = 0x32BF80u;
label_32bf80:
    // 0x32bf80: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x32bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x32bf84: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x32bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x32bf88: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x32bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x32bf8c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x32bf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x32bf90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32bf94: 0x24844950  addiu       $a0, $a0, 0x4950
    ctx->pc = 0x32bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18768));
    // 0x32bf98: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x32bf98u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32bf9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32bfa0: 0x24634990  addiu       $v1, $v1, 0x4990
    ctx->pc = 0x32bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18832));
    // 0x32bfa4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x32bfa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x32bfa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32bfa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfac: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x32bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x32bfb0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x32bfb4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x32bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x32bfb8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x32bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x32bfbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32bfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bfc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x32BFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BFC4u;
            // 0x32bfc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32BFCCu;
    // 0x32bfcc: 0x0  nop
    ctx->pc = 0x32bfccu;
    // NOP
}
