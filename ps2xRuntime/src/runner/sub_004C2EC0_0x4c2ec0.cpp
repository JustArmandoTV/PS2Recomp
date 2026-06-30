#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C2EC0
// Address: 0x4c2ec0 - 0x4c3410
void sub_004C2EC0_0x4c2ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C2EC0_0x4c2ec0");
#endif

    switch (ctx->pc) {
        case 0x4c2ee4u: goto label_4c2ee4;
        case 0x4c2f20u: goto label_4c2f20;
        case 0x4c2fa8u: goto label_4c2fa8;
        case 0x4c2fc0u: goto label_4c2fc0;
        case 0x4c305cu: goto label_4c305c;
        case 0x4c3064u: goto label_4c3064;
        case 0x4c3078u: goto label_4c3078;
        case 0x4c3088u: goto label_4c3088;
        case 0x4c309cu: goto label_4c309c;
        case 0x4c30a4u: goto label_4c30a4;
        case 0x4c30b4u: goto label_4c30b4;
        case 0x4c30ccu: goto label_4c30cc;
        case 0x4c30d8u: goto label_4c30d8;
        case 0x4c30ecu: goto label_4c30ec;
        case 0x4c3110u: goto label_4c3110;
        case 0x4c3124u: goto label_4c3124;
        case 0x4c3184u: goto label_4c3184;
        case 0x4c3194u: goto label_4c3194;
        case 0x4c319cu: goto label_4c319c;
        case 0x4c31a8u: goto label_4c31a8;
        case 0x4c31e4u: goto label_4c31e4;
        case 0x4c31f8u: goto label_4c31f8;
        case 0x4c3214u: goto label_4c3214;
        case 0x4c328cu: goto label_4c328c;
        case 0x4c32bcu: goto label_4c32bc;
        case 0x4c32e0u: goto label_4c32e0;
        case 0x4c32e8u: goto label_4c32e8;
        case 0x4c32fcu: goto label_4c32fc;
        case 0x4c3310u: goto label_4c3310;
        case 0x4c335cu: goto label_4c335c;
        case 0x4c3368u: goto label_4c3368;
        case 0x4c3378u: goto label_4c3378;
        case 0x4c3388u: goto label_4c3388;
        case 0x4c339cu: goto label_4c339c;
        case 0x4c33acu: goto label_4c33ac;
        case 0x4c33bcu: goto label_4c33bc;
        case 0x4c33d4u: goto label_4c33d4;
        default: break;
    }

    ctx->pc = 0x4c2ec0u;

    // 0x4c2ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c2ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c2ec4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c2ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4c2ec8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c2ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4c2ecc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c2eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4c2ed0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c2ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2ed4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c2ed8: 0x3404fe10  ori         $a0, $zero, 0xFE10
    ctx->pc = 0x4c2ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65040);
    // 0x4c2edc: 0xc040180  jal         func_100600
    ctx->pc = 0x4C2EDCu;
    SET_GPR_U32(ctx, 31, 0x4C2EE4u);
    ctx->pc = 0x4C2EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2EDCu;
            // 0x4c2ee0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2EE4u; }
        if (ctx->pc != 0x4C2EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2EE4u; }
        if (ctx->pc != 0x4C2EE4u) { return; }
    }
    ctx->pc = 0x4C2EE4u;
label_4c2ee4:
    // 0x4c2ee4: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x4C2EE4u;
    {
        const bool branch_taken_0x4c2ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2EE4u;
            // 0x4c2ee8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2ee4) {
            ctx->pc = 0x4C2FE4u;
            goto label_4c2fe4;
        }
    }
    ctx->pc = 0x4C2EECu;
    // 0x4c2eec: 0x8e710968  lw          $s1, 0x968($s3)
    ctx->pc = 0x4c2eecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
    // 0x4c2ef0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x4c2ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x4c2ef4: 0x24a5e678  addiu       $a1, $a1, -0x1988
    ctx->pc = 0x4c2ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960760));
    // 0x4c2ef8: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x4c2ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c2efc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4c2f00: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4c2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4c2f04: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4c2f04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4c2f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2f0c: 0x34658706  ori         $a1, $v1, 0x8706
    ctx->pc = 0x4c2f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34566);
    // 0x4c2f10: 0xac523e78  sw          $s2, 0x3E78($v0)
    ctx->pc = 0x4c2f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15992), GPR_U32(ctx, 18));
    // 0x4c2f14: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4c2f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4c2f18: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4C2F18u;
    SET_GPR_U32(ctx, 31, 0x4C2F20u);
    ctx->pc = 0x4C2F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2F18u;
            // 0x4c2f1c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2F20u; }
        if (ctx->pc != 0x4C2F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2F20u; }
        if (ctx->pc != 0x4C2F20u) { return; }
    }
    ctx->pc = 0x4C2F20u;
label_4c2f20:
    // 0x4c2f20: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4c2f24: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c2f28: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4c2f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4c2f2c: 0x2442e630  addiu       $v0, $v0, -0x19D0
    ctx->pc = 0x4c2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960688));
    // 0x4c2f30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c2f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c2f34: 0x3404fd40  ori         $a0, $zero, 0xFD40
    ctx->pc = 0x4c2f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
    // 0x4c2f38: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c2f3c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4c2f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4c2f40: 0x2463e63c  addiu       $v1, $v1, -0x19C4
    ctx->pc = 0x4c2f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960700));
    // 0x4c2f44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c2f48: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x4c2f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x4c2f4c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4c2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4c2f50: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x4c2f50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x4c2f54: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4c2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4c2f58: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x4c2f58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x4c2f5c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x4c2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x4c2f60: 0xa040fd84  sb          $zero, -0x27C($v0)
    ctx->pc = 0x4c2f60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294966660), (uint8_t)GPR_U32(ctx, 0));
    // 0x4c2f64: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x4c2f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4c2f68: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c2f6c: 0xa071fd85  sb          $s1, -0x27B($v1)
    ctx->pc = 0x4c2f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966661), (uint8_t)GPR_U32(ctx, 17));
    // 0x4c2f70: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4c2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4c2f74: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4c2f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4c2f78: 0xac40fd90  sw          $zero, -0x270($v0)
    ctx->pc = 0x4c2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966672), GPR_U32(ctx, 0));
    // 0x4c2f7c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x4c2f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x4c2f80: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c2f84: 0xa060fd94  sb          $zero, -0x26C($v1)
    ctx->pc = 0x4c2f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966676), (uint8_t)GPR_U32(ctx, 0));
    // 0x4c2f88: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4c2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4c2f8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4c2f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c2f90: 0xa040fd95  sb          $zero, -0x26B($v0)
    ctx->pc = 0x4c2f90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294966677), (uint8_t)GPR_U32(ctx, 0));
    // 0x4c2f94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c2f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2f98: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c2f9c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4c2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4c2fa0: 0xc040140  jal         func_100500
    ctx->pc = 0x4C2FA0u;
    SET_GPR_U32(ctx, 31, 0x4C2FA8u);
    ctx->pc = 0x4C2FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2FA0u;
            // 0x4c2fa4: 0xa040fd96  sb          $zero, -0x26A($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294966678), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2FA8u; }
        if (ctx->pc != 0x4C2FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2FA8u; }
        if (ctx->pc != 0x4C2FA8u) { return; }
    }
    ctx->pc = 0x4C2FA8u;
label_4c2fa8:
    // 0x4c2fa8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4c2fac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c2facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2fb0: 0xac626060  sw          $v0, 0x6060($v1)
    ctx->pc = 0x4c2fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24672), GPR_U32(ctx, 2));
    // 0x4c2fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c2fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2fb8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4C2FB8u;
    SET_GPR_U32(ctx, 31, 0x4C2FC0u);
    ctx->pc = 0x4C2FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2FB8u;
            // 0x4c2fbc: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2FC0u; }
        if (ctx->pc != 0x4C2FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2FC0u; }
        if (ctx->pc != 0x4C2FC0u) { return; }
    }
    ctx->pc = 0x4C2FC0u;
label_4c2fc0:
    // 0x4c2fc0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c2fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4c2fc4: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x4c2fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x4c2fc8: 0x8c666060  lw          $a2, 0x6060($v1)
    ctx->pc = 0x4c2fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24672)));
    // 0x4c2fcc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4c2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4c2fd0: 0x90c5000c  lbu         $a1, 0xC($a2)
    ctx->pc = 0x4c2fd0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4c2fd4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x4c2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x4c2fd8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4c2fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c2fdc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4c2fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4c2fe0: 0xa0c3000c  sb          $v1, 0xC($a2)
    ctx->pc = 0x4c2fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 3));
label_4c2fe4:
    // 0x4c2fe4: 0xae720d64  sw          $s2, 0xD64($s3)
    ctx->pc = 0x4c2fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3428), GPR_U32(ctx, 18));
    // 0x4c2fe8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c2fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c2fec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c2fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c2ff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c2ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c2ff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c2ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2ff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c2ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2FFCu;
            // 0x4c3000: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3004u;
    // 0x4c3004: 0x0  nop
    ctx->pc = 0x4c3004u;
    // NOP
    // 0x4c3008: 0x0  nop
    ctx->pc = 0x4c3008u;
    // NOP
    // 0x4c300c: 0x0  nop
    ctx->pc = 0x4c300cu;
    // NOP
    // 0x4c3010: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4c3010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4c3014: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4c3014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4c3018: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4c3018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4c301c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4c301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4c3020: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c3020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3024: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4c3024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4c3028: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4c3028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4c302c: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x4c302cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4c3030: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x4c3030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4c3034: 0x8c840d58  lw          $a0, 0xD58($a0)
    ctx->pc = 0x4c3034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3416)));
    // 0x4c3038: 0x801826  xor         $v1, $a0, $zero
    ctx->pc = 0x4c3038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
    // 0x4c303c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4c303cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4c3040: 0x50600099  beql        $v1, $zero, . + 4 + (0x99 << 2)
    ctx->pc = 0x4C3040u;
    {
        const bool branch_taken_0x4c3040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3040) {
            ctx->pc = 0x4C3044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3040u;
            // 0x4c3044: 0x38830001  xori        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C32A8u;
            goto label_4c32a8;
        }
    }
    ctx->pc = 0x4C3048u;
    // 0x4c3048: 0x8e630d54  lw          $v1, 0xD54($s3)
    ctx->pc = 0x4c3048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3412)));
    // 0x4c304c: 0x14600095  bnez        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x4C304Cu;
    {
        const bool branch_taken_0x4c304c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c304c) {
            ctx->pc = 0x4C32A4u;
            goto label_4c32a4;
        }
    }
    ctx->pc = 0x4C3054u;
    // 0x4c3054: 0xc077318  jal         func_1DCC60
    ctx->pc = 0x4C3054u;
    SET_GPR_U32(ctx, 31, 0x4C305Cu);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C305Cu; }
        if (ctx->pc != 0x4C305Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C305Cu; }
        if (ctx->pc != 0x4C305Cu) { return; }
    }
    ctx->pc = 0x4C305Cu;
label_4c305c:
    // 0x4c305c: 0xc0c05c4  jal         func_301710
    ctx->pc = 0x4C305Cu;
    SET_GPR_U32(ctx, 31, 0x4C3064u);
    ctx->pc = 0x4C3060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C305Cu;
            // 0x4c3060: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3064u; }
        if (ctx->pc != 0x4C3064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3064u; }
        if (ctx->pc != 0x4C3064u) { return; }
    }
    ctx->pc = 0x4C3064u;
label_4c3064:
    // 0x4c3064: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c3064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3068: 0x26700d76  addiu       $s0, $s3, 0xD76
    ctx->pc = 0x4c3068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3446));
    // 0x4c306c: 0x92620d76  lbu         $v0, 0xD76($s3)
    ctx->pc = 0x4c306cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3446)));
    // 0x4c3070: 0xc075e78  jal         func_1D79E0
    ctx->pc = 0x4C3070u;
    SET_GPR_U32(ctx, 31, 0x4C3078u);
    ctx->pc = 0x4C3074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3070u;
            // 0x4c3074: 0xa3a2009f  sb          $v0, 0x9F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 159), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D79E0u;
    if (runtime->hasFunction(0x1D79E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D79E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3078u; }
        if (ctx->pc != 0x4C3078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D79E0_0x1d79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3078u; }
        if (ctx->pc != 0x4C3078u) { return; }
    }
    ctx->pc = 0x4C3078u;
label_4c3078:
    // 0x4c3078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c3078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c307c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c307cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3080: 0xc130d78  jal         func_4C35E0
    ctx->pc = 0x4C3080u;
    SET_GPR_U32(ctx, 31, 0x4C3088u);
    ctx->pc = 0x4C3084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3080u;
            // 0x4c3084: 0x24060402  addiu       $a2, $zero, 0x402 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C35E0u;
    if (runtime->hasFunction(0x4C35E0u)) {
        auto targetFn = runtime->lookupFunction(0x4C35E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3088u; }
        if (ctx->pc != 0x4C3088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C35E0_0x4c35e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3088u; }
        if (ctx->pc != 0x4C3088u) { return; }
    }
    ctx->pc = 0x4C3088u;
label_4c3088:
    // 0x4c3088: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4c3088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c308c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x4c308cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c3090: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c3090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c3094: 0xc0f1118  jal         func_3C4460
    ctx->pc = 0x4C3094u;
    SET_GPR_U32(ctx, 31, 0x4C309Cu);
    ctx->pc = 0x4C3098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3094u;
            // 0x4c3098: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4460u;
    if (runtime->hasFunction(0x3C4460u)) {
        auto targetFn = runtime->lookupFunction(0x3C4460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C309Cu; }
        if (ctx->pc != 0x4C309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4460_0x3c4460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C309Cu; }
        if (ctx->pc != 0x4C309Cu) { return; }
    }
    ctx->pc = 0x4C309Cu;
label_4c309c:
    // 0x4c309c: 0xc130d74  jal         func_4C35D0
    ctx->pc = 0x4C309Cu;
    SET_GPR_U32(ctx, 31, 0x4C30A4u);
    ctx->pc = 0x4C30A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C309Cu;
            // 0x4c30a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C35D0u;
    if (runtime->hasFunction(0x4C35D0u)) {
        auto targetFn = runtime->lookupFunction(0x4C35D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C30A4u; }
        if (ctx->pc != 0x4C30A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C35D0_0x4c35d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C30A4u; }
        if (ctx->pc != 0x4C30A4u) { return; }
    }
    ctx->pc = 0x4C30A4u;
label_4c30a4:
    // 0x4c30a4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4c30a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x4c30a8: 0x27a4009f  addiu       $a0, $sp, 0x9F
    ctx->pc = 0x4c30a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 159));
    // 0x4c30ac: 0xc130d6c  jal         func_4C35B0
    ctx->pc = 0x4C30ACu;
    SET_GPR_U32(ctx, 31, 0x4C30B4u);
    ctx->pc = 0x4C30B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C30ACu;
            // 0x4c30b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C35B0u;
    if (runtime->hasFunction(0x4C35B0u)) {
        auto targetFn = runtime->lookupFunction(0x4C35B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C30B4u; }
        if (ctx->pc != 0x4C30B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C35B0_0x4c35b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C30B4u; }
        if (ctx->pc != 0x4C30B4u) { return; }
    }
    ctx->pc = 0x4C30B4u;
label_4c30b4:
    // 0x4c30b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C30B4u;
    {
        const bool branch_taken_0x4c30b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c30b4) {
            ctx->pc = 0x4C30B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C30B4u;
            // 0x4c30b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C30D0u;
            goto label_4c30d0;
        }
    }
    ctx->pc = 0x4C30BCu;
    // 0x4c30bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c30c0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4c30c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4c30c4: 0xc0ec314  jal         func_3B0C50
    ctx->pc = 0x4C30C4u;
    SET_GPR_U32(ctx, 31, 0x4C30CCu);
    ctx->pc = 0x4C30C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C30C4u;
            // 0x4c30c8: 0x344500a9  ori         $a1, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C30CCu; }
        if (ctx->pc != 0x4C30CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C30CCu; }
        if (ctx->pc != 0x4C30CCu) { return; }
    }
    ctx->pc = 0x4C30CCu;
label_4c30cc:
    // 0x4c30cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c30ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c30d0:
    // 0x4c30d0: 0xc0f8578  jal         func_3E15E0
    ctx->pc = 0x4C30D0u;
    SET_GPR_U32(ctx, 31, 0x4C30D8u);
    ctx->pc = 0x3E15E0u;
    if (runtime->hasFunction(0x3E15E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E15E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C30D8u; }
        if (ctx->pc != 0x4C30D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E15E0_0x3e15e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C30D8u; }
        if (ctx->pc != 0x4C30D8u) { return; }
    }
    ctx->pc = 0x4C30D8u;
label_4c30d8:
    // 0x4c30d8: 0x2c43000b  sltiu       $v1, $v0, 0xB
    ctx->pc = 0x4c30d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x4c30dc: 0x546000c1  bnel        $v1, $zero, . + 4 + (0xC1 << 2)
    ctx->pc = 0x4C30DCu;
    {
        const bool branch_taken_0x4c30dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c30dc) {
            ctx->pc = 0x4C30E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C30DCu;
            // 0x4c30e0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C33E4u;
            goto label_4c33e4;
        }
    }
    ctx->pc = 0x4C30E4u;
    // 0x4c30e4: 0xc0775b4  jal         func_1DD6D0
    ctx->pc = 0x4C30E4u;
    SET_GPR_U32(ctx, 31, 0x4C30ECu);
    ctx->pc = 0x4C30E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C30E4u;
            // 0x4c30e8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C30ECu; }
        if (ctx->pc != 0x4C30ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C30ECu; }
        if (ctx->pc != 0x4C30ECu) { return; }
    }
    ctx->pc = 0x4C30ECu;
label_4c30ec:
    // 0x4c30ec: 0xc6620d5c  lwc1        $f2, 0xD5C($s3)
    ctx->pc = 0x4c30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4c30f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4c30f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4c30f4: 0x0  nop
    ctx->pc = 0x4c30f4u;
    // NOP
    // 0x4c30f8: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x4c30f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4c30fc: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x4C30FCu;
    {
        const bool branch_taken_0x4c30fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C3100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C30FCu;
            // 0x4c3100: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c30fc) {
            ctx->pc = 0x4C31B0u;
            goto label_4c31b0;
        }
    }
    ctx->pc = 0x4C3104u;
    // 0x4c3104: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4c3104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c3108: 0xc0c58f4  jal         func_3163D0
    ctx->pc = 0x4C3108u;
    SET_GPR_U32(ctx, 31, 0x4C3110u);
    ctx->pc = 0x4C310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3108u;
            // 0x4c310c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3163D0u;
    if (runtime->hasFunction(0x3163D0u)) {
        auto targetFn = runtime->lookupFunction(0x3163D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3110u; }
        if (ctx->pc != 0x4C3110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003163D0_0x3163d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3110u; }
        if (ctx->pc != 0x4C3110u) { return; }
    }
    ctx->pc = 0x4C3110u;
label_4c3110:
    // 0x4c3110: 0x92620d76  lbu         $v0, 0xD76($s3)
    ctx->pc = 0x4c3110u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3446)));
    // 0x4c3114: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4C3114u;
    {
        const bool branch_taken_0x4c3114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3114) {
            ctx->pc = 0x4C3194u;
            goto label_4c3194;
        }
    }
    ctx->pc = 0x4C311Cu;
    // 0x4c311c: 0xc040180  jal         func_100600
    ctx->pc = 0x4C311Cu;
    SET_GPR_U32(ctx, 31, 0x4C3124u);
    ctx->pc = 0x4C3120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C311Cu;
            // 0x4c3120: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3124u; }
        if (ctx->pc != 0x4C3124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3124u; }
        if (ctx->pc != 0x4C3124u) { return; }
    }
    ctx->pc = 0x4C3124u;
label_4c3124:
    // 0x4c3124: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x4C3124u;
    {
        const bool branch_taken_0x4c3124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3124) {
            ctx->pc = 0x4C3128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3124u;
            // 0x4c3128: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3188u;
            goto label_4c3188;
        }
    }
    ctx->pc = 0x4C312Cu;
    // 0x4c312c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c312cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3130: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x4c3130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x4c3134: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x4c3134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x4c3138: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x4c3138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x4c313c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4c313cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c3140: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x4c3140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x4c3144: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4c3144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x4c3148: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x4c3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x4c314c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x4c314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x4c3150: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x4c3150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x4c3154: 0x3c024c0a  lui         $v0, 0x4C0A
    ctx->pc = 0x4c3154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19466 << 16));
    // 0x4c3158: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4c3158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x4c315c: 0x34426d80  ori         $v0, $v0, 0x6D80
    ctx->pc = 0x4c315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28032);
    // 0x4c3160: 0x24070402  addiu       $a3, $zero, 0x402
    ctx->pc = 0x4c3160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x4c3164: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4c3164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c3168: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4c3168u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c316c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c316cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4c3170: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4c3170u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3174: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4c3174u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4c3178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c3178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4c317c: 0xc130d0c  jal         func_4C3430
    ctx->pc = 0x4C317Cu;
    SET_GPR_U32(ctx, 31, 0x4C3184u);
    ctx->pc = 0x4C3180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C317Cu;
            // 0x4c3180: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C3430u;
    if (runtime->hasFunction(0x4C3430u)) {
        auto targetFn = runtime->lookupFunction(0x4C3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3184u; }
        if (ctx->pc != 0x4C3184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C3430_0x4c3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3184u; }
        if (ctx->pc != 0x4C3184u) { return; }
    }
    ctx->pc = 0x4C3184u;
label_4c3184:
    // 0x4c3184: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x4c3184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_4c3188:
    // 0x4c3188: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4c3188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4c318c: 0xc0ec314  jal         func_3B0C50
    ctx->pc = 0x4C318Cu;
    SET_GPR_U32(ctx, 31, 0x4C3194u);
    ctx->pc = 0x4C3190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C318Cu;
            // 0x4c3190: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3194u; }
        if (ctx->pc != 0x4C3194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3194u; }
        if (ctx->pc != 0x4C3194u) { return; }
    }
    ctx->pc = 0x4C3194u;
label_4c3194:
    // 0x4c3194: 0xc0c7530  jal         func_31D4C0
    ctx->pc = 0x4C3194u;
    SET_GPR_U32(ctx, 31, 0x4C319Cu);
    ctx->pc = 0x31D4C0u;
    if (runtime->hasFunction(0x31D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C319Cu; }
        if (ctx->pc != 0x4C319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4C0_0x31d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C319Cu; }
        if (ctx->pc != 0x4C319Cu) { return; }
    }
    ctx->pc = 0x4C319Cu;
label_4c319c:
    // 0x4c319c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4c319cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c31a0: 0xc0c752c  jal         func_31D4B0
    ctx->pc = 0x4C31A0u;
    SET_GPR_U32(ctx, 31, 0x4C31A8u);
    ctx->pc = 0x4C31A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C31A0u;
            // 0x4c31a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4B0u;
    if (runtime->hasFunction(0x31D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C31A8u; }
        if (ctx->pc != 0x4C31A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4B0_0x31d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C31A8u; }
        if (ctx->pc != 0x4C31A8u) { return; }
    }
    ctx->pc = 0x4C31A8u;
label_4c31a8:
    // 0x4c31a8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x4C31A8u;
    {
        const bool branch_taken_0x4c31a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C31ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C31A8u;
            // 0x4c31ac: 0xc6600d5c  lwc1        $f0, 0xD5C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c31a8) {
            ctx->pc = 0x4C3298u;
            goto label_4c3298;
        }
    }
    ctx->pc = 0x4C31B0u;
label_4c31b0:
    // 0x4c31b0: 0x92630d76  lbu         $v1, 0xD76($s3)
    ctx->pc = 0x4c31b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3446)));
    // 0x4c31b4: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x4C31B4u;
    {
        const bool branch_taken_0x4c31b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c31b4) {
            ctx->pc = 0x4C3294u;
            goto label_4c3294;
        }
    }
    ctx->pc = 0x4C31BCu;
    // 0x4c31bc: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4c31bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x4c31c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4c31c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4c31c4: 0x0  nop
    ctx->pc = 0x4c31c4u;
    // NOP
    // 0x4c31c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4c31c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4c31cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x4c31ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4c31d0: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x4C31D0u;
    {
        const bool branch_taken_0x4c31d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c31d0) {
            ctx->pc = 0x4C3294u;
            goto label_4c3294;
        }
    }
    ctx->pc = 0x4C31D8u;
    // 0x4c31d8: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4c31d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c31dc: 0xc0c58f4  jal         func_3163D0
    ctx->pc = 0x4C31DCu;
    SET_GPR_U32(ctx, 31, 0x4C31E4u);
    ctx->pc = 0x4C31E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C31DCu;
            // 0x4c31e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3163D0u;
    if (runtime->hasFunction(0x3163D0u)) {
        auto targetFn = runtime->lookupFunction(0x3163D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C31E4u; }
        if (ctx->pc != 0x4C31E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003163D0_0x3163d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C31E4u; }
        if (ctx->pc != 0x4C31E4u) { return; }
    }
    ctx->pc = 0x4C31E4u;
label_4c31e4:
    // 0x4c31e4: 0xa2600d74  sb          $zero, 0xD74($s3)
    ctx->pc = 0x4c31e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3444), (uint8_t)GPR_U32(ctx, 0));
    // 0x4c31e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c31ec: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4c31ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c31f0: 0xc0c7534  jal         func_31D4D0
    ctx->pc = 0x4C31F0u;
    SET_GPR_U32(ctx, 31, 0x4C31F8u);
    ctx->pc = 0x4C31F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C31F0u;
            // 0x4c31f4: 0xa2620d75  sb          $v0, 0xD75($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3445), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4D0u;
    if (runtime->hasFunction(0x31D4D0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C31F8u; }
        if (ctx->pc != 0x4C31F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4D0_0x31d4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C31F8u; }
        if (ctx->pc != 0x4C31F8u) { return; }
    }
    ctx->pc = 0x4C31F8u;
label_4c31f8:
    // 0x4c31f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c31f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c31fc: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x4c31fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x4c3200: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c3200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4c3204: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x4c3204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4c3208: 0x7842c800  lq          $v0, -0x3800($v0)
    ctx->pc = 0x4c3208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 4294952960)));
    // 0x4c320c: 0xc040180  jal         func_100600
    ctx->pc = 0x4C320Cu;
    SET_GPR_U32(ctx, 31, 0x4C3214u);
    ctx->pc = 0x4C3210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C320Cu;
            // 0x4c3210: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3214u; }
        if (ctx->pc != 0x4C3214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3214u; }
        if (ctx->pc != 0x4C3214u) { return; }
    }
    ctx->pc = 0x4C3214u;
label_4c3214:
    // 0x4c3214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c3214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3218: 0x5080001e  beql        $a0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x4C3218u;
    {
        const bool branch_taken_0x4c3218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3218) {
            ctx->pc = 0x4C321Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3218u;
            // 0x4c321c: 0xae640d54  sw          $a0, 0xD54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3294u;
            goto label_4c3294;
        }
    }
    ctx->pc = 0x4C3220u;
    // 0x4c3220: 0x3c0243b9  lui         $v0, 0x43B9
    ctx->pc = 0x4c3220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17337 << 16));
    // 0x4c3224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c3224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c3228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4c3228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c322c: 0x3c0b4200  lui         $t3, 0x4200
    ctx->pc = 0x4c322cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16896 << 16));
    // 0x4c3230: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4c3230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x4c3234: 0x3c024c45  lui         $v0, 0x4C45
    ctx->pc = 0x4c3234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19525 << 16));
    // 0x4c3238: 0x3442c100  ori         $v0, $v0, 0xC100
    ctx->pc = 0x4c3238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49408);
    // 0x4c323c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c323cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c3240: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x4c3240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x4c3244: 0x24050186  addiu       $a1, $zero, 0x186
    ctx->pc = 0x4c3244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    // 0x4c3248: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x4c3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x4c324c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c324cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4c3250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3254: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4c3254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3258: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c3258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4c325c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4c325cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4c3260: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x4c3260u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c3264: 0x0  nop
    ctx->pc = 0x4c3264u;
    // NOP
    // 0x4c3268: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4c3268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x4c326c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c326cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4c3270: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4c3270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4c3274: 0x0  nop
    ctx->pc = 0x4c3274u;
    // NOP
    // 0x4c3278: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4c3278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x4c327c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c327cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4c3280: 0x8e6b0d4c  lw          $t3, 0xD4C($s3)
    ctx->pc = 0x4c3280u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3404)));
    // 0x4c3284: 0xc130d0c  jal         func_4C3430
    ctx->pc = 0x4C3284u;
    SET_GPR_U32(ctx, 31, 0x4C328Cu);
    ctx->pc = 0x4C3288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3284u;
            // 0x4c3288: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C3430u;
    if (runtime->hasFunction(0x4C3430u)) {
        auto targetFn = runtime->lookupFunction(0x4C3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C328Cu; }
        if (ctx->pc != 0x4C328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C3430_0x4c3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C328Cu; }
        if (ctx->pc != 0x4C328Cu) { return; }
    }
    ctx->pc = 0x4C328Cu;
label_4c328c:
    // 0x4c328c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c328cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3290: 0xae640d54  sw          $a0, 0xD54($s3)
    ctx->pc = 0x4c3290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3412), GPR_U32(ctx, 4));
label_4c3294:
    // 0x4c3294: 0xc6600d5c  lwc1        $f0, 0xD5C($s3)
    ctx->pc = 0x4c3294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c3298:
    // 0x4c3298: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4c3298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x4c329c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x4C329Cu;
    {
        const bool branch_taken_0x4c329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C32A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C329Cu;
            // 0x4c32a0: 0xe6600d5c  swc1        $f0, 0xD5C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3420), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c329c) {
            ctx->pc = 0x4C33E0u;
            goto label_4c33e0;
        }
    }
    ctx->pc = 0x4C32A4u;
label_4c32a4:
    // 0x4c32a4: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x4c32a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4c32a8:
    // 0x4c32a8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4c32a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4c32ac: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x4C32ACu;
    {
        const bool branch_taken_0x4c32ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c32ac) {
            ctx->pc = 0x4C33E0u;
            goto label_4c33e0;
        }
    }
    ctx->pc = 0x4C32B4u;
    // 0x4c32b4: 0xc077318  jal         func_1DCC60
    ctx->pc = 0x4C32B4u;
    SET_GPR_U32(ctx, 31, 0x4C32BCu);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C32BCu; }
        if (ctx->pc != 0x4C32BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C32BCu; }
        if (ctx->pc != 0x4C32BCu) { return; }
    }
    ctx->pc = 0x4C32BCu;
label_4c32bc:
    // 0x4c32bc: 0xc6610d5c  lwc1        $f1, 0xD5C($s3)
    ctx->pc = 0x4c32bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c32c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c32c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c32c4: 0x0  nop
    ctx->pc = 0x4c32c4u;
    // NOP
    // 0x4c32c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4c32c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4c32cc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x4C32CCu;
    {
        const bool branch_taken_0x4c32cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C32D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C32CCu;
            // 0x4c32d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c32cc) {
            ctx->pc = 0x4C335Cu;
            goto label_4c335c;
        }
    }
    ctx->pc = 0x4C32D4u;
    // 0x4c32d4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4c32d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4c32d8: 0xc0c58f4  jal         func_3163D0
    ctx->pc = 0x4C32D8u;
    SET_GPR_U32(ctx, 31, 0x4C32E0u);
    ctx->pc = 0x4C32DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C32D8u;
            // 0x4c32dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3163D0u;
    if (runtime->hasFunction(0x3163D0u)) {
        auto targetFn = runtime->lookupFunction(0x3163D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C32E0u; }
        if (ctx->pc != 0x4C32E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003163D0_0x3163d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C32E0u; }
        if (ctx->pc != 0x4C32E0u) { return; }
    }
    ctx->pc = 0x4C32E0u;
label_4c32e0:
    // 0x4c32e0: 0xc040180  jal         func_100600
    ctx->pc = 0x4C32E0u;
    SET_GPR_U32(ctx, 31, 0x4C32E8u);
    ctx->pc = 0x4C32E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C32E0u;
            // 0x4c32e4: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C32E8u; }
        if (ctx->pc != 0x4C32E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C32E8u; }
        if (ctx->pc != 0x4C32E8u) { return; }
    }
    ctx->pc = 0x4C32E8u;
label_4c32e8:
    // 0x4c32e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c32e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c32ec: 0x5220001c  beql        $s1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x4C32ECu;
    {
        const bool branch_taken_0x4c32ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c32ec) {
            ctx->pc = 0x4C32F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C32ECu;
            // 0x4c32f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3360u;
            goto label_4c3360;
        }
    }
    ctx->pc = 0x4C32F4u;
    // 0x4c32f4: 0xc0f1118  jal         func_3C4460
    ctx->pc = 0x4C32F4u;
    SET_GPR_U32(ctx, 31, 0x4C32FCu);
    ctx->pc = 0x3C4460u;
    if (runtime->hasFunction(0x3C4460u)) {
        auto targetFn = runtime->lookupFunction(0x3C4460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C32FCu; }
        if (ctx->pc != 0x4C32FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4460_0x3c4460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C32FCu; }
        if (ctx->pc != 0x4C32FCu) { return; }
    }
    ctx->pc = 0x4C32FCu;
label_4c32fc:
    // 0x4c32fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c32fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3300: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x4c3300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x4c3304: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c3304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4c3308: 0xc130d08  jal         func_4C3420
    ctx->pc = 0x4C3308u;
    SET_GPR_U32(ctx, 31, 0x4C3310u);
    ctx->pc = 0x4C3420u;
    if (runtime->hasFunction(0x4C3420u)) {
        auto targetFn = runtime->lookupFunction(0x4C3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3310u; }
        if (ctx->pc != 0x4C3310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C3420_0x4c3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3310u; }
        if (ctx->pc != 0x4C3310u) { return; }
    }
    ctx->pc = 0x4C3310u;
label_4c3310:
    // 0x4c3310: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c3310u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4c3314: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x4c3314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x4c3318: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x4c3318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x4c331c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x4c331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x4c3320: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x4c3320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x4c3324: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x4c3324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x4c3328: 0x3c024c0a  lui         $v0, 0x4C0A
    ctx->pc = 0x4c3328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19466 << 16));
    // 0x4c332c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3330: 0x34426d80  ori         $v0, $v0, 0x6D80
    ctx->pc = 0x4c3330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28032);
    // 0x4c3334: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4c3334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x4c3338: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x4c3338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x4c333c: 0x24070402  addiu       $a3, $zero, 0x402
    ctx->pc = 0x4c333cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x4c3340: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4c3340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4c3344: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4c3344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c3348: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c3348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4c334c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4c334cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3350: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4c3350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3354: 0xc130d0c  jal         func_4C3430
    ctx->pc = 0x4C3354u;
    SET_GPR_U32(ctx, 31, 0x4C335Cu);
    ctx->pc = 0x4C3358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3354u;
            // 0x4c3358: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C3430u;
    if (runtime->hasFunction(0x4C3430u)) {
        auto targetFn = runtime->lookupFunction(0x4C3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C335Cu; }
        if (ctx->pc != 0x4C335Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C3430_0x4c3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C335Cu; }
        if (ctx->pc != 0x4C335Cu) { return; }
    }
    ctx->pc = 0x4C335Cu;
label_4c335c:
    // 0x4c335c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c335cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c3360:
    // 0x4c3360: 0xc130d04  jal         func_4C3410
    ctx->pc = 0x4C3360u;
    SET_GPR_U32(ctx, 31, 0x4C3368u);
    ctx->pc = 0x4C3410u;
    if (runtime->hasFunction(0x4C3410u)) {
        auto targetFn = runtime->lookupFunction(0x4C3410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3368u; }
        if (ctx->pc != 0x4C3368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C3410_0x4c3410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3368u; }
        if (ctx->pc != 0x4C3368u) { return; }
    }
    ctx->pc = 0x4C3368u;
label_4c3368:
    // 0x4c3368: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4C3368u;
    {
        const bool branch_taken_0x4c3368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3368) {
            ctx->pc = 0x4C336Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3368u;
            // 0x4c336c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3394u;
            goto label_4c3394;
        }
    }
    ctx->pc = 0x4C3370u;
    // 0x4c3370: 0xc075e78  jal         func_1D79E0
    ctx->pc = 0x4C3370u;
    SET_GPR_U32(ctx, 31, 0x4C3378u);
    ctx->pc = 0x1D79E0u;
    if (runtime->hasFunction(0x1D79E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D79E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3378u; }
        if (ctx->pc != 0x4C3378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D79E0_0x1d79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3378u; }
        if (ctx->pc != 0x4C3378u) { return; }
    }
    ctx->pc = 0x4C3378u;
label_4c3378:
    // 0x4c3378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c3378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c337c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c337cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3380: 0xc130d78  jal         func_4C35E0
    ctx->pc = 0x4C3380u;
    SET_GPR_U32(ctx, 31, 0x4C3388u);
    ctx->pc = 0x4C3384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3380u;
            // 0x4c3384: 0x24060402  addiu       $a2, $zero, 0x402 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C35E0u;
    if (runtime->hasFunction(0x4C35E0u)) {
        auto targetFn = runtime->lookupFunction(0x4C35E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3388u; }
        if (ctx->pc != 0x4C3388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C35E0_0x4c35e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3388u; }
        if (ctx->pc != 0x4C3388u) { return; }
    }
    ctx->pc = 0x4C3388u;
label_4c3388:
    // 0x4c3388: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4C3388u;
    {
        const bool branch_taken_0x4c3388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3388) {
            ctx->pc = 0x4C338Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3388u;
            // 0x4c338c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C33C4u;
            goto label_4c33c4;
        }
    }
    ctx->pc = 0x4C3390u;
    // 0x4c3390: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4c3390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4c3394:
    // 0x4c3394: 0xc0c58f4  jal         func_3163D0
    ctx->pc = 0x4C3394u;
    SET_GPR_U32(ctx, 31, 0x4C339Cu);
    ctx->pc = 0x4C3398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3394u;
            // 0x4c3398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3163D0u;
    if (runtime->hasFunction(0x3163D0u)) {
        auto targetFn = runtime->lookupFunction(0x3163D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C339Cu; }
        if (ctx->pc != 0x4C339Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003163D0_0x3163d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C339Cu; }
        if (ctx->pc != 0x4C339Cu) { return; }
    }
    ctx->pc = 0x4C339Cu;
label_4c339c:
    // 0x4c339c: 0xa2600d74  sb          $zero, 0xD74($s3)
    ctx->pc = 0x4c339cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3444), (uint8_t)GPR_U32(ctx, 0));
    // 0x4c33a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c33a4: 0xc0c05c4  jal         func_301710
    ctx->pc = 0x4C33A4u;
    SET_GPR_U32(ctx, 31, 0x4C33ACu);
    ctx->pc = 0x4C33A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C33A4u;
            // 0x4c33a8: 0xae620d58  sw          $v0, 0xD58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C33ACu; }
        if (ctx->pc != 0x4C33ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C33ACu; }
        if (ctx->pc != 0x4C33ACu) { return; }
    }
    ctx->pc = 0x4C33ACu;
label_4c33ac:
    // 0x4c33ac: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4c33acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c33b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c33b4: 0xc0ec314  jal         func_3B0C50
    ctx->pc = 0x4C33B4u;
    SET_GPR_U32(ctx, 31, 0x4C33BCu);
    ctx->pc = 0x4C33B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C33B4u;
            // 0x4c33b8: 0x344500a9  ori         $a1, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C33BCu; }
        if (ctx->pc != 0x4C33BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C33BCu; }
        if (ctx->pc != 0x4C33BCu) { return; }
    }
    ctx->pc = 0x4C33BCu;
label_4c33bc:
    // 0x4c33bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C33BCu;
    {
        const bool branch_taken_0x4c33bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C33C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C33BCu;
            // 0x4c33c0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c33bc) {
            ctx->pc = 0x4C33CCu;
            goto label_4c33cc;
        }
    }
    ctx->pc = 0x4C33C4u;
label_4c33c4:
    // 0x4c33c4: 0xa2620d74  sb          $v0, 0xD74($s3)
    ctx->pc = 0x4c33c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3444), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c33c8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4c33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4c33cc:
    // 0x4c33cc: 0xc0775b4  jal         func_1DD6D0
    ctx->pc = 0x4C33CCu;
    SET_GPR_U32(ctx, 31, 0x4C33D4u);
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C33D4u; }
        if (ctx->pc != 0x4C33D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C33D4u; }
        if (ctx->pc != 0x4C33D4u) { return; }
    }
    ctx->pc = 0x4C33D4u;
label_4c33d4:
    // 0x4c33d4: 0xc6610d5c  lwc1        $f1, 0xD5C($s3)
    ctx->pc = 0x4c33d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c33d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4c33d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4c33dc: 0xe6600d5c  swc1        $f0, 0xD5C($s3)
    ctx->pc = 0x4c33dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3420), bits); }
label_4c33e0:
    // 0x4c33e0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4c33e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4c33e4:
    // 0x4c33e4: 0xc7b50024  lwc1        $f21, 0x24($sp)
    ctx->pc = 0x4c33e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4c33e8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4c33e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4c33ec: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x4c33ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4c33f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4c33f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4c33f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4c33f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c33f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4c33f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c33fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4C33FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C33FCu;
            // 0x4c3400: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3404u;
    // 0x4c3404: 0x0  nop
    ctx->pc = 0x4c3404u;
    // NOP
    // 0x4c3408: 0x0  nop
    ctx->pc = 0x4c3408u;
    // NOP
    // 0x4c340c: 0x0  nop
    ctx->pc = 0x4c340cu;
    // NOP
}
