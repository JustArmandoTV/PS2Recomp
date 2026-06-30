#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B89F0
// Address: 0x2b89f0 - 0x2b8b90
void sub_002B89F0_0x2b89f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B89F0_0x2b89f0");
#endif

    switch (ctx->pc) {
        case 0x2b8a20u: goto label_2b8a20;
        case 0x2b8a74u: goto label_2b8a74;
        case 0x2b8af0u: goto label_2b8af0;
        case 0x2b8b10u: goto label_2b8b10;
        case 0x2b8b24u: goto label_2b8b24;
        case 0x2b8b30u: goto label_2b8b30;
        case 0x2b8b34u: goto label_2b8b34;
        case 0x2b8b58u: goto label_2b8b58;
        default: break;
    }

    ctx->pc = 0x2b89f0u;

    // 0x2b89f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b89f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b89f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2b89f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b89f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b89f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b89fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b89fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b8a00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b8a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b8a04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b8a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b8a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8a10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b8a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b8a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a18: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2B8A18u;
    SET_GPR_U32(ctx, 31, 0x2B8A20u);
    ctx->pc = 0x2B8A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8A18u;
            // 0x2b8a1c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8A20u; }
        if (ctx->pc != 0x2B8A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8A20u; }
        if (ctx->pc != 0x2B8A20u) { return; }
    }
    ctx->pc = 0x2B8A20u;
label_2b8a20:
    // 0x2b8a20: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b8a24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8a28: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2b8a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2b8a2c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2b8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2b8a30: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2b8a34: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2b8a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2b8a38: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2b8a38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2b8a3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b8a40: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2b8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2b8a44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b8a48: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2b8a48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2b8a4c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2b8a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b8a50: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2b8a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2b8a54: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2b8a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b8a58: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2b8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2b8a5c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2b8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2b8a60: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2b8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2b8a64: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b8a68: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2b8a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b8a6c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2B8A6Cu;
    SET_GPR_U32(ctx, 31, 0x2B8A74u);
    ctx->pc = 0x2B8A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8A6Cu;
            // 0x2b8a70: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8A74u; }
        if (ctx->pc != 0x2B8A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8A74u; }
        if (ctx->pc != 0x2B8A74u) { return; }
    }
    ctx->pc = 0x2B8A74u;
label_2b8a74:
    // 0x2b8a74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b8a78: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2b8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2b8a7c: 0x24632888  addiu       $v1, $v1, 0x2888
    ctx->pc = 0x2b8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10376));
    // 0x2b8a80: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2b8a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2b8a84: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2b8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2b8a88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b8a8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b8a90: 0xac440cc0  sw          $a0, 0xCC0($v0)
    ctx->pc = 0x2b8a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3264), GPR_U32(ctx, 4));
    // 0x2b8a94: 0x246328e0  addiu       $v1, $v1, 0x28E0
    ctx->pc = 0x2b8a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10464));
    // 0x2b8a98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8a9c: 0x24422918  addiu       $v0, $v0, 0x2918
    ctx->pc = 0x2b8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10520));
    // 0x2b8aa0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b8aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2b8aa4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2b8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2b8aa8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2b8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2b8aac: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2b8aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2b8ab0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2b8ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2b8ab4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2b8ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2b8ab8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2b8ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2b8abc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2b8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2b8ac0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2b8ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2b8ac4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2b8ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2b8ac8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2b8ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2b8acc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2b8accu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2b8ad0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2b8ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2b8ad4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B8AD4u;
    {
        const bool branch_taken_0x2b8ad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8ad4) {
            ctx->pc = 0x2B8B68u;
            goto label_2b8b68;
        }
    }
    ctx->pc = 0x2B8ADCu;
    // 0x2b8adc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2b8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2b8ae0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2b8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b8ae4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b8ae8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2B8AE8u;
    SET_GPR_U32(ctx, 31, 0x2B8AF0u);
    ctx->pc = 0x2B8AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8AE8u;
            // 0x2b8aec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8AF0u; }
        if (ctx->pc != 0x2B8AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8AF0u; }
        if (ctx->pc != 0x2B8AF0u) { return; }
    }
    ctx->pc = 0x2B8AF0u;
label_2b8af0:
    // 0x2b8af0: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x2b8af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x2b8af4: 0x3c060052  lui         $a2, 0x52
    ctx->pc = 0x2b8af4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)82 << 16));
    // 0x2b8af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8afc: 0x24a553d0  addiu       $a1, $a1, 0x53D0
    ctx->pc = 0x2b8afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21456));
    // 0x2b8b00: 0x24c652f0  addiu       $a2, $a2, 0x52F0
    ctx->pc = 0x2b8b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21232));
    // 0x2b8b04: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x2b8b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2b8b08: 0xc040840  jal         func_102100
    ctx->pc = 0x2B8B08u;
    SET_GPR_U32(ctx, 31, 0x2B8B10u);
    ctx->pc = 0x2B8B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B08u;
            // 0x2b8b0c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B10u; }
        if (ctx->pc != 0x2B8B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B10u; }
        if (ctx->pc != 0x2B8B10u) { return; }
    }
    ctx->pc = 0x2B8B10u;
label_2b8b10:
    // 0x2b8b10: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2b8b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2b8b14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b8b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b18: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2b8b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2b8b1c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2B8B1Cu;
    SET_GPR_U32(ctx, 31, 0x2B8B24u);
    ctx->pc = 0x2B8B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B1Cu;
            // 0x2b8b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B24u; }
        if (ctx->pc != 0x2B8B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B24u; }
        if (ctx->pc != 0x2B8B24u) { return; }
    }
    ctx->pc = 0x2B8B24u;
label_2b8b24:
    // 0x2b8b24: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2b8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2b8b28: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2B8B28u;
    SET_GPR_U32(ctx, 31, 0x2B8B30u);
    ctx->pc = 0x2B8B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B28u;
            // 0x2b8b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B30u; }
        if (ctx->pc != 0x2B8B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B30u; }
        if (ctx->pc != 0x2B8B30u) { return; }
    }
    ctx->pc = 0x2B8B30u;
label_2b8b30:
    // 0x2b8b30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b8b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b34:
    // 0x2b8b34: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2b8b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2b8b38: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2b8b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2b8b3c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2b8b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2b8b40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8b44: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2b8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2b8b48: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2b8b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2b8b4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b8b50: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2B8B50u;
    SET_GPR_U32(ctx, 31, 0x2B8B58u);
    ctx->pc = 0x2B8B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B50u;
            // 0x2b8b54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B58u; }
        if (ctx->pc != 0x2B8B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B58u; }
        if (ctx->pc != 0x2B8B58u) { return; }
    }
    ctx->pc = 0x2B8B58u;
label_2b8b58:
    // 0x2b8b58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b8b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b8b5c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2b8b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2b8b60: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B8B60u;
    {
        const bool branch_taken_0x2b8b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B60u;
            // 0x2b8b64: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b60) {
            ctx->pc = 0x2B8B34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8b34;
        }
    }
    ctx->pc = 0x2B8B68u;
label_2b8b68:
    // 0x2b8b68: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2b8b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b8b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8b70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b8b70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8b74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b8b74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b8b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B80u;
            // 0x2b8b84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B8B88u;
    // 0x2b8b88: 0x0  nop
    ctx->pc = 0x2b8b88u;
    // NOP
    // 0x2b8b8c: 0x0  nop
    ctx->pc = 0x2b8b8cu;
    // NOP
}
