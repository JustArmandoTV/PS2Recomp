#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3800
// Address: 0x3c3800 - 0x3c39f0
void sub_003C3800_0x3c3800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3800_0x3c3800");
#endif

    switch (ctx->pc) {
        case 0x3c3860u: goto label_3c3860;
        case 0x3c3870u: goto label_3c3870;
        case 0x3c3890u: goto label_3c3890;
        case 0x3c38b8u: goto label_3c38b8;
        case 0x3c38dcu: goto label_3c38dc;
        case 0x3c3918u: goto label_3c3918;
        case 0x3c3938u: goto label_3c3938;
        case 0x3c3960u: goto label_3c3960;
        case 0x3c39a0u: goto label_3c39a0;
        case 0x3c39c4u: goto label_3c39c4;
        case 0x3c39d4u: goto label_3c39d4;
        default: break;
    }

    ctx->pc = 0x3c3800u;

    // 0x3c3800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c3800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c3804: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c3804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c3808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c3808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c380c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c3810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c3810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c3814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c3814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3818: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c3818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c381c: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3c381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3c3820: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3c3820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c3824: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3c3824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3c3828: 0x8c830968  lw          $v1, 0x968($a0)
    ctx->pc = 0x3c3828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
    // 0x3c382c: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3C382Cu;
    {
        const bool branch_taken_0x3c382c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c382c) {
            ctx->pc = 0x3C3830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C382Cu;
            // 0x3c3830: 0x8c820964  lw          $v0, 0x964($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C38E4u;
            goto label_3c38e4;
        }
    }
    ctx->pc = 0x3C3834u;
    // 0x3c3834: 0x962200c0  lhu         $v0, 0xC0($s1)
    ctx->pc = 0x3c3834u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x3c3838: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c3838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c383c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x3c383cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c3840: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C3840u;
    {
        const bool branch_taken_0x3c3840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3840) {
            ctx->pc = 0x3C3868u;
            goto label_3c3868;
        }
    }
    ctx->pc = 0x3C3848u;
    // 0x3c3848: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c3848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c384c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3c384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3c3850: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c3850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c3854: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x3c3854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3c3858: 0xc0b82c4  jal         func_2E0B10
    ctx->pc = 0x3C3858u;
    SET_GPR_U32(ctx, 31, 0x3C3860u);
    ctx->pc = 0x3C385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3858u;
            // 0x3c385c: 0x26060820  addiu       $a2, $s0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3860u; }
        if (ctx->pc != 0x3C3860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3860u; }
        if (ctx->pc != 0x3C3860u) { return; }
    }
    ctx->pc = 0x3C3860u;
label_3c3860:
    // 0x3c3860: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C3860u;
    {
        const bool branch_taken_0x3c3860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3860u;
            // 0x3c3864: 0x962200c6  lhu         $v0, 0xC6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3860) {
            ctx->pc = 0x3C3894u;
            goto label_3c3894;
        }
    }
    ctx->pc = 0x3C3868u;
label_3c3868:
    // 0x3c3868: 0xc0cf0e4  jal         func_33C390
    ctx->pc = 0x3C3868u;
    SET_GPR_U32(ctx, 31, 0x3C3870u);
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3870u; }
        if (ctx->pc != 0x3C3870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3870u; }
        if (ctx->pc != 0x3C3870u) { return; }
    }
    ctx->pc = 0x3C3870u;
label_3c3870:
    // 0x3c3870: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x3c3870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3c3874: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3c3874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3c3878: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3c3878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3c387c: 0x26070820  addiu       $a3, $s0, 0x820
    ctx->pc = 0x3c387cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x3c3880: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c3880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c3884: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c3884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c3888: 0xc0b884c  jal         func_2E2130
    ctx->pc = 0x3C3888u;
    SET_GPR_U32(ctx, 31, 0x3C3890u);
    ctx->pc = 0x3C388Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3888u;
            // 0x3c388c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3890u; }
        if (ctx->pc != 0x3C3890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3890u; }
        if (ctx->pc != 0x3C3890u) { return; }
    }
    ctx->pc = 0x3C3890u;
label_3c3890:
    // 0x3c3890: 0x962200c6  lhu         $v0, 0xC6($s1)
    ctx->pc = 0x3c3890u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
label_3c3894:
    // 0x3c3894: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c3894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c3898: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x3c3898u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c389c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C389Cu;
    {
        const bool branch_taken_0x3c389c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c389c) {
            ctx->pc = 0x3C38C0u;
            goto label_3c38c0;
        }
    }
    ctx->pc = 0x3C38A4u;
    // 0x3c38a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c38a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c38a8: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x3c38a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x3c38ac: 0x26270070  addiu       $a3, $s1, 0x70
    ctx->pc = 0x3c38acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3c38b0: 0xc0fece8  jal         func_3FB3A0
    ctx->pc = 0x3C38B0u;
    SET_GPR_U32(ctx, 31, 0x3C38B8u);
    ctx->pc = 0x3C38B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C38B0u;
            // 0x3c38b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB3A0u;
    if (runtime->hasFunction(0x3FB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3FB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C38B8u; }
        if (ctx->pc != 0x3C38B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB3A0_0x3fb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C38B8u; }
        if (ctx->pc != 0x3C38B8u) { return; }
    }
    ctx->pc = 0x3C38B8u;
label_3c38b8:
    // 0x3c38b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C38B8u;
    {
        const bool branch_taken_0x3c38b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c38b8) {
            ctx->pc = 0x3C38DCu;
            goto label_3c38dc;
        }
    }
    ctx->pc = 0x3C38C0u;
label_3c38c0:
    // 0x3c38c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c38c4: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x3c38c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x3c38c8: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3c38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3c38cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c38ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c38d0: 0x8c47012c  lw          $a3, 0x12C($v0)
    ctx->pc = 0x3c38d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x3c38d4: 0xc0fec1c  jal         func_3FB070
    ctx->pc = 0x3C38D4u;
    SET_GPR_U32(ctx, 31, 0x3C38DCu);
    ctx->pc = 0x3C38D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C38D4u;
            // 0x3c38d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB070u;
    if (runtime->hasFunction(0x3FB070u)) {
        auto targetFn = runtime->lookupFunction(0x3FB070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C38DCu; }
        if (ctx->pc != 0x3C38DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB070_0x3fb070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C38DCu; }
        if (ctx->pc != 0x3C38DCu) { return; }
    }
    ctx->pc = 0x3C38DCu;
label_3c38dc:
    // 0x3c38dc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3C38DCu;
    {
        const bool branch_taken_0x3c38dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C38E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C38DCu;
            // 0x3c38e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c38dc) {
            ctx->pc = 0x3C39D8u;
            goto label_3c39d8;
        }
    }
    ctx->pc = 0x3C38E4u;
label_3c38e4:
    // 0x3c38e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c38e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3c38e8: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x3C38E8u;
    {
        const bool branch_taken_0x3c38e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c38e8) {
            ctx->pc = 0x3C38ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C38E8u;
            // 0x3c38ec: 0x262400d0  addiu       $a0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C39CCu;
            goto label_3c39cc;
        }
    }
    ctx->pc = 0x3C38F0u;
    // 0x3c38f0: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x3c38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x3c38f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C38F4u;
    {
        const bool branch_taken_0x3c38f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c38f4) {
            ctx->pc = 0x3C38F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C38F4u;
            // 0x3c38f8: 0xa62000c0  sh          $zero, 0xC0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C390Cu;
            goto label_3c390c;
        }
    }
    ctx->pc = 0x3C38FCu;
    // 0x3c38fc: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x3c38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x3c3900: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3C3900u;
    {
        const bool branch_taken_0x3c3900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3900) {
            ctx->pc = 0x3C3904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3900u;
            // 0x3c3904: 0x962200c6  lhu         $v0, 0xC6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C393Cu;
            goto label_3c393c;
        }
    }
    ctx->pc = 0x3C3908u;
    // 0x3c3908: 0xa62000c0  sh          $zero, 0xC0($s1)
    ctx->pc = 0x3c3908u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 0));
label_3c390c:
    // 0x3c390c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c3910: 0xc0cf0e4  jal         func_33C390
    ctx->pc = 0x3C3910u;
    SET_GPR_U32(ctx, 31, 0x3C3918u);
    ctx->pc = 0x3C3914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3910u;
            // 0x3c3914: 0xa62200c4  sh          $v0, 0xC4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3918u; }
        if (ctx->pc != 0x3C3918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3918u; }
        if (ctx->pc != 0x3C3918u) { return; }
    }
    ctx->pc = 0x3C3918u;
label_3c3918:
    // 0x3c3918: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x3c3918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3c391c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3c391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3c3920: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3c3920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3c3924: 0x26070820  addiu       $a3, $s0, 0x820
    ctx->pc = 0x3c3924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x3c3928: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c3928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c392c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c392cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c3930: 0xc0b884c  jal         func_2E2130
    ctx->pc = 0x3C3930u;
    SET_GPR_U32(ctx, 31, 0x3C3938u);
    ctx->pc = 0x3C3934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3930u;
            // 0x3c3934: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3938u; }
        if (ctx->pc != 0x3C3938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3938u; }
        if (ctx->pc != 0x3C3938u) { return; }
    }
    ctx->pc = 0x3C3938u;
label_3c3938:
    // 0x3c3938: 0x962200c6  lhu         $v0, 0xC6($s1)
    ctx->pc = 0x3c3938u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
label_3c393c:
    // 0x3c393c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c3940: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x3c3940u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c3944: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C3944u;
    {
        const bool branch_taken_0x3c3944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3944) {
            ctx->pc = 0x3C3948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3944u;
            // 0x3c3948: 0x8e02069c  lw          $v0, 0x69C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3968u;
            goto label_3c3968;
        }
    }
    ctx->pc = 0x3C394Cu;
    // 0x3c394c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c394cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3950: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x3c3950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x3c3954: 0x26270070  addiu       $a3, $s1, 0x70
    ctx->pc = 0x3c3954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3c3958: 0xc0fece8  jal         func_3FB3A0
    ctx->pc = 0x3C3958u;
    SET_GPR_U32(ctx, 31, 0x3C3960u);
    ctx->pc = 0x3C395Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3958u;
            // 0x3c395c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB3A0u;
    if (runtime->hasFunction(0x3FB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3FB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3960u; }
        if (ctx->pc != 0x3C3960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB3A0_0x3fb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3960u; }
        if (ctx->pc != 0x3C3960u) { return; }
    }
    ctx->pc = 0x3C3960u;
label_3c3960:
    // 0x3c3960: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3C3960u;
    {
        const bool branch_taken_0x3c3960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3960) {
            ctx->pc = 0x3C39D4u;
            goto label_3c39d4;
        }
    }
    ctx->pc = 0x3C3968u;
label_3c3968:
    // 0x3c3968: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3c3968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c396c: 0x1444000e  bne         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C396Cu;
    {
        const bool branch_taken_0x3c396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c396c) {
            ctx->pc = 0x3C39A8u;
            goto label_3c39a8;
        }
    }
    ctx->pc = 0x3C3974u;
    // 0x3c3974: 0x96030640  lhu         $v1, 0x640($s0)
    ctx->pc = 0x3c3974u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x3c3978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c397c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C397Cu;
    {
        const bool branch_taken_0x3c397c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c397c) {
            ctx->pc = 0x3C3980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C397Cu;
            // 0x3c3980: 0x262400d0  addiu       $a0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3990u;
            goto label_3c3990;
        }
    }
    ctx->pc = 0x3C3984u;
    // 0x3c3984: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C3984u;
    {
        const bool branch_taken_0x3c3984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c3984) {
            ctx->pc = 0x3C39A8u;
            goto label_3c39a8;
        }
    }
    ctx->pc = 0x3C398Cu;
    // 0x3c398c: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x3c398cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_3c3990:
    // 0x3c3990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c3990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3994: 0x260705f0  addiu       $a3, $s0, 0x5F0
    ctx->pc = 0x3c3994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    // 0x3c3998: 0xc0fece8  jal         func_3FB3A0
    ctx->pc = 0x3C3998u;
    SET_GPR_U32(ctx, 31, 0x3C39A0u);
    ctx->pc = 0x3C399Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3998u;
            // 0x3c399c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB3A0u;
    if (runtime->hasFunction(0x3FB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3FB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C39A0u; }
        if (ctx->pc != 0x3C39A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB3A0_0x3fb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C39A0u; }
        if (ctx->pc != 0x3C39A0u) { return; }
    }
    ctx->pc = 0x3C39A0u;
label_3c39a0:
    // 0x3c39a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C39A0u;
    {
        const bool branch_taken_0x3c39a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c39a0) {
            ctx->pc = 0x3C39D4u;
            goto label_3c39d4;
        }
    }
    ctx->pc = 0x3C39A8u;
label_3c39a8:
    // 0x3c39a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c39ac: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x3c39acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x3c39b0: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3c39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3c39b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c39b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c39b8: 0x8c47012c  lw          $a3, 0x12C($v0)
    ctx->pc = 0x3c39b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x3c39bc: 0xc0fec1c  jal         func_3FB070
    ctx->pc = 0x3C39BCu;
    SET_GPR_U32(ctx, 31, 0x3C39C4u);
    ctx->pc = 0x3C39C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C39BCu;
            // 0x3c39c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB070u;
    if (runtime->hasFunction(0x3FB070u)) {
        auto targetFn = runtime->lookupFunction(0x3FB070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C39C4u; }
        if (ctx->pc != 0x3C39C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB070_0x3fb070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C39C4u; }
        if (ctx->pc != 0x3C39C4u) { return; }
    }
    ctx->pc = 0x3C39C4u;
label_3c39c4:
    // 0x3c39c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C39C4u;
    {
        const bool branch_taken_0x3c39c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c39c4) {
            ctx->pc = 0x3C39D4u;
            goto label_3c39d4;
        }
    }
    ctx->pc = 0x3C39CCu;
label_3c39cc:
    // 0x3c39cc: 0xc0febe0  jal         func_3FAF80
    ctx->pc = 0x3C39CCu;
    SET_GPR_U32(ctx, 31, 0x3C39D4u);
    ctx->pc = 0x3C39D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C39CCu;
            // 0x3c39d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FAF80u;
    if (runtime->hasFunction(0x3FAF80u)) {
        auto targetFn = runtime->lookupFunction(0x3FAF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C39D4u; }
        if (ctx->pc != 0x3C39D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FAF80_0x3faf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C39D4u; }
        if (ctx->pc != 0x3C39D4u) { return; }
    }
    ctx->pc = 0x3C39D4u;
label_3c39d4:
    // 0x3c39d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c39d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c39d8:
    // 0x3c39d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c39d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c39dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c39dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c39e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C39E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C39E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C39E0u;
            // 0x3c39e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C39E8u;
    // 0x3c39e8: 0x0  nop
    ctx->pc = 0x3c39e8u;
    // NOP
    // 0x3c39ec: 0x0  nop
    ctx->pc = 0x3c39ecu;
    // NOP
}
