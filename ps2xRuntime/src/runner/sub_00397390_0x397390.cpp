#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00397390
// Address: 0x397390 - 0x397430
void sub_00397390_0x397390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397390_0x397390");
#endif

    switch (ctx->pc) {
        case 0x3973c4u: goto label_3973c4;
        case 0x3973f8u: goto label_3973f8;
        case 0x39740cu: goto label_39740c;
        default: break;
    }

    ctx->pc = 0x397390u;

    // 0x397390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x397394: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x397398: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x397398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39739c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3973a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3973a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3973a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3973a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3973a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3973a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3973ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3973acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3973b0: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x3973b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x3973b4: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3973B4u;
    {
        const bool branch_taken_0x3973b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3973B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3973B4u;
            // 0x3973b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3973b4) {
            ctx->pc = 0x39740Cu;
            goto label_39740c;
        }
    }
    ctx->pc = 0x3973BCu;
    // 0x3973bc: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x3973BCu;
    SET_GPR_U32(ctx, 31, 0x3973C4u);
    ctx->pc = 0x3973C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3973BCu;
            // 0x3973c0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3973C4u; }
        if (ctx->pc != 0x3973C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3973C4u; }
        if (ctx->pc != 0x3973C4u) { return; }
    }
    ctx->pc = 0x3973C4u;
label_3973c4:
    // 0x3973c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3973c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3973c8: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x3973c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x3973cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3973ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3973d0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3973d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x3973d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3973d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3973d8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x3973d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x3973dc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3973dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3973e0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3973e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3973e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3973E4u;
    {
        const bool branch_taken_0x3973e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3973E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3973E4u;
            // 0x3973e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3973e4) {
            ctx->pc = 0x397400u;
            goto label_397400;
        }
    }
    ctx->pc = 0x3973ECu;
    // 0x3973ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3973ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3973f0: 0xc055754  jal         func_155D50
    ctx->pc = 0x3973F0u;
    SET_GPR_U32(ctx, 31, 0x3973F8u);
    ctx->pc = 0x3973F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3973F0u;
            // 0x3973f4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3973F8u; }
        if (ctx->pc != 0x3973F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3973F8u; }
        if (ctx->pc != 0x3973F8u) { return; }
    }
    ctx->pc = 0x3973F8u;
label_3973f8:
    // 0x3973f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3973F8u;
    {
        const bool branch_taken_0x3973f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3973FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3973F8u;
            // 0x3973fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3973f8) {
            ctx->pc = 0x397410u;
            goto label_397410;
        }
    }
    ctx->pc = 0x397400u;
label_397400:
    // 0x397400: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x397400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397404: 0xc055990  jal         func_156640
    ctx->pc = 0x397404u;
    SET_GPR_U32(ctx, 31, 0x39740Cu);
    ctx->pc = 0x397408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397404u;
            // 0x397408: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39740Cu; }
        if (ctx->pc != 0x39740Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39740Cu; }
        if (ctx->pc != 0x39740Cu) { return; }
    }
    ctx->pc = 0x39740Cu;
label_39740c:
    // 0x39740c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39740cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_397410:
    // 0x397410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x397410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x397414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x397418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39741c: 0x3e00008  jr          $ra
    ctx->pc = 0x39741Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39741Cu;
            // 0x397420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x397424u;
    // 0x397424: 0x0  nop
    ctx->pc = 0x397424u;
    // NOP
    // 0x397428: 0x0  nop
    ctx->pc = 0x397428u;
    // NOP
    // 0x39742c: 0x0  nop
    ctx->pc = 0x39742cu;
    // NOP
}
