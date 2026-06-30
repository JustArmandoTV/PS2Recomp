#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D8E0
// Address: 0x17d8e0 - 0x17da68
void sub_0017D8E0_0x17d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D8E0_0x17d8e0");
#endif

    switch (ctx->pc) {
        case 0x17d930u: goto label_17d930;
        case 0x17d944u: goto label_17d944;
        case 0x17d964u: goto label_17d964;
        case 0x17d974u: goto label_17d974;
        case 0x17d97cu: goto label_17d97c;
        case 0x17d980u: goto label_17d980;
        case 0x17d988u: goto label_17d988;
        case 0x17d998u: goto label_17d998;
        case 0x17d9a0u: goto label_17d9a0;
        case 0x17d9acu: goto label_17d9ac;
        case 0x17d9c8u: goto label_17d9c8;
        case 0x17d9e4u: goto label_17d9e4;
        case 0x17d9f8u: goto label_17d9f8;
        case 0x17da0cu: goto label_17da0c;
        case 0x17da20u: goto label_17da20;
        case 0x17da28u: goto label_17da28;
        case 0x17da30u: goto label_17da30;
        case 0x17da38u: goto label_17da38;
        case 0x17da48u: goto label_17da48;
        default: break;
    }

    ctx->pc = 0x17d8e0u;

    // 0x17d8e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17d8e4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x17d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x17d8e8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x17d8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x17d8ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17d8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8f0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x17d8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x17d8f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17d8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8f8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x17d8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x17d8fc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17d900: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x17d900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x17d904: 0x24656030  addiu       $a1, $v1, 0x6030
    ctx->pc = 0x17d904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24624));
    // 0x17d908: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17d908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17d90c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d910: 0x8a230003  lwl         $v1, 0x3($s1)
    ctx->pc = 0x17d910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x17d914: 0x9a230000  lwr         $v1, 0x0($s1)
    ctx->pc = 0x17d914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x17d918: 0x82260004  lb          $a2, 0x4($s1)
    ctx->pc = 0x17d918u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17d91c: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x17d91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17d920: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x17d920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17d924: 0xa0460004  sb          $a2, 0x4($v0)
    ctx->pc = 0x17d924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x17d928: 0xc04af22  jal         func_12BC88
    ctx->pc = 0x17D928u;
    SET_GPR_U32(ctx, 31, 0x17D930u);
    ctx->pc = 0x17D92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D928u;
            // 0x17d92c: 0xa3a00044  sb          $zero, 0x44($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BC88u;
    if (runtime->hasFunction(0x12BC88u)) {
        auto targetFn = runtime->lookupFunction(0x12BC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D930u; }
        if (ctx->pc != 0x17D930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BC88_0x12bc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D930u; }
        if (ctx->pc != 0x17D930u) { return; }
    }
    ctx->pc = 0x17D930u;
label_17d930:
    // 0x17d930: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D930u;
    {
        const bool branch_taken_0x17d930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d930) {
            ctx->pc = 0x17D934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D930u;
            // 0x17d934: 0x3c13005e  lui         $s3, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D950u;
            goto label_17d950;
        }
    }
    ctx->pc = 0x17D938u;
    // 0x17d938: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x17d938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x17d93c: 0xc05fd82  jal         func_17F608
    ctx->pc = 0x17D93Cu;
    SET_GPR_U32(ctx, 31, 0x17D944u);
    ctx->pc = 0x17D940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D93Cu;
            // 0x17d940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F608u;
    if (runtime->hasFunction(0x17F608u)) {
        auto targetFn = runtime->lookupFunction(0x17F608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D944u; }
        if (ctx->pc != 0x17D944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F608_0x17f608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D944u; }
        if (ctx->pc != 0x17D944u) { return; }
    }
    ctx->pc = 0x17D944u;
label_17d944:
    // 0x17d944: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x17D944u;
    {
        const bool branch_taken_0x17d944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D944u;
            // 0x17d948: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d944) {
            ctx->pc = 0x17DA50u;
            goto label_17da50;
        }
    }
    ctx->pc = 0x17D94Cu;
    // 0x17d94c: 0x0  nop
    ctx->pc = 0x17d94cu;
    // NOP
label_17d950:
    // 0x17d950: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x17d950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d954: 0x26706668  addiu       $s0, $s3, 0x6668
    ctx->pc = 0x17d954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 26216));
    // 0x17d958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d95c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17D95Cu;
    SET_GPR_U32(ctx, 31, 0x17D964u);
    ctx->pc = 0x17D960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D95Cu;
            // 0x17d960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D964u; }
        if (ctx->pc != 0x17D964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D964u; }
        if (ctx->pc != 0x17D964u) { return; }
    }
    ctx->pc = 0x17D964u;
label_17d964:
    // 0x17d964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d96c: 0xc05f55e  jal         func_17D578
    ctx->pc = 0x17D96Cu;
    SET_GPR_U32(ctx, 31, 0x17D974u);
    ctx->pc = 0x17D970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D96Cu;
            // 0x17d970: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D578u;
    if (runtime->hasFunction(0x17D578u)) {
        auto targetFn = runtime->lookupFunction(0x17D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D974u; }
        if (ctx->pc != 0x17D974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D578_0x17d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D974u; }
        if (ctx->pc != 0x17D974u) { return; }
    }
    ctx->pc = 0x17D974u;
label_17d974:
    // 0x17d974: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17D974u;
    SET_GPR_U32(ctx, 31, 0x17D97Cu);
    ctx->pc = 0x17D978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D974u;
            // 0x17d978: 0x34049000  ori         $a0, $zero, 0x9000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D97Cu; }
        if (ctx->pc != 0x17D97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D97Cu; }
        if (ctx->pc != 0x17D97Cu) { return; }
    }
    ctx->pc = 0x17D97Cu;
label_17d97c:
    // 0x17d97c: 0x0  nop
    ctx->pc = 0x17d97cu;
    // NOP
label_17d980:
    // 0x17d980: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17D980u;
    SET_GPR_U32(ctx, 31, 0x17D988u);
    ctx->pc = 0x17D984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D980u;
            // 0x17d984: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D988u; }
        if (ctx->pc != 0x17D988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D988u; }
        if (ctx->pc != 0x17D988u) { return; }
    }
    ctx->pc = 0x17D988u;
label_17d988:
    // 0x17d988: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x17D988u;
    {
        const bool branch_taken_0x17d988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x17d988) {
            ctx->pc = 0x17D980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d980;
        }
    }
    ctx->pc = 0x17D990u;
    // 0x17d990: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17D990u;
    SET_GPR_U32(ctx, 31, 0x17D998u);
    ctx->pc = 0x17D994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D990u;
            // 0x17d994: 0x34049001  ori         $a0, $zero, 0x9001 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36865);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D998u; }
        if (ctx->pc != 0x17D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D998u; }
        if (ctx->pc != 0x17D998u) { return; }
    }
    ctx->pc = 0x17D998u;
label_17d998:
    // 0x17d998: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17D998u;
    SET_GPR_U32(ctx, 31, 0x17D9A0u);
    ctx->pc = 0x17D99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D998u;
            // 0x17d99c: 0x34049100  ori         $a0, $zero, 0x9100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37120);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9A0u; }
        if (ctx->pc != 0x17D9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9A0u; }
        if (ctx->pc != 0x17D9A0u) { return; }
    }
    ctx->pc = 0x17D9A0u;
label_17d9a0:
    // 0x17d9a0: 0x26656668  addiu       $a1, $s3, 0x6668
    ctx->pc = 0x17d9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 26216));
    // 0x17d9a4: 0xc05f24e  jal         func_17C938
    ctx->pc = 0x17D9A4u;
    SET_GPR_U32(ctx, 31, 0x17D9ACu);
    ctx->pc = 0x17D9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9A4u;
            // 0x17d9a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C938u;
    if (runtime->hasFunction(0x17C938u)) {
        auto targetFn = runtime->lookupFunction(0x17C938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9ACu; }
        if (ctx->pc != 0x17D9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C938_0x17c938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9ACu; }
        if (ctx->pc != 0x17D9ACu) { return; }
    }
    ctx->pc = 0x17D9ACu;
label_17d9ac:
    // 0x17d9ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D9ACu;
    {
        const bool branch_taken_0x17d9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d9ac) {
            ctx->pc = 0x17D9C0u;
            goto label_17d9c0;
        }
    }
    ctx->pc = 0x17D9B4u;
    // 0x17d9b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17D9B4u;
    {
        const bool branch_taken_0x17d9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9B4u;
            // 0x17d9b8: 0x34049101  ori         $a0, $zero, 0x9101 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37121);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9b4) {
            ctx->pc = 0x17DA04u;
            goto label_17da04;
        }
    }
    ctx->pc = 0x17D9BCu;
    // 0x17d9bc: 0x0  nop
    ctx->pc = 0x17d9bcu;
    // NOP
label_17d9c0:
    // 0x17d9c0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17D9C0u;
    SET_GPR_U32(ctx, 31, 0x17D9C8u);
    ctx->pc = 0x17D9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9C0u;
            // 0x17d9c4: 0x34049102  ori         $a0, $zero, 0x9102 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37122);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9C8u; }
        if (ctx->pc != 0x17D9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9C8u; }
        if (ctx->pc != 0x17D9C8u) { return; }
    }
    ctx->pc = 0x17D9C8u;
label_17d9c8:
    // 0x17d9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d9cc: 0x34049200  ori         $a0, $zero, 0x9200
    ctx->pc = 0x17d9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37376);
    // 0x17d9d0: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x17d9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x17d9d4: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x17d9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d9d8: 0xa3a00032  sb          $zero, 0x32($sp)
    ctx->pc = 0x17d9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d9dc: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17D9DCu;
    SET_GPR_U32(ctx, 31, 0x17D9E4u);
    ctx->pc = 0x17D9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9DCu;
            // 0x17d9e0: 0xa3a00033  sb          $zero, 0x33($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9E4u; }
        if (ctx->pc != 0x17D9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9E4u; }
        if (ctx->pc != 0x17D9E4u) { return; }
    }
    ctx->pc = 0x17D9E4u;
label_17d9e4:
    // 0x17d9e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d9e8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x17d9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17d9ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17d9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9f0: 0xc047d7c  jal         func_11F5F0
    ctx->pc = 0x17D9F0u;
    SET_GPR_U32(ctx, 31, 0x17D9F8u);
    ctx->pc = 0x17D9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9F0u;
            // 0x17d9f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5F0u;
    if (runtime->hasFunction(0x11F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x11F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9F8u; }
        if (ctx->pc != 0x17D9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F5F0_0x11f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9F8u; }
        if (ctx->pc != 0x17D9F8u) { return; }
    }
    ctx->pc = 0x17D9F8u;
label_17d9f8:
    // 0x17d9f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D9F8u;
    {
        const bool branch_taken_0x17d9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d9f8) {
            ctx->pc = 0x17DA18u;
            goto label_17da18;
        }
    }
    ctx->pc = 0x17DA00u;
    // 0x17da00: 0x34049201  ori         $a0, $zero, 0x9201
    ctx->pc = 0x17da00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37377);
label_17da04:
    // 0x17da04: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17DA04u;
    SET_GPR_U32(ctx, 31, 0x17DA0Cu);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA0Cu; }
        if (ctx->pc != 0x17DA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA0Cu; }
        if (ctx->pc != 0x17DA0Cu) { return; }
    }
    ctx->pc = 0x17DA0Cu;
label_17da0c:
    // 0x17da0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17DA0Cu;
    {
        const bool branch_taken_0x17da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA0Cu;
            // 0x17da10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da0c) {
            ctx->pc = 0x17DA4Cu;
            goto label_17da4c;
        }
    }
    ctx->pc = 0x17DA14u;
    // 0x17da14: 0x0  nop
    ctx->pc = 0x17da14u;
    // NOP
label_17da18:
    // 0x17da18: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17DA18u;
    SET_GPR_U32(ctx, 31, 0x17DA20u);
    ctx->pc = 0x17DA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA18u;
            // 0x17da1c: 0x34049202  ori         $a0, $zero, 0x9202 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37378);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA20u; }
        if (ctx->pc != 0x17DA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA20u; }
        if (ctx->pc != 0x17DA20u) { return; }
    }
    ctx->pc = 0x17DA20u;
label_17da20:
    // 0x17da20: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17DA20u;
    SET_GPR_U32(ctx, 31, 0x17DA28u);
    ctx->pc = 0x17DA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA20u;
            // 0x17da24: 0x34049300  ori         $a0, $zero, 0x9300 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA28u; }
        if (ctx->pc != 0x17DA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA28u; }
        if (ctx->pc != 0x17DA28u) { return; }
    }
    ctx->pc = 0x17DA28u;
label_17da28:
    // 0x17da28: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17da2c: 0x0  nop
    ctx->pc = 0x17da2cu;
    // NOP
label_17da30:
    // 0x17da30: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17DA30u;
    SET_GPR_U32(ctx, 31, 0x17DA38u);
    ctx->pc = 0x17DA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA30u;
            // 0x17da34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA38u; }
        if (ctx->pc != 0x17DA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA38u; }
        if (ctx->pc != 0x17DA38u) { return; }
    }
    ctx->pc = 0x17DA38u;
label_17da38:
    // 0x17da38: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x17DA38u;
    {
        const bool branch_taken_0x17da38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x17da38) {
            ctx->pc = 0x17DA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17da30;
        }
    }
    ctx->pc = 0x17DA40u;
    // 0x17da40: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17DA40u;
    SET_GPR_U32(ctx, 31, 0x17DA48u);
    ctx->pc = 0x17DA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA40u;
            // 0x17da44: 0x34049301  ori         $a0, $zero, 0x9301 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA48u; }
        if (ctx->pc != 0x17DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA48u; }
        if (ctx->pc != 0x17DA48u) { return; }
    }
    ctx->pc = 0x17DA48u;
label_17da48:
    // 0x17da48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17da4c:
    // 0x17da4c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x17da4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17da50:
    // 0x17da50: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x17da50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17da54: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x17da54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17da58: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x17da58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17da5c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17da5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17da60: 0x3e00008  jr          $ra
    ctx->pc = 0x17DA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA60u;
            // 0x17da64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DA68u;
}
