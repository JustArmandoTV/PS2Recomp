#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042CD40
// Address: 0x42cd40 - 0x42cef0
void sub_0042CD40_0x42cd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CD40_0x42cd40");
#endif

    switch (ctx->pc) {
        case 0x42cd70u: goto label_42cd70;
        case 0x42cdc4u: goto label_42cdc4;
        case 0x42ce58u: goto label_42ce58;
        case 0x42ce78u: goto label_42ce78;
        case 0x42ce8cu: goto label_42ce8c;
        case 0x42ce98u: goto label_42ce98;
        case 0x42ce9cu: goto label_42ce9c;
        case 0x42cec0u: goto label_42cec0;
        default: break;
    }

    ctx->pc = 0x42cd40u;

    // 0x42cd40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x42cd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x42cd44: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x42cd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x42cd48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42cd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x42cd4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42cd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x42cd50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x42cd54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x42cd54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42cd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42cd60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x42cd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cd64: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x42cd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cd68: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x42CD68u;
    SET_GPR_U32(ctx, 31, 0x42CD70u);
    ctx->pc = 0x42CD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CD68u;
            // 0x42cd6c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CD70u; }
        if (ctx->pc != 0x42CD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CD70u; }
        if (ctx->pc != 0x42CD70u) { return; }
    }
    ctx->pc = 0x42CD70u;
label_42cd70:
    // 0x42cd70: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x42cd74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x42cd78: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x42cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x42cd7c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x42cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x42cd80: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x42cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x42cd84: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x42cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x42cd88: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x42cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x42cd8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x42cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42cd90: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x42cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x42cd94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42cd98: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x42cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x42cd9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x42cd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x42cda0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x42cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x42cda4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x42cda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x42cda8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x42cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x42cdac: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x42cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x42cdb0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x42cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x42cdb4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x42cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x42cdb8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x42cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x42cdbc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x42CDBCu;
    SET_GPR_U32(ctx, 31, 0x42CDC4u);
    ctx->pc = 0x42CDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CDBCu;
            // 0x42cdc0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CDC4u; }
        if (ctx->pc != 0x42CDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CDC4u; }
        if (ctx->pc != 0x42CDC4u) { return; }
    }
    ctx->pc = 0x42CDC4u;
label_42cdc4:
    // 0x42cdc4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x42cdc8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x42cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x42cdcc: 0x2463c418  addiu       $v1, $v1, -0x3BE8
    ctx->pc = 0x42cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951960));
    // 0x42cdd0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x42cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x42cdd4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x42cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x42cdd8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42cddc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x42cde0: 0xac4474a8  sw          $a0, 0x74A8($v0)
    ctx->pc = 0x42cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29864), GPR_U32(ctx, 4));
    // 0x42cde4: 0x2463c430  addiu       $v1, $v1, -0x3BD0
    ctx->pc = 0x42cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
    // 0x42cde8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42cdec: 0x2442c468  addiu       $v0, $v0, -0x3B98
    ctx->pc = 0x42cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952040));
    // 0x42cdf0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x42cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x42cdf4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x42cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x42cdf8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x42cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x42cdfc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x42cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x42ce00: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x42ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x42ce04: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x42ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x42ce08: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x42ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x42ce0c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x42ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x42ce10: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x42ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x42ce14: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x42ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x42ce18: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x42ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x42ce1c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x42ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x42ce20: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x42ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x42ce24: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x42ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x42ce28: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x42ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x42ce2c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x42ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x42ce30: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x42ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x42ce34: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x42ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x42ce38: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x42ce38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x42ce3c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x42CE3Cu;
    {
        const bool branch_taken_0x42ce3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42ce3c) {
            ctx->pc = 0x42CED0u;
            goto label_42ced0;
        }
    }
    ctx->pc = 0x42CE44u;
    // 0x42ce44: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x42ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x42ce48: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x42ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x42ce4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x42ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x42ce50: 0xc040138  jal         func_1004E0
    ctx->pc = 0x42CE50u;
    SET_GPR_U32(ctx, 31, 0x42CE58u);
    ctx->pc = 0x42CE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CE50u;
            // 0x42ce54: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CE58u; }
        if (ctx->pc != 0x42CE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CE58u; }
        if (ctx->pc != 0x42CE58u) { return; }
    }
    ctx->pc = 0x42CE58u;
label_42ce58:
    // 0x42ce58: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42ce58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x42ce5c: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x42ce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x42ce60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42ce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ce64: 0x24a5d790  addiu       $a1, $a1, -0x2870
    ctx->pc = 0x42ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956944));
    // 0x42ce68: 0x24c6c680  addiu       $a2, $a2, -0x3980
    ctx->pc = 0x42ce68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952576));
    // 0x42ce6c: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x42ce6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x42ce70: 0xc040840  jal         func_102100
    ctx->pc = 0x42CE70u;
    SET_GPR_U32(ctx, 31, 0x42CE78u);
    ctx->pc = 0x42CE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CE70u;
            // 0x42ce74: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CE78u; }
        if (ctx->pc != 0x42CE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CE78u; }
        if (ctx->pc != 0x42CE78u) { return; }
    }
    ctx->pc = 0x42CE78u;
label_42ce78:
    // 0x42ce78: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x42ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x42ce7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x42ce7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ce80: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x42ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x42ce84: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x42CE84u;
    SET_GPR_U32(ctx, 31, 0x42CE8Cu);
    ctx->pc = 0x42CE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CE84u;
            // 0x42ce88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CE8Cu; }
        if (ctx->pc != 0x42CE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CE8Cu; }
        if (ctx->pc != 0x42CE8Cu) { return; }
    }
    ctx->pc = 0x42CE8Cu;
label_42ce8c:
    // 0x42ce8c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x42ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x42ce90: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x42CE90u;
    SET_GPR_U32(ctx, 31, 0x42CE98u);
    ctx->pc = 0x42CE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CE90u;
            // 0x42ce94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CE98u; }
        if (ctx->pc != 0x42CE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CE98u; }
        if (ctx->pc != 0x42CE98u) { return; }
    }
    ctx->pc = 0x42CE98u;
label_42ce98:
    // 0x42ce98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x42ce98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ce9c:
    // 0x42ce9c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x42ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x42cea0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x42cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x42cea4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x42cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x42cea8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42cea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42ceac: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x42ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x42ceb0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x42ceb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x42ceb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x42ceb8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x42CEB8u;
    SET_GPR_U32(ctx, 31, 0x42CEC0u);
    ctx->pc = 0x42CEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CEB8u;
            // 0x42cebc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CEC0u; }
        if (ctx->pc != 0x42CEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CEC0u; }
        if (ctx->pc != 0x42CEC0u) { return; }
    }
    ctx->pc = 0x42CEC0u;
label_42cec0:
    // 0x42cec0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x42cec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x42cec4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x42cec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x42cec8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x42CEC8u;
    {
        const bool branch_taken_0x42cec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42CECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CEC8u;
            // 0x42cecc: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cec8) {
            ctx->pc = 0x42CE9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42ce9c;
        }
    }
    ctx->pc = 0x42CED0u;
label_42ced0:
    // 0x42ced0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x42ced0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ced4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42ced4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42ced8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42ced8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42cedc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42cedcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42cee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42cee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42cee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42cee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42cee8: 0x3e00008  jr          $ra
    ctx->pc = 0x42CEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CEE8u;
            // 0x42ceec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42CEF0u;
}
