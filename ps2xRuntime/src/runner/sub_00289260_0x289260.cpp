#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00289260
// Address: 0x289260 - 0x289490
void sub_00289260_0x289260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289260_0x289260");
#endif

    switch (ctx->pc) {
        case 0x2892b0u: goto label_2892b0;
        case 0x2892f4u: goto label_2892f4;
        case 0x289328u: goto label_289328;
        case 0x289398u: goto label_289398;
        case 0x2893b4u: goto label_2893b4;
        case 0x289408u: goto label_289408;
        default: break;
    }

    ctx->pc = 0x289260u;

    // 0x289260: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x289260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x289264: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x289264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x289268: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x289268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28926c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x289270: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x289270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x289274: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x289274u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289278: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x289278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28927c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x28927cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289280: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x289280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x289284: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x289284u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x289288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28928c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28928cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x289290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x289294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x289294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x289298: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x289298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x28929c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x28929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2892a0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2892a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2892a4: 0x1020006a  beqz        $at, . + 4 + (0x6A << 2)
    ctx->pc = 0x2892A4u;
    {
        const bool branch_taken_0x2892a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2892A4u;
            // 0x2892a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892a4) {
            ctx->pc = 0x289450u;
            goto label_289450;
        }
    }
    ctx->pc = 0x2892ACu;
    // 0x2892ac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2892acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2892b0:
    // 0x2892b0: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2892b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x2892b4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x2892b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2892b8: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x2892b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2892bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2892bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2892c0: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x2892c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2892c4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2892c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2892c8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2892c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2892cc: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2892ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2892d0: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x2892d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2892d4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2892D4u;
    {
        const bool branch_taken_0x2892d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2892D4u;
            // 0x2892d8: 0x9e8021  addu        $s0, $a0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892d4) {
            ctx->pc = 0x2892F8u;
            goto label_2892f8;
        }
    }
    ctx->pc = 0x2892DCu;
    // 0x2892dc: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2892dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2892e0: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x2892e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2892e4: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x2892e4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2892e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2892e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2892ec: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x2892ECu;
    SET_GPR_U32(ctx, 31, 0x2892F4u);
    ctx->pc = 0x2892F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2892ECu;
            // 0x2892f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2892F4u; }
        if (ctx->pc != 0x2892F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2892F4u; }
        if (ctx->pc != 0x2892F4u) { return; }
    }
    ctx->pc = 0x2892F4u;
label_2892f4:
    // 0x2892f4: 0x0  nop
    ctx->pc = 0x2892f4u;
    // NOP
label_2892f8:
    // 0x2892f8: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x2892f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x2892fc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2892fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x289300: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x289300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x289304: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x289304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289308: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x289308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28930c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28930cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x289310: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x289310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289314: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x289314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x289318: 0x8e130008  lw          $s3, 0x8($s0)
    ctx->pc = 0x289318u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28931c: 0x12600046  beqz        $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x28931Cu;
    {
        const bool branch_taken_0x28931c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28931c) {
            ctx->pc = 0x289438u;
            goto label_289438;
        }
    }
    ctx->pc = 0x289324u;
    // 0x289324: 0x0  nop
    ctx->pc = 0x289324u;
    // NOP
label_289328:
    // 0x289328: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x289328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28932c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289330: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x289330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x289334: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x289334u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x289338: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x289338u;
    {
        const bool branch_taken_0x289338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289338) {
            ctx->pc = 0x289350u;
            goto label_289350;
        }
    }
    ctx->pc = 0x289340u;
    // 0x289340: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x289340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x289344: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x289344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289348: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x289348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x28934c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x28934cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_289350:
    // 0x289350: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x289350u;
    {
        const bool branch_taken_0x289350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289350) {
            ctx->pc = 0x289368u;
            goto label_289368;
        }
    }
    ctx->pc = 0x289358u;
    // 0x289358: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x289358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28935c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x28935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x289360: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x289360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x289364: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x289364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_289368:
    // 0x289368: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x289368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28936c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28936cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x289370: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x289370u;
    {
        const bool branch_taken_0x289370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289370) {
            ctx->pc = 0x2893D0u;
            goto label_2893d0;
        }
    }
    ctx->pc = 0x289378u;
    // 0x289378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28937c: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x28937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x289380: 0xa3a200b4  sb          $v0, 0xB4($sp)
    ctx->pc = 0x289380u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 180), (uint8_t)GPR_U32(ctx, 2));
    // 0x289384: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x289384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289388: 0x8ee60004  lw          $a2, 0x4($s7)
    ctx->pc = 0x289388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x28938c: 0x83a700b4  lb          $a3, 0xB4($sp)
    ctx->pc = 0x28938cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x289390: 0xc0a25b8  jal         func_2896E0
    ctx->pc = 0x289390u;
    SET_GPR_U32(ctx, 31, 0x289398u);
    ctx->pc = 0x289394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289390u;
            // 0x289394: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2896E0u;
    if (runtime->hasFunction(0x2896E0u)) {
        auto targetFn = runtime->lookupFunction(0x2896E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289398u; }
        if (ctx->pc != 0x289398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002896E0_0x2896e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289398u; }
        if (ctx->pc != 0x289398u) { return; }
    }
    ctx->pc = 0x289398u;
label_289398:
    // 0x289398: 0xa3a000b0  sb          $zero, 0xB0($sp)
    ctx->pc = 0x289398u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x28939c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x28939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2893a0: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x2893a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2893a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2893a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2893a8: 0x83a700b0  lb          $a3, 0xB0($sp)
    ctx->pc = 0x2893a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2893ac: 0xc0a25b8  jal         func_2896E0
    ctx->pc = 0x2893ACu;
    SET_GPR_U32(ctx, 31, 0x2893B4u);
    ctx->pc = 0x2893B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2893ACu;
            // 0x2893b0: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2896E0u;
    if (runtime->hasFunction(0x2896E0u)) {
        auto targetFn = runtime->lookupFunction(0x2896E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893B4u; }
        if (ctx->pc != 0x2893B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002896E0_0x2896e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893B4u; }
        if (ctx->pc != 0x2893B4u) { return; }
    }
    ctx->pc = 0x2893B4u;
label_2893b4:
    // 0x2893b4: 0x83a300bc  lb          $v1, 0xBC($sp)
    ctx->pc = 0x2893b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2893b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2893B8u;
    {
        const bool branch_taken_0x2893b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2893b8) {
            ctx->pc = 0x2893D0u;
            goto label_2893d0;
        }
    }
    ctx->pc = 0x2893C0u;
    // 0x2893c0: 0x83a300b8  lb          $v1, 0xB8($sp)
    ctx->pc = 0x2893c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2893c4: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2893C4u;
    {
        const bool branch_taken_0x2893c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2893c4) {
            ctx->pc = 0x289458u;
            goto label_289458;
        }
    }
    ctx->pc = 0x2893CCu;
    // 0x2893cc: 0x0  nop
    ctx->pc = 0x2893ccu;
    // NOP
label_2893d0:
    // 0x2893d0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2893d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2893d4: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x2893d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2893d8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2893d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2893dc: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x2893dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2893e0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2893e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2893e4: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x2893e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2893e8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2893E8u;
    {
        const bool branch_taken_0x2893e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2893e8) {
            ctx->pc = 0x289408u;
            goto label_289408;
        }
    }
    ctx->pc = 0x2893F0u;
    // 0x2893f0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2893f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2893f4: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x2893f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2893f8: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x2893f8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2893fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2893fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289400: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x289400u;
    SET_GPR_U32(ctx, 31, 0x289408u);
    ctx->pc = 0x289404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289400u;
            // 0x289404: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289408u; }
        if (ctx->pc != 0x289408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289408u; }
        if (ctx->pc != 0x289408u) { return; }
    }
    ctx->pc = 0x289408u;
label_289408:
    // 0x289408: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x289408u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x28940c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x28940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x289410: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x289410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x289414: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x289414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x289418: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x289418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28941c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28941cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x289420: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x289420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x289424: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x289424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x289428: 0x8e730008  lw          $s3, 0x8($s3)
    ctx->pc = 0x289428u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28942c: 0x1660ffbe  bnez        $s3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x28942Cu;
    {
        const bool branch_taken_0x28942c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x28942c) {
            ctx->pc = 0x289328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289328;
        }
    }
    ctx->pc = 0x289434u;
    // 0x289434: 0x0  nop
    ctx->pc = 0x289434u;
    // NOP
label_289438:
    // 0x289438: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x289438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x28943c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28943cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x289440: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x289440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x289444: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x289444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289448: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x289448u;
    {
        const bool branch_taken_0x289448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28944Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289448u;
            // 0x28944c: 0x27de0014  addiu       $fp, $fp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289448) {
            ctx->pc = 0x2892B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2892b0;
        }
    }
    ctx->pc = 0x289450u;
label_289450:
    // 0x289450: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x289450u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x289454: 0x0  nop
    ctx->pc = 0x289454u;
    // NOP
label_289458:
    // 0x289458: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x289458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28945c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28945cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x289460: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x289460u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289464: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x289464u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x289468: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x289468u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28946c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28946cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289470: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x289470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289474: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x289474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289478: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28947c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28947cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289480: 0x3e00008  jr          $ra
    ctx->pc = 0x289480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289480u;
            // 0x289484: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289488u;
    // 0x289488: 0x0  nop
    ctx->pc = 0x289488u;
    // NOP
    // 0x28948c: 0x0  nop
    ctx->pc = 0x28948cu;
    // NOP
}
