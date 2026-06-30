#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00397430
// Address: 0x397430 - 0x397750
void sub_00397430_0x397430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397430_0x397430");
#endif

    switch (ctx->pc) {
        case 0x397498u: goto label_397498;
        case 0x3974a4u: goto label_3974a4;
        case 0x3974dcu: goto label_3974dc;
        case 0x3974ecu: goto label_3974ec;
        case 0x397500u: goto label_397500;
        case 0x397520u: goto label_397520;
        case 0x397538u: goto label_397538;
        case 0x397558u: goto label_397558;
        case 0x397574u: goto label_397574;
        case 0x397580u: goto label_397580;
        case 0x3975ccu: goto label_3975cc;
        case 0x3975d4u: goto label_3975d4;
        case 0x3975e0u: goto label_3975e0;
        case 0x397604u: goto label_397604;
        case 0x397614u: goto label_397614;
        case 0x397620u: goto label_397620;
        case 0x397664u: goto label_397664;
        case 0x3976fcu: goto label_3976fc;
        case 0x39771cu: goto label_39771c;
        default: break;
    }

    ctx->pc = 0x397430u;

    // 0x397430: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x397430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x397434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x397434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397438: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x397438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x39743c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x39743cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x397440: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x397440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x397444: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x397444u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397448: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x397448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x39744c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x39744cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397450: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x397450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x397454: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x397454u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397458: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x397458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39745c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x39745cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397460: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x397460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x397464: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x397464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x397468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39746c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39746cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x397470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x397474: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x397474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397478: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x397478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x39747c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39747Cu;
    {
        const bool branch_taken_0x39747c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x397480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39747Cu;
            // 0x397480: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39747c) {
            ctx->pc = 0x39748Cu;
            goto label_39748c;
        }
    }
    ctx->pc = 0x397484u;
    // 0x397484: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x397484u;
    {
        const bool branch_taken_0x397484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397484u;
            // 0x397488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397484) {
            ctx->pc = 0x397720u;
            goto label_397720;
        }
    }
    ctx->pc = 0x39748Cu;
label_39748c:
    // 0x39748c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397490: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x397490u;
    SET_GPR_U32(ctx, 31, 0x397498u);
    ctx->pc = 0x397494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397490u;
            // 0x397494: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397498u; }
        if (ctx->pc != 0x397498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397498u; }
        if (ctx->pc != 0x397498u) { return; }
    }
    ctx->pc = 0x397498u;
label_397498:
    // 0x397498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39749c: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x39749Cu;
    SET_GPR_U32(ctx, 31, 0x3974A4u);
    ctx->pc = 0x3974A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39749Cu;
            // 0x3974a0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3974A4u; }
        if (ctx->pc != 0x3974A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3974A4u; }
        if (ctx->pc != 0x3974A4u) { return; }
    }
    ctx->pc = 0x3974A4u;
label_3974a4:
    // 0x3974a4: 0x8e6201c4  lw          $v0, 0x1C4($s3)
    ctx->pc = 0x3974a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x3974a8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x3974a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3974ac: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x3974ACu;
    {
        const bool branch_taken_0x3974ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3974ac) {
            ctx->pc = 0x3974B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3974ACu;
            // 0x3974b0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397540u;
            goto label_397540;
        }
    }
    ctx->pc = 0x3974B4u;
    // 0x3974b4: 0x8e6201c8  lw          $v0, 0x1C8($s3)
    ctx->pc = 0x3974b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
    // 0x3974b8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x3974b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x3974bc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3974bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3974c0: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3974C0u;
    {
        const bool branch_taken_0x3974c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3974c0) {
            ctx->pc = 0x3974C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3974C0u;
            // 0x3974c4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3974D0u;
            goto label_3974d0;
        }
    }
    ctx->pc = 0x3974C8u;
    // 0x3974c8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x3974C8u;
    {
        const bool branch_taken_0x3974c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3974CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3974C8u;
            // 0x3974cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3974c8) {
            ctx->pc = 0x397720u;
            goto label_397720;
        }
    }
    ctx->pc = 0x3974D0u;
label_3974d0:
    // 0x3974d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3974d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3974d4: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x3974D4u;
    SET_GPR_U32(ctx, 31, 0x3974DCu);
    ctx->pc = 0x3974D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3974D4u;
            // 0x3974d8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3974DCu; }
        if (ctx->pc != 0x3974DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3974DCu; }
        if (ctx->pc != 0x3974DCu) { return; }
    }
    ctx->pc = 0x3974DCu;
label_3974dc:
    // 0x3974dc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x3974dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x3974e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3974e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3974e4: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x3974E4u;
    SET_GPR_U32(ctx, 31, 0x3974ECu);
    ctx->pc = 0x3974E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3974E4u;
            // 0x3974e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3974ECu; }
        if (ctx->pc != 0x3974ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3974ECu; }
        if (ctx->pc != 0x3974ECu) { return; }
    }
    ctx->pc = 0x3974ECu;
label_3974ec:
    // 0x3974ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3974ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3974f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3974f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3974f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3974f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3974f8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3974F8u;
    SET_GPR_U32(ctx, 31, 0x397500u);
    ctx->pc = 0x3974FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3974F8u;
            // 0x3974fc: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397500u; }
        if (ctx->pc != 0x397500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397500u; }
        if (ctx->pc != 0x397500u) { return; }
    }
    ctx->pc = 0x397500u;
label_397500:
    // 0x397500: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x397500u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x397504: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x397504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397508: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x397508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39750c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39750cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397510: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x397510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397514: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x397514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397518: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x397518u;
    SET_GPR_U32(ctx, 31, 0x397520u);
    ctx->pc = 0x39751Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397518u;
            // 0x39751c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397520u; }
        if (ctx->pc != 0x397520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397520u; }
        if (ctx->pc != 0x397520u) { return; }
    }
    ctx->pc = 0x397520u;
label_397520:
    // 0x397520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x397520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x397524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397528: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x397528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39752c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x39752cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x397530: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x397530u;
    SET_GPR_U32(ctx, 31, 0x397538u);
    ctx->pc = 0x397534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397530u;
            // 0x397534: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397538u; }
        if (ctx->pc != 0x397538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397538u; }
        if (ctx->pc != 0x397538u) { return; }
    }
    ctx->pc = 0x397538u;
label_397538:
    // 0x397538: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x397538u;
    {
        const bool branch_taken_0x397538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39753Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397538u;
            // 0x39753c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397538) {
            ctx->pc = 0x397720u;
            goto label_397720;
        }
    }
    ctx->pc = 0x397540u;
label_397540:
    // 0x397540: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x397540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x397544: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x397544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x397548: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x397548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39754c: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x39754cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x397550: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x397550u;
    SET_GPR_U32(ctx, 31, 0x397558u);
    ctx->pc = 0x397554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397550u;
            // 0x397554: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397558u; }
        if (ctx->pc != 0x397558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397558u; }
        if (ctx->pc != 0x397558u) { return; }
    }
    ctx->pc = 0x397558u;
label_397558:
    // 0x397558: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x397558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39755c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39755Cu;
    {
        const bool branch_taken_0x39755c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39755c) {
            ctx->pc = 0x39756Cu;
            goto label_39756c;
        }
    }
    ctx->pc = 0x397564u;
    // 0x397564: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x397564u;
    {
        const bool branch_taken_0x397564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397564u;
            // 0x397568: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397564) {
            ctx->pc = 0x397634u;
            goto label_397634;
        }
    }
    ctx->pc = 0x39756Cu;
label_39756c:
    // 0x39756c: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x39756Cu;
    SET_GPR_U32(ctx, 31, 0x397574u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397574u; }
        if (ctx->pc != 0x397574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397574u; }
        if (ctx->pc != 0x397574u) { return; }
    }
    ctx->pc = 0x397574u;
label_397574:
    // 0x397574: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x397574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397578: 0xc076984  jal         func_1DA610
    ctx->pc = 0x397578u;
    SET_GPR_U32(ctx, 31, 0x397580u);
    ctx->pc = 0x39757Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397578u;
            // 0x39757c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397580u; }
        if (ctx->pc != 0x397580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397580u; }
        if (ctx->pc != 0x397580u) { return; }
    }
    ctx->pc = 0x397580u;
label_397580:
    // 0x397580: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x397580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397584: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x397584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x397588: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x397588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x39758c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39758cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397590: 0xc442f240  lwc1        $f2, -0xDC0($v0)
    ctx->pc = 0x397590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x397594: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x397594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397598: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x397598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x39759c: 0xc441f248  lwc1        $f1, -0xDB8($v0)
    ctx->pc = 0x39759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3975a0: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x3975a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3975a4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3975a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3975a8: 0xc440f24c  lwc1        $f0, -0xDB4($v0)
    ctx->pc = 0x3975a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3975ac: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x3975acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3975b0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3975b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3975b4: 0x8c42f244  lw          $v0, -0xDBC($v0)
    ctx->pc = 0x3975b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963780)));
    // 0x3975b8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3975b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3975bc: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x3975bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x3975c0: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x3975c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3975c4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3975C4u;
    SET_GPR_U32(ctx, 31, 0x3975CCu);
    ctx->pc = 0x3975C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3975C4u;
            // 0x3975c8: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3975CCu; }
        if (ctx->pc != 0x3975CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3975CCu; }
        if (ctx->pc != 0x3975CCu) { return; }
    }
    ctx->pc = 0x3975CCu;
label_3975cc:
    // 0x3975cc: 0xc076980  jal         func_1DA600
    ctx->pc = 0x3975CCu;
    SET_GPR_U32(ctx, 31, 0x3975D4u);
    ctx->pc = 0x3975D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3975CCu;
            // 0x3975d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3975D4u; }
        if (ctx->pc != 0x3975D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3975D4u; }
        if (ctx->pc != 0x3975D4u) { return; }
    }
    ctx->pc = 0x3975D4u;
label_3975d4:
    // 0x3975d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3975d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3975d8: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x3975D8u;
    SET_GPR_U32(ctx, 31, 0x3975E0u);
    ctx->pc = 0x3975DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3975D8u;
            // 0x3975dc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3975E0u; }
        if (ctx->pc != 0x3975E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3975E0u; }
        if (ctx->pc != 0x3975E0u) { return; }
    }
    ctx->pc = 0x3975E0u;
label_3975e0:
    // 0x3975e0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3975e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3975e4: 0xc4416dc0  lwc1        $f1, 0x6DC0($v0)
    ctx->pc = 0x3975e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3975e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3975e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3975ec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3975ECu;
    {
        const bool branch_taken_0x3975ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3975ec) {
            ctx->pc = 0x3975F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3975ECu;
            // 0x3975f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3975FCu;
            goto label_3975fc;
        }
    }
    ctx->pc = 0x3975F4u;
    // 0x3975f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3975F4u;
    {
        const bool branch_taken_0x3975f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3975F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3975F4u;
            // 0x3975f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3975f4) {
            ctx->pc = 0x397634u;
            goto label_397634;
        }
    }
    ctx->pc = 0x3975FCu;
label_3975fc:
    // 0x3975fc: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x3975FCu;
    SET_GPR_U32(ctx, 31, 0x397604u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397604u; }
        if (ctx->pc != 0x397604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397604u; }
        if (ctx->pc != 0x397604u) { return; }
    }
    ctx->pc = 0x397604u;
label_397604:
    // 0x397604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x397604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397608: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x397608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x39760c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x39760Cu;
    SET_GPR_U32(ctx, 31, 0x397614u);
    ctx->pc = 0x397610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39760Cu;
            // 0x397610: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397614u; }
        if (ctx->pc != 0x397614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397614u; }
        if (ctx->pc != 0x397614u) { return; }
    }
    ctx->pc = 0x397614u;
label_397614:
    // 0x397614: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x397614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397618: 0xc04c650  jal         func_131940
    ctx->pc = 0x397618u;
    SET_GPR_U32(ctx, 31, 0x397620u);
    ctx->pc = 0x39761Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397618u;
            // 0x39761c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397620u; }
        if (ctx->pc != 0x397620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397620u; }
        if (ctx->pc != 0x397620u) { return; }
    }
    ctx->pc = 0x397620u;
label_397620:
    // 0x397620: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x397620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x397624: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x397624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x397628: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x397628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
    // 0x39762c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x397630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x397630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_397634:
    // 0x397634: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x397634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x397638: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x397638u;
    {
        const bool branch_taken_0x397638 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x39763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397638u;
            // 0x39763c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397638) {
            ctx->pc = 0x397648u;
            goto label_397648;
        }
    }
    ctx->pc = 0x397640u;
    // 0x397640: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x397640u;
    {
        const bool branch_taken_0x397640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397640u;
            // 0x397644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397640) {
            ctx->pc = 0x397720u;
            goto label_397720;
        }
    }
    ctx->pc = 0x397648u;
label_397648:
    // 0x397648: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x397648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39764c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39764cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397650: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x397650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x397654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397658: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x397658u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39765c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x39765Cu;
    SET_GPR_U32(ctx, 31, 0x397664u);
    ctx->pc = 0x397660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39765Cu;
            // 0x397660: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397664u; }
        if (ctx->pc != 0x397664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397664u; }
        if (ctx->pc != 0x397664u) { return; }
    }
    ctx->pc = 0x397664u;
label_397664:
    // 0x397664: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x397668: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x39766c: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x39766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x397670: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x397670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x397674: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x397674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
    // 0x397678: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x39767c: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x39767cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x397680: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x397684: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x397684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x397688: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x397688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x39768c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x39768cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x397690: 0x868821  addu        $s1, $a0, $a2
    ctx->pc = 0x397690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x397694: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x397698: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x397698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x39769c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39769cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3976a0: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x3976a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x3976a4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3976a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x3976a8: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x3976a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x3976ac: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3976acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x3976b0: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x3976b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
    // 0x3976b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3976b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3976b8: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x3976b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
    // 0x3976bc: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x3976bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3976c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3976c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3976c4: 0x109a821  addu        $s5, $t0, $t1
    ctx->pc = 0x3976c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3976c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3976c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3976cc: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x3976ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x3976d0: 0xad150000  sw          $s5, 0x0($t0)
    ctx->pc = 0x3976d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 21));
    // 0x3976d4: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x3976d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x3976d8: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x3976d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x3976dc: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x3976dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
    // 0x3976e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3976e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3976e4: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x3976e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
    // 0x3976e8: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x3976e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3976ec: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x3976ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
    // 0x3976f0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x3976f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x3976f4: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x3976F4u;
    SET_GPR_U32(ctx, 31, 0x3976FCu);
    ctx->pc = 0x3976F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3976F4u;
            // 0x3976f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3976FCu; }
        if (ctx->pc != 0x3976FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3976FCu; }
        if (ctx->pc != 0x3976FCu) { return; }
    }
    ctx->pc = 0x3976FCu;
label_3976fc:
    // 0x3976fc: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3976fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x397700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x397700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397704: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x397704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397708: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x397708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39770c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x39770cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397710: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x397710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397714: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x397714u;
    SET_GPR_U32(ctx, 31, 0x39771Cu);
    ctx->pc = 0x397718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397714u;
            // 0x397718: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39771Cu; }
        if (ctx->pc != 0x39771Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39771Cu; }
        if (ctx->pc != 0x39771Cu) { return; }
    }
    ctx->pc = 0x39771Cu;
label_39771c:
    // 0x39771c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_397720:
    // 0x397720: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x397720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x397724: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x397724u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x397728: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x397728u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39772c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39772cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x397730: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x397730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x397734: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x397734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x397738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39773c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39773cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x397740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397744: 0x3e00008  jr          $ra
    ctx->pc = 0x397744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397744u;
            // 0x397748: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39774Cu;
    // 0x39774c: 0x0  nop
    ctx->pc = 0x39774cu;
    // NOP
}
