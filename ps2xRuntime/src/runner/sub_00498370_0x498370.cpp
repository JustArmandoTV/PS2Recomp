#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00498370
// Address: 0x498370 - 0x4984f0
void sub_00498370_0x498370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498370_0x498370");
#endif

    switch (ctx->pc) {
        case 0x4983a4u: goto label_4983a4;
        case 0x4983b4u: goto label_4983b4;
        case 0x498404u: goto label_498404;
        case 0x498418u: goto label_498418;
        case 0x498438u: goto label_498438;
        case 0x498474u: goto label_498474;
        case 0x498488u: goto label_498488;
        default: break;
    }

    ctx->pc = 0x498370u;

    // 0x498370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x498370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x498374: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x498374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x498378: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x498378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x49837c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49837cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x498380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x498380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x498384: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x498384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x498388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49838c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49838cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498390: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x498390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498394: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x498394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x498398: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x498398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49839c: 0xc04a508  jal         func_129420
    ctx->pc = 0x49839Cu;
    SET_GPR_U32(ctx, 31, 0x4983A4u);
    ctx->pc = 0x4983A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49839Cu;
            // 0x4983a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4983A4u; }
        if (ctx->pc != 0x4983A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4983A4u; }
        if (ctx->pc != 0x4983A4u) { return; }
    }
    ctx->pc = 0x4983A4u;
label_4983a4:
    // 0x4983a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4983a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4983a8: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x4983a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4983ac: 0xc04a508  jal         func_129420
    ctx->pc = 0x4983ACu;
    SET_GPR_U32(ctx, 31, 0x4983B4u);
    ctx->pc = 0x4983B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4983ACu;
            // 0x4983b0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4983B4u; }
        if (ctx->pc != 0x4983B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4983B4u; }
        if (ctx->pc != 0x4983B4u) { return; }
    }
    ctx->pc = 0x4983B4u;
label_4983b4:
    // 0x4983b4: 0x97a4005e  lhu         $a0, 0x5E($sp)
    ctx->pc = 0x4983b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x4983b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4983b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4983bc: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4983BCu;
    {
        const bool branch_taken_0x4983bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4983bc) {
            ctx->pc = 0x4983C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4983BCu;
            // 0x4983c0: 0x97a2005c  lhu         $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4983E4u;
            goto label_4983e4;
        }
    }
    ctx->pc = 0x4983C4u;
    // 0x4983c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4983c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4983c8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4983c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4983cc: 0xac407bb8  sw          $zero, 0x7BB8($v0)
    ctx->pc = 0x4983ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31672), GPR_U32(ctx, 0));
    // 0x4983d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4983d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4983d4: 0xac607bc0  sw          $zero, 0x7BC0($v1)
    ctx->pc = 0x4983d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31680), GPR_U32(ctx, 0));
    // 0x4983d8: 0xac407bc8  sw          $zero, 0x7BC8($v0)
    ctx->pc = 0x4983d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31688), GPR_U32(ctx, 0));
    // 0x4983dc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4983dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4983e0: 0x97a2005c  lhu         $v0, 0x5C($sp)
    ctx->pc = 0x4983e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
label_4983e4:
    // 0x4983e4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4983e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4983e8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4983E8u;
    {
        const bool branch_taken_0x4983e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4983e8) {
            ctx->pc = 0x498440u;
            goto label_498440;
        }
    }
    ctx->pc = 0x4983F0u;
    // 0x4983f0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x4983f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4983f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4983f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4983f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4983f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4983fc: 0xc0400c4  jal         func_100310
    ctx->pc = 0x4983FCu;
    SET_GPR_U32(ctx, 31, 0x498404u);
    ctx->pc = 0x498400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4983FCu;
            // 0x498400: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498404u; }
        if (ctx->pc != 0x498404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498404u; }
        if (ctx->pc != 0x498404u) { return; }
    }
    ctx->pc = 0x498404u;
label_498404:
    // 0x498404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x498404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498408: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x498408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x49840c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498410: 0xc04a508  jal         func_129420
    ctx->pc = 0x498410u;
    SET_GPR_U32(ctx, 31, 0x498418u);
    ctx->pc = 0x498414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498410u;
            // 0x498414: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498418u; }
        if (ctx->pc != 0x498418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498418u; }
        if (ctx->pc != 0x498418u) { return; }
    }
    ctx->pc = 0x498418u;
label_498418:
    // 0x498418: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x498418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x49841c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49841cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x498420: 0xac507bb8  sw          $s0, 0x7BB8($v0)
    ctx->pc = 0x498420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31672), GPR_U32(ctx, 16));
    // 0x498424: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x498424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x498428: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x498428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x49842c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x49842cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498430: 0xc04a508  jal         func_129420
    ctx->pc = 0x498430u;
    SET_GPR_U32(ctx, 31, 0x498438u);
    ctx->pc = 0x498434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498430u;
            // 0x498434: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498438u; }
        if (ctx->pc != 0x498438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498438u; }
        if (ctx->pc != 0x498438u) { return; }
    }
    ctx->pc = 0x498438u;
label_498438:
    // 0x498438: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x498438u;
    {
        const bool branch_taken_0x498438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498438u;
            // 0x49843c: 0x97a2005c  lhu         $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498438) {
            ctx->pc = 0x498454u;
            goto label_498454;
        }
    }
    ctx->pc = 0x498440u;
label_498440:
    // 0x498440: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x498440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x498444: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x498444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x498448: 0x8c427bb8  lw          $v0, 0x7BB8($v0)
    ctx->pc = 0x498448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31672)));
    // 0x49844c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x49844cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x498450: 0x97a2005c  lhu         $v0, 0x5C($sp)
    ctx->pc = 0x498450u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
label_498454:
    // 0x498454: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x498454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x498458: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x498458u;
    {
        const bool branch_taken_0x498458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498458) {
            ctx->pc = 0x4984A4u;
            goto label_4984a4;
        }
    }
    ctx->pc = 0x498460u;
    // 0x498460: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x498460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x498464: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498468: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x498468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49846c: 0xc040140  jal         func_100500
    ctx->pc = 0x49846Cu;
    SET_GPR_U32(ctx, 31, 0x498474u);
    ctx->pc = 0x498470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49846Cu;
            // 0x498470: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498474u; }
        if (ctx->pc != 0x498474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498474u; }
        if (ctx->pc != 0x498474u) { return; }
    }
    ctx->pc = 0x498474u;
label_498474:
    // 0x498474: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x498474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x498478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49847c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498480: 0xc04a508  jal         func_129420
    ctx->pc = 0x498480u;
    SET_GPR_U32(ctx, 31, 0x498488u);
    ctx->pc = 0x498484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498480u;
            // 0x498484: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498488u; }
        if (ctx->pc != 0x498488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498488u; }
        if (ctx->pc != 0x498488u) { return; }
    }
    ctx->pc = 0x498488u;
label_498488:
    // 0x498488: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x498488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x49848c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x498490: 0xac537bc8  sw          $s3, 0x7BC8($v0)
    ctx->pc = 0x498490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31688), GPR_U32(ctx, 19));
    // 0x498494: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x498494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x498498: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x498498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49849c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x49849Cu;
    {
        const bool branch_taken_0x49849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4984A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49849Cu;
            // 0x4984a0: 0xac537bc0  sw          $s3, 0x7BC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31680), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49849c) {
            ctx->pc = 0x4984C4u;
            goto label_4984c4;
        }
    }
    ctx->pc = 0x4984A4u;
label_4984a4:
    // 0x4984a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4984a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4984a8: 0x8c427bc0  lw          $v0, 0x7BC0($v0)
    ctx->pc = 0x4984a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31680)));
    // 0x4984ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4984ACu;
    {
        const bool branch_taken_0x4984ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4984ac) {
            ctx->pc = 0x4984B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4984ACu;
            // 0x4984b0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4984C0u;
            goto label_4984c0;
        }
    }
    ctx->pc = 0x4984B4u;
    // 0x4984b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4984b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4984b8: 0x24427bd0  addiu       $v0, $v0, 0x7BD0
    ctx->pc = 0x4984b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31696));
    // 0x4984bc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4984bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4984c0:
    // 0x4984c0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4984c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4984c4:
    // 0x4984c4: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x4984c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x4984c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4984c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4984cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4984ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4984d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4984d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4984d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4984d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4984d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4984d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4984dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4984DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4984E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4984DCu;
            // 0x4984e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4984E4u;
    // 0x4984e4: 0x0  nop
    ctx->pc = 0x4984e4u;
    // NOP
    // 0x4984e8: 0x0  nop
    ctx->pc = 0x4984e8u;
    // NOP
    // 0x4984ec: 0x0  nop
    ctx->pc = 0x4984ecu;
    // NOP
}
