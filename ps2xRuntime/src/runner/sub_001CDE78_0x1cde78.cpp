#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDE78
// Address: 0x1cde78 - 0x1ce048
void sub_001CDE78_0x1cde78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDE78_0x1cde78");
#endif

    switch (ctx->pc) {
        case 0x1cdec0u: goto label_1cdec0;
        case 0x1cdee8u: goto label_1cdee8;
        case 0x1cdf04u: goto label_1cdf04;
        case 0x1cdf24u: goto label_1cdf24;
        case 0x1cdf3cu: goto label_1cdf3c;
        case 0x1cdf80u: goto label_1cdf80;
        case 0x1cdf98u: goto label_1cdf98;
        case 0x1cdfa4u: goto label_1cdfa4;
        case 0x1cdfc8u: goto label_1cdfc8;
        case 0x1cdfd8u: goto label_1cdfd8;
        case 0x1cdfe0u: goto label_1cdfe0;
        case 0x1cdfecu: goto label_1cdfec;
        case 0x1cdffcu: goto label_1cdffc;
        case 0x1ce004u: goto label_1ce004;
        case 0x1ce01cu: goto label_1ce01c;
        default: break;
    }

    ctx->pc = 0x1cde78u;

    // 0x1cde78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1cde78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1cde7c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1cde7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1cde80: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1cde80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1cde84: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1cde84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde88: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1cde88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1cde8c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1cde8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde90: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1cde90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1cde94: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1cde94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde98: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1cde98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1cde9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1cde9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdea0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1cdea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1cdea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdea8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1cdea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1cdeac: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDEACu;
    {
        const bool branch_taken_0x1cdeac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEACu;
            // 0x1cdeb0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdeac) {
            ctx->pc = 0x1CDEC8u;
            goto label_1cdec8;
        }
    }
    ctx->pc = 0x1CDEB4u;
    // 0x1cdeb4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1cdeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1cdeb8: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1CDEB8u;
    SET_GPR_U32(ctx, 31, 0x1CDEC0u);
    ctx->pc = 0x1CDEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEB8u;
            // 0x1cdebc: 0x2484c1a0  addiu       $a0, $a0, -0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEC0u; }
        if (ctx->pc != 0x1CDEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEC0u; }
        if (ctx->pc != 0x1CDEC0u) { return; }
    }
    ctx->pc = 0x1CDEC0u;
label_1cdec0:
    // 0x1cdec0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1CDEC0u;
    {
        const bool branch_taken_0x1cdec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEC0u;
            // 0x1cdec4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdec0) {
            ctx->pc = 0x1CE020u;
            goto label_1ce020;
        }
    }
    ctx->pc = 0x1CDEC8u;
label_1cdec8:
    // 0x1cdec8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1cdec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1cdecc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1cdeccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cded0: 0x2442c1c8  addiu       $v0, $v0, -0x3E38
    ctx->pc = 0x1cded0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951368));
    // 0x1cded4: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x1cded4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x1cded8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1cded8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1cdedc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cdedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdee0: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x1CDEE0u;
    SET_GPR_U32(ctx, 31, 0x1CDEE8u);
    ctx->pc = 0x1CDEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEE0u;
            // 0x1cdee4: 0xafb20004  sw          $s2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEE8u; }
        if (ctx->pc != 0x1CDEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEE8u; }
        if (ctx->pc != 0x1CDEE8u) { return; }
    }
    ctx->pc = 0x1CDEE8u;
label_1cdee8:
    // 0x1cdee8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1cdee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1cdeec: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1cdeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1cdef0: 0x440004b  bltz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1CDEF0u;
    {
        const bool branch_taken_0x1cdef0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CDEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEF0u;
            // 0x1cdef4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdef0) {
            ctx->pc = 0x1CE020u;
            goto label_1ce020;
        }
    }
    ctx->pc = 0x1CDEF8u;
    // 0x1cdef8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1cdef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1cdefc: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1CDEFCu;
    SET_GPR_U32(ctx, 31, 0x1CDF04u);
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF04u; }
        if (ctx->pc != 0x1CDF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF04u; }
        if (ctx->pc != 0x1CDF04u) { return; }
    }
    ctx->pc = 0x1CDF04u;
label_1cdf04:
    // 0x1cdf04: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x1cdf04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
    // 0x1cdf08: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1cdf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1cdf0c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1cdf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1cdf10: 0x24849740  addiu       $a0, $a0, -0x68C0
    ctx->pc = 0x1cdf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940480));
    // 0x1cdf14: 0xae340030  sw          $s4, 0x30($s1)
    ctx->pc = 0x1cdf14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 20));
    // 0x1cdf18: 0xae350034  sw          $s5, 0x34($s1)
    ctx->pc = 0x1cdf18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 21));
    // 0x1cdf1c: 0xc07371a  jal         func_1CDC68
    ctx->pc = 0x1CDF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF24u);
    ctx->pc = 0x1CDF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF1Cu;
            // 0x1cdf20: 0xae360038  sw          $s6, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC68u;
    if (runtime->hasFunction(0x1CDC68u)) {
        auto targetFn = runtime->lookupFunction(0x1CDC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF24u; }
        if (ctx->pc != 0x1CDF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDC68_0x1cdc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF24u; }
        if (ctx->pc != 0x1CDF24u) { return; }
    }
    ctx->pc = 0x1CDF24u;
label_1cdf24:
    // 0x1cdf24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cdf24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf28: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDF28u;
    {
        const bool branch_taken_0x1cdf28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf28) {
            ctx->pc = 0x1CDF2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF28u;
            // 0x1cdf2c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDF44u;
            goto label_1cdf44;
        }
    }
    ctx->pc = 0x1CDF30u;
    // 0x1cdf30: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1cdf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1cdf34: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CDF34u;
    SET_GPR_U32(ctx, 31, 0x1CDF3Cu);
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF3Cu; }
        if (ctx->pc != 0x1CDF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF3Cu; }
        if (ctx->pc != 0x1CDF3Cu) { return; }
    }
    ctx->pc = 0x1CDF3Cu;
label_1cdf3c:
    // 0x1cdf3c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1CDF3Cu;
    {
        const bool branch_taken_0x1cdf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF3Cu;
            // 0x1cdf40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf3c) {
            ctx->pc = 0x1CE020u;
            goto label_1ce020;
        }
    }
    ctx->pc = 0x1CDF44u;
label_1cdf44:
    // 0x1cdf44: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1cdf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1cdf48: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1cdf48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1cdf4c: 0x2442c1d8  addiu       $v0, $v0, -0x3E28
    ctx->pc = 0x1cdf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951384));
    // 0x1cdf50: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1cdf50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1cdf54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cdf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf58: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x1cdf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x1cdf5c: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x1cdf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x1cdf60: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x1cdf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x1cdf64: 0xae16002c  sw          $s6, 0x2C($s0)
    ctx->pc = 0x1cdf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 22));
    // 0x1cdf68: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1cdf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1cdf6c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1cdf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1cdf70: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x1cdf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x1cdf74: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1cdf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1cdf78: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x1CDF78u;
    SET_GPR_U32(ctx, 31, 0x1CDF80u);
    ctx->pc = 0x1CDF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF78u;
            // 0x1cdf7c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF80u; }
        if (ctx->pc != 0x1CDF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF80u; }
        if (ctx->pc != 0x1CDF80u) { return; }
    }
    ctx->pc = 0x1CDF80u;
label_1cdf80:
    // 0x1cdf80: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1cdf80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1cdf84: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x1cdf84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cdf88: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDF88u;
    {
        const bool branch_taken_0x1cdf88 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1CDF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF88u;
            // 0x1cdf8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf88) {
            ctx->pc = 0x1CDFACu;
            goto label_1cdfac;
        }
    }
    ctx->pc = 0x1CDF90u;
    // 0x1cdf90: 0xc073744  jal         func_1CDD10
    ctx->pc = 0x1CDF90u;
    SET_GPR_U32(ctx, 31, 0x1CDF98u);
    ctx->pc = 0x1CDF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF90u;
            // 0x1cdf94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD10u;
    if (runtime->hasFunction(0x1CDD10u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF98u; }
        if (ctx->pc != 0x1CDF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDD10_0x1cdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF98u; }
        if (ctx->pc != 0x1CDF98u) { return; }
    }
    ctx->pc = 0x1CDF98u;
label_1cdf98:
    // 0x1cdf98: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1cdf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1cdf9c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CDF9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDFA4u);
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFA4u; }
        if (ctx->pc != 0x1CDFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFA4u; }
        if (ctx->pc != 0x1CDFA4u) { return; }
    }
    ctx->pc = 0x1CDFA4u;
label_1cdfa4:
    // 0x1cdfa4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1CDFA4u;
    {
        const bool branch_taken_0x1cdfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFA4u;
            // 0x1cdfa8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfa4) {
            ctx->pc = 0x1CE020u;
            goto label_1ce020;
        }
    }
    ctx->pc = 0x1CDFACu;
label_1cdfac:
    // 0x1cdfac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1cdfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1cdfb0: 0x34840019  ori         $a0, $a0, 0x19
    ctx->pc = 0x1cdfb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25);
    // 0x1cdfb4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1cdfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cdfb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdfb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdfbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfc0: 0xc043e0c  jal         func_10F830
    ctx->pc = 0x1CDFC0u;
    SET_GPR_U32(ctx, 31, 0x1CDFC8u);
    ctx->pc = 0x1CDFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFC0u;
            // 0x1cdfc4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F830u;
    if (runtime->hasFunction(0x10F830u)) {
        auto targetFn = runtime->lookupFunction(0x10F830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFC8u; }
        if (ctx->pc != 0x1CDFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F830_0x10f830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFC8u; }
        if (ctx->pc != 0x1CDFC8u) { return; }
    }
    ctx->pc = 0x1CDFC8u;
label_1cdfc8:
    // 0x1cdfc8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CDFC8u;
    {
        const bool branch_taken_0x1cdfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdfc8) {
            ctx->pc = 0x1CDFF4u;
            goto label_1cdff4;
        }
    }
    ctx->pc = 0x1CDFD0u;
    // 0x1cdfd0: 0xc073744  jal         func_1CDD10
    ctx->pc = 0x1CDFD0u;
    SET_GPR_U32(ctx, 31, 0x1CDFD8u);
    ctx->pc = 0x1CDFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFD0u;
            // 0x1cdfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD10u;
    if (runtime->hasFunction(0x1CDD10u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFD8u; }
        if (ctx->pc != 0x1CDFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDD10_0x1cdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFD8u; }
        if (ctx->pc != 0x1CDFD8u) { return; }
    }
    ctx->pc = 0x1CDFD8u;
label_1cdfd8:
    // 0x1cdfd8: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CDFD8u;
    SET_GPR_U32(ctx, 31, 0x1CDFE0u);
    ctx->pc = 0x1CDFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFD8u;
            // 0x1cdfdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFE0u; }
        if (ctx->pc != 0x1CDFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFE0u; }
        if (ctx->pc != 0x1CDFE0u) { return; }
    }
    ctx->pc = 0x1CDFE0u;
label_1cdfe0:
    // 0x1cdfe0: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1cdfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1cdfe4: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CDFE4u;
    SET_GPR_U32(ctx, 31, 0x1CDFECu);
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFECu; }
        if (ctx->pc != 0x1CDFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFECu; }
        if (ctx->pc != 0x1CDFECu) { return; }
    }
    ctx->pc = 0x1CDFECu;
label_1cdfec:
    // 0x1cdfec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CDFECu;
    {
        const bool branch_taken_0x1cdfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFECu;
            // 0x1cdff0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfec) {
            ctx->pc = 0x1CE020u;
            goto label_1ce020;
        }
    }
    ctx->pc = 0x1CDFF4u;
label_1cdff4:
    // 0x1cdff4: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1CDFF4u;
    SET_GPR_U32(ctx, 31, 0x1CDFFCu);
    ctx->pc = 0x1CDFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFF4u;
            // 0x1cdff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFFCu; }
        if (ctx->pc != 0x1CDFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFFCu; }
        if (ctx->pc != 0x1CDFFCu) { return; }
    }
    ctx->pc = 0x1CDFFCu;
label_1cdffc:
    // 0x1cdffc: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CDFFCu;
    SET_GPR_U32(ctx, 31, 0x1CE004u);
    ctx->pc = 0x1CE000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFFCu;
            // 0x1ce000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE004u; }
        if (ctx->pc != 0x1CE004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE004u; }
        if (ctx->pc != 0x1CE004u) { return; }
    }
    ctx->pc = 0x1CE004u;
label_1ce004:
    // 0x1ce004: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1ce004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ce008: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE008u;
    {
        const bool branch_taken_0x1ce008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE008u;
            // 0x1ce00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce008) {
            ctx->pc = 0x1CE020u;
            goto label_1ce020;
        }
    }
    ctx->pc = 0x1CE010u;
    // 0x1ce010: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1ce010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1ce014: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CE014u;
    SET_GPR_U32(ctx, 31, 0x1CE01Cu);
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE01Cu; }
        if (ctx->pc != 0x1CE01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE01Cu; }
        if (ctx->pc != 0x1CE01Cu) { return; }
    }
    ctx->pc = 0x1CE01Cu;
label_1ce01c:
    // 0x1ce01c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ce01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce020:
    // 0x1ce020: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ce020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce024: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1ce024u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ce028: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1ce028u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ce02c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1ce02cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce030: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1ce030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce034: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ce034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce038: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1ce038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce03c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ce03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce040: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE040u;
            // 0x1ce044: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE048u;
}
