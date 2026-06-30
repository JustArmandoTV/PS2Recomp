#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C89D0
// Address: 0x2c89d0 - 0x2c8c10
void sub_002C89D0_0x2c89d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C89D0_0x2c89d0");
#endif

    switch (ctx->pc) {
        case 0x2c8a00u: goto label_2c8a00;
        case 0x2c8a54u: goto label_2c8a54;
        case 0x2c8ad0u: goto label_2c8ad0;
        case 0x2c8af0u: goto label_2c8af0;
        case 0x2c8b04u: goto label_2c8b04;
        case 0x2c8b10u: goto label_2c8b10;
        case 0x2c8b14u: goto label_2c8b14;
        case 0x2c8b38u: goto label_2c8b38;
        case 0x2c8bc0u: goto label_2c8bc0;
        case 0x2c8bc8u: goto label_2c8bc8;
        default: break;
    }

    ctx->pc = 0x2c89d0u;

    // 0x2c89d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c89d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c89d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c89d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c89d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c89d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c89dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c89dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c89e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c89e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c89e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c89e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c89e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c89ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c89ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c89f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c89f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c89f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89f8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C89F8u;
    SET_GPR_U32(ctx, 31, 0x2C8A00u);
    ctx->pc = 0x2C89FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C89F8u;
            // 0x2c89fc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8A00u; }
        if (ctx->pc != 0x2C8A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8A00u; }
        if (ctx->pc != 0x2C8A00u) { return; }
    }
    ctx->pc = 0x2C8A00u;
label_2c8a00:
    // 0x2c8a00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8a04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c8a08: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c8a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c8a0c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c8a10: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c8a14: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c8a18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c8a1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c8a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c8a20: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c8a20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c8a24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c8a28: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c8a2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c8a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c8a30: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c8a34: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c8a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c8a38: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c8a38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c8a3c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c8a40: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c8a44: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c8a48: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c8a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c8a4c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C8A4Cu;
    SET_GPR_U32(ctx, 31, 0x2C8A54u);
    ctx->pc = 0x2C8A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8A4Cu;
            // 0x2c8a50: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8A54u; }
        if (ctx->pc != 0x2C8A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8A54u; }
        if (ctx->pc != 0x2C8A54u) { return; }
    }
    ctx->pc = 0x2C8A54u;
label_2c8a54:
    // 0x2c8a54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8a58: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c8a5c: 0x246306a0  addiu       $v1, $v1, 0x6A0
    ctx->pc = 0x2c8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1696));
    // 0x2c8a60: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c8a64: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c8a68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c8a6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8a70: 0xac440e10  sw          $a0, 0xE10($v0)
    ctx->pc = 0x2c8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3600), GPR_U32(ctx, 4));
    // 0x2c8a74: 0x246306b0  addiu       $v1, $v1, 0x6B0
    ctx->pc = 0x2c8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1712));
    // 0x2c8a78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c8a7c: 0x244206e8  addiu       $v0, $v0, 0x6E8
    ctx->pc = 0x2c8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1768));
    // 0x2c8a80: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c8a84: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c8a88: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c8a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c8a8c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c8a90: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c8a90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c8a94: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c8a98: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c8a98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c8a9c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c8a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c8aa0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c8aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c8aa4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c8aa8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c8aac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c8aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c8ab0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c8ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c8ab4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C8AB4u;
    {
        const bool branch_taken_0x2c8ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ab4) {
            ctx->pc = 0x2C8B48u;
            goto label_2c8b48;
        }
    }
    ctx->pc = 0x2C8ABCu;
    // 0x2c8abc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c8ac0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c8ac4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c8ac8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C8AC8u;
    SET_GPR_U32(ctx, 31, 0x2C8AD0u);
    ctx->pc = 0x2C8ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8AC8u;
            // 0x2c8acc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AD0u; }
        if (ctx->pc != 0x2C8AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AD0u; }
        if (ctx->pc != 0x2C8AD0u) { return; }
    }
    ctx->pc = 0x2C8AD0u;
label_2c8ad0:
    // 0x2c8ad0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c8ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2c8ad4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2c8ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2c8ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8adc: 0x24a58b70  addiu       $a1, $a1, -0x7490
    ctx->pc = 0x2c8adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937456));
    // 0x2c8ae0: 0x24c687c0  addiu       $a2, $a2, -0x7840
    ctx->pc = 0x2c8ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936512));
    // 0x2c8ae4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2c8ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c8ae8: 0xc040840  jal         func_102100
    ctx->pc = 0x2C8AE8u;
    SET_GPR_U32(ctx, 31, 0x2C8AF0u);
    ctx->pc = 0x2C8AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8AE8u;
            // 0x2c8aec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AF0u; }
        if (ctx->pc != 0x2C8AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AF0u; }
        if (ctx->pc != 0x2C8AF0u) { return; }
    }
    ctx->pc = 0x2C8AF0u;
label_2c8af0:
    // 0x2c8af0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c8af4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c8af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8af8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c8afc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C8AFCu;
    SET_GPR_U32(ctx, 31, 0x2C8B04u);
    ctx->pc = 0x2C8B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8AFCu;
            // 0x2c8b00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B04u; }
        if (ctx->pc != 0x2C8B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B04u; }
        if (ctx->pc != 0x2C8B04u) { return; }
    }
    ctx->pc = 0x2C8B04u;
label_2c8b04:
    // 0x2c8b04: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c8b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c8b08: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C8B08u;
    SET_GPR_U32(ctx, 31, 0x2C8B10u);
    ctx->pc = 0x2C8B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B08u;
            // 0x2c8b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B10u; }
        if (ctx->pc != 0x2C8B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B10u; }
        if (ctx->pc != 0x2C8B10u) { return; }
    }
    ctx->pc = 0x2C8B10u;
label_2c8b10:
    // 0x2c8b10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c8b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b14:
    // 0x2c8b14: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c8b18: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c8b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c8b1c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c8b20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c8b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8b24: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c8b28: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c8b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c8b2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8b30: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C8B30u;
    SET_GPR_U32(ctx, 31, 0x2C8B38u);
    ctx->pc = 0x2C8B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B30u;
            // 0x2c8b34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B38u; }
        if (ctx->pc != 0x2C8B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B38u; }
        if (ctx->pc != 0x2C8B38u) { return; }
    }
    ctx->pc = 0x2C8B38u;
label_2c8b38:
    // 0x2c8b38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c8b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c8b3c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c8b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c8b40: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C8B40u;
    {
        const bool branch_taken_0x2c8b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B40u;
            // 0x2c8b44: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b40) {
            ctx->pc = 0x2C8B14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8b14;
        }
    }
    ctx->pc = 0x2C8B48u;
label_2c8b48:
    // 0x2c8b48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c8b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c8b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8b50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c8b50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8b54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8b58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B60u;
            // 0x2c8b64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8B68u;
    // 0x2c8b68: 0x0  nop
    ctx->pc = 0x2c8b68u;
    // NOP
    // 0x2c8b6c: 0x0  nop
    ctx->pc = 0x2c8b6cu;
    // NOP
    // 0x2c8b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8b74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c8b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8b7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c8b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8b80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8b84: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c8b88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8b8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c8b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c8b90: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2c8b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8b98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c8b9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ba0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c8ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c8ba4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c8ba4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8ba8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2c8bac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c8bacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8bb0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c8bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8bb4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c8bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c8bb8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2C8BB8u;
    SET_GPR_U32(ctx, 31, 0x2C8BC0u);
    ctx->pc = 0x2C8BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8BB8u;
            // 0x2c8bbc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8BC0u; }
        if (ctx->pc != 0x2C8BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8BC0u; }
        if (ctx->pc != 0x2C8BC0u) { return; }
    }
    ctx->pc = 0x2C8BC0u;
label_2c8bc0:
    // 0x2c8bc0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2C8BC0u;
    SET_GPR_U32(ctx, 31, 0x2C8BC8u);
    ctx->pc = 0x2C8BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8BC0u;
            // 0x2c8bc4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8BC8u; }
        if (ctx->pc != 0x2C8BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8BC8u; }
        if (ctx->pc != 0x2C8BC8u) { return; }
    }
    ctx->pc = 0x2C8BC8u;
label_2c8bc8:
    // 0x2c8bc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c8bcc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2c8bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2c8bd0: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2c8bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2c8bd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8bd8: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2c8bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2c8bdc: 0x24630660  addiu       $v1, $v1, 0x660
    ctx->pc = 0x2c8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
    // 0x2c8be0: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2c8be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2c8be4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8be8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c8be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c8bec: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2c8becu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8bf0: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2c8bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8bf4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c8bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c8bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8c00: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C00u;
            // 0x2c8c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8C08u;
    // 0x2c8c08: 0x0  nop
    ctx->pc = 0x2c8c08u;
    // NOP
    // 0x2c8c0c: 0x0  nop
    ctx->pc = 0x2c8c0cu;
    // NOP
}
