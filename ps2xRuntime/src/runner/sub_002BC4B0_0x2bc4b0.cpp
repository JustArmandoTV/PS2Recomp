#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC4B0
// Address: 0x2bc4b0 - 0x2bc620
void sub_002BC4B0_0x2bc4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC4B0_0x2bc4b0");
#endif

    switch (ctx->pc) {
        case 0x2bc4b0u: goto label_2bc4b0;
        case 0x2bc4b4u: goto label_2bc4b4;
        case 0x2bc4b8u: goto label_2bc4b8;
        case 0x2bc4bcu: goto label_2bc4bc;
        case 0x2bc4c0u: goto label_2bc4c0;
        case 0x2bc4c4u: goto label_2bc4c4;
        case 0x2bc4c8u: goto label_2bc4c8;
        case 0x2bc4ccu: goto label_2bc4cc;
        case 0x2bc4d0u: goto label_2bc4d0;
        case 0x2bc4d4u: goto label_2bc4d4;
        case 0x2bc4d8u: goto label_2bc4d8;
        case 0x2bc4dcu: goto label_2bc4dc;
        case 0x2bc4e0u: goto label_2bc4e0;
        case 0x2bc4e4u: goto label_2bc4e4;
        case 0x2bc4e8u: goto label_2bc4e8;
        case 0x2bc4ecu: goto label_2bc4ec;
        case 0x2bc4f0u: goto label_2bc4f0;
        case 0x2bc4f4u: goto label_2bc4f4;
        case 0x2bc4f8u: goto label_2bc4f8;
        case 0x2bc4fcu: goto label_2bc4fc;
        case 0x2bc500u: goto label_2bc500;
        case 0x2bc504u: goto label_2bc504;
        case 0x2bc508u: goto label_2bc508;
        case 0x2bc50cu: goto label_2bc50c;
        case 0x2bc510u: goto label_2bc510;
        case 0x2bc514u: goto label_2bc514;
        case 0x2bc518u: goto label_2bc518;
        case 0x2bc51cu: goto label_2bc51c;
        case 0x2bc520u: goto label_2bc520;
        case 0x2bc524u: goto label_2bc524;
        case 0x2bc528u: goto label_2bc528;
        case 0x2bc52cu: goto label_2bc52c;
        case 0x2bc530u: goto label_2bc530;
        case 0x2bc534u: goto label_2bc534;
        case 0x2bc538u: goto label_2bc538;
        case 0x2bc53cu: goto label_2bc53c;
        case 0x2bc540u: goto label_2bc540;
        case 0x2bc544u: goto label_2bc544;
        case 0x2bc548u: goto label_2bc548;
        case 0x2bc54cu: goto label_2bc54c;
        case 0x2bc550u: goto label_2bc550;
        case 0x2bc554u: goto label_2bc554;
        case 0x2bc558u: goto label_2bc558;
        case 0x2bc55cu: goto label_2bc55c;
        case 0x2bc560u: goto label_2bc560;
        case 0x2bc564u: goto label_2bc564;
        case 0x2bc568u: goto label_2bc568;
        case 0x2bc56cu: goto label_2bc56c;
        case 0x2bc570u: goto label_2bc570;
        case 0x2bc574u: goto label_2bc574;
        case 0x2bc578u: goto label_2bc578;
        case 0x2bc57cu: goto label_2bc57c;
        case 0x2bc580u: goto label_2bc580;
        case 0x2bc584u: goto label_2bc584;
        case 0x2bc588u: goto label_2bc588;
        case 0x2bc58cu: goto label_2bc58c;
        case 0x2bc590u: goto label_2bc590;
        case 0x2bc594u: goto label_2bc594;
        case 0x2bc598u: goto label_2bc598;
        case 0x2bc59cu: goto label_2bc59c;
        case 0x2bc5a0u: goto label_2bc5a0;
        case 0x2bc5a4u: goto label_2bc5a4;
        case 0x2bc5a8u: goto label_2bc5a8;
        case 0x2bc5acu: goto label_2bc5ac;
        case 0x2bc5b0u: goto label_2bc5b0;
        case 0x2bc5b4u: goto label_2bc5b4;
        case 0x2bc5b8u: goto label_2bc5b8;
        case 0x2bc5bcu: goto label_2bc5bc;
        case 0x2bc5c0u: goto label_2bc5c0;
        case 0x2bc5c4u: goto label_2bc5c4;
        case 0x2bc5c8u: goto label_2bc5c8;
        case 0x2bc5ccu: goto label_2bc5cc;
        case 0x2bc5d0u: goto label_2bc5d0;
        case 0x2bc5d4u: goto label_2bc5d4;
        case 0x2bc5d8u: goto label_2bc5d8;
        case 0x2bc5dcu: goto label_2bc5dc;
        case 0x2bc5e0u: goto label_2bc5e0;
        case 0x2bc5e4u: goto label_2bc5e4;
        case 0x2bc5e8u: goto label_2bc5e8;
        case 0x2bc5ecu: goto label_2bc5ec;
        case 0x2bc5f0u: goto label_2bc5f0;
        case 0x2bc5f4u: goto label_2bc5f4;
        case 0x2bc5f8u: goto label_2bc5f8;
        case 0x2bc5fcu: goto label_2bc5fc;
        case 0x2bc600u: goto label_2bc600;
        case 0x2bc604u: goto label_2bc604;
        case 0x2bc608u: goto label_2bc608;
        case 0x2bc60cu: goto label_2bc60c;
        case 0x2bc610u: goto label_2bc610;
        case 0x2bc614u: goto label_2bc614;
        case 0x2bc618u: goto label_2bc618;
        case 0x2bc61cu: goto label_2bc61c;
        default: break;
    }

    ctx->pc = 0x2bc4b0u;

label_2bc4b0:
    // 0x2bc4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bc4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bc4b4:
    // 0x2bc4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bc4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bc4b8:
    // 0x2bc4b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bc4bc:
    // 0x2bc4bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bc4c0:
    // 0x2bc4c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bc4c4:
    // 0x2bc4c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2bc4c8:
    if (ctx->pc == 0x2BC4C8u) {
        ctx->pc = 0x2BC4C8u;
            // 0x2bc4c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4CCu;
        goto label_2bc4cc;
    }
    ctx->pc = 0x2BC4C4u;
    {
        const bool branch_taken_0x2bc4c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC4C4u;
            // 0x2bc4c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4c4) {
            ctx->pc = 0x2BC508u;
            goto label_2bc508;
        }
    }
    ctx->pc = 0x2BC4CCu;
label_2bc4cc:
    // 0x2bc4cc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2bc4d0:
    if (ctx->pc == 0x2BC4D0u) {
        ctx->pc = 0x2BC4D0u;
            // 0x2bc4d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BC4D4u;
        goto label_2bc4d4;
    }
    ctx->pc = 0x2BC4CCu;
    {
        const bool branch_taken_0x2bc4cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4cc) {
            ctx->pc = 0x2BC4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC4CCu;
            // 0x2bc4d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC4F4u;
            goto label_2bc4f4;
        }
    }
    ctx->pc = 0x2BC4D4u;
label_2bc4d4:
    // 0x2bc4d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2bc4d8:
    if (ctx->pc == 0x2BC4D8u) {
        ctx->pc = 0x2BC4DCu;
        goto label_2bc4dc;
    }
    ctx->pc = 0x2BC4D4u;
    {
        const bool branch_taken_0x2bc4d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4d4) {
            ctx->pc = 0x2BC4F0u;
            goto label_2bc4f0;
        }
    }
    ctx->pc = 0x2BC4DCu;
label_2bc4dc:
    // 0x2bc4dc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bc4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2bc4e0:
    // 0x2bc4e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bc4e4:
    if (ctx->pc == 0x2BC4E4u) {
        ctx->pc = 0x2BC4E8u;
        goto label_2bc4e8;
    }
    ctx->pc = 0x2BC4E0u;
    {
        const bool branch_taken_0x2bc4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4e0) {
            ctx->pc = 0x2BC4F0u;
            goto label_2bc4f0;
        }
    }
    ctx->pc = 0x2BC4E8u;
label_2bc4e8:
    // 0x2bc4e8: 0xc0400a8  jal         func_1002A0
label_2bc4ec:
    if (ctx->pc == 0x2BC4ECu) {
        ctx->pc = 0x2BC4F0u;
        goto label_2bc4f0;
    }
    ctx->pc = 0x2BC4E8u;
    SET_GPR_U32(ctx, 31, 0x2BC4F0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC4F0u; }
        if (ctx->pc != 0x2BC4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC4F0u; }
        if (ctx->pc != 0x2BC4F0u) { return; }
    }
    ctx->pc = 0x2BC4F0u;
label_2bc4f0:
    // 0x2bc4f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bc4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bc4f4:
    // 0x2bc4f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bc4f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bc4f8:
    // 0x2bc4f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bc4fc:
    if (ctx->pc == 0x2BC4FCu) {
        ctx->pc = 0x2BC4FCu;
            // 0x2bc4fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC500u;
        goto label_2bc500;
    }
    ctx->pc = 0x2BC4F8u;
    {
        const bool branch_taken_0x2bc4f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bc4f8) {
            ctx->pc = 0x2BC4FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC4F8u;
            // 0x2bc4fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC50Cu;
            goto label_2bc50c;
        }
    }
    ctx->pc = 0x2BC500u;
label_2bc500:
    // 0x2bc500: 0xc0400a8  jal         func_1002A0
label_2bc504:
    if (ctx->pc == 0x2BC504u) {
        ctx->pc = 0x2BC504u;
            // 0x2bc504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC508u;
        goto label_2bc508;
    }
    ctx->pc = 0x2BC500u;
    SET_GPR_U32(ctx, 31, 0x2BC508u);
    ctx->pc = 0x2BC504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC500u;
            // 0x2bc504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC508u; }
        if (ctx->pc != 0x2BC508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC508u; }
        if (ctx->pc != 0x2BC508u) { return; }
    }
    ctx->pc = 0x2BC508u;
label_2bc508:
    // 0x2bc508: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bc508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc50c:
    // 0x2bc50c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bc50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bc510:
    // 0x2bc510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc514:
    // 0x2bc514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc518:
    // 0x2bc518: 0x3e00008  jr          $ra
label_2bc51c:
    if (ctx->pc == 0x2BC51Cu) {
        ctx->pc = 0x2BC51Cu;
            // 0x2bc51c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BC520u;
        goto label_2bc520;
    }
    ctx->pc = 0x2BC518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC518u;
            // 0x2bc51c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC520u;
label_2bc520:
    // 0x2bc520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bc520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bc524:
    // 0x2bc524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bc524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bc528:
    // 0x2bc528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bc52c:
    // 0x2bc52c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bc530:
    // 0x2bc530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bc534:
    // 0x2bc534: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2bc538:
    if (ctx->pc == 0x2BC538u) {
        ctx->pc = 0x2BC538u;
            // 0x2bc538: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC53Cu;
        goto label_2bc53c;
    }
    ctx->pc = 0x2BC534u;
    {
        const bool branch_taken_0x2bc534 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC534u;
            // 0x2bc538: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc534) {
            ctx->pc = 0x2BC5FCu;
            goto label_2bc5fc;
        }
    }
    ctx->pc = 0x2BC53Cu;
label_2bc53c:
    // 0x2bc53c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bc53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2bc540:
    // 0x2bc540: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bc540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2bc544:
    // 0x2bc544: 0x24635100  addiu       $v1, $v1, 0x5100
    ctx->pc = 0x2bc544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20736));
label_2bc548:
    // 0x2bc548: 0x24425140  addiu       $v0, $v0, 0x5140
    ctx->pc = 0x2bc548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20800));
label_2bc54c:
    // 0x2bc54c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bc54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bc550:
    // 0x2bc550: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bc550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bc554:
    // 0x2bc554: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bc554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bc558:
    // 0x2bc558: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2bc558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2bc55c:
    // 0x2bc55c: 0x320f809  jalr        $t9
label_2bc560:
    if (ctx->pc == 0x2BC560u) {
        ctx->pc = 0x2BC564u;
        goto label_2bc564;
    }
    ctx->pc = 0x2BC55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC564u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC564u; }
            if (ctx->pc != 0x2BC564u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC564u;
label_2bc564:
    // 0x2bc564: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2bc568:
    if (ctx->pc == 0x2BC568u) {
        ctx->pc = 0x2BC568u;
            // 0x2bc568: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BC56Cu;
        goto label_2bc56c;
    }
    ctx->pc = 0x2BC564u;
    {
        const bool branch_taken_0x2bc564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc564) {
            ctx->pc = 0x2BC568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC564u;
            // 0x2bc568: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC5E8u;
            goto label_2bc5e8;
        }
    }
    ctx->pc = 0x2BC56Cu;
label_2bc56c:
    // 0x2bc56c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bc570:
    // 0x2bc570: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bc574:
    // 0x2bc574: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2bc574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2bc578:
    // 0x2bc578: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2bc578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2bc57c:
    // 0x2bc57c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bc580:
    // 0x2bc580: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2bc580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2bc584:
    // 0x2bc584: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2bc588:
    if (ctx->pc == 0x2BC588u) {
        ctx->pc = 0x2BC588u;
            // 0x2bc588: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2BC58Cu;
        goto label_2bc58c;
    }
    ctx->pc = 0x2BC584u;
    {
        const bool branch_taken_0x2bc584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC584u;
            // 0x2bc588: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc584) {
            ctx->pc = 0x2BC5C0u;
            goto label_2bc5c0;
        }
    }
    ctx->pc = 0x2BC58Cu;
label_2bc58c:
    // 0x2bc58c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bc590:
    // 0x2bc590: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2bc590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2bc594:
    // 0x2bc594: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bc594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bc598:
    // 0x2bc598: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2bc598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2bc59c:
    // 0x2bc59c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2bc5a0:
    if (ctx->pc == 0x2BC5A0u) {
        ctx->pc = 0x2BC5A4u;
        goto label_2bc5a4;
    }
    ctx->pc = 0x2BC59Cu;
    {
        const bool branch_taken_0x2bc59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc59c) {
            ctx->pc = 0x2BC5C0u;
            goto label_2bc5c0;
        }
    }
    ctx->pc = 0x2BC5A4u;
label_2bc5a4:
    // 0x2bc5a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bc5a8:
    if (ctx->pc == 0x2BC5A8u) {
        ctx->pc = 0x2BC5A8u;
            // 0x2bc5a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2BC5ACu;
        goto label_2bc5ac;
    }
    ctx->pc = 0x2BC5A4u;
    {
        const bool branch_taken_0x2bc5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc5a4) {
            ctx->pc = 0x2BC5A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC5A4u;
            // 0x2bc5a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC5C0u;
            goto label_2bc5c0;
        }
    }
    ctx->pc = 0x2BC5ACu;
label_2bc5ac:
    // 0x2bc5ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bc5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bc5b0:
    // 0x2bc5b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bc5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bc5b4:
    // 0x2bc5b4: 0x320f809  jalr        $t9
label_2bc5b8:
    if (ctx->pc == 0x2BC5B8u) {
        ctx->pc = 0x2BC5B8u;
            // 0x2bc5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BC5BCu;
        goto label_2bc5bc;
    }
    ctx->pc = 0x2BC5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC5BCu);
        ctx->pc = 0x2BC5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC5B4u;
            // 0x2bc5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC5BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC5BCu; }
            if (ctx->pc != 0x2BC5BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2BC5BCu;
label_2bc5bc:
    // 0x2bc5bc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2bc5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2bc5c0:
    // 0x2bc5c0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2bc5c4:
    if (ctx->pc == 0x2BC5C4u) {
        ctx->pc = 0x2BC5C8u;
        goto label_2bc5c8;
    }
    ctx->pc = 0x2BC5C0u;
    {
        const bool branch_taken_0x2bc5c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc5c0) {
            ctx->pc = 0x2BC5E4u;
            goto label_2bc5e4;
        }
    }
    ctx->pc = 0x2BC5C8u;
label_2bc5c8:
    // 0x2bc5c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bc5cc:
    // 0x2bc5cc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2bc5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2bc5d0:
    // 0x2bc5d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2bc5d4:
    if (ctx->pc == 0x2BC5D4u) {
        ctx->pc = 0x2BC5D4u;
            // 0x2bc5d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BC5D8u;
        goto label_2bc5d8;
    }
    ctx->pc = 0x2BC5D0u;
    {
        const bool branch_taken_0x2bc5d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC5D0u;
            // 0x2bc5d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc5d0) {
            ctx->pc = 0x2BC5E4u;
            goto label_2bc5e4;
        }
    }
    ctx->pc = 0x2BC5D8u;
label_2bc5d8:
    // 0x2bc5d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bc5dc:
    // 0x2bc5dc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2bc5e0:
    // 0x2bc5e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bc5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bc5e4:
    // 0x2bc5e4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bc5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bc5e8:
    // 0x2bc5e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bc5e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bc5ec:
    // 0x2bc5ec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bc5f0:
    if (ctx->pc == 0x2BC5F0u) {
        ctx->pc = 0x2BC5F0u;
            // 0x2bc5f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC5F4u;
        goto label_2bc5f4;
    }
    ctx->pc = 0x2BC5ECu;
    {
        const bool branch_taken_0x2bc5ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bc5ec) {
            ctx->pc = 0x2BC5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC5ECu;
            // 0x2bc5f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC600u;
            goto label_2bc600;
        }
    }
    ctx->pc = 0x2BC5F4u;
label_2bc5f4:
    // 0x2bc5f4: 0xc0400a8  jal         func_1002A0
label_2bc5f8:
    if (ctx->pc == 0x2BC5F8u) {
        ctx->pc = 0x2BC5F8u;
            // 0x2bc5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC5FCu;
        goto label_2bc5fc;
    }
    ctx->pc = 0x2BC5F4u;
    SET_GPR_U32(ctx, 31, 0x2BC5FCu);
    ctx->pc = 0x2BC5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC5F4u;
            // 0x2bc5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC5FCu; }
        if (ctx->pc != 0x2BC5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC5FCu; }
        if (ctx->pc != 0x2BC5FCu) { return; }
    }
    ctx->pc = 0x2BC5FCu;
label_2bc5fc:
    // 0x2bc5fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bc5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc600:
    // 0x2bc600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bc600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bc604:
    // 0x2bc604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc608:
    // 0x2bc608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc60c:
    // 0x2bc60c: 0x3e00008  jr          $ra
label_2bc610:
    if (ctx->pc == 0x2BC610u) {
        ctx->pc = 0x2BC610u;
            // 0x2bc610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BC614u;
        goto label_2bc614;
    }
    ctx->pc = 0x2BC60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC60Cu;
            // 0x2bc610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC614u;
label_2bc614:
    // 0x2bc614: 0x0  nop
    ctx->pc = 0x2bc614u;
    // NOP
label_2bc618:
    // 0x2bc618: 0x0  nop
    ctx->pc = 0x2bc618u;
    // NOP
label_2bc61c:
    // 0x2bc61c: 0x0  nop
    ctx->pc = 0x2bc61cu;
    // NOP
}
