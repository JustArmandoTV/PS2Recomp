#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB950
// Address: 0x2cb950 - 0x2cbbb0
void sub_002CB950_0x2cb950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB950_0x2cb950");
#endif

    switch (ctx->pc) {
        case 0x2cb980u: goto label_2cb980;
        case 0x2cb9d4u: goto label_2cb9d4;
        case 0x2cba48u: goto label_2cba48;
        case 0x2cba68u: goto label_2cba68;
        case 0x2cba7cu: goto label_2cba7c;
        case 0x2cba88u: goto label_2cba88;
        case 0x2cba8cu: goto label_2cba8c;
        case 0x2cbab0u: goto label_2cbab0;
        case 0x2cbb30u: goto label_2cbb30;
        case 0x2cbb38u: goto label_2cbb38;
        default: break;
    }

    ctx->pc = 0x2cb950u;

    // 0x2cb950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cb950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cb954: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2cb954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb958: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cb958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cb95c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cb95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cb960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cb960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cb964: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cb964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cb96c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb970: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb974: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2cb974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb978: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2CB978u;
    SET_GPR_U32(ctx, 31, 0x2CB980u);
    ctx->pc = 0x2CB97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB978u;
            // 0x2cb97c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB980u; }
        if (ctx->pc != 0x2CB980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB980u; }
        if (ctx->pc != 0x2CB980u) { return; }
    }
    ctx->pc = 0x2CB980u;
label_2cb980:
    // 0x2cb980: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cb984: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cb988: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2cb988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2cb98c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2cb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2cb990: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cb990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cb994: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2cb994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2cb998: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2cb998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2cb99c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cb99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb9a0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2cb9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2cb9a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cb9a8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2cb9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2cb9ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2cb9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cb9b0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2cb9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2cb9b4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2cb9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2cb9b8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2cb9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2cb9bc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2cb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2cb9c0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2cb9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2cb9c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2cb9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2cb9c8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2cb9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cb9cc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2CB9CCu;
    SET_GPR_U32(ctx, 31, 0x2CB9D4u);
    ctx->pc = 0x2CB9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB9CCu;
            // 0x2cb9d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB9D4u; }
        if (ctx->pc != 0x2CB9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB9D4u; }
        if (ctx->pc != 0x2CB9D4u) { return; }
    }
    ctx->pc = 0x2CB9D4u;
label_2cb9d4:
    // 0x2cb9d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cb9d8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2cb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2cb9dc: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x2cb9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x2cb9e0: 0x2444ff90  addiu       $a0, $v0, -0x70
    ctx->pc = 0x2cb9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x2cb9e4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2cb9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2cb9e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cb9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cb9ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cb9f0: 0xac440e38  sw          $a0, 0xE38($v0)
    ctx->pc = 0x2cb9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3640), GPR_U32(ctx, 4));
    // 0x2cb9f4: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x2cb9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x2cb9f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cb9fc: 0x24420198  addiu       $v0, $v0, 0x198
    ctx->pc = 0x2cb9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 408));
    // 0x2cba00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cba00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cba04: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2cba04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2cba08: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2cba08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2cba0c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2cba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2cba10: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2cba10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2cba14: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2cba14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2cba18: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2cba18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2cba1c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2cba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2cba20: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2cba20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2cba24: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2cba24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2cba28: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2cba28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2cba2c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2cba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2cba30: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2cba30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2cba34: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CBA34u;
    {
        const bool branch_taken_0x2cba34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cba34) {
            ctx->pc = 0x2CBAC0u;
            goto label_2cbac0;
        }
    }
    ctx->pc = 0x2CBA3Cu;
    // 0x2cba3c: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x2cba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2cba40: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2CBA40u;
    SET_GPR_U32(ctx, 31, 0x2CBA48u);
    ctx->pc = 0x2CBA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA40u;
            // 0x2cba44: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA48u; }
        if (ctx->pc != 0x2CBA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA48u; }
        if (ctx->pc != 0x2CBA48u) { return; }
    }
    ctx->pc = 0x2CBA48u;
label_2cba48:
    // 0x2cba48: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cba48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2cba4c: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cba4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cba50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba54: 0x24a5bae0  addiu       $a1, $a1, -0x4520
    ctx->pc = 0x2cba54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949600));
    // 0x2cba58: 0x24c6b6e0  addiu       $a2, $a2, -0x4920
    ctx->pc = 0x2cba58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948576));
    // 0x2cba5c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2cba5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2cba60: 0xc040840  jal         func_102100
    ctx->pc = 0x2CBA60u;
    SET_GPR_U32(ctx, 31, 0x2CBA68u);
    ctx->pc = 0x2CBA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA60u;
            // 0x2cba64: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA68u; }
        if (ctx->pc != 0x2CBA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA68u; }
        if (ctx->pc != 0x2CBA68u) { return; }
    }
    ctx->pc = 0x2CBA68u;
label_2cba68:
    // 0x2cba68: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2cba68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2cba6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cba6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba70: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2cba70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2cba74: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CBA74u;
    SET_GPR_U32(ctx, 31, 0x2CBA7Cu);
    ctx->pc = 0x2CBA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA74u;
            // 0x2cba78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA7Cu; }
        if (ctx->pc != 0x2CBA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA7Cu; }
        if (ctx->pc != 0x2CBA7Cu) { return; }
    }
    ctx->pc = 0x2CBA7Cu;
label_2cba7c:
    // 0x2cba7c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2cba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2cba80: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CBA80u;
    SET_GPR_U32(ctx, 31, 0x2CBA88u);
    ctx->pc = 0x2CBA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBA80u;
            // 0x2cba84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA88u; }
        if (ctx->pc != 0x2CBA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBA88u; }
        if (ctx->pc != 0x2CBA88u) { return; }
    }
    ctx->pc = 0x2CBA88u;
label_2cba88:
    // 0x2cba88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cba88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cba8c:
    // 0x2cba8c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2cba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2cba90: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2cba90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2cba94: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2cba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2cba98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cba98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cba9c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2cba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2cbaa0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2cbaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2cbaa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cbaa8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2CBAA8u;
    SET_GPR_U32(ctx, 31, 0x2CBAB0u);
    ctx->pc = 0x2CBAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBAA8u;
            // 0x2cbaac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBAB0u; }
        if (ctx->pc != 0x2CBAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBAB0u; }
        if (ctx->pc != 0x2CBAB0u) { return; }
    }
    ctx->pc = 0x2CBAB0u;
label_2cbab0:
    // 0x2cbab0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cbab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cbab4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2cbab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2cbab8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CBAB8u;
    {
        const bool branch_taken_0x2cbab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBAB8u;
            // 0x2cbabc: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbab8) {
            ctx->pc = 0x2CBA8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cba8c;
        }
    }
    ctx->pc = 0x2CBAC0u;
label_2cbac0:
    // 0x2cbac0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cbac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbac4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cbac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cbac8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cbac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbacc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cbaccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbad8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBAD8u;
            // 0x2cbadc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBAE0u;
    // 0x2cbae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cbae4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cbae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cbae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cbaec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cbaecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cbaf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cbaf4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cbaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2cbaf8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cbaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cbafc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cbafcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cbb00: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2cbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2cbb04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbb08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cbb08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2cbb0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cbb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb10: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2cbb10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2cbb14: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2cbb14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2cbb18: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2cbb18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2cbb1c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cbb1cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2cbb20: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2cbb20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbb24: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2cbb24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbb28: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2CBB28u;
    SET_GPR_U32(ctx, 31, 0x2CBB30u);
    ctx->pc = 0x2CBB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB28u;
            // 0x2cbb2c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB30u; }
        if (ctx->pc != 0x2CBB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB30u; }
        if (ctx->pc != 0x2CBB30u) { return; }
    }
    ctx->pc = 0x2CBB30u;
label_2cbb30:
    // 0x2cbb30: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2CBB30u;
    SET_GPR_U32(ctx, 31, 0x2CBB38u);
    ctx->pc = 0x2CBB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB30u;
            // 0x2cbb34: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB38u; }
        if (ctx->pc != 0x2CBB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB38u; }
        if (ctx->pc != 0x2CBB38u) { return; }
    }
    ctx->pc = 0x2CBB38u;
label_2cbb38:
    // 0x2cbb38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cbb3c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x2cbb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x2cbb40: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2cbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2cbb44: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2cbb44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2cbb48: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2cbb48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x2cbb4c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2cbb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2cbb50: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2cbb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2cbb54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cbb58: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x2cbb58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x2cbb5c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x2cbb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    // 0x2cbb60: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x2cbb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
    // 0x2cbb64: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x2cbb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
    // 0x2cbb68: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x2cbb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    // 0x2cbb6c: 0x24845d20  addiu       $a0, $a0, 0x5D20
    ctx->pc = 0x2cbb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23840));
    // 0x2cbb70: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2cbb70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2cbb74: 0x24635d60  addiu       $v1, $v1, 0x5D60
    ctx->pc = 0x2cbb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23904));
    // 0x2cbb78: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2cbb78u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2cbb7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cbb7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb80: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x2cbb80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
    // 0x2cbb84: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x2cbb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x2cbb88: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2cbb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2cbb8c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2cbb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2cbb90: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x2cbb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x2cbb94: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2cbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2cbb98: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2cbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2cbb9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cbb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBBA4u;
            // 0x2cbba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBBACu;
    // 0x2cbbac: 0x0  nop
    ctx->pc = 0x2cbbacu;
    // NOP
}
