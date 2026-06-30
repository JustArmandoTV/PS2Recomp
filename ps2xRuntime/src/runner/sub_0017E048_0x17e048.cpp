#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E048
// Address: 0x17e048 - 0x17e1b8
void sub_0017E048_0x17e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E048_0x17e048");
#endif

    switch (ctx->pc) {
        case 0x17e090u: goto label_17e090;
        case 0x17e0a8u: goto label_17e0a8;
        case 0x17e0d0u: goto label_17e0d0;
        case 0x17e114u: goto label_17e114;
        case 0x17e14cu: goto label_17e14c;
        case 0x17e158u: goto label_17e158;
        case 0x17e190u: goto label_17e190;
        case 0x17e1a0u: goto label_17e1a0;
        default: break;
    }

    ctx->pc = 0x17e048u;

    // 0x17e048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e04c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x17e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x17e050: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17e050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17e054: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17e054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e058: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17e058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17e05c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17e05cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e060: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17e060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17e064: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17e064u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e06c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x17e06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17e070: 0x2444d940  addiu       $a0, $v0, -0x26C0
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957376));
    // 0x17e074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e078: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17e078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17e07c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x17e07cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e084: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17e084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17e088: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17E088u;
    SET_GPR_U32(ctx, 31, 0x17E090u);
    ctx->pc = 0x17E08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E088u;
            // 0x17e08c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E090u; }
        if (ctx->pc != 0x17E090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E090u; }
        if (ctx->pc != 0x17E090u) { return; }
    }
    ctx->pc = 0x17E090u;
label_17e090:
    // 0x17e090: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17e090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17e094: 0x8c626540  lw          $v0, 0x6540($v1)
    ctx->pc = 0x17e094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25920)));
    // 0x17e098: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E098u;
    {
        const bool branch_taken_0x17e098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e098) {
            ctx->pc = 0x17E0A8u;
            goto label_17e0a8;
        }
    }
    ctx->pc = 0x17E0A0u;
    // 0x17e0a0: 0xc05f730  jal         func_17DCC0
    ctx->pc = 0x17E0A0u;
    SET_GPR_U32(ctx, 31, 0x17E0A8u);
    ctx->pc = 0x17DCC0u;
    if (runtime->hasFunction(0x17DCC0u)) {
        auto targetFn = runtime->lookupFunction(0x17DCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0A8u; }
        if (ctx->pc != 0x17E0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DCC0_0x17dcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0A8u; }
        if (ctx->pc != 0x17E0A8u) { return; }
    }
    ctx->pc = 0x17E0A8u;
label_17e0a8:
    // 0x17e0a8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E0A8u;
    {
        const bool branch_taken_0x17e0a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e0a8) {
            ctx->pc = 0x17E0C8u;
            goto label_17e0c8;
        }
    }
    ctx->pc = 0x17E0B0u;
    // 0x17e0b0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E0B0u;
    {
        const bool branch_taken_0x17e0b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e0b0) {
            ctx->pc = 0x17E0C8u;
            goto label_17e0c8;
        }
    }
    ctx->pc = 0x17E0B8u;
    // 0x17e0b8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E0B8u;
    {
        const bool branch_taken_0x17e0b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e0b8) {
            ctx->pc = 0x17E0C8u;
            goto label_17e0c8;
        }
    }
    ctx->pc = 0x17E0C0u;
    // 0x17e0c0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E0C0u;
    {
        const bool branch_taken_0x17e0c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e0c0) {
            ctx->pc = 0x17E0D0u;
            goto label_17e0d0;
        }
    }
    ctx->pc = 0x17E0C8u;
label_17e0c8:
    // 0x17e0c8: 0xc05f730  jal         func_17DCC0
    ctx->pc = 0x17E0C8u;
    SET_GPR_U32(ctx, 31, 0x17E0D0u);
    ctx->pc = 0x17DCC0u;
    if (runtime->hasFunction(0x17DCC0u)) {
        auto targetFn = runtime->lookupFunction(0x17DCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0D0u; }
        if (ctx->pc != 0x17E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DCC0_0x17dcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0D0u; }
        if (ctx->pc != 0x17E0D0u) { return; }
    }
    ctx->pc = 0x17E0D0u;
label_17e0d0:
    // 0x17e0d0: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x17E0D0u;
    {
        const bool branch_taken_0x17e0d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0D0u;
            // 0x17e0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0d0) {
            ctx->pc = 0x17E16Cu;
            goto label_17e16c;
        }
    }
    ctx->pc = 0x17E0D8u;
    // 0x17e0d8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E0D8u;
    {
        const bool branch_taken_0x17e0d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0D8u;
            // 0x17e0dc: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0d8) {
            ctx->pc = 0x17E0F0u;
            goto label_17e0f0;
        }
    }
    ctx->pc = 0x17E0E0u;
    // 0x17e0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17E0E4u;
    {
        const bool branch_taken_0x17e0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0E4u;
            // 0x17e0e8: 0x24846120  addiu       $a0, $a0, 0x6120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0e4) {
            ctx->pc = 0x17E10Cu;
            goto label_17e10c;
        }
    }
    ctx->pc = 0x17E0ECu;
    // 0x17e0ec: 0x0  nop
    ctx->pc = 0x17e0ecu;
    // NOP
label_17e0f0:
    // 0x17e0f0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E0F0u;
    {
        const bool branch_taken_0x17e0f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0F0u;
            // 0x17e0f4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0f0) {
            ctx->pc = 0x17E104u;
            goto label_17e104;
        }
    }
    ctx->pc = 0x17E0F8u;
    // 0x17e0f8: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E0F8u;
    {
        const bool branch_taken_0x17e0f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0F8u;
            // 0x17e0fc: 0x26b00009  addiu       $s0, $s5, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0f8) {
            ctx->pc = 0x17E120u;
            goto label_17e120;
        }
    }
    ctx->pc = 0x17E100u;
    // 0x17e100: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17e100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17e104:
    // 0x17e104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e108: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x17e108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
label_17e10c:
    // 0x17e10c: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17E10Cu;
    SET_GPR_U32(ctx, 31, 0x17E114u);
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E114u; }
        if (ctx->pc != 0x17E114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E114u; }
        if (ctx->pc != 0x17E114u) { return; }
    }
    ctx->pc = 0x17E114u;
label_17e114:
    // 0x17e114: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17E114u;
    {
        const bool branch_taken_0x17e114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E114u;
            // 0x17e118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e114) {
            ctx->pc = 0x17E16Cu;
            goto label_17e16c;
        }
    }
    ctx->pc = 0x17E11Cu;
    // 0x17e11c: 0x0  nop
    ctx->pc = 0x17e11cu;
    // NOP
label_17e120:
    // 0x17e120: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17e120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e124: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x17e124u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x17e128: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e12c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x17e12cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17e130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e134: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17E134u;
    {
        const bool branch_taken_0x17e134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e134) {
            ctx->pc = 0x17E138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E134u;
            // 0x17e138: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E13Cu;
            goto label_17e13c;
        }
    }
    ctx->pc = 0x17E13Cu;
label_17e13c:
    // 0x17e13c: 0x8812  mflo        $s1
    ctx->pc = 0x17e13cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x17e140: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17e140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e144: 0xc05f5d2  jal         func_17D748
    ctx->pc = 0x17E144u;
    SET_GPR_U32(ctx, 31, 0x17E14Cu);
    ctx->pc = 0x17E148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E144u;
            // 0x17e148: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D748u;
    if (runtime->hasFunction(0x17D748u)) {
        auto targetFn = runtime->lookupFunction(0x17D748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E14Cu; }
        if (ctx->pc != 0x17E14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D748_0x17d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E14Cu; }
        if (ctx->pc != 0x17E14Cu) { return; }
    }
    ctx->pc = 0x17E14Cu;
label_17e14c:
    // 0x17e14c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17e14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e150: 0xc05f69a  jal         func_17DA68
    ctx->pc = 0x17E150u;
    SET_GPR_U32(ctx, 31, 0x17E158u);
    ctx->pc = 0x17E154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E150u;
            // 0x17e154: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DA68u;
    if (runtime->hasFunction(0x17DA68u)) {
        auto targetFn = runtime->lookupFunction(0x17DA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E158u; }
        if (ctx->pc != 0x17E158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DA68_0x17da68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E158u; }
        if (ctx->pc != 0x17E158u) { return; }
    }
    ctx->pc = 0x17E158u;
label_17e158:
    // 0x17e158: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17E158u;
    {
        const bool branch_taken_0x17e158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e158) {
            ctx->pc = 0x17E15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E158u;
            // 0x17e15c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E160u;
            goto label_17e160;
        }
    }
    ctx->pc = 0x17E160u;
label_17e160:
    // 0x17e160: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x17e160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17e164: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x17e164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e168: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17e168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_17e16c:
    // 0x17e16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17e174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e178: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17e178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e17c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17e17cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e180: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17e180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17e184: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17e184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e188: 0x3e00008  jr          $ra
    ctx->pc = 0x17E188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E188u;
            // 0x17e18c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E190u;
label_17e190:
    // 0x17e190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e194: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17e194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17e198: 0xc05f77a  jal         func_17DDE8
    ctx->pc = 0x17E198u;
    SET_GPR_U32(ctx, 31, 0x17E1A0u);
    ctx->pc = 0x17E19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E198u;
            // 0x17e19c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDE8u;
    if (runtime->hasFunction(0x17DDE8u)) {
        auto targetFn = runtime->lookupFunction(0x17DDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1A0u; }
        if (ctx->pc != 0x17E1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDE8_0x17dde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1A0u; }
        if (ctx->pc != 0x17E1A0u) { return; }
    }
    ctx->pc = 0x17E1A0u;
label_17e1a0:
    // 0x17e1a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e1a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17e1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e1a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17e1a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17e1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x17E1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1ACu;
            // 0x17e1b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E1B4u;
    // 0x17e1b4: 0x0  nop
    ctx->pc = 0x17e1b4u;
    // NOP
}
