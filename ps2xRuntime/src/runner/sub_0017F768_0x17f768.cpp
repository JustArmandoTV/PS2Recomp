#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F768
// Address: 0x17f768 - 0x17f920
void sub_0017F768_0x17f768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F768_0x17f768");
#endif

    switch (ctx->pc) {
        case 0x17f7b8u: goto label_17f7b8;
        case 0x17f7d8u: goto label_17f7d8;
        case 0x17f804u: goto label_17f804;
        case 0x17f818u: goto label_17f818;
        case 0x17f824u: goto label_17f824;
        case 0x17f830u: goto label_17f830;
        case 0x17f84cu: goto label_17f84c;
        case 0x17f864u: goto label_17f864;
        case 0x17f880u: goto label_17f880;
        case 0x17f888u: goto label_17f888;
        case 0x17f890u: goto label_17f890;
        case 0x17f898u: goto label_17f898;
        case 0x17f8a0u: goto label_17f8a0;
        case 0x17f8b0u: goto label_17f8b0;
        case 0x17f8b8u: goto label_17f8b8;
        case 0x17f8d4u: goto label_17f8d4;
        case 0x17f8ecu: goto label_17f8ec;
        default: break;
    }

    ctx->pc = 0x17f768u;

    // 0x17f768: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x17f768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x17f76c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x17f76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17f770: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x17f770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x17f774: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17f774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f778: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x17f778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x17f77c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17f77cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17f784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f788: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x17f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x17f78c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17f78cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f790: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x17f790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x17f794: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17f794u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f798: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x17f798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x17f79c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x17f79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x17f7a0: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x17f7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x17f7a4: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x17f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x17f7a8: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x17f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x17f7ac: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x17f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x17f7b0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17F7B0u;
    SET_GPR_U32(ctx, 31, 0x17F7B8u);
    ctx->pc = 0x17F7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7B0u;
            // 0x17f7b4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F7B8u; }
        if (ctx->pc != 0x17F7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F7B8u; }
        if (ctx->pc != 0x17F7B8u) { return; }
    }
    ctx->pc = 0x17F7B8u;
label_17f7b8:
    // 0x17f7b8: 0x2a83000e  slti        $v1, $s4, 0xE
    ctx->pc = 0x17f7b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x17f7bc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x17f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17f7c0: 0x43a00a  movz        $s4, $v0, $v1
    ctx->pc = 0x17f7c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x17f7c4: 0x5a800040  blezl       $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x17F7C4u;
    {
        const bool branch_taken_0x17f7c4 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x17f7c4) {
            ctx->pc = 0x17F7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7C4u;
            // 0x17f7c8: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F8C8u;
            goto label_17f8c8;
        }
    }
    ctx->pc = 0x17F7CCu;
    // 0x17f7cc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17f7d0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x17f7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7d4: 0x24576b00  addiu       $s7, $v0, 0x6B00
    ctx->pc = 0x17f7d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
label_17f7d8:
    // 0x17f7d8: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x17f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x17f7dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17f7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7e0: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x17f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x17f7e4: 0x732018  mult        $a0, $v1, $s3
    ctx->pc = 0x17f7e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17f7e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17f7ec: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x17f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x17f7f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17f7f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17f7f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f7f8: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x17f7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f7fc: 0xc05fc92  jal         func_17F248
    ctx->pc = 0x17F7FCu;
    SET_GPR_U32(ctx, 31, 0x17F804u);
    ctx->pc = 0x17F800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7FCu;
            // 0x17f800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F248u;
    if (runtime->hasFunction(0x17F248u)) {
        auto targetFn = runtime->lookupFunction(0x17F248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F804u; }
        if (ctx->pc != 0x17F804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F248_0x17f248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F804u; }
        if (ctx->pc != 0x17F804u) { return; }
    }
    ctx->pc = 0x17F804u;
label_17f804:
    // 0x17f804: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x17f804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17f808: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17F808u;
    {
        const bool branch_taken_0x17f808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F808u;
            // 0x17f80c: 0x24046600  addiu       $a0, $zero, 0x6600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f808) {
            ctx->pc = 0x17F8B8u;
            goto label_17f8b8;
        }
    }
    ctx->pc = 0x17F810u;
    // 0x17f810: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F810u;
    SET_GPR_U32(ctx, 31, 0x17F818u);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F818u; }
        if (ctx->pc != 0x17F818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F818u; }
        if (ctx->pc != 0x17F818u) { return; }
    }
    ctx->pc = 0x17F818u;
label_17f818:
    // 0x17f818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17f818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f81c: 0xc05edfe  jal         func_17B7F8
    ctx->pc = 0x17F81Cu;
    SET_GPR_U32(ctx, 31, 0x17F824u);
    ctx->pc = 0x17F820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F81Cu;
            // 0x17f820: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B7F8u;
    if (runtime->hasFunction(0x17B7F8u)) {
        auto targetFn = runtime->lookupFunction(0x17B7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F824u; }
        if (ctx->pc != 0x17F824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B7F8_0x17b7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F824u; }
        if (ctx->pc != 0x17F824u) { return; }
    }
    ctx->pc = 0x17F824u;
label_17f824:
    // 0x17f824: 0x24046601  addiu       $a0, $zero, 0x6601
    ctx->pc = 0x17f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26113));
    // 0x17f828: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F828u;
    SET_GPR_U32(ctx, 31, 0x17F830u);
    ctx->pc = 0x17F82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F828u;
            // 0x17f82c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F830u; }
        if (ctx->pc != 0x17F830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F830u; }
        if (ctx->pc != 0x17F830u) { return; }
    }
    ctx->pc = 0x17F830u;
label_17f830:
    // 0x17f830: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17f830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f834: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F834u;
    {
        const bool branch_taken_0x17f834 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17F838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F834u;
            // 0x17f838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f834) {
            ctx->pc = 0x17F858u;
            goto label_17f858;
        }
    }
    ctx->pc = 0x17F83Cu;
    // 0x17f83c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x17f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x17f840: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x17f840u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x17f844: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17F844u;
    SET_GPR_U32(ctx, 31, 0x17F84Cu);
    ctx->pc = 0x17F848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F844u;
            // 0x17f848: 0x24446548  addiu       $a0, $v0, 0x6548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F84Cu; }
        if (ctx->pc != 0x17F84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F84Cu; }
        if (ctx->pc != 0x17F84Cu) { return; }
    }
    ctx->pc = 0x17F84Cu;
label_17f84c:
    // 0x17f84c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17F84Cu;
    {
        const bool branch_taken_0x17f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F84Cu;
            // 0x17f850: 0x274102a  slt         $v0, $s3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f84c) {
            ctx->pc = 0x17F8BCu;
            goto label_17f8bc;
        }
    }
    ctx->pc = 0x17F854u;
    // 0x17f854: 0x0  nop
    ctx->pc = 0x17f854u;
    // NOP
label_17f858:
    // 0x17f858: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x17f858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x17f85c: 0xc05fa2c  jal         func_17E8B0
    ctx->pc = 0x17F85Cu;
    SET_GPR_U32(ctx, 31, 0x17F864u);
    ctx->pc = 0x17F860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F85Cu;
            // 0x17f860: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E8B0u;
    if (runtime->hasFunction(0x17E8B0u)) {
        auto targetFn = runtime->lookupFunction(0x17E8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F864u; }
        if (ctx->pc != 0x17F864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E8B0_0x17e8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F864u; }
        if (ctx->pc != 0x17F864u) { return; }
    }
    ctx->pc = 0x17F864u;
label_17f864:
    // 0x17f864: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x17f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x17f868: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17f868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17f86c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17f86cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17f870: 0x24646570  addiu       $a0, $v1, 0x6570
    ctx->pc = 0x17f870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25968));
    // 0x17f874: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x17f874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x17f878: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17F878u;
    SET_GPR_U32(ctx, 31, 0x17F880u);
    ctx->pc = 0x17F87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F878u;
            // 0x17f87c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F880u; }
        if (ctx->pc != 0x17F880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F880u; }
        if (ctx->pc != 0x17F880u) { return; }
    }
    ctx->pc = 0x17F880u;
label_17f880:
    // 0x17f880: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F880u;
    SET_GPR_U32(ctx, 31, 0x17F888u);
    ctx->pc = 0x17F884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F880u;
            // 0x17f884: 0x24046800  addiu       $a0, $zero, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F888u; }
        if (ctx->pc != 0x17F888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F888u; }
        if (ctx->pc != 0x17F888u) { return; }
    }
    ctx->pc = 0x17F888u;
label_17f888:
    // 0x17f888: 0xc05ee18  jal         func_17B860
    ctx->pc = 0x17F888u;
    SET_GPR_U32(ctx, 31, 0x17F890u);
    ctx->pc = 0x17F88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F888u;
            // 0x17f88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B860u;
    if (runtime->hasFunction(0x17B860u)) {
        auto targetFn = runtime->lookupFunction(0x17B860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F890u; }
        if (ctx->pc != 0x17F890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B860_0x17b860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F890u; }
        if (ctx->pc != 0x17F890u) { return; }
    }
    ctx->pc = 0x17F890u;
label_17f890:
    // 0x17f890: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F890u;
    SET_GPR_U32(ctx, 31, 0x17F898u);
    ctx->pc = 0x17F894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F890u;
            // 0x17f894: 0x24046801  addiu       $a0, $zero, 0x6801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26625));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F898u; }
        if (ctx->pc != 0x17F898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F898u; }
        if (ctx->pc != 0x17F898u) { return; }
    }
    ctx->pc = 0x17F898u;
label_17f898:
    // 0x17f898: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F898u;
    SET_GPR_U32(ctx, 31, 0x17F8A0u);
    ctx->pc = 0x17F89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F898u;
            // 0x17f89c: 0x24046700  addiu       $a0, $zero, 0x6700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8A0u; }
        if (ctx->pc != 0x17F8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8A0u; }
        if (ctx->pc != 0x17F8A0u) { return; }
    }
    ctx->pc = 0x17F8A0u;
label_17f8a0:
    // 0x17f8a0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17f8a4: 0x8c456b10  lw          $a1, 0x6B10($v0)
    ctx->pc = 0x17f8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27408)));
    // 0x17f8a8: 0xc05edfe  jal         func_17B7F8
    ctx->pc = 0x17F8A8u;
    SET_GPR_U32(ctx, 31, 0x17F8B0u);
    ctx->pc = 0x17F8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8A8u;
            // 0x17f8ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B7F8u;
    if (runtime->hasFunction(0x17B7F8u)) {
        auto targetFn = runtime->lookupFunction(0x17B7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8B0u; }
        if (ctx->pc != 0x17F8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B7F8_0x17b7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8B0u; }
        if (ctx->pc != 0x17F8B0u) { return; }
    }
    ctx->pc = 0x17F8B0u;
label_17f8b0:
    // 0x17f8b0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F8B0u;
    SET_GPR_U32(ctx, 31, 0x17F8B8u);
    ctx->pc = 0x17F8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8B0u;
            // 0x17f8b4: 0x24046701  addiu       $a0, $zero, 0x6701 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26369));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8B8u; }
        if (ctx->pc != 0x17F8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8B8u; }
        if (ctx->pc != 0x17F8B8u) { return; }
    }
    ctx->pc = 0x17F8B8u;
label_17f8b8:
    // 0x17f8b8: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x17f8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_17f8bc:
    // 0x17f8bc: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x17F8BCu;
    {
        const bool branch_taken_0x17f8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8BCu;
            // 0x17f8c0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8bc) {
            ctx->pc = 0x17F7D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f7d8;
        }
    }
    ctx->pc = 0x17F8C4u;
    // 0x17f8c4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17f8c8:
    // 0x17f8c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x17f8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8cc: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17F8CCu;
    SET_GPR_U32(ctx, 31, 0x17F8D4u);
    ctx->pc = 0x17F8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8CCu;
            // 0x17f8d0: 0x24846590  addiu       $a0, $a0, 0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8D4u; }
        if (ctx->pc != 0x17F8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8D4u; }
        if (ctx->pc != 0x17F8D4u) { return; }
    }
    ctx->pc = 0x17F8D4u;
label_17f8d4:
    // 0x17f8d4: 0x1bc00006  blez        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F8D4u;
    {
        const bool branch_taken_0x17f8d4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x17F8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8D4u;
            // 0x17f8d8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8d4) {
            ctx->pc = 0x17F8F0u;
            goto label_17f8f0;
        }
    }
    ctx->pc = 0x17F8DCu;
    // 0x17f8dc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17f8e0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x17f8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17f8e4: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17F8E4u;
    SET_GPR_U32(ctx, 31, 0x17F8ECu);
    ctx->pc = 0x17F8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8E4u;
            // 0x17f8e8: 0x248465a8  addiu       $a0, $a0, 0x65A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8ECu; }
        if (ctx->pc != 0x17F8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8ECu; }
        if (ctx->pc != 0x17F8ECu) { return; }
    }
    ctx->pc = 0x17F8ECu;
label_17f8ec:
    // 0x17f8ec: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x17f8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17f8f0:
    // 0x17f8f0: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x17f8f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17f8f4: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x17f8f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x17f8f8: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x17f8f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17f8fc: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x17f8fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x17f900: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x17f900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17f904: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x17f904u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17f908: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x17f908u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17f90c: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x17f90cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x17f910: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x17f910u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17f914: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x17f914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x17f918: 0x3e00008  jr          $ra
    ctx->pc = 0x17F918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F918u;
            // 0x17f91c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F920u;
}
