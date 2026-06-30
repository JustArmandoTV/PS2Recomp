#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB508
// Address: 0x1ab508 - 0x1ab5b8
void sub_001AB508_0x1ab508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB508_0x1ab508");
#endif

    switch (ctx->pc) {
        case 0x1ab53cu: goto label_1ab53c;
        case 0x1ab550u: goto label_1ab550;
        case 0x1ab560u: goto label_1ab560;
        case 0x1ab574u: goto label_1ab574;
        default: break;
    }

    ctx->pc = 0x1ab508u;

    // 0x1ab508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab50c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab514: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ab514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ab518: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ab518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab51c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab520: 0x26222028  addiu       $v0, $s1, 0x2028
    ctx->pc = 0x1ab520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8232));
    // 0x1ab524: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ab524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ab528: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab52c: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x1ab52cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1ab530: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x1ab530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ab534: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1AB534u;
    SET_GPR_U32(ctx, 31, 0x1AB53Cu);
    ctx->pc = 0x1AB538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB534u;
            // 0x1ab538: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB53Cu; }
        if (ctx->pc != 0x1AB53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB53Cu; }
        if (ctx->pc != 0x1AB53Cu) { return; }
    }
    ctx->pc = 0x1AB53Cu;
label_1ab53c:
    // 0x1ab53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab540: 0x10530015  beq         $v0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AB540u;
    {
        const bool branch_taken_0x1ab540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AB544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB540u;
            // 0x1ab544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab540) {
            ctx->pc = 0x1AB598u;
            goto label_1ab598;
        }
    }
    ctx->pc = 0x1AB548u;
    // 0x1ab548: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1AB548u;
    SET_GPR_U32(ctx, 31, 0x1AB550u);
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB550u; }
        if (ctx->pc != 0x1AB550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB550u; }
        if (ctx->pc != 0x1AB550u) { return; }
    }
    ctx->pc = 0x1AB550u;
label_1ab550:
    // 0x1ab550: 0x54530012  bnel        $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AB550u;
    {
        const bool branch_taken_0x1ab550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1ab550) {
            ctx->pc = 0x1AB554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB550u;
            // 0x1ab554: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB59Cu;
            goto label_1ab59c;
        }
    }
    ctx->pc = 0x1AB558u;
    // 0x1ab558: 0xc06ad6e  jal         func_1AB5B8
    ctx->pc = 0x1AB558u;
    SET_GPR_U32(ctx, 31, 0x1AB560u);
    ctx->pc = 0x1AB55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB558u;
            // 0x1ab55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB5B8u;
    if (runtime->hasFunction(0x1AB5B8u)) {
        auto targetFn = runtime->lookupFunction(0x1AB5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB560u; }
        if (ctx->pc != 0x1AB560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB5B8_0x1ab5b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB560u; }
        if (ctx->pc != 0x1AB560u) { return; }
    }
    ctx->pc = 0x1AB560u;
label_1ab560:
    // 0x1ab560: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AB560u;
    {
        const bool branch_taken_0x1ab560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB560u;
            // 0x1ab564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab560) {
            ctx->pc = 0x1AB598u;
            goto label_1ab598;
        }
    }
    ctx->pc = 0x1AB568u;
    // 0x1ab568: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ab568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab56c: 0xc06993c  jal         func_1A64F0
    ctx->pc = 0x1AB56Cu;
    SET_GPR_U32(ctx, 31, 0x1AB574u);
    ctx->pc = 0x1AB570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB56Cu;
            // 0x1ab570: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A64F0u;
    if (runtime->hasFunction(0x1A64F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A64F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB574u; }
        if (ctx->pc != 0x1AB574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A64F0_0x1a64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB574u; }
        if (ctx->pc != 0x1AB574u) { return; }
    }
    ctx->pc = 0x1AB574u;
label_1ab574:
    // 0x1ab574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab57c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab580: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab584: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ab584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab588: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab58c: 0x806adda  j           func_1AB768
    ctx->pc = 0x1AB58Cu;
    ctx->pc = 0x1AB590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB58Cu;
            // 0x1ab590: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB768u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AB594u;
    // 0x1ab594: 0x0  nop
    ctx->pc = 0x1ab594u;
    // NOP
label_1ab598:
    // 0x1ab598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab59c:
    // 0x1ab59c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab59cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab5a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab5a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab5a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ab5a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab5a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5ACu;
            // 0x1ab5b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB5B4u;
    // 0x1ab5b4: 0x0  nop
    ctx->pc = 0x1ab5b4u;
    // NOP
}
