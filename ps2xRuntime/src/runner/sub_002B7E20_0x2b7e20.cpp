#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7E20
// Address: 0x2b7e20 - 0x2b8380
void sub_002B7E20_0x2b7e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7E20_0x2b7e20");
#endif

    switch (ctx->pc) {
        case 0x2b7e44u: goto label_2b7e44;
        case 0x2b7e58u: goto label_2b7e58;
        case 0x2b7e78u: goto label_2b7e78;
        case 0x2b7e84u: goto label_2b7e84;
        case 0x2b7e90u: goto label_2b7e90;
        case 0x2b7e9cu: goto label_2b7e9c;
        case 0x2b7ea4u: goto label_2b7ea4;
        case 0x2b7eacu: goto label_2b7eac;
        case 0x2b7eb8u: goto label_2b7eb8;
        case 0x2b7ec4u: goto label_2b7ec4;
        case 0x2b7eccu: goto label_2b7ecc;
        case 0x2b7ed8u: goto label_2b7ed8;
        case 0x2b7ee0u: goto label_2b7ee0;
        case 0x2b7ee8u: goto label_2b7ee8;
        case 0x2b7ef0u: goto label_2b7ef0;
        case 0x2b7ef8u: goto label_2b7ef8;
        case 0x2b7f1cu: goto label_2b7f1c;
        case 0x2b7f28u: goto label_2b7f28;
        case 0x2b7f34u: goto label_2b7f34;
        case 0x2b8024u: goto label_2b8024;
        case 0x2b80b0u: goto label_2b80b0;
        case 0x2b80c0u: goto label_2b80c0;
        case 0x2b80e4u: goto label_2b80e4;
        case 0x2b80f0u: goto label_2b80f0;
        case 0x2b80f8u: goto label_2b80f8;
        case 0x2b8100u: goto label_2b8100;
        case 0x2b8108u: goto label_2b8108;
        case 0x2b8110u: goto label_2b8110;
        case 0x2b8118u: goto label_2b8118;
        case 0x2b8120u: goto label_2b8120;
        case 0x2b8128u: goto label_2b8128;
        case 0x2b8130u: goto label_2b8130;
        case 0x2b8140u: goto label_2b8140;
        case 0x2b8150u: goto label_2b8150;
        case 0x2b8160u: goto label_2b8160;
        case 0x2b8170u: goto label_2b8170;
        case 0x2b8180u: goto label_2b8180;
        case 0x2b8190u: goto label_2b8190;
        case 0x2b81a0u: goto label_2b81a0;
        case 0x2b81b0u: goto label_2b81b0;
        case 0x2b81c0u: goto label_2b81c0;
        case 0x2b81d0u: goto label_2b81d0;
        case 0x2b81e0u: goto label_2b81e0;
        case 0x2b81f0u: goto label_2b81f0;
        case 0x2b8200u: goto label_2b8200;
        case 0x2b8210u: goto label_2b8210;
        case 0x2b8220u: goto label_2b8220;
        case 0x2b8230u: goto label_2b8230;
        case 0x2b8238u: goto label_2b8238;
        case 0x2b8240u: goto label_2b8240;
        case 0x2b8264u: goto label_2b8264;
        case 0x2b826cu: goto label_2b826c;
        case 0x2b8284u: goto label_2b8284;
        case 0x2b828cu: goto label_2b828c;
        case 0x2b82a4u: goto label_2b82a4;
        case 0x2b82b8u: goto label_2b82b8;
        case 0x2b82dcu: goto label_2b82dc;
        case 0x2b8304u: goto label_2b8304;
        case 0x2b8328u: goto label_2b8328;
        default: break;
    }

    ctx->pc = 0x2b7e20u;

    // 0x2b7e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b7e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b7e24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b7e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b7e28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b7e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b7e2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b7e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b7e30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b7e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b7e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b7e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b7e3c: 0xc0adc40  jal         func_2B7100
    ctx->pc = 0x2B7E3Cu;
    SET_GPR_U32(ctx, 31, 0x2B7E44u);
    ctx->pc = 0x2B7E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E3Cu;
            // 0x2b7e40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7100u;
    if (runtime->hasFunction(0x2B7100u)) {
        auto targetFn = runtime->lookupFunction(0x2B7100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E44u; }
        if (ctx->pc != 0x2B7E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7100_0x2b7100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E44u; }
        if (ctx->pc != 0x2B7E44u) { return; }
    }
    ctx->pc = 0x2B7E44u;
label_2b7e44:
    // 0x2b7e44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b7e48: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x2b7e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2b7e4c: 0x34458704  ori         $a1, $v0, 0x8704
    ctx->pc = 0x2b7e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34564);
    // 0x2b7e50: 0xc0adc28  jal         func_2B70A0
    ctx->pc = 0x2B7E50u;
    SET_GPR_U32(ctx, 31, 0x2B7E58u);
    ctx->pc = 0x2B7E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E50u;
            // 0x2b7e54: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B70A0u;
    if (runtime->hasFunction(0x2B70A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B70A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E58u; }
        if (ctx->pc != 0x2B7E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B70A0_0x2b70a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E58u; }
        if (ctx->pc != 0x2B7E58u) { return; }
    }
    ctx->pc = 0x2B7E58u;
label_2b7e58:
    // 0x2b7e58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b7e5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b7e60: 0x2463cf40  addiu       $v1, $v1, -0x30C0
    ctx->pc = 0x2b7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954816));
    // 0x2b7e64: 0x2442cf68  addiu       $v0, $v0, -0x3098
    ctx->pc = 0x2b7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954856));
    // 0x2b7e68: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2b7e6c: 0x26640440  addiu       $a0, $s3, 0x440
    ctx->pc = 0x2b7e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
    // 0x2b7e70: 0xc0adc0c  jal         func_2B7030
    ctx->pc = 0x2B7E70u;
    SET_GPR_U32(ctx, 31, 0x2B7E78u);
    ctx->pc = 0x2B7E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E70u;
            // 0x2b7e74: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7030u;
    if (runtime->hasFunction(0x2B7030u)) {
        auto targetFn = runtime->lookupFunction(0x2B7030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E78u; }
        if (ctx->pc != 0x2B7E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7030_0x2b7030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E78u; }
        if (ctx->pc != 0x2B7E78u) { return; }
    }
    ctx->pc = 0x2B7E78u;
label_2b7e78:
    // 0x2b7e78: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x2b7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
    // 0x2b7e7c: 0xc0adc00  jal         func_2B7000
    ctx->pc = 0x2B7E7Cu;
    SET_GPR_U32(ctx, 31, 0x2B7E84u);
    ctx->pc = 0x2B7E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E7Cu;
            // 0x2b7e80: 0xae600550  sw          $zero, 0x550($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7000u;
    if (runtime->hasFunction(0x2B7000u)) {
        auto targetFn = runtime->lookupFunction(0x2B7000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E84u; }
        if (ctx->pc != 0x2B7E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7000_0x2b7000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E84u; }
        if (ctx->pc != 0x2B7E84u) { return; }
    }
    ctx->pc = 0x2B7E84u;
label_2b7e84:
    // 0x2b7e84: 0x26640580  addiu       $a0, $s3, 0x580
    ctx->pc = 0x2b7e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
    // 0x2b7e88: 0xc0adbb8  jal         func_2B6EE0
    ctx->pc = 0x2B7E88u;
    SET_GPR_U32(ctx, 31, 0x2B7E90u);
    ctx->pc = 0x2B7E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E88u;
            // 0x2b7e8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6EE0u;
    if (runtime->hasFunction(0x2B6EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E90u; }
        if (ctx->pc != 0x2B7E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6EE0_0x2b6ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E90u; }
        if (ctx->pc != 0x2B7E90u) { return; }
    }
    ctx->pc = 0x2B7E90u;
label_2b7e90:
    // 0x2b7e90: 0x266406b0  addiu       $a0, $s3, 0x6B0
    ctx->pc = 0x2b7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1712));
    // 0x2b7e94: 0xc0adbb8  jal         func_2B6EE0
    ctx->pc = 0x2B7E94u;
    SET_GPR_U32(ctx, 31, 0x2B7E9Cu);
    ctx->pc = 0x2B7E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E94u;
            // 0x2b7e98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6EE0u;
    if (runtime->hasFunction(0x2B6EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E9Cu; }
        if (ctx->pc != 0x2B7E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6EE0_0x2b6ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E9Cu; }
        if (ctx->pc != 0x2B7E9Cu) { return; }
    }
    ctx->pc = 0x2B7E9Cu;
label_2b7e9c:
    // 0x2b7e9c: 0xc0adb98  jal         func_2B6E60
    ctx->pc = 0x2B7E9Cu;
    SET_GPR_U32(ctx, 31, 0x2B7EA4u);
    ctx->pc = 0x2B7EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E9Cu;
            // 0x2b7ea0: 0x266407e0  addiu       $a0, $s3, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E60u;
    if (runtime->hasFunction(0x2B6E60u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EA4u; }
        if (ctx->pc != 0x2B7EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E60_0x2b6e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EA4u; }
        if (ctx->pc != 0x2B7EA4u) { return; }
    }
    ctx->pc = 0x2B7EA4u;
label_2b7ea4:
    // 0x2b7ea4: 0xc0adb98  jal         func_2B6E60
    ctx->pc = 0x2B7EA4u;
    SET_GPR_U32(ctx, 31, 0x2B7EACu);
    ctx->pc = 0x2B7EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7EA4u;
            // 0x2b7ea8: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E60u;
    if (runtime->hasFunction(0x2B6E60u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EACu; }
        if (ctx->pc != 0x2B7EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E60_0x2b6e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EACu; }
        if (ctx->pc != 0x2B7EACu) { return; }
    }
    ctx->pc = 0x2B7EACu;
label_2b7eac:
    // 0x2b7eac: 0x26640940  addiu       $a0, $s3, 0x940
    ctx->pc = 0x2b7eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
    // 0x2b7eb0: 0xc142d20  jal         func_50B480
    ctx->pc = 0x2B7EB0u;
    SET_GPR_U32(ctx, 31, 0x2B7EB8u);
    ctx->pc = 0x2B7EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7EB0u;
            // 0x2b7eb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B480u;
    if (runtime->hasFunction(0x50B480u)) {
        auto targetFn = runtime->lookupFunction(0x50B480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EB8u; }
        if (ctx->pc != 0x2B7EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B480_0x50b480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EB8u; }
        if (ctx->pc != 0x2B7EB8u) { return; }
    }
    ctx->pc = 0x2B7EB8u;
label_2b7eb8:
    // 0x2b7eb8: 0x26640a50  addiu       $a0, $s3, 0xA50
    ctx->pc = 0x2b7eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2640));
    // 0x2b7ebc: 0xc0adafc  jal         func_2B6BF0
    ctx->pc = 0x2B7EBCu;
    SET_GPR_U32(ctx, 31, 0x2B7EC4u);
    ctx->pc = 0x2B7EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7EBCu;
            // 0x2b7ec0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6BF0u;
    if (runtime->hasFunction(0x2B6BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EC4u; }
        if (ctx->pc != 0x2B7EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6BF0_0x2b6bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EC4u; }
        if (ctx->pc != 0x2B7EC4u) { return; }
    }
    ctx->pc = 0x2B7EC4u;
label_2b7ec4:
    // 0x2b7ec4: 0xc0adac4  jal         func_2B6B10
    ctx->pc = 0x2B7EC4u;
    SET_GPR_U32(ctx, 31, 0x2B7ECCu);
    ctx->pc = 0x2B7EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7EC4u;
            // 0x2b7ec8: 0x26640ab0  addiu       $a0, $s3, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6B10u;
    if (runtime->hasFunction(0x2B6B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7ECCu; }
        if (ctx->pc != 0x2B7ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6B10_0x2b6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7ECCu; }
        if (ctx->pc != 0x2B7ECCu) { return; }
    }
    ctx->pc = 0x2B7ECCu;
label_2b7ecc:
    // 0x2b7ecc: 0x26640bc0  addiu       $a0, $s3, 0xBC0
    ctx->pc = 0x2b7eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3008));
    // 0x2b7ed0: 0xc0adab0  jal         func_2B6AC0
    ctx->pc = 0x2B7ED0u;
    SET_GPR_U32(ctx, 31, 0x2B7ED8u);
    ctx->pc = 0x2B7ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7ED0u;
            // 0x2b7ed4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6AC0u;
    if (runtime->hasFunction(0x2B6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7ED8u; }
        if (ctx->pc != 0x2B7ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6AC0_0x2b6ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7ED8u; }
        if (ctx->pc != 0x2B7ED8u) { return; }
    }
    ctx->pc = 0x2B7ED8u;
label_2b7ed8:
    // 0x2b7ed8: 0xc0ada8c  jal         func_2B6A30
    ctx->pc = 0x2B7ED8u;
    SET_GPR_U32(ctx, 31, 0x2B7EE0u);
    ctx->pc = 0x2B7EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7ED8u;
            // 0x2b7edc: 0x26640bf0  addiu       $a0, $s3, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EE0u; }
        if (ctx->pc != 0x2B7EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EE0u; }
        if (ctx->pc != 0x2B7EE0u) { return; }
    }
    ctx->pc = 0x2B7EE0u;
label_2b7ee0:
    // 0x2b7ee0: 0xc0ada7c  jal         func_2B69F0
    ctx->pc = 0x2B7EE0u;
    SET_GPR_U32(ctx, 31, 0x2B7EE8u);
    ctx->pc = 0x2B7EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7EE0u;
            // 0x2b7ee4: 0x26640c50  addiu       $a0, $s3, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B69F0u;
    if (runtime->hasFunction(0x2B69F0u)) {
        auto targetFn = runtime->lookupFunction(0x2B69F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EE8u; }
        if (ctx->pc != 0x2B7EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B69F0_0x2b69f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EE8u; }
        if (ctx->pc != 0x2B7EE8u) { return; }
    }
    ctx->pc = 0x2B7EE8u;
label_2b7ee8:
    // 0x2b7ee8: 0xc0778a0  jal         func_1DE280
    ctx->pc = 0x2B7EE8u;
    SET_GPR_U32(ctx, 31, 0x2B7EF0u);
    ctx->pc = 0x2B7EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7EE8u;
            // 0x2b7eec: 0x26640c6c  addiu       $a0, $s3, 0xC6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE280u;
    if (runtime->hasFunction(0x1DE280u)) {
        auto targetFn = runtime->lookupFunction(0x1DE280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EF0u; }
        if (ctx->pc != 0x2B7EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE280_0x1de280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EF0u; }
        if (ctx->pc != 0x2B7EF0u) { return; }
    }
    ctx->pc = 0x2B7EF0u;
label_2b7ef0:
    // 0x2b7ef0: 0xc0ada6c  jal         func_2B69B0
    ctx->pc = 0x2B7EF0u;
    SET_GPR_U32(ctx, 31, 0x2B7EF8u);
    ctx->pc = 0x2B7EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7EF0u;
            // 0x2b7ef4: 0x26640c90  addiu       $a0, $s3, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B69B0u;
    if (runtime->hasFunction(0x2B69B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B69B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EF8u; }
        if (ctx->pc != 0x2B7EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B69B0_0x2b69b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EF8u; }
        if (ctx->pc != 0x2B7EF8u) { return; }
    }
    ctx->pc = 0x2B7EF8u;
label_2b7ef8:
    // 0x2b7ef8: 0xae600d60  sw          $zero, 0xD60($s3)
    ctx->pc = 0x2b7ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3424), GPR_U32(ctx, 0));
    // 0x2b7efc: 0xae600d64  sw          $zero, 0xD64($s3)
    ctx->pc = 0x2b7efcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3428), GPR_U32(ctx, 0));
    // 0x2b7f00: 0xae600d68  sw          $zero, 0xD68($s3)
    ctx->pc = 0x2b7f00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3432), GPR_U32(ctx, 0));
    // 0x2b7f04: 0xae600d6c  sw          $zero, 0xD6C($s3)
    ctx->pc = 0x2b7f04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3436), GPR_U32(ctx, 0));
    // 0x2b7f08: 0xae600d70  sw          $zero, 0xD70($s3)
    ctx->pc = 0x2b7f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3440), GPR_U32(ctx, 0));
    // 0x2b7f0c: 0xae600d74  sw          $zero, 0xD74($s3)
    ctx->pc = 0x2b7f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3444), GPR_U32(ctx, 0));
    // 0x2b7f10: 0xae600d78  sw          $zero, 0xD78($s3)
    ctx->pc = 0x2b7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3448), GPR_U32(ctx, 0));
    // 0x2b7f14: 0xc0b36b0  jal         func_2CDAC0
    ctx->pc = 0x2B7F14u;
    SET_GPR_U32(ctx, 31, 0x2B7F1Cu);
    ctx->pc = 0x2B7F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7F14u;
            // 0x2b7f18: 0xae600d7c  sw          $zero, 0xD7C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAC0u;
    if (runtime->hasFunction(0x2CDAC0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7F1Cu; }
        if (ctx->pc != 0x2B7F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAC0_0x2cdac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7F1Cu; }
        if (ctx->pc != 0x2B7F1Cu) { return; }
    }
    ctx->pc = 0x2B7F1Cu;
label_2b7f1c:
    // 0x2b7f1c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2b7f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7f20: 0xc0ada60  jal         func_2B6980
    ctx->pc = 0x2B7F20u;
    SET_GPR_U32(ctx, 31, 0x2B7F28u);
    ctx->pc = 0x2B7F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7F20u;
            // 0x2b7f24: 0x26640d80  addiu       $a0, $s3, 0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6980u;
    if (runtime->hasFunction(0x2B6980u)) {
        auto targetFn = runtime->lookupFunction(0x2B6980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7F28u; }
        if (ctx->pc != 0x2B7F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6980_0x2b6980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7F28u; }
        if (ctx->pc != 0x2B7F28u) { return; }
    }
    ctx->pc = 0x2B7F28u;
label_2b7f28:
    // 0x2b7f28: 0x26640d94  addiu       $a0, $s3, 0xD94
    ctx->pc = 0x2b7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3476));
    // 0x2b7f2c: 0xc0ada5c  jal         func_2B6970
    ctx->pc = 0x2B7F2Cu;
    SET_GPR_U32(ctx, 31, 0x2B7F34u);
    ctx->pc = 0x2B7F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7F2Cu;
            // 0x2b7f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6970u;
    if (runtime->hasFunction(0x2B6970u)) {
        auto targetFn = runtime->lookupFunction(0x2B6970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7F34u; }
        if (ctx->pc != 0x2B7F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6970_0x2b6970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7F34u; }
        if (ctx->pc != 0x2B7F34u) { return; }
    }
    ctx->pc = 0x2B7F34u;
label_2b7f34:
    // 0x2b7f34: 0xae600d98  sw          $zero, 0xD98($s3)
    ctx->pc = 0x2b7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3480), GPR_U32(ctx, 0));
    // 0x2b7f38: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2b7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2b7f3c: 0xae620d9c  sw          $v0, 0xD9C($s3)
    ctx->pc = 0x2b7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3484), GPR_U32(ctx, 2));
    // 0x2b7f40: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b7f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7f44: 0xae600da0  sw          $zero, 0xDA0($s3)
    ctx->pc = 0x2b7f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3488), GPR_U32(ctx, 0));
    // 0x2b7f48: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x2b7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2b7f4c: 0xae600da4  sw          $zero, 0xDA4($s3)
    ctx->pc = 0x2b7f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3492), GPR_U32(ctx, 0));
    // 0x2b7f50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7f54: 0xae600da8  sw          $zero, 0xDA8($s3)
    ctx->pc = 0x2b7f54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3496), GPR_U32(ctx, 0));
    // 0x2b7f58: 0x26641150  addiu       $a0, $s3, 0x1150
    ctx->pc = 0x2b7f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4432));
    // 0x2b7f5c: 0xae600dac  sw          $zero, 0xDAC($s3)
    ctx->pc = 0x2b7f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3500), GPR_U32(ctx, 0));
    // 0x2b7f60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b7f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7f64: 0xae660db0  sw          $a2, 0xDB0($s3)
    ctx->pc = 0x2b7f64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3504), GPR_U32(ctx, 6));
    // 0x2b7f68: 0xae660db4  sw          $a2, 0xDB4($s3)
    ctx->pc = 0x2b7f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3508), GPR_U32(ctx, 6));
    // 0x2b7f6c: 0xae630db8  sw          $v1, 0xDB8($s3)
    ctx->pc = 0x2b7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 3));
    // 0x2b7f70: 0xae620dbc  sw          $v0, 0xDBC($s3)
    ctx->pc = 0x2b7f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3516), GPR_U32(ctx, 2));
    // 0x2b7f74: 0xae600dc0  sw          $zero, 0xDC0($s3)
    ctx->pc = 0x2b7f74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3520), GPR_U32(ctx, 0));
    // 0x2b7f78: 0xae600dc4  sw          $zero, 0xDC4($s3)
    ctx->pc = 0x2b7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3524), GPR_U32(ctx, 0));
    // 0x2b7f7c: 0xae600dc8  sw          $zero, 0xDC8($s3)
    ctx->pc = 0x2b7f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3528), GPR_U32(ctx, 0));
    // 0x2b7f80: 0xae600dcc  sw          $zero, 0xDCC($s3)
    ctx->pc = 0x2b7f80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3532), GPR_U32(ctx, 0));
    // 0x2b7f84: 0xae600dd0  sw          $zero, 0xDD0($s3)
    ctx->pc = 0x2b7f84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3536), GPR_U32(ctx, 0));
    // 0x2b7f88: 0xae600dd4  sw          $zero, 0xDD4($s3)
    ctx->pc = 0x2b7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3540), GPR_U32(ctx, 0));
    // 0x2b7f8c: 0xae600dd8  sw          $zero, 0xDD8($s3)
    ctx->pc = 0x2b7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3544), GPR_U32(ctx, 0));
    // 0x2b7f90: 0xae600ddc  sw          $zero, 0xDDC($s3)
    ctx->pc = 0x2b7f90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3548), GPR_U32(ctx, 0));
    // 0x2b7f94: 0xae620de0  sw          $v0, 0xDE0($s3)
    ctx->pc = 0x2b7f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3552), GPR_U32(ctx, 2));
    // 0x2b7f98: 0xae600de4  sw          $zero, 0xDE4($s3)
    ctx->pc = 0x2b7f98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3556), GPR_U32(ctx, 0));
    // 0x2b7f9c: 0xae600de8  sw          $zero, 0xDE8($s3)
    ctx->pc = 0x2b7f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3560), GPR_U32(ctx, 0));
    // 0x2b7fa0: 0xae600dec  sw          $zero, 0xDEC($s3)
    ctx->pc = 0x2b7fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3564), GPR_U32(ctx, 0));
    // 0x2b7fa4: 0xae620df0  sw          $v0, 0xDF0($s3)
    ctx->pc = 0x2b7fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3568), GPR_U32(ctx, 2));
    // 0x2b7fa8: 0xae600df4  sw          $zero, 0xDF4($s3)
    ctx->pc = 0x2b7fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3572), GPR_U32(ctx, 0));
    // 0x2b7fac: 0xae600df8  sw          $zero, 0xDF8($s3)
    ctx->pc = 0x2b7facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3576), GPR_U32(ctx, 0));
    // 0x2b7fb0: 0xae600dfc  sw          $zero, 0xDFC($s3)
    ctx->pc = 0x2b7fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3580), GPR_U32(ctx, 0));
    // 0x2b7fb4: 0xae600e00  sw          $zero, 0xE00($s3)
    ctx->pc = 0x2b7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3584), GPR_U32(ctx, 0));
    // 0x2b7fb8: 0xae600e04  sw          $zero, 0xE04($s3)
    ctx->pc = 0x2b7fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3588), GPR_U32(ctx, 0));
    // 0x2b7fbc: 0xae620e08  sw          $v0, 0xE08($s3)
    ctx->pc = 0x2b7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3592), GPR_U32(ctx, 2));
    // 0x2b7fc0: 0xae600e0c  sw          $zero, 0xE0C($s3)
    ctx->pc = 0x2b7fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3596), GPR_U32(ctx, 0));
    // 0x2b7fc4: 0xae600e10  sw          $zero, 0xE10($s3)
    ctx->pc = 0x2b7fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3600), GPR_U32(ctx, 0));
    // 0x2b7fc8: 0xae600e14  sw          $zero, 0xE14($s3)
    ctx->pc = 0x2b7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3604), GPR_U32(ctx, 0));
    // 0x2b7fcc: 0xae600e18  sw          $zero, 0xE18($s3)
    ctx->pc = 0x2b7fccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3608), GPR_U32(ctx, 0));
    // 0x2b7fd0: 0xae600e28  sw          $zero, 0xE28($s3)
    ctx->pc = 0x2b7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3624), GPR_U32(ctx, 0));
    // 0x2b7fd4: 0xae600e2c  sw          $zero, 0xE2C($s3)
    ctx->pc = 0x2b7fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3628), GPR_U32(ctx, 0));
    // 0x2b7fd8: 0xae600e30  sw          $zero, 0xE30($s3)
    ctx->pc = 0x2b7fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3632), GPR_U32(ctx, 0));
    // 0x2b7fdc: 0xae600e34  sw          $zero, 0xE34($s3)
    ctx->pc = 0x2b7fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3636), GPR_U32(ctx, 0));
    // 0x2b7fe0: 0xae600e38  sw          $zero, 0xE38($s3)
    ctx->pc = 0x2b7fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3640), GPR_U32(ctx, 0));
    // 0x2b7fe4: 0xa2600e3c  sb          $zero, 0xE3C($s3)
    ctx->pc = 0x2b7fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3644), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7fe8: 0xa2600e3d  sb          $zero, 0xE3D($s3)
    ctx->pc = 0x2b7fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3645), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7fec: 0xa2600e3e  sb          $zero, 0xE3E($s3)
    ctx->pc = 0x2b7fecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3646), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7ff0: 0xa2600e3f  sb          $zero, 0xE3F($s3)
    ctx->pc = 0x2b7ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3647), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7ff4: 0xae600e64  sw          $zero, 0xE64($s3)
    ctx->pc = 0x2b7ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3684), GPR_U32(ctx, 0));
    // 0x2b7ff8: 0xae600e68  sw          $zero, 0xE68($s3)
    ctx->pc = 0x2b7ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3688), GPR_U32(ctx, 0));
    // 0x2b7ffc: 0xae600e6c  sw          $zero, 0xE6C($s3)
    ctx->pc = 0x2b7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3692), GPR_U32(ctx, 0));
    // 0x2b8000: 0xae600e70  sw          $zero, 0xE70($s3)
    ctx->pc = 0x2b8000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3696), GPR_U32(ctx, 0));
    // 0x2b8004: 0xae600e74  sw          $zero, 0xE74($s3)
    ctx->pc = 0x2b8004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3700), GPR_U32(ctx, 0));
    // 0x2b8008: 0xae600e98  sw          $zero, 0xE98($s3)
    ctx->pc = 0x2b8008u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3736), GPR_U32(ctx, 0));
    // 0x2b800c: 0xae600e9c  sw          $zero, 0xE9C($s3)
    ctx->pc = 0x2b800cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3740), GPR_U32(ctx, 0));
    // 0x2b8010: 0xae601140  sw          $zero, 0x1140($s3)
    ctx->pc = 0x2b8010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4416), GPR_U32(ctx, 0));
    // 0x2b8014: 0xae601144  sw          $zero, 0x1144($s3)
    ctx->pc = 0x2b8014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4420), GPR_U32(ctx, 0));
    // 0x2b8018: 0xae601148  sw          $zero, 0x1148($s3)
    ctx->pc = 0x2b8018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4424), GPR_U32(ctx, 0));
    // 0x2b801c: 0xc12cac0  jal         func_4B2B00
    ctx->pc = 0x2B801Cu;
    SET_GPR_U32(ctx, 31, 0x2B8024u);
    ctx->pc = 0x2B8020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B801Cu;
            // 0x2b8020: 0xae60114c  sw          $zero, 0x114C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2B00u;
    if (runtime->hasFunction(0x4B2B00u)) {
        auto targetFn = runtime->lookupFunction(0x4B2B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8024u; }
        if (ctx->pc != 0x2B8024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B2B00_0x4b2b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8024u; }
        if (ctx->pc != 0x2B8024u) { return; }
    }
    ctx->pc = 0x2B8024u;
label_2b8024:
    // 0x2b8024: 0xae60117c  sw          $zero, 0x117C($s3)
    ctx->pc = 0x2b8024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4476), GPR_U32(ctx, 0));
    // 0x2b8028: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2b8028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2b802c: 0xae601180  sw          $zero, 0x1180($s3)
    ctx->pc = 0x2b802cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4480), GPR_U32(ctx, 0));
    // 0x2b8030: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2b8030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8034: 0xae601188  sw          $zero, 0x1188($s3)
    ctx->pc = 0x2b8034u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4488), GPR_U32(ctx, 0));
    // 0x2b8038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b803c: 0xae601190  sw          $zero, 0x1190($s3)
    ctx->pc = 0x2b803cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4496), GPR_U32(ctx, 0));
    // 0x2b8040: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b8040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b8044: 0xae661194  sw          $a2, 0x1194($s3)
    ctx->pc = 0x2b8044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4500), GPR_U32(ctx, 6));
    // 0x2b8048: 0xc44cc6d8  lwc1        $f12, -0x3928($v0)
    ctx->pc = 0x2b8048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b804c: 0xae601198  sw          $zero, 0x1198($s3)
    ctx->pc = 0x2b804cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4504), GPR_U32(ctx, 0));
    // 0x2b8050: 0x266411f4  addiu       $a0, $s3, 0x11F4
    ctx->pc = 0x2b8050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4596));
    // 0x2b8054: 0xa660119c  sh          $zero, 0x119C($s3)
    ctx->pc = 0x2b8054u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4508), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b8058: 0xa260119e  sb          $zero, 0x119E($s3)
    ctx->pc = 0x2b8058u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4510), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b805c: 0xa26511a1  sb          $a1, 0x11A1($s3)
    ctx->pc = 0x2b805cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4513), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b8060: 0xa26511a4  sb          $a1, 0x11A4($s3)
    ctx->pc = 0x2b8060u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4516), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b8064: 0xa26511a5  sb          $a1, 0x11A5($s3)
    ctx->pc = 0x2b8064u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4517), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b8068: 0xa26011a6  sb          $zero, 0x11A6($s3)
    ctx->pc = 0x2b8068u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4518), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b806c: 0xa26011a7  sb          $zero, 0x11A7($s3)
    ctx->pc = 0x2b806cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4519), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8070: 0xa26311a8  sb          $v1, 0x11A8($s3)
    ctx->pc = 0x2b8070u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4520), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b8074: 0xa26011a9  sb          $zero, 0x11A9($s3)
    ctx->pc = 0x2b8074u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4521), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8078: 0xa26311aa  sb          $v1, 0x11AA($s3)
    ctx->pc = 0x2b8078u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4522), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b807c: 0xa26311ab  sb          $v1, 0x11AB($s3)
    ctx->pc = 0x2b807cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4523), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b8080: 0xa26311ad  sb          $v1, 0x11AD($s3)
    ctx->pc = 0x2b8080u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4525), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b8084: 0xa26011c0  sb          $zero, 0x11C0($s3)
    ctx->pc = 0x2b8084u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4544), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8088: 0xae6011c4  sw          $zero, 0x11C4($s3)
    ctx->pc = 0x2b8088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4548), GPR_U32(ctx, 0));
    // 0x2b808c: 0xae6011c8  sw          $zero, 0x11C8($s3)
    ctx->pc = 0x2b808cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4552), GPR_U32(ctx, 0));
    // 0x2b8090: 0xa26011cc  sb          $zero, 0x11CC($s3)
    ctx->pc = 0x2b8090u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4556), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8094: 0xae6611d0  sw          $a2, 0x11D0($s3)
    ctx->pc = 0x2b8094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4560), GPR_U32(ctx, 6));
    // 0x2b8098: 0xae6011d4  sw          $zero, 0x11D4($s3)
    ctx->pc = 0x2b8098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4564), GPR_U32(ctx, 0));
    // 0x2b809c: 0xae6011d8  sw          $zero, 0x11D8($s3)
    ctx->pc = 0x2b809cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4568), GPR_U32(ctx, 0));
    // 0x2b80a0: 0xae6511dc  sw          $a1, 0x11DC($s3)
    ctx->pc = 0x2b80a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4572), GPR_U32(ctx, 5));
    // 0x2b80a4: 0xae6011e0  sw          $zero, 0x11E0($s3)
    ctx->pc = 0x2b80a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4576), GPR_U32(ctx, 0));
    // 0x2b80a8: 0xc0ada4c  jal         func_2B6930
    ctx->pc = 0x2B80A8u;
    SET_GPR_U32(ctx, 31, 0x2B80B0u);
    ctx->pc = 0x2B80ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B80A8u;
            // 0x2b80ac: 0xae6011e4  sw          $zero, 0x11E4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6930u;
    if (runtime->hasFunction(0x2B6930u)) {
        auto targetFn = runtime->lookupFunction(0x2B6930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80B0u; }
        if (ctx->pc != 0x2B80B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6930_0x2b6930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80B0u; }
        if (ctx->pc != 0x2B80B0u) { return; }
    }
    ctx->pc = 0x2B80B0u;
label_2b80b0:
    // 0x2b80b0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2b80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2b80b4: 0xc44cc6e0  lwc1        $f12, -0x3920($v0)
    ctx->pc = 0x2b80b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b80b8: 0xc0ada4c  jal         func_2B6930
    ctx->pc = 0x2B80B8u;
    SET_GPR_U32(ctx, 31, 0x2B80C0u);
    ctx->pc = 0x2B80BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B80B8u;
            // 0x2b80bc: 0x26641208  addiu       $a0, $s3, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6930u;
    if (runtime->hasFunction(0x2B6930u)) {
        auto targetFn = runtime->lookupFunction(0x2B6930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80C0u; }
        if (ctx->pc != 0x2B80C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6930_0x2b6930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80C0u; }
        if (ctx->pc != 0x2B80C0u) { return; }
    }
    ctx->pc = 0x2B80C0u;
label_2b80c0:
    // 0x2b80c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b80c4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2b80c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2b80c8: 0xae621220  sw          $v0, 0x1220($s3)
    ctx->pc = 0x2b80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4640), GPR_U32(ctx, 2));
    // 0x2b80cc: 0x24841868  addiu       $a0, $a0, 0x1868
    ctx->pc = 0x2b80ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6248));
    // 0x2b80d0: 0xae601224  sw          $zero, 0x1224($s3)
    ctx->pc = 0x2b80d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4644), GPR_U32(ctx, 0));
    // 0x2b80d4: 0xae601228  sw          $zero, 0x1228($s3)
    ctx->pc = 0x2b80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4648), GPR_U32(ctx, 0));
    // 0x2b80d8: 0xae60122c  sw          $zero, 0x122C($s3)
    ctx->pc = 0x2b80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4652), GPR_U32(ctx, 0));
    // 0x2b80dc: 0xc077c58  jal         func_1DF160
    ctx->pc = 0x2B80DCu;
    SET_GPR_U32(ctx, 31, 0x2B80E4u);
    ctx->pc = 0x2B80E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B80DCu;
            // 0x2b80e0: 0xae601230  sw          $zero, 0x1230($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF160u;
    if (runtime->hasFunction(0x1DF160u)) {
        auto targetFn = runtime->lookupFunction(0x1DF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80E4u; }
        if (ctx->pc != 0x2B80E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF160_0x1df160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80E4u; }
        if (ctx->pc != 0x2B80E4u) { return; }
    }
    ctx->pc = 0x2B80E4u;
label_2b80e4:
    // 0x2b80e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b80e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b80e8: 0xc0785dc  jal         func_1E1770
    ctx->pc = 0x2B80E8u;
    SET_GPR_U32(ctx, 31, 0x2B80F0u);
    ctx->pc = 0x2B80ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B80E8u;
            // 0x2b80ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1770u;
    if (runtime->hasFunction(0x1E1770u)) {
        auto targetFn = runtime->lookupFunction(0x1E1770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80F0u; }
        if (ctx->pc != 0x2B80F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1770_0x1e1770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80F0u; }
        if (ctx->pc != 0x2B80F0u) { return; }
    }
    ctx->pc = 0x2B80F0u;
label_2b80f0:
    // 0x2b80f0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B80F0u;
    SET_GPR_U32(ctx, 31, 0x2B80F8u);
    ctx->pc = 0x2B80F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B80F0u;
            // 0x2b80f4: 0x26640140  addiu       $a0, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80F8u; }
        if (ctx->pc != 0x2B80F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80F8u; }
        if (ctx->pc != 0x2B80F8u) { return; }
    }
    ctx->pc = 0x2B80F8u;
label_2b80f8:
    // 0x2b80f8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B80F8u;
    SET_GPR_U32(ctx, 31, 0x2B8100u);
    ctx->pc = 0x2B80FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B80F8u;
            // 0x2b80fc: 0x266400c0  addiu       $a0, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8100u; }
        if (ctx->pc != 0x2B8100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8100u; }
        if (ctx->pc != 0x2B8100u) { return; }
    }
    ctx->pc = 0x2B8100u;
label_2b8100:
    // 0x2b8100: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B8100u;
    SET_GPR_U32(ctx, 31, 0x2B8108u);
    ctx->pc = 0x2B8104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8100u;
            // 0x2b8104: 0x26640100  addiu       $a0, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8108u; }
        if (ctx->pc != 0x2B8108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8108u; }
        if (ctx->pc != 0x2B8108u) { return; }
    }
    ctx->pc = 0x2B8108u;
label_2b8108:
    // 0x2b8108: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B8108u;
    SET_GPR_U32(ctx, 31, 0x2B8110u);
    ctx->pc = 0x2B810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8108u;
            // 0x2b810c: 0x26640180  addiu       $a0, $s3, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8110u; }
        if (ctx->pc != 0x2B8110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8110u; }
        if (ctx->pc != 0x2B8110u) { return; }
    }
    ctx->pc = 0x2B8110u;
label_2b8110:
    // 0x2b8110: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B8110u;
    SET_GPR_U32(ctx, 31, 0x2B8118u);
    ctx->pc = 0x2B8114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8110u;
            // 0x2b8114: 0x266401c0  addiu       $a0, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8118u; }
        if (ctx->pc != 0x2B8118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8118u; }
        if (ctx->pc != 0x2B8118u) { return; }
    }
    ctx->pc = 0x2B8118u;
label_2b8118:
    // 0x2b8118: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B8118u;
    SET_GPR_U32(ctx, 31, 0x2B8120u);
    ctx->pc = 0x2B811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8118u;
            // 0x2b811c: 0x26640200  addiu       $a0, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8120u; }
        if (ctx->pc != 0x2B8120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8120u; }
        if (ctx->pc != 0x2B8120u) { return; }
    }
    ctx->pc = 0x2B8120u;
label_2b8120:
    // 0x2b8120: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B8120u;
    SET_GPR_U32(ctx, 31, 0x2B8128u);
    ctx->pc = 0x2B8124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8120u;
            // 0x2b8124: 0x26640240  addiu       $a0, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8128u; }
        if (ctx->pc != 0x2B8128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8128u; }
        if (ctx->pc != 0x2B8128u) { return; }
    }
    ctx->pc = 0x2B8128u;
label_2b8128:
    // 0x2b8128: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B8128u;
    SET_GPR_U32(ctx, 31, 0x2B8130u);
    ctx->pc = 0x2B812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8128u;
            // 0x2b812c: 0x26640280  addiu       $a0, $s3, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8130u; }
        if (ctx->pc != 0x2B8130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8130u; }
        if (ctx->pc != 0x2B8130u) { return; }
    }
    ctx->pc = 0x2B8130u;
label_2b8130:
    // 0x2b8130: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b8130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b8134: 0x266402c0  addiu       $a0, $s3, 0x2C0
    ctx->pc = 0x2b8134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
    // 0x2b8138: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B8138u;
    SET_GPR_U32(ctx, 31, 0x2B8140u);
    ctx->pc = 0x2B813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8138u;
            // 0x2b813c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8140u; }
        if (ctx->pc != 0x2B8140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8140u; }
        if (ctx->pc != 0x2B8140u) { return; }
    }
    ctx->pc = 0x2B8140u;
label_2b8140:
    // 0x2b8140: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b8140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b8144: 0x266402d0  addiu       $a0, $s3, 0x2D0
    ctx->pc = 0x2b8144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 720));
    // 0x2b8148: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B8148u;
    SET_GPR_U32(ctx, 31, 0x2B8150u);
    ctx->pc = 0x2B814Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8148u;
            // 0x2b814c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8150u; }
        if (ctx->pc != 0x2B8150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8150u; }
        if (ctx->pc != 0x2B8150u) { return; }
    }
    ctx->pc = 0x2B8150u;
label_2b8150:
    // 0x2b8150: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b8150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b8154: 0x266402e0  addiu       $a0, $s3, 0x2E0
    ctx->pc = 0x2b8154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
    // 0x2b8158: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B8158u;
    SET_GPR_U32(ctx, 31, 0x2B8160u);
    ctx->pc = 0x2B815Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8158u;
            // 0x2b815c: 0x24a518d0  addiu       $a1, $a1, 0x18D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8160u; }
        if (ctx->pc != 0x2B8160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8160u; }
        if (ctx->pc != 0x2B8160u) { return; }
    }
    ctx->pc = 0x2B8160u;
label_2b8160:
    // 0x2b8160: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b8160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b8164: 0x26640300  addiu       $a0, $s3, 0x300
    ctx->pc = 0x2b8164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x2b8168: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B8168u;
    SET_GPR_U32(ctx, 31, 0x2B8170u);
    ctx->pc = 0x2B816Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8168u;
            // 0x2b816c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8170u; }
        if (ctx->pc != 0x2B8170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8170u; }
        if (ctx->pc != 0x2B8170u) { return; }
    }
    ctx->pc = 0x2B8170u;
label_2b8170:
    // 0x2b8170: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b8170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b8174: 0x26640310  addiu       $a0, $s3, 0x310
    ctx->pc = 0x2b8174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    // 0x2b8178: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B8178u;
    SET_GPR_U32(ctx, 31, 0x2B8180u);
    ctx->pc = 0x2B817Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8178u;
            // 0x2b817c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8180u; }
        if (ctx->pc != 0x2B8180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8180u; }
        if (ctx->pc != 0x2B8180u) { return; }
    }
    ctx->pc = 0x2B8180u;
label_2b8180:
    // 0x2b8180: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b8180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b8184: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x2b8184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
    // 0x2b8188: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B8188u;
    SET_GPR_U32(ctx, 31, 0x2B8190u);
    ctx->pc = 0x2B818Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8188u;
            // 0x2b818c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8190u; }
        if (ctx->pc != 0x2B8190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8190u; }
        if (ctx->pc != 0x2B8190u) { return; }
    }
    ctx->pc = 0x2B8190u;
label_2b8190:
    // 0x2b8190: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b8190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b8194: 0x266403d0  addiu       $a0, $s3, 0x3D0
    ctx->pc = 0x2b8194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
    // 0x2b8198: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B8198u;
    SET_GPR_U32(ctx, 31, 0x2B81A0u);
    ctx->pc = 0x2B819Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8198u;
            // 0x2b819c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81A0u; }
        if (ctx->pc != 0x2B81A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81A0u; }
        if (ctx->pc != 0x2B81A0u) { return; }
    }
    ctx->pc = 0x2B81A0u;
label_2b81a0:
    // 0x2b81a0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b81a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b81a4: 0x26640380  addiu       $a0, $s3, 0x380
    ctx->pc = 0x2b81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 896));
    // 0x2b81a8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B81A8u;
    SET_GPR_U32(ctx, 31, 0x2B81B0u);
    ctx->pc = 0x2B81ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B81A8u;
            // 0x2b81ac: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81B0u; }
        if (ctx->pc != 0x2B81B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81B0u; }
        if (ctx->pc != 0x2B81B0u) { return; }
    }
    ctx->pc = 0x2B81B0u;
label_2b81b0:
    // 0x2b81b0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b81b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b81b4: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x2b81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x2b81b8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B81B8u;
    SET_GPR_U32(ctx, 31, 0x2B81C0u);
    ctx->pc = 0x2B81BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B81B8u;
            // 0x2b81bc: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81C0u; }
        if (ctx->pc != 0x2B81C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81C0u; }
        if (ctx->pc != 0x2B81C0u) { return; }
    }
    ctx->pc = 0x2B81C0u;
label_2b81c0:
    // 0x2b81c0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b81c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b81c4: 0x266403a0  addiu       $a0, $s3, 0x3A0
    ctx->pc = 0x2b81c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 928));
    // 0x2b81c8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B81C8u;
    SET_GPR_U32(ctx, 31, 0x2B81D0u);
    ctx->pc = 0x2B81CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B81C8u;
            // 0x2b81cc: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81D0u; }
        if (ctx->pc != 0x2B81D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81D0u; }
        if (ctx->pc != 0x2B81D0u) { return; }
    }
    ctx->pc = 0x2B81D0u;
label_2b81d0:
    // 0x2b81d0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b81d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b81d4: 0x26640360  addiu       $a0, $s3, 0x360
    ctx->pc = 0x2b81d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
    // 0x2b81d8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B81D8u;
    SET_GPR_U32(ctx, 31, 0x2B81E0u);
    ctx->pc = 0x2B81DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B81D8u;
            // 0x2b81dc: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81E0u; }
        if (ctx->pc != 0x2B81E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81E0u; }
        if (ctx->pc != 0x2B81E0u) { return; }
    }
    ctx->pc = 0x2B81E0u;
label_2b81e0:
    // 0x2b81e0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b81e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b81e4: 0x26640370  addiu       $a0, $s3, 0x370
    ctx->pc = 0x2b81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 880));
    // 0x2b81e8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B81E8u;
    SET_GPR_U32(ctx, 31, 0x2B81F0u);
    ctx->pc = 0x2B81ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B81E8u;
            // 0x2b81ec: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81F0u; }
        if (ctx->pc != 0x2B81F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B81F0u; }
        if (ctx->pc != 0x2B81F0u) { return; }
    }
    ctx->pc = 0x2B81F0u;
label_2b81f0:
    // 0x2b81f0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b81f4: 0x26640330  addiu       $a0, $s3, 0x330
    ctx->pc = 0x2b81f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
    // 0x2b81f8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B81F8u;
    SET_GPR_U32(ctx, 31, 0x2B8200u);
    ctx->pc = 0x2B81FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B81F8u;
            // 0x2b81fc: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8200u; }
        if (ctx->pc != 0x2B8200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8200u; }
        if (ctx->pc != 0x2B8200u) { return; }
    }
    ctx->pc = 0x2B8200u;
label_2b8200:
    // 0x2b8200: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b8200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b8204: 0x26640340  addiu       $a0, $s3, 0x340
    ctx->pc = 0x2b8204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    // 0x2b8208: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B8208u;
    SET_GPR_U32(ctx, 31, 0x2B8210u);
    ctx->pc = 0x2B820Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8208u;
            // 0x2b820c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8210u; }
        if (ctx->pc != 0x2B8210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8210u; }
        if (ctx->pc != 0x2B8210u) { return; }
    }
    ctx->pc = 0x2B8210u;
label_2b8210:
    // 0x2b8210: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b8210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b8214: 0x266403c0  addiu       $a0, $s3, 0x3C0
    ctx->pc = 0x2b8214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
    // 0x2b8218: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B8218u;
    SET_GPR_U32(ctx, 31, 0x2B8220u);
    ctx->pc = 0x2B821Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8218u;
            // 0x2b821c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8220u; }
        if (ctx->pc != 0x2B8220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8220u; }
        if (ctx->pc != 0x2B8220u) { return; }
    }
    ctx->pc = 0x2B8220u;
label_2b8220:
    // 0x2b8220: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b8220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b8224: 0x26640350  addiu       $a0, $s3, 0x350
    ctx->pc = 0x2b8224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
    // 0x2b8228: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B8228u;
    SET_GPR_U32(ctx, 31, 0x2B8230u);
    ctx->pc = 0x2B822Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8228u;
            // 0x2b822c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8230u; }
        if (ctx->pc != 0x2B8230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8230u; }
        if (ctx->pc != 0x2B8230u) { return; }
    }
    ctx->pc = 0x2B8230u;
label_2b8230:
    // 0x2b8230: 0xc07724c  jal         func_1DC930
    ctx->pc = 0x2B8230u;
    SET_GPR_U32(ctx, 31, 0x2B8238u);
    ctx->pc = 0x2B8234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8230u;
            // 0x2b8234: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8238u; }
        if (ctx->pc != 0x2B8238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8238u; }
        if (ctx->pc != 0x2B8238u) { return; }
    }
    ctx->pc = 0x2B8238u;
label_2b8238:
    // 0x2b8238: 0xc0ada48  jal         func_2B6920
    ctx->pc = 0x2B8238u;
    SET_GPR_U32(ctx, 31, 0x2B8240u);
    ctx->pc = 0x2B823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8238u;
            // 0x2b823c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6920u;
    if (runtime->hasFunction(0x2B6920u)) {
        auto targetFn = runtime->lookupFunction(0x2B6920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8240u; }
        if (ctx->pc != 0x2B8240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6920_0x2b6920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8240u; }
        if (ctx->pc != 0x2B8240u) { return; }
    }
    ctx->pc = 0x2B8240u;
label_2b8240:
    // 0x2b8240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8244: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b8244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8248: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b8248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b824c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2b824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2b8250: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b8250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b8254: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2b8254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b8258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b8258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b825c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B825Cu;
    SET_GPR_U32(ctx, 31, 0x2B8264u);
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8264u; }
        if (ctx->pc != 0x2B8264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8264u; }
        if (ctx->pc != 0x2B8264u) { return; }
    }
    ctx->pc = 0x2B8264u;
label_2b8264:
    // 0x2b8264: 0xc07724c  jal         func_1DC930
    ctx->pc = 0x2B8264u;
    SET_GPR_U32(ctx, 31, 0x2B826Cu);
    ctx->pc = 0x2B8268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8264u;
            // 0x2b8268: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B826Cu; }
        if (ctx->pc != 0x2B826Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B826Cu; }
        if (ctx->pc != 0x2B826Cu) { return; }
    }
    ctx->pc = 0x2B826Cu;
label_2b826c:
    // 0x2b826c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b826cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8270: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b8270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b8274: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b8274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b8278: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b8278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b827c: 0xc0ada44  jal         func_2B6910
    ctx->pc = 0x2B827Cu;
    SET_GPR_U32(ctx, 31, 0x2B8284u);
    ctx->pc = 0x2B6910u;
    if (runtime->hasFunction(0x2B6910u)) {
        auto targetFn = runtime->lookupFunction(0x2B6910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8284u; }
        if (ctx->pc != 0x2B8284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6910_0x2b6910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8284u; }
        if (ctx->pc != 0x2B8284u) { return; }
    }
    ctx->pc = 0x2B8284u;
label_2b8284:
    // 0x2b8284: 0xc07724c  jal         func_1DC930
    ctx->pc = 0x2B8284u;
    SET_GPR_U32(ctx, 31, 0x2B828Cu);
    ctx->pc = 0x2B8288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8284u;
            // 0x2b8288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B828Cu; }
        if (ctx->pc != 0x2B828Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B828Cu; }
        if (ctx->pc != 0x2B828Cu) { return; }
    }
    ctx->pc = 0x2B828Cu;
label_2b828c:
    // 0x2b828c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8290: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b8290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b8294: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b8294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b8298: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b8298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b829c: 0xc0ada40  jal         func_2B6900
    ctx->pc = 0x2B829Cu;
    SET_GPR_U32(ctx, 31, 0x2B82A4u);
    ctx->pc = 0x2B6900u;
    if (runtime->hasFunction(0x2B6900u)) {
        auto targetFn = runtime->lookupFunction(0x2B6900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B82A4u; }
        if (ctx->pc != 0x2B82A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6900_0x2b6900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B82A4u; }
        if (ctx->pc != 0x2B82A4u) { return; }
    }
    ctx->pc = 0x2B82A4u;
label_2b82a4:
    // 0x2b82a4: 0xae600e1c  sw          $zero, 0xE1C($s3)
    ctx->pc = 0x2b82a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3612), GPR_U32(ctx, 0));
    // 0x2b82a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b82a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b82ac: 0xae600e20  sw          $zero, 0xE20($s3)
    ctx->pc = 0x2b82acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3616), GPR_U32(ctx, 0));
    // 0x2b82b0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2b82b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b82b4: 0xae600e24  sw          $zero, 0xE24($s3)
    ctx->pc = 0x2b82b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3620), GPR_U32(ctx, 0));
label_2b82b8:
    // 0x2b82b8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2b82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b82bc: 0xac600ea0  sw          $zero, 0xEA0($v1)
    ctx->pc = 0x2b82bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3744), GPR_U32(ctx, 0));
    // 0x2b82c0: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x2b82c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2b82c4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2b82c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2b82c8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2b82c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b82cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B82CCu;
    {
        const bool branch_taken_0x2b82cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B82D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B82CCu;
            // 0x2b82d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82cc) {
            ctx->pc = 0x2B82B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b82b8;
        }
    }
    ctx->pc = 0x2B82D4u;
    // 0x2b82d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b82d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b82d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b82d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b82dc:
    // 0x2b82dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2b82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b82e0: 0xac800eb0  sw          $zero, 0xEB0($a0)
    ctx->pc = 0x2b82e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3760), GPR_U32(ctx, 0));
    // 0x2b82e4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2b82e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2b82e8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2b82e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2b82ec: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2b82ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b82f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B82F0u;
    {
        const bool branch_taken_0x2b82f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B82F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B82F0u;
            // 0x2b82f4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82f0) {
            ctx->pc = 0x2B82DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b82dc;
        }
    }
    ctx->pc = 0x2B82F8u;
    // 0x2b82f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b82f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b82fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b82fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8300: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b8300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8304:
    // 0x2b8304: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x2b8304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2b8308: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x2b8308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2b830c: 0xaca00ec8  sw          $zero, 0xEC8($a1)
    ctx->pc = 0x2b830cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3784), GPR_U32(ctx, 0));
    // 0x2b8310: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b8310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8314: 0xaca00ec4  sw          $zero, 0xEC4($a1)
    ctx->pc = 0x2b8314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3780), GPR_U32(ctx, 0));
    // 0x2b8318: 0x24440f40  addiu       $a0, $v0, 0xF40
    ctx->pc = 0x2b8318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x2b831c: 0xaca00ec0  sw          $zero, 0xEC0($a1)
    ctx->pc = 0x2b831cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3776), GPR_U32(ctx, 0));
    // 0x2b8320: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B8320u;
    SET_GPR_U32(ctx, 31, 0x2B8328u);
    ctx->pc = 0x2B8324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8320u;
            // 0x2b8324: 0xaca30ecc  sw          $v1, 0xECC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8328u; }
        if (ctx->pc != 0x2B8328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8328u; }
        if (ctx->pc != 0x2B8328u) { return; }
    }
    ctx->pc = 0x2B8328u;
label_2b8328:
    // 0x2b8328: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2b8328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b832c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2b832cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2b8330: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x2b8330u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2b8334: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x2b8334u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x2b8338: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2b8338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b833c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2B833Cu;
    {
        const bool branch_taken_0x2b833c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B833Cu;
            // 0x2b8340: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b833c) {
            ctx->pc = 0x2B8304u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8304;
        }
    }
    ctx->pc = 0x2B8344u;
    // 0x2b8344: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2b8344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2b8348: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2b8348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2b834c: 0x24425650  addiu       $v0, $v0, 0x5650
    ctx->pc = 0x2b834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22096));
    // 0x2b8350: 0x24635678  addiu       $v1, $v1, 0x5678
    ctx->pc = 0x2b8350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22136));
    // 0x2b8354: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2b8354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2b8358: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2b8358u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2b835c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2b835cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8360: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b8360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8364: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b8364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b8368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b836c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b836cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8374: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8374u;
            // 0x2b8378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B837Cu;
    // 0x2b837c: 0x0  nop
    ctx->pc = 0x2b837cu;
    // NOP
}
