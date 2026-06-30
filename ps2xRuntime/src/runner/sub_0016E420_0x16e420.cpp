#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E420
// Address: 0x16e420 - 0x16e520
void sub_0016E420_0x16e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E420_0x16e420");
#endif

    switch (ctx->pc) {
        case 0x16e420u: goto label_16e420;
        case 0x16e424u: goto label_16e424;
        case 0x16e428u: goto label_16e428;
        case 0x16e42cu: goto label_16e42c;
        case 0x16e430u: goto label_16e430;
        case 0x16e434u: goto label_16e434;
        case 0x16e438u: goto label_16e438;
        case 0x16e43cu: goto label_16e43c;
        case 0x16e440u: goto label_16e440;
        case 0x16e444u: goto label_16e444;
        case 0x16e448u: goto label_16e448;
        case 0x16e44cu: goto label_16e44c;
        case 0x16e450u: goto label_16e450;
        case 0x16e454u: goto label_16e454;
        case 0x16e458u: goto label_16e458;
        case 0x16e45cu: goto label_16e45c;
        case 0x16e460u: goto label_16e460;
        case 0x16e464u: goto label_16e464;
        case 0x16e468u: goto label_16e468;
        case 0x16e46cu: goto label_16e46c;
        case 0x16e470u: goto label_16e470;
        case 0x16e474u: goto label_16e474;
        case 0x16e478u: goto label_16e478;
        case 0x16e47cu: goto label_16e47c;
        case 0x16e480u: goto label_16e480;
        case 0x16e484u: goto label_16e484;
        case 0x16e488u: goto label_16e488;
        case 0x16e48cu: goto label_16e48c;
        case 0x16e490u: goto label_16e490;
        case 0x16e494u: goto label_16e494;
        case 0x16e498u: goto label_16e498;
        case 0x16e49cu: goto label_16e49c;
        case 0x16e4a0u: goto label_16e4a0;
        case 0x16e4a4u: goto label_16e4a4;
        case 0x16e4a8u: goto label_16e4a8;
        case 0x16e4acu: goto label_16e4ac;
        case 0x16e4b0u: goto label_16e4b0;
        case 0x16e4b4u: goto label_16e4b4;
        case 0x16e4b8u: goto label_16e4b8;
        case 0x16e4bcu: goto label_16e4bc;
        case 0x16e4c0u: goto label_16e4c0;
        case 0x16e4c4u: goto label_16e4c4;
        case 0x16e4c8u: goto label_16e4c8;
        case 0x16e4ccu: goto label_16e4cc;
        case 0x16e4d0u: goto label_16e4d0;
        case 0x16e4d4u: goto label_16e4d4;
        case 0x16e4d8u: goto label_16e4d8;
        case 0x16e4dcu: goto label_16e4dc;
        case 0x16e4e0u: goto label_16e4e0;
        case 0x16e4e4u: goto label_16e4e4;
        case 0x16e4e8u: goto label_16e4e8;
        case 0x16e4ecu: goto label_16e4ec;
        case 0x16e4f0u: goto label_16e4f0;
        case 0x16e4f4u: goto label_16e4f4;
        case 0x16e4f8u: goto label_16e4f8;
        case 0x16e4fcu: goto label_16e4fc;
        case 0x16e500u: goto label_16e500;
        case 0x16e504u: goto label_16e504;
        case 0x16e508u: goto label_16e508;
        case 0x16e50cu: goto label_16e50c;
        case 0x16e510u: goto label_16e510;
        case 0x16e514u: goto label_16e514;
        case 0x16e518u: goto label_16e518;
        case 0x16e51cu: goto label_16e51c;
        default: break;
    }

    ctx->pc = 0x16e420u;

label_16e420:
    // 0x16e420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e424:
    // 0x16e424: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x16e424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_16e428:
    // 0x16e428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e42c:
    // 0x16e42c: 0x2442d170  addiu       $v0, $v0, -0x2E90
    ctx->pc = 0x16e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955376));
label_16e430:
    // 0x16e430: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16e430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e434:
    // 0x16e434: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_16e438:
    if (ctx->pc == 0x16E438u) {
        ctx->pc = 0x16E438u;
            // 0x16e438: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x16E43Cu;
        goto label_16e43c;
    }
    ctx->pc = 0x16E434u;
    {
        const bool branch_taken_0x16e434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e434) {
            ctx->pc = 0x16E438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E434u;
            // 0x16e438: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E448u;
            goto label_16e448;
        }
    }
    ctx->pc = 0x16E43Cu;
label_16e43c:
    // 0x16e43c: 0x60f809  jalr        $v1
label_16e440:
    if (ctx->pc == 0x16E440u) {
        ctx->pc = 0x16E440u;
            // 0x16e440: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x16E444u;
        goto label_16e444;
    }
    ctx->pc = 0x16E43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E444u);
        ctx->pc = 0x16E440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E43Cu;
            // 0x16e440: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E444u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E444u; }
            if (ctx->pc != 0x16E444u) { return; }
        }
        }
    }
    ctx->pc = 0x16E444u;
label_16e444:
    // 0x16e444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e448:
    // 0x16e448: 0x3e00008  jr          $ra
label_16e44c:
    if (ctx->pc == 0x16E44Cu) {
        ctx->pc = 0x16E44Cu;
            // 0x16e44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16E450u;
        goto label_16e450;
    }
    ctx->pc = 0x16E448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E448u;
            // 0x16e44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E450u;
label_16e450:
    // 0x16e450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16e454:
    // 0x16e454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16e458:
    // 0x16e458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16e458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e45c:
    // 0x16e45c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16e45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16e460:
    // 0x16e460: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16e460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e464:
    // 0x16e464: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16e464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16e468:
    // 0x16e468: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16e468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_16e46c:
    // 0x16e46c: 0xc05b948  jal         func_16E520
label_16e470:
    if (ctx->pc == 0x16E470u) {
        ctx->pc = 0x16E470u;
            // 0x16e470: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E474u;
        goto label_16e474;
    }
    ctx->pc = 0x16E46Cu;
    SET_GPR_U32(ctx, 31, 0x16E474u);
    ctx->pc = 0x16E470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E46Cu;
            // 0x16e470: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E520u;
    if (runtime->hasFunction(0x16E520u)) {
        auto targetFn = runtime->lookupFunction(0x16E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E474u; }
        if (ctx->pc != 0x16E474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E520_0x16e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E474u; }
        if (ctx->pc != 0x16E474u) { return; }
    }
    ctx->pc = 0x16E474u;
label_16e474:
    // 0x16e474: 0xc05b14c  jal         func_16C530
label_16e478:
    if (ctx->pc == 0x16E478u) {
        ctx->pc = 0x16E478u;
            // 0x16e478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E47Cu;
        goto label_16e47c;
    }
    ctx->pc = 0x16E474u;
    SET_GPR_U32(ctx, 31, 0x16E47Cu);
    ctx->pc = 0x16E478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E474u;
            // 0x16e478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C530u;
    if (runtime->hasFunction(0x16C530u)) {
        auto targetFn = runtime->lookupFunction(0x16C530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E47Cu; }
        if (ctx->pc != 0x16E47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C530_0x16c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E47Cu; }
        if (ctx->pc != 0x16E47Cu) { return; }
    }
    ctx->pc = 0x16E47Cu;
label_16e47c:
    // 0x16e47c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16e480:
    // 0x16e480: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
label_16e484:
    if (ctx->pc == 0x16E484u) {
        ctx->pc = 0x16E484u;
            // 0x16e484: 0xac50236c  sw          $s0, 0x236C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9068), GPR_U32(ctx, 16));
        ctx->pc = 0x16E488u;
        goto label_16e488;
    }
    ctx->pc = 0x16E480u;
    {
        const bool branch_taken_0x16e480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x16E484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E480u;
            // 0x16e484: 0xac50236c  sw          $s0, 0x236C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9068), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e480) {
            ctx->pc = 0x16E4B0u;
            goto label_16e4b0;
        }
    }
    ctx->pc = 0x16E488u;
label_16e488:
    // 0x16e488: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_16e48c:
    if (ctx->pc == 0x16E48Cu) {
        ctx->pc = 0x16E490u;
        goto label_16e490;
    }
    ctx->pc = 0x16E488u;
    {
        const bool branch_taken_0x16e488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e488) {
            ctx->pc = 0x16E49Cu;
            goto label_16e49c;
        }
    }
    ctx->pc = 0x16E490u;
label_16e490:
    // 0x16e490: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e494:
    // 0x16e494: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
label_16e498:
    if (ctx->pc == 0x16E498u) {
        ctx->pc = 0x16E498u;
            // 0x16e498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E49Cu;
        goto label_16e49c;
    }
    ctx->pc = 0x16E494u;
    {
        const bool branch_taken_0x16e494 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e494) {
            ctx->pc = 0x16E498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E494u;
            // 0x16e498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E4B0u;
            goto label_16e4b0;
        }
    }
    ctx->pc = 0x16E49Cu;
label_16e49c:
    // 0x16e49c: 0xc05b526  jal         func_16D498
label_16e4a0:
    if (ctx->pc == 0x16E4A0u) {
        ctx->pc = 0x16E4A0u;
            // 0x16e4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E4A4u;
        goto label_16e4a4;
    }
    ctx->pc = 0x16E49Cu;
    SET_GPR_U32(ctx, 31, 0x16E4A4u);
    ctx->pc = 0x16E4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E49Cu;
            // 0x16e4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D498u;
    if (runtime->hasFunction(0x16D498u)) {
        auto targetFn = runtime->lookupFunction(0x16D498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4A4u; }
        if (ctx->pc != 0x16E4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D498_0x16d498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4A4u; }
        if (ctx->pc != 0x16E4A4u) { return; }
    }
    ctx->pc = 0x16E4A4u;
label_16e4a4:
    // 0x16e4a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_16e4a8:
    if (ctx->pc == 0x16E4A8u) {
        ctx->pc = 0x16E4A8u;
            // 0x16e4a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E4ACu;
        goto label_16e4ac;
    }
    ctx->pc = 0x16E4A4u;
    {
        const bool branch_taken_0x16e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E4A4u;
            // 0x16e4a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4a4) {
            ctx->pc = 0x16E4B4u;
            goto label_16e4b4;
        }
    }
    ctx->pc = 0x16E4ACu;
label_16e4ac:
    // 0x16e4ac: 0x0  nop
    ctx->pc = 0x16e4acu;
    // NOP
label_16e4b0:
    // 0x16e4b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16e4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e4b4:
    // 0x16e4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e4b8:
    // 0x16e4b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16e4b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16e4bc:
    // 0x16e4bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16e4bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e4c0:
    // 0x16e4c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16e4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16e4c4:
    // 0x16e4c4: 0x3e00008  jr          $ra
label_16e4c8:
    if (ctx->pc == 0x16E4C8u) {
        ctx->pc = 0x16E4C8u;
            // 0x16e4c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16E4CCu;
        goto label_16e4cc;
    }
    ctx->pc = 0x16E4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E4C4u;
            // 0x16e4c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E4CCu;
label_16e4cc:
    // 0x16e4cc: 0x0  nop
    ctx->pc = 0x16e4ccu;
    // NOP
label_16e4d0:
    // 0x16e4d0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16e4d4:
    // 0x16e4d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e4d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e4d8:
    // 0x16e4d8: 0x8c43236c  lw          $v1, 0x236C($v0)
    ctx->pc = 0x16e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9068)));
label_16e4dc:
    // 0x16e4dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16e4e0:
    // 0x16e4e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16e4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e4e4:
    // 0x16e4e4: 0x10700007  beq         $v1, $s0, . + 4 + (0x7 << 2)
label_16e4e8:
    if (ctx->pc == 0x16E4E8u) {
        ctx->pc = 0x16E4E8u;
            // 0x16e4e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x16E4ECu;
        goto label_16e4ec;
    }
    ctx->pc = 0x16E4E4u;
    {
        const bool branch_taken_0x16e4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x16E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E4E4u;
            // 0x16e4e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4e4) {
            ctx->pc = 0x16E504u;
            goto label_16e504;
        }
    }
    ctx->pc = 0x16E4ECu;
label_16e4ec:
    // 0x16e4ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16e4f0:
    if (ctx->pc == 0x16E4F0u) {
        ctx->pc = 0x16E4F0u;
            // 0x16e4f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16E4F4u;
        goto label_16e4f4;
    }
    ctx->pc = 0x16E4ECu;
    {
        const bool branch_taken_0x16e4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E4ECu;
            // 0x16e4f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4ec) {
            ctx->pc = 0x16E4FCu;
            goto label_16e4fc;
        }
    }
    ctx->pc = 0x16E4F4u;
label_16e4f4:
    // 0x16e4f4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_16e4f8:
    if (ctx->pc == 0x16E4F8u) {
        ctx->pc = 0x16E4F8u;
            // 0x16e4f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E4FCu;
        goto label_16e4fc;
    }
    ctx->pc = 0x16E4F4u;
    {
        const bool branch_taken_0x16e4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e4f4) {
            ctx->pc = 0x16E4F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E4F4u;
            // 0x16e4f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E504u;
            goto label_16e504;
        }
    }
    ctx->pc = 0x16E4FCu;
label_16e4fc:
    // 0x16e4fc: 0xc05b59e  jal         func_16D678
label_16e500:
    if (ctx->pc == 0x16E500u) {
        ctx->pc = 0x16E504u;
        goto label_16e504;
    }
    ctx->pc = 0x16E4FCu;
    SET_GPR_U32(ctx, 31, 0x16E504u);
    ctx->pc = 0x16D678u;
    if (runtime->hasFunction(0x16D678u)) {
        auto targetFn = runtime->lookupFunction(0x16D678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E504u; }
        if (ctx->pc != 0x16E504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D678_0x16d678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E504u; }
        if (ctx->pc != 0x16E504u) { return; }
    }
    ctx->pc = 0x16E504u;
label_16e504:
    // 0x16e504: 0xc05b14c  jal         func_16C530
label_16e508:
    if (ctx->pc == 0x16E508u) {
        ctx->pc = 0x16E508u;
            // 0x16e508: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x16E50Cu;
        goto label_16e50c;
    }
    ctx->pc = 0x16E504u;
    SET_GPR_U32(ctx, 31, 0x16E50Cu);
    ctx->pc = 0x16E508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E504u;
            // 0x16e508: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C530u;
    if (runtime->hasFunction(0x16C530u)) {
        auto targetFn = runtime->lookupFunction(0x16C530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E50Cu; }
        if (ctx->pc != 0x16E50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C530_0x16c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E50Cu; }
        if (ctx->pc != 0x16E50Cu) { return; }
    }
    ctx->pc = 0x16E50Cu;
label_16e50c:
    // 0x16e50c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16e50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e510:
    // 0x16e510: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16e514:
    // 0x16e514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e518:
    // 0x16e518: 0x3e00008  jr          $ra
label_16e51c:
    if (ctx->pc == 0x16E51Cu) {
        ctx->pc = 0x16E51Cu;
            // 0x16e51c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16E520u;
        goto label_fallthrough_0x16e518;
    }
    ctx->pc = 0x16E518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E518u;
            // 0x16e51c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16e518:
    ctx->pc = 0x16E520u;
}
