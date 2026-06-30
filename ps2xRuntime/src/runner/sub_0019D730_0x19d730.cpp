#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D730
// Address: 0x19d730 - 0x19d8a0
void sub_0019D730_0x19d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D730_0x19d730");
#endif

    switch (ctx->pc) {
        case 0x19d748u: goto label_19d748;
        case 0x19d764u: goto label_19d764;
        case 0x19d770u: goto label_19d770;
        case 0x19d78cu: goto label_19d78c;
        case 0x19d844u: goto label_19d844;
        default: break;
    }

    ctx->pc = 0x19d730u;

    // 0x19d730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d73c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d740: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D740u;
    SET_GPR_U32(ctx, 31, 0x19D748u);
    ctx->pc = 0x19D744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D740u;
            // 0x19d744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D748u; }
        if (ctx->pc != 0x19D748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D748u; }
        if (ctx->pc != 0x19D748u) { return; }
    }
    ctx->pc = 0x19D748u;
label_19d748:
    // 0x19d748: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19d748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d750: 0x2404fff4  addiu       $a0, $zero, -0xC
    ctx->pc = 0x19d750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x19d754: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D754u;
    {
        const bool branch_taken_0x19d754 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x19D758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D754u;
            // 0x19d758: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d754) {
            ctx->pc = 0x19D778u;
            goto label_19d778;
        }
    }
    ctx->pc = 0x19D75Cu;
    // 0x19d75c: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x19D75Cu;
    SET_GPR_U32(ctx, 31, 0x19D764u);
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D764u; }
        if (ctx->pc != 0x19D764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D764u; }
        if (ctx->pc != 0x19D764u) { return; }
    }
    ctx->pc = 0x19D764u;
label_19d764:
    // 0x19d764: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d768: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19D768u;
    SET_GPR_U32(ctx, 31, 0x19D770u);
    ctx->pc = 0x19D76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D768u;
            // 0x19d76c: 0x248499d8  addiu       $a0, $a0, -0x6628 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D770u; }
        if (ctx->pc != 0x19D770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D770u; }
        if (ctx->pc != 0x19D770u) { return; }
    }
    ctx->pc = 0x19D770u;
label_19d770:
    // 0x19d770: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19D770u;
    {
        const bool branch_taken_0x19d770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D770u;
            // 0x19d774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d770) {
            ctx->pc = 0x19D7B4u;
            goto label_19d7b4;
        }
    }
    ctx->pc = 0x19D778u;
label_19d778:
    // 0x19d778: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19d778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19d77c: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x19D77Cu;
    {
        const bool branch_taken_0x19d77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x19D780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D77Cu;
            // 0x19d780: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d77c) {
            ctx->pc = 0x19D7B4u;
            goto label_19d7b4;
        }
    }
    ctx->pc = 0x19D784u;
    // 0x19d784: 0xc06d74a  jal         func_1B5D28
    ctx->pc = 0x19D784u;
    SET_GPR_U32(ctx, 31, 0x19D78Cu);
    ctx->pc = 0x19D788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D784u;
            // 0x19d788: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D28u;
    if (runtime->hasFunction(0x1B5D28u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D78Cu; }
        if (ctx->pc != 0x19D78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D28_0x1b5d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D78Cu; }
        if (ctx->pc != 0x19D78Cu) { return; }
    }
    ctx->pc = 0x19D78Cu;
label_19d78c:
    // 0x19d78c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x19d78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19d790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19d790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d794: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19d794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d798: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x19d798u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19d79c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19d79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7a0: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D7A0u;
    {
        const bool branch_taken_0x19d7a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x19D7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7A0u;
            // 0x19d7a4: 0x223100a  movz        $v0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7a0) {
            ctx->pc = 0x19D7B0u;
            goto label_19d7b0;
        }
    }
    ctx->pc = 0x19D7A8u;
    // 0x19d7a8: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D7A8u;
    {
        const bool branch_taken_0x19d7a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x19D7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7A8u;
            // 0x19d7ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7a8) {
            ctx->pc = 0x19D7B8u;
            goto label_19d7b8;
        }
    }
    ctx->pc = 0x19D7B0u;
label_19d7b0:
    // 0x19d7b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d7b4:
    // 0x19d7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d7b8:
    // 0x19d7b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d7bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7C0u;
            // 0x19d7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D7C8u;
    // 0x19d7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d7cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19d7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d7d4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D7D4u;
    {
        const bool branch_taken_0x19d7d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7D4u;
            // 0x19d7d8: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7d4) {
            ctx->pc = 0x19D7F0u;
            goto label_19d7f0;
        }
    }
    ctx->pc = 0x19D7DCu;
    // 0x19d7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d7e0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19d7e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7e8: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19D7E8u;
    ctx->pc = 0x19D7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7E8u;
            // 0x19d7ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D7F0u;
label_19d7f0:
    // 0x19d7f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19d7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d7f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D7F8u;
    {
        const bool branch_taken_0x19d7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7F8u;
            // 0x19d7fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7f8) {
            ctx->pc = 0x19D810u;
            goto label_19d810;
        }
    }
    ctx->pc = 0x19D800u;
    // 0x19d800: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19d800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19d804: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19d804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d808: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19D808u;
    ctx->pc = 0x19D80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D808u;
            // 0x19d80c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D810u;
label_19d810:
    // 0x19d810: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19d810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19d814: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19d814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d818: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19D818u;
    ctx->pc = 0x19D81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D818u;
            // 0x19d81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D820u;
    // 0x19d820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d82c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d830: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19d830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d834: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19d838: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19d83c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D83Cu;
    SET_GPR_U32(ctx, 31, 0x19D844u);
    ctx->pc = 0x19D840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D83Cu;
            // 0x19d840: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D844u; }
        if (ctx->pc != 0x19D844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D844u; }
        if (ctx->pc != 0x19D844u) { return; }
    }
    ctx->pc = 0x19D844u;
label_19d844:
    // 0x19d844: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d84c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19d84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d850: 0x24849a00  addiu       $a0, $a0, -0x6600
    ctx->pc = 0x19d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941184));
    // 0x19d854: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D854u;
    {
        const bool branch_taken_0x19d854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D854u;
            // 0x19d858: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d854) {
            ctx->pc = 0x19D878u;
            goto label_19d878;
        }
    }
    ctx->pc = 0x19D85Cu;
    // 0x19d85c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d860: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d864: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19d864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d868: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19d868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d86c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19D86Cu;
    ctx->pc = 0x19D870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D86Cu;
            // 0x19d870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D874u;
    // 0x19d874: 0x0  nop
    ctx->pc = 0x19d874u;
    // NOP
label_19d878:
    // 0x19d878: 0xae11058c  sw          $s1, 0x58C($s0)
    ctx->pc = 0x19d878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 17));
    // 0x19d87c: 0xae120588  sw          $s2, 0x588($s0)
    ctx->pc = 0x19d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 18));
    // 0x19d880: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x19d880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19d884: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x19d884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
    // 0x19d888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19d890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d894: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19d894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d898: 0x806e07e  j           func_1B81F8
    ctx->pc = 0x19D898u;
    ctx->pc = 0x19D89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D898u;
            // 0x19d89c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F8u;
    if (runtime->hasFunction(0x1B81F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B81F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B81F8_0x1b81f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D8A0u;
}
