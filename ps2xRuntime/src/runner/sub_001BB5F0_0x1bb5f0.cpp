#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB5F0
// Address: 0x1bb5f0 - 0x1bb6c0
void sub_001BB5F0_0x1bb5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB5F0_0x1bb5f0");
#endif

    switch (ctx->pc) {
        case 0x1bb62cu: goto label_1bb62c;
        case 0x1bb660u: goto label_1bb660;
        case 0x1bb678u: goto label_1bb678;
        case 0x1bb688u: goto label_1bb688;
        case 0x1bb69cu: goto label_1bb69c;
        default: break;
    }

    ctx->pc = 0x1bb5f0u;

    // 0x1bb5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb5f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb5fc: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1bb5fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bb604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb608: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bb608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bb60c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bb60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb610: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bb610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bb614: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1bb614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bb618: 0x2863006e  slti        $v1, $v1, 0x6E
    ctx->pc = 0x1bb618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x1bb61c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BB61Cu;
    {
        const bool branch_taken_0x1bb61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB61Cu;
            // 0x1bb620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb61c) {
            ctx->pc = 0x1BB6A4u;
            goto label_1bb6a4;
        }
    }
    ctx->pc = 0x1BB624u;
    // 0x1bb624: 0xc06f0e8  jal         func_1BC3A0
    ctx->pc = 0x1BB624u;
    SET_GPR_U32(ctx, 31, 0x1BB62Cu);
    ctx->pc = 0x1BC3A0u;
    if (runtime->hasFunction(0x1BC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB62Cu; }
        if (ctx->pc != 0x1BB62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC3A0_0x1bc3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB62Cu; }
        if (ctx->pc != 0x1BB62Cu) { return; }
    }
    ctx->pc = 0x1BB62Cu;
label_1bb62c:
    // 0x1bb62c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x1bb62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1bb630: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bb630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb634: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1bb634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1bb638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb63c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB63Cu;
    {
        const bool branch_taken_0x1bb63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB63Cu;
            // 0x1bb640: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb63c) {
            ctx->pc = 0x1BB658u;
            goto label_1bb658;
        }
    }
    ctx->pc = 0x1BB644u;
    // 0x1bb644: 0x1066000e  beq         $v1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1BB644u;
    {
        const bool branch_taken_0x1bb644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1BB648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB644u;
            // 0x1bb648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb644) {
            ctx->pc = 0x1BB680u;
            goto label_1bb680;
        }
    }
    ctx->pc = 0x1BB64Cu;
    // 0x1bb64c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BB64Cu;
    {
        const bool branch_taken_0x1bb64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB64Cu;
            // 0x1bb650: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb64c) {
            ctx->pc = 0x1BB6A8u;
            goto label_1bb6a8;
        }
    }
    ctx->pc = 0x1BB654u;
    // 0x1bb654: 0x0  nop
    ctx->pc = 0x1bb654u;
    // NOP
label_1bb658:
    // 0x1bb658: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BB658u;
    SET_GPR_U32(ctx, 31, 0x1BB660u);
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB660u; }
        if (ctx->pc != 0x1BB660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB660u; }
        if (ctx->pc != 0x1BB660u) { return; }
    }
    ctx->pc = 0x1BB660u;
label_1bb660:
    // 0x1bb660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb664: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bb664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb668: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BB668u;
    {
        const bool branch_taken_0x1bb668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB668u;
            // 0x1bb66c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb668) {
            ctx->pc = 0x1BB6A4u;
            goto label_1bb6a4;
        }
    }
    ctx->pc = 0x1BB670u;
    // 0x1bb670: 0xc06f0d2  jal         func_1BC348
    ctx->pc = 0x1BB670u;
    SET_GPR_U32(ctx, 31, 0x1BB678u);
    ctx->pc = 0x1BC348u;
    if (runtime->hasFunction(0x1BC348u)) {
        auto targetFn = runtime->lookupFunction(0x1BC348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB678u; }
        if (ctx->pc != 0x1BB678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC348_0x1bc348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB678u; }
        if (ctx->pc != 0x1BB678u) { return; }
    }
    ctx->pc = 0x1BB678u;
label_1bb678:
    // 0x1bb678: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB678u;
    {
        const bool branch_taken_0x1bb678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB678u;
            // 0x1bb67c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb678) {
            ctx->pc = 0x1BB6A0u;
            goto label_1bb6a0;
        }
    }
    ctx->pc = 0x1BB680u;
label_1bb680:
    // 0x1bb680: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BB680u;
    SET_GPR_U32(ctx, 31, 0x1BB688u);
    ctx->pc = 0x1BB684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB680u;
            // 0x1bb684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB688u; }
        if (ctx->pc != 0x1BB688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB688u; }
        if (ctx->pc != 0x1BB688u) { return; }
    }
    ctx->pc = 0x1BB688u;
label_1bb688:
    // 0x1bb688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bb688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb68c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB68Cu;
    {
        const bool branch_taken_0x1bb68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB68Cu;
            // 0x1bb690: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb68c) {
            ctx->pc = 0x1BB6A4u;
            goto label_1bb6a4;
        }
    }
    ctx->pc = 0x1BB694u;
    // 0x1bb694: 0xc06f0e2  jal         func_1BC388
    ctx->pc = 0x1BB694u;
    SET_GPR_U32(ctx, 31, 0x1BB69Cu);
    ctx->pc = 0x1BC388u;
    if (runtime->hasFunction(0x1BC388u)) {
        auto targetFn = runtime->lookupFunction(0x1BC388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB69Cu; }
        if (ctx->pc != 0x1BB69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC388_0x1bc388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB69Cu; }
        if (ctx->pc != 0x1BB69Cu) { return; }
    }
    ctx->pc = 0x1BB69Cu;
label_1bb69c:
    // 0x1bb69c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1bb69cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1bb6a0:
    // 0x1bb6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb6a4:
    // 0x1bb6a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb6a8:
    // 0x1bb6a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb6ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bb6acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb6b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bb6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bb6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6B4u;
            // 0x1bb6b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB6BCu;
    // 0x1bb6bc: 0x0  nop
    ctx->pc = 0x1bb6bcu;
    // NOP
}
