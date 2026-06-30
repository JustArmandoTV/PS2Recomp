#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005048A0
// Address: 0x5048a0 - 0x5049e0
void sub_005048A0_0x5048a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005048A0_0x5048a0");
#endif

    switch (ctx->pc) {
        case 0x5048a0u: goto label_5048a0;
        case 0x5048a4u: goto label_5048a4;
        case 0x5048a8u: goto label_5048a8;
        case 0x5048acu: goto label_5048ac;
        case 0x5048b0u: goto label_5048b0;
        case 0x5048b4u: goto label_5048b4;
        case 0x5048b8u: goto label_5048b8;
        case 0x5048bcu: goto label_5048bc;
        case 0x5048c0u: goto label_5048c0;
        case 0x5048c4u: goto label_5048c4;
        case 0x5048c8u: goto label_5048c8;
        case 0x5048ccu: goto label_5048cc;
        case 0x5048d0u: goto label_5048d0;
        case 0x5048d4u: goto label_5048d4;
        case 0x5048d8u: goto label_5048d8;
        case 0x5048dcu: goto label_5048dc;
        case 0x5048e0u: goto label_5048e0;
        case 0x5048e4u: goto label_5048e4;
        case 0x5048e8u: goto label_5048e8;
        case 0x5048ecu: goto label_5048ec;
        case 0x5048f0u: goto label_5048f0;
        case 0x5048f4u: goto label_5048f4;
        case 0x5048f8u: goto label_5048f8;
        case 0x5048fcu: goto label_5048fc;
        case 0x504900u: goto label_504900;
        case 0x504904u: goto label_504904;
        case 0x504908u: goto label_504908;
        case 0x50490cu: goto label_50490c;
        case 0x504910u: goto label_504910;
        case 0x504914u: goto label_504914;
        case 0x504918u: goto label_504918;
        case 0x50491cu: goto label_50491c;
        case 0x504920u: goto label_504920;
        case 0x504924u: goto label_504924;
        case 0x504928u: goto label_504928;
        case 0x50492cu: goto label_50492c;
        case 0x504930u: goto label_504930;
        case 0x504934u: goto label_504934;
        case 0x504938u: goto label_504938;
        case 0x50493cu: goto label_50493c;
        case 0x504940u: goto label_504940;
        case 0x504944u: goto label_504944;
        case 0x504948u: goto label_504948;
        case 0x50494cu: goto label_50494c;
        case 0x504950u: goto label_504950;
        case 0x504954u: goto label_504954;
        case 0x504958u: goto label_504958;
        case 0x50495cu: goto label_50495c;
        case 0x504960u: goto label_504960;
        case 0x504964u: goto label_504964;
        case 0x504968u: goto label_504968;
        case 0x50496cu: goto label_50496c;
        case 0x504970u: goto label_504970;
        case 0x504974u: goto label_504974;
        case 0x504978u: goto label_504978;
        case 0x50497cu: goto label_50497c;
        case 0x504980u: goto label_504980;
        case 0x504984u: goto label_504984;
        case 0x504988u: goto label_504988;
        case 0x50498cu: goto label_50498c;
        case 0x504990u: goto label_504990;
        case 0x504994u: goto label_504994;
        case 0x504998u: goto label_504998;
        case 0x50499cu: goto label_50499c;
        case 0x5049a0u: goto label_5049a0;
        case 0x5049a4u: goto label_5049a4;
        case 0x5049a8u: goto label_5049a8;
        case 0x5049acu: goto label_5049ac;
        case 0x5049b0u: goto label_5049b0;
        case 0x5049b4u: goto label_5049b4;
        case 0x5049b8u: goto label_5049b8;
        case 0x5049bcu: goto label_5049bc;
        case 0x5049c0u: goto label_5049c0;
        case 0x5049c4u: goto label_5049c4;
        case 0x5049c8u: goto label_5049c8;
        case 0x5049ccu: goto label_5049cc;
        case 0x5049d0u: goto label_5049d0;
        case 0x5049d4u: goto label_5049d4;
        case 0x5049d8u: goto label_5049d8;
        case 0x5049dcu: goto label_5049dc;
        default: break;
    }

    ctx->pc = 0x5048a0u;

label_5048a0:
    // 0x5048a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5048a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5048a4:
    // 0x5048a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5048a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5048a8:
    // 0x5048a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5048a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5048ac:
    // 0x5048ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5048acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5048b0:
    // 0x5048b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5048b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5048b4:
    // 0x5048b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_5048b8:
    if (ctx->pc == 0x5048B8u) {
        ctx->pc = 0x5048B8u;
            // 0x5048b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5048BCu;
        goto label_5048bc;
    }
    ctx->pc = 0x5048B4u;
    {
        const bool branch_taken_0x5048b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5048B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5048B4u;
            // 0x5048b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5048b4) {
            ctx->pc = 0x5048F8u;
            goto label_5048f8;
        }
    }
    ctx->pc = 0x5048BCu;
label_5048bc:
    // 0x5048bc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_5048c0:
    if (ctx->pc == 0x5048C0u) {
        ctx->pc = 0x5048C0u;
            // 0x5048c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x5048C4u;
        goto label_5048c4;
    }
    ctx->pc = 0x5048BCu;
    {
        const bool branch_taken_0x5048bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5048bc) {
            ctx->pc = 0x5048C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5048BCu;
            // 0x5048c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5048E4u;
            goto label_5048e4;
        }
    }
    ctx->pc = 0x5048C4u;
label_5048c4:
    // 0x5048c4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_5048c8:
    if (ctx->pc == 0x5048C8u) {
        ctx->pc = 0x5048CCu;
        goto label_5048cc;
    }
    ctx->pc = 0x5048C4u;
    {
        const bool branch_taken_0x5048c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5048c4) {
            ctx->pc = 0x5048E0u;
            goto label_5048e0;
        }
    }
    ctx->pc = 0x5048CCu;
label_5048cc:
    // 0x5048cc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x5048ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_5048d0:
    // 0x5048d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_5048d4:
    if (ctx->pc == 0x5048D4u) {
        ctx->pc = 0x5048D8u;
        goto label_5048d8;
    }
    ctx->pc = 0x5048D0u;
    {
        const bool branch_taken_0x5048d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5048d0) {
            ctx->pc = 0x5048E0u;
            goto label_5048e0;
        }
    }
    ctx->pc = 0x5048D8u;
label_5048d8:
    // 0x5048d8: 0xc0400a8  jal         func_1002A0
label_5048dc:
    if (ctx->pc == 0x5048DCu) {
        ctx->pc = 0x5048E0u;
        goto label_5048e0;
    }
    ctx->pc = 0x5048D8u;
    SET_GPR_U32(ctx, 31, 0x5048E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5048E0u; }
        if (ctx->pc != 0x5048E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5048E0u; }
        if (ctx->pc != 0x5048E0u) { return; }
    }
    ctx->pc = 0x5048E0u;
label_5048e0:
    // 0x5048e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5048e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5048e4:
    // 0x5048e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5048e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5048e8:
    // 0x5048e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5048ec:
    if (ctx->pc == 0x5048ECu) {
        ctx->pc = 0x5048ECu;
            // 0x5048ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5048F0u;
        goto label_5048f0;
    }
    ctx->pc = 0x5048E8u;
    {
        const bool branch_taken_0x5048e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5048e8) {
            ctx->pc = 0x5048ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5048E8u;
            // 0x5048ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5048FCu;
            goto label_5048fc;
        }
    }
    ctx->pc = 0x5048F0u;
label_5048f0:
    // 0x5048f0: 0xc0400a8  jal         func_1002A0
label_5048f4:
    if (ctx->pc == 0x5048F4u) {
        ctx->pc = 0x5048F4u;
            // 0x5048f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5048F8u;
        goto label_5048f8;
    }
    ctx->pc = 0x5048F0u;
    SET_GPR_U32(ctx, 31, 0x5048F8u);
    ctx->pc = 0x5048F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5048F0u;
            // 0x5048f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5048F8u; }
        if (ctx->pc != 0x5048F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5048F8u; }
        if (ctx->pc != 0x5048F8u) { return; }
    }
    ctx->pc = 0x5048F8u;
label_5048f8:
    // 0x5048f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5048f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5048fc:
    // 0x5048fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5048fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_504900:
    // 0x504900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x504900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_504904:
    // 0x504904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_504908:
    // 0x504908: 0x3e00008  jr          $ra
label_50490c:
    if (ctx->pc == 0x50490Cu) {
        ctx->pc = 0x50490Cu;
            // 0x50490c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x504910u;
        goto label_504910;
    }
    ctx->pc = 0x504908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50490Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504908u;
            // 0x50490c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504910u;
label_504910:
    // 0x504910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_504914:
    // 0x504914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_504918:
    // 0x504918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x504918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50491c:
    // 0x50491c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_504920:
    // 0x504920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_504924:
    // 0x504924: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
label_504928:
    if (ctx->pc == 0x504928u) {
        ctx->pc = 0x504928u;
            // 0x504928: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50492Cu;
        goto label_50492c;
    }
    ctx->pc = 0x504924u;
    {
        const bool branch_taken_0x504924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x504928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504924u;
            // 0x504928: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504924) {
            ctx->pc = 0x5049C8u;
            goto label_5049c8;
        }
    }
    ctx->pc = 0x50492Cu;
label_50492c:
    // 0x50492c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50492cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_504930:
    // 0x504930: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_504934:
    // 0x504934: 0x24424bd0  addiu       $v0, $v0, 0x4BD0
    ctx->pc = 0x504934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19408));
label_504938:
    // 0x504938: 0x24634c10  addiu       $v1, $v1, 0x4C10
    ctx->pc = 0x504938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19472));
label_50493c:
    // 0x50493c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50493cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_504940:
    // 0x504940: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_504944:
    // 0x504944: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x504944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_504948:
    // 0x504948: 0x24424c78  addiu       $v0, $v0, 0x4C78
    ctx->pc = 0x504948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19576));
label_50494c:
    // 0x50494c: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x50494cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_504950:
    // 0x504950: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x504950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_504954:
    // 0x504954: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x504954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_504958:
    // 0x504958: 0x320f809  jalr        $t9
label_50495c:
    if (ctx->pc == 0x50495Cu) {
        ctx->pc = 0x504960u;
        goto label_504960;
    }
    ctx->pc = 0x504958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x504960u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x504960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x504960u; }
            if (ctx->pc != 0x504960u) { return; }
        }
        }
    }
    ctx->pc = 0x504960u;
label_504960:
    // 0x504960: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_504964:
    if (ctx->pc == 0x504964u) {
        ctx->pc = 0x504964u;
            // 0x504964: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x504968u;
        goto label_504968;
    }
    ctx->pc = 0x504960u;
    {
        const bool branch_taken_0x504960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x504960) {
            ctx->pc = 0x504964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504960u;
            // 0x504964: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5049B4u;
            goto label_5049b4;
        }
    }
    ctx->pc = 0x504968u;
label_504968:
    // 0x504968: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_50496c:
    // 0x50496c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50496cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_504970:
    // 0x504970: 0x24424ae0  addiu       $v0, $v0, 0x4AE0
    ctx->pc = 0x504970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19168));
label_504974:
    // 0x504974: 0x24634b20  addiu       $v1, $v1, 0x4B20
    ctx->pc = 0x504974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19232));
label_504978:
    // 0x504978: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x504978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_50497c:
    // 0x50497c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x50497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_504980:
    // 0x504980: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_504984:
    // 0x504984: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x504984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_504988:
    // 0x504988: 0x24424b88  addiu       $v0, $v0, 0x4B88
    ctx->pc = 0x504988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19336));
label_50498c:
    // 0x50498c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x50498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_504990:
    // 0x504990: 0xc140af4  jal         func_502BD0
label_504994:
    if (ctx->pc == 0x504994u) {
        ctx->pc = 0x504994u;
            // 0x504994: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x504998u;
        goto label_504998;
    }
    ctx->pc = 0x504990u;
    SET_GPR_U32(ctx, 31, 0x504998u);
    ctx->pc = 0x504994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504990u;
            // 0x504994: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502BD0u;
    if (runtime->hasFunction(0x502BD0u)) {
        auto targetFn = runtime->lookupFunction(0x502BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504998u; }
        if (ctx->pc != 0x504998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502BD0_0x502bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504998u; }
        if (ctx->pc != 0x504998u) { return; }
    }
    ctx->pc = 0x504998u;
label_504998:
    // 0x504998: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x504998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_50499c:
    // 0x50499c: 0xc140ae0  jal         func_502B80
label_5049a0:
    if (ctx->pc == 0x5049A0u) {
        ctx->pc = 0x5049A0u;
            // 0x5049a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5049A4u;
        goto label_5049a4;
    }
    ctx->pc = 0x50499Cu;
    SET_GPR_U32(ctx, 31, 0x5049A4u);
    ctx->pc = 0x5049A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50499Cu;
            // 0x5049a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502B80u;
    if (runtime->hasFunction(0x502B80u)) {
        auto targetFn = runtime->lookupFunction(0x502B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5049A4u; }
        if (ctx->pc != 0x5049A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502B80_0x502b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5049A4u; }
        if (ctx->pc != 0x5049A4u) { return; }
    }
    ctx->pc = 0x5049A4u;
label_5049a4:
    // 0x5049a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5049a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5049a8:
    // 0x5049a8: 0xc0e70ac  jal         func_39C2B0
label_5049ac:
    if (ctx->pc == 0x5049ACu) {
        ctx->pc = 0x5049ACu;
            // 0x5049ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5049B0u;
        goto label_5049b0;
    }
    ctx->pc = 0x5049A8u;
    SET_GPR_U32(ctx, 31, 0x5049B0u);
    ctx->pc = 0x5049ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5049A8u;
            // 0x5049ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39C2B0u;
    if (runtime->hasFunction(0x39C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x39C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5049B0u; }
        if (ctx->pc != 0x5049B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039C2B0_0x39c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5049B0u; }
        if (ctx->pc != 0x5049B0u) { return; }
    }
    ctx->pc = 0x5049B0u;
label_5049b0:
    // 0x5049b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5049b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5049b4:
    // 0x5049b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5049b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5049b8:
    // 0x5049b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5049bc:
    if (ctx->pc == 0x5049BCu) {
        ctx->pc = 0x5049BCu;
            // 0x5049bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5049C0u;
        goto label_5049c0;
    }
    ctx->pc = 0x5049B8u;
    {
        const bool branch_taken_0x5049b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5049b8) {
            ctx->pc = 0x5049BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5049B8u;
            // 0x5049bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5049CCu;
            goto label_5049cc;
        }
    }
    ctx->pc = 0x5049C0u;
label_5049c0:
    // 0x5049c0: 0xc0400a8  jal         func_1002A0
label_5049c4:
    if (ctx->pc == 0x5049C4u) {
        ctx->pc = 0x5049C4u;
            // 0x5049c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5049C8u;
        goto label_5049c8;
    }
    ctx->pc = 0x5049C0u;
    SET_GPR_U32(ctx, 31, 0x5049C8u);
    ctx->pc = 0x5049C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5049C0u;
            // 0x5049c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5049C8u; }
        if (ctx->pc != 0x5049C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5049C8u; }
        if (ctx->pc != 0x5049C8u) { return; }
    }
    ctx->pc = 0x5049C8u;
label_5049c8:
    // 0x5049c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5049c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5049cc:
    // 0x5049cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5049ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5049d0:
    // 0x5049d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5049d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5049d4:
    // 0x5049d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5049d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5049d8:
    // 0x5049d8: 0x3e00008  jr          $ra
label_5049dc:
    if (ctx->pc == 0x5049DCu) {
        ctx->pc = 0x5049DCu;
            // 0x5049dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5049E0u;
        goto label_fallthrough_0x5049d8;
    }
    ctx->pc = 0x5049D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5049DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5049D8u;
            // 0x5049dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5049d8:
    ctx->pc = 0x5049E0u;
}
