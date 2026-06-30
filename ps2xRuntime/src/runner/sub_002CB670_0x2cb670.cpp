#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB670
// Address: 0x2cb670 - 0x2cb7e0
void sub_002CB670_0x2cb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB670_0x2cb670");
#endif

    switch (ctx->pc) {
        case 0x2cb670u: goto label_2cb670;
        case 0x2cb674u: goto label_2cb674;
        case 0x2cb678u: goto label_2cb678;
        case 0x2cb67cu: goto label_2cb67c;
        case 0x2cb680u: goto label_2cb680;
        case 0x2cb684u: goto label_2cb684;
        case 0x2cb688u: goto label_2cb688;
        case 0x2cb68cu: goto label_2cb68c;
        case 0x2cb690u: goto label_2cb690;
        case 0x2cb694u: goto label_2cb694;
        case 0x2cb698u: goto label_2cb698;
        case 0x2cb69cu: goto label_2cb69c;
        case 0x2cb6a0u: goto label_2cb6a0;
        case 0x2cb6a4u: goto label_2cb6a4;
        case 0x2cb6a8u: goto label_2cb6a8;
        case 0x2cb6acu: goto label_2cb6ac;
        case 0x2cb6b0u: goto label_2cb6b0;
        case 0x2cb6b4u: goto label_2cb6b4;
        case 0x2cb6b8u: goto label_2cb6b8;
        case 0x2cb6bcu: goto label_2cb6bc;
        case 0x2cb6c0u: goto label_2cb6c0;
        case 0x2cb6c4u: goto label_2cb6c4;
        case 0x2cb6c8u: goto label_2cb6c8;
        case 0x2cb6ccu: goto label_2cb6cc;
        case 0x2cb6d0u: goto label_2cb6d0;
        case 0x2cb6d4u: goto label_2cb6d4;
        case 0x2cb6d8u: goto label_2cb6d8;
        case 0x2cb6dcu: goto label_2cb6dc;
        case 0x2cb6e0u: goto label_2cb6e0;
        case 0x2cb6e4u: goto label_2cb6e4;
        case 0x2cb6e8u: goto label_2cb6e8;
        case 0x2cb6ecu: goto label_2cb6ec;
        case 0x2cb6f0u: goto label_2cb6f0;
        case 0x2cb6f4u: goto label_2cb6f4;
        case 0x2cb6f8u: goto label_2cb6f8;
        case 0x2cb6fcu: goto label_2cb6fc;
        case 0x2cb700u: goto label_2cb700;
        case 0x2cb704u: goto label_2cb704;
        case 0x2cb708u: goto label_2cb708;
        case 0x2cb70cu: goto label_2cb70c;
        case 0x2cb710u: goto label_2cb710;
        case 0x2cb714u: goto label_2cb714;
        case 0x2cb718u: goto label_2cb718;
        case 0x2cb71cu: goto label_2cb71c;
        case 0x2cb720u: goto label_2cb720;
        case 0x2cb724u: goto label_2cb724;
        case 0x2cb728u: goto label_2cb728;
        case 0x2cb72cu: goto label_2cb72c;
        case 0x2cb730u: goto label_2cb730;
        case 0x2cb734u: goto label_2cb734;
        case 0x2cb738u: goto label_2cb738;
        case 0x2cb73cu: goto label_2cb73c;
        case 0x2cb740u: goto label_2cb740;
        case 0x2cb744u: goto label_2cb744;
        case 0x2cb748u: goto label_2cb748;
        case 0x2cb74cu: goto label_2cb74c;
        case 0x2cb750u: goto label_2cb750;
        case 0x2cb754u: goto label_2cb754;
        case 0x2cb758u: goto label_2cb758;
        case 0x2cb75cu: goto label_2cb75c;
        case 0x2cb760u: goto label_2cb760;
        case 0x2cb764u: goto label_2cb764;
        case 0x2cb768u: goto label_2cb768;
        case 0x2cb76cu: goto label_2cb76c;
        case 0x2cb770u: goto label_2cb770;
        case 0x2cb774u: goto label_2cb774;
        case 0x2cb778u: goto label_2cb778;
        case 0x2cb77cu: goto label_2cb77c;
        case 0x2cb780u: goto label_2cb780;
        case 0x2cb784u: goto label_2cb784;
        case 0x2cb788u: goto label_2cb788;
        case 0x2cb78cu: goto label_2cb78c;
        case 0x2cb790u: goto label_2cb790;
        case 0x2cb794u: goto label_2cb794;
        case 0x2cb798u: goto label_2cb798;
        case 0x2cb79cu: goto label_2cb79c;
        case 0x2cb7a0u: goto label_2cb7a0;
        case 0x2cb7a4u: goto label_2cb7a4;
        case 0x2cb7a8u: goto label_2cb7a8;
        case 0x2cb7acu: goto label_2cb7ac;
        case 0x2cb7b0u: goto label_2cb7b0;
        case 0x2cb7b4u: goto label_2cb7b4;
        case 0x2cb7b8u: goto label_2cb7b8;
        case 0x2cb7bcu: goto label_2cb7bc;
        case 0x2cb7c0u: goto label_2cb7c0;
        case 0x2cb7c4u: goto label_2cb7c4;
        case 0x2cb7c8u: goto label_2cb7c8;
        case 0x2cb7ccu: goto label_2cb7cc;
        case 0x2cb7d0u: goto label_2cb7d0;
        case 0x2cb7d4u: goto label_2cb7d4;
        case 0x2cb7d8u: goto label_2cb7d8;
        case 0x2cb7dcu: goto label_2cb7dc;
        default: break;
    }

    ctx->pc = 0x2cb670u;

label_2cb670:
    // 0x2cb670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cb674:
    // 0x2cb674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cb678:
    // 0x2cb678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cb67c:
    // 0x2cb67c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cb680:
    // 0x2cb680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb684:
    // 0x2cb684: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2cb688:
    if (ctx->pc == 0x2CB688u) {
        ctx->pc = 0x2CB688u;
            // 0x2cb688: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB68Cu;
        goto label_2cb68c;
    }
    ctx->pc = 0x2CB684u;
    {
        const bool branch_taken_0x2cb684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB684u;
            // 0x2cb688: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb684) {
            ctx->pc = 0x2CB6C8u;
            goto label_2cb6c8;
        }
    }
    ctx->pc = 0x2CB68Cu;
label_2cb68c:
    // 0x2cb68c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2cb690:
    if (ctx->pc == 0x2CB690u) {
        ctx->pc = 0x2CB690u;
            // 0x2cb690: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CB694u;
        goto label_2cb694;
    }
    ctx->pc = 0x2CB68Cu;
    {
        const bool branch_taken_0x2cb68c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb68c) {
            ctx->pc = 0x2CB690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB68Cu;
            // 0x2cb690: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB6B4u;
            goto label_2cb6b4;
        }
    }
    ctx->pc = 0x2CB694u;
label_2cb694:
    // 0x2cb694: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2cb698:
    if (ctx->pc == 0x2CB698u) {
        ctx->pc = 0x2CB69Cu;
        goto label_2cb69c;
    }
    ctx->pc = 0x2CB694u;
    {
        const bool branch_taken_0x2cb694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb694) {
            ctx->pc = 0x2CB6B0u;
            goto label_2cb6b0;
        }
    }
    ctx->pc = 0x2CB69Cu;
label_2cb69c:
    // 0x2cb69c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2cb69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2cb6a0:
    // 0x2cb6a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cb6a4:
    if (ctx->pc == 0x2CB6A4u) {
        ctx->pc = 0x2CB6A8u;
        goto label_2cb6a8;
    }
    ctx->pc = 0x2CB6A0u;
    {
        const bool branch_taken_0x2cb6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb6a0) {
            ctx->pc = 0x2CB6B0u;
            goto label_2cb6b0;
        }
    }
    ctx->pc = 0x2CB6A8u;
label_2cb6a8:
    // 0x2cb6a8: 0xc0400a8  jal         func_1002A0
label_2cb6ac:
    if (ctx->pc == 0x2CB6ACu) {
        ctx->pc = 0x2CB6B0u;
        goto label_2cb6b0;
    }
    ctx->pc = 0x2CB6A8u;
    SET_GPR_U32(ctx, 31, 0x2CB6B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB6B0u; }
        if (ctx->pc != 0x2CB6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB6B0u; }
        if (ctx->pc != 0x2CB6B0u) { return; }
    }
    ctx->pc = 0x2CB6B0u;
label_2cb6b0:
    // 0x2cb6b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cb6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cb6b4:
    // 0x2cb6b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb6b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cb6b8:
    // 0x2cb6b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cb6bc:
    if (ctx->pc == 0x2CB6BCu) {
        ctx->pc = 0x2CB6BCu;
            // 0x2cb6bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6C0u;
        goto label_2cb6c0;
    }
    ctx->pc = 0x2CB6B8u;
    {
        const bool branch_taken_0x2cb6b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cb6b8) {
            ctx->pc = 0x2CB6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6B8u;
            // 0x2cb6bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB6CCu;
            goto label_2cb6cc;
        }
    }
    ctx->pc = 0x2CB6C0u;
label_2cb6c0:
    // 0x2cb6c0: 0xc0400a8  jal         func_1002A0
label_2cb6c4:
    if (ctx->pc == 0x2CB6C4u) {
        ctx->pc = 0x2CB6C4u;
            // 0x2cb6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6C8u;
        goto label_2cb6c8;
    }
    ctx->pc = 0x2CB6C0u;
    SET_GPR_U32(ctx, 31, 0x2CB6C8u);
    ctx->pc = 0x2CB6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6C0u;
            // 0x2cb6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB6C8u; }
        if (ctx->pc != 0x2CB6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB6C8u; }
        if (ctx->pc != 0x2CB6C8u) { return; }
    }
    ctx->pc = 0x2CB6C8u;
label_2cb6c8:
    // 0x2cb6c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cb6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb6cc:
    // 0x2cb6cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb6d0:
    // 0x2cb6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb6d4:
    // 0x2cb6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb6d8:
    // 0x2cb6d8: 0x3e00008  jr          $ra
label_2cb6dc:
    if (ctx->pc == 0x2CB6DCu) {
        ctx->pc = 0x2CB6DCu;
            // 0x2cb6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CB6E0u;
        goto label_2cb6e0;
    }
    ctx->pc = 0x2CB6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6D8u;
            // 0x2cb6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB6E0u;
label_2cb6e0:
    // 0x2cb6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cb6e4:
    // 0x2cb6e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cb6e8:
    // 0x2cb6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cb6ec:
    // 0x2cb6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cb6f0:
    // 0x2cb6f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb6f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb6f4:
    // 0x2cb6f4: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2cb6f8:
    if (ctx->pc == 0x2CB6F8u) {
        ctx->pc = 0x2CB6F8u;
            // 0x2cb6f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6FCu;
        goto label_2cb6fc;
    }
    ctx->pc = 0x2CB6F4u;
    {
        const bool branch_taken_0x2cb6f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6F4u;
            // 0x2cb6f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6f4) {
            ctx->pc = 0x2CB7BCu;
            goto label_2cb7bc;
        }
    }
    ctx->pc = 0x2CB6FCu;
label_2cb6fc:
    // 0x2cb6fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cb700:
    // 0x2cb700: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb704:
    // 0x2cb704: 0x24635d20  addiu       $v1, $v1, 0x5D20
    ctx->pc = 0x2cb704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23840));
label_2cb708:
    // 0x2cb708: 0x24425d60  addiu       $v0, $v0, 0x5D60
    ctx->pc = 0x2cb708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23904));
label_2cb70c:
    // 0x2cb70c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cb70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2cb710:
    // 0x2cb710: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2cb710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2cb714:
    // 0x2cb714: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cb714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb718:
    // 0x2cb718: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2cb718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2cb71c:
    // 0x2cb71c: 0x320f809  jalr        $t9
label_2cb720:
    if (ctx->pc == 0x2CB720u) {
        ctx->pc = 0x2CB724u;
        goto label_2cb724;
    }
    ctx->pc = 0x2CB71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB724u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CB724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CB724u; }
            if (ctx->pc != 0x2CB724u) { return; }
        }
        }
    }
    ctx->pc = 0x2CB724u;
label_2cb724:
    // 0x2cb724: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2cb728:
    if (ctx->pc == 0x2CB728u) {
        ctx->pc = 0x2CB728u;
            // 0x2cb728: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CB72Cu;
        goto label_2cb72c;
    }
    ctx->pc = 0x2CB724u;
    {
        const bool branch_taken_0x2cb724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb724) {
            ctx->pc = 0x2CB728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB724u;
            // 0x2cb728: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB7A8u;
            goto label_2cb7a8;
        }
    }
    ctx->pc = 0x2CB72Cu;
label_2cb72c:
    // 0x2cb72c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb730:
    // 0x2cb730: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cb734:
    // 0x2cb734: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2cb734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2cb738:
    // 0x2cb738: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2cb738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2cb73c:
    // 0x2cb73c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cb73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cb740:
    // 0x2cb740: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2cb740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2cb744:
    // 0x2cb744: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2cb748:
    if (ctx->pc == 0x2CB748u) {
        ctx->pc = 0x2CB748u;
            // 0x2cb748: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2CB74Cu;
        goto label_2cb74c;
    }
    ctx->pc = 0x2CB744u;
    {
        const bool branch_taken_0x2cb744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB744u;
            // 0x2cb748: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb744) {
            ctx->pc = 0x2CB780u;
            goto label_2cb780;
        }
    }
    ctx->pc = 0x2CB74Cu;
label_2cb74c:
    // 0x2cb74c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb750:
    // 0x2cb750: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2cb750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2cb754:
    // 0x2cb754: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2cb754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2cb758:
    // 0x2cb758: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2cb758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2cb75c:
    // 0x2cb75c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2cb760:
    if (ctx->pc == 0x2CB760u) {
        ctx->pc = 0x2CB764u;
        goto label_2cb764;
    }
    ctx->pc = 0x2CB75Cu;
    {
        const bool branch_taken_0x2cb75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb75c) {
            ctx->pc = 0x2CB780u;
            goto label_2cb780;
        }
    }
    ctx->pc = 0x2CB764u;
label_2cb764:
    // 0x2cb764: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cb768:
    if (ctx->pc == 0x2CB768u) {
        ctx->pc = 0x2CB768u;
            // 0x2cb768: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2CB76Cu;
        goto label_2cb76c;
    }
    ctx->pc = 0x2CB764u;
    {
        const bool branch_taken_0x2cb764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb764) {
            ctx->pc = 0x2CB768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB764u;
            // 0x2cb768: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB780u;
            goto label_2cb780;
        }
    }
    ctx->pc = 0x2CB76Cu;
label_2cb76c:
    // 0x2cb76c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cb76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb770:
    // 0x2cb770: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cb770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cb774:
    // 0x2cb774: 0x320f809  jalr        $t9
label_2cb778:
    if (ctx->pc == 0x2CB778u) {
        ctx->pc = 0x2CB778u;
            // 0x2cb778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CB77Cu;
        goto label_2cb77c;
    }
    ctx->pc = 0x2CB774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB77Cu);
        ctx->pc = 0x2CB778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB774u;
            // 0x2cb778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CB77Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CB77Cu; }
            if (ctx->pc != 0x2CB77Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CB77Cu;
label_2cb77c:
    // 0x2cb77c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2cb77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2cb780:
    // 0x2cb780: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2cb784:
    if (ctx->pc == 0x2CB784u) {
        ctx->pc = 0x2CB788u;
        goto label_2cb788;
    }
    ctx->pc = 0x2CB780u;
    {
        const bool branch_taken_0x2cb780 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb780) {
            ctx->pc = 0x2CB7A4u;
            goto label_2cb7a4;
        }
    }
    ctx->pc = 0x2CB788u;
label_2cb788:
    // 0x2cb788: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb78c:
    // 0x2cb78c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2cb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2cb790:
    // 0x2cb790: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2cb794:
    if (ctx->pc == 0x2CB794u) {
        ctx->pc = 0x2CB794u;
            // 0x2cb794: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CB798u;
        goto label_2cb798;
    }
    ctx->pc = 0x2CB790u;
    {
        const bool branch_taken_0x2cb790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB790u;
            // 0x2cb794: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb790) {
            ctx->pc = 0x2CB7A4u;
            goto label_2cb7a4;
        }
    }
    ctx->pc = 0x2CB798u;
label_2cb798:
    // 0x2cb798: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb79c:
    // 0x2cb79c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cb79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2cb7a0:
    // 0x2cb7a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cb7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cb7a4:
    // 0x2cb7a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cb7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cb7a8:
    // 0x2cb7a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb7a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cb7ac:
    // 0x2cb7ac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cb7b0:
    if (ctx->pc == 0x2CB7B0u) {
        ctx->pc = 0x2CB7B0u;
            // 0x2cb7b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7B4u;
        goto label_2cb7b4;
    }
    ctx->pc = 0x2CB7ACu;
    {
        const bool branch_taken_0x2cb7ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cb7ac) {
            ctx->pc = 0x2CB7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7ACu;
            // 0x2cb7b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB7C0u;
            goto label_2cb7c0;
        }
    }
    ctx->pc = 0x2CB7B4u;
label_2cb7b4:
    // 0x2cb7b4: 0xc0400a8  jal         func_1002A0
label_2cb7b8:
    if (ctx->pc == 0x2CB7B8u) {
        ctx->pc = 0x2CB7B8u;
            // 0x2cb7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7BCu;
        goto label_2cb7bc;
    }
    ctx->pc = 0x2CB7B4u;
    SET_GPR_U32(ctx, 31, 0x2CB7BCu);
    ctx->pc = 0x2CB7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7B4u;
            // 0x2cb7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7BCu; }
        if (ctx->pc != 0x2CB7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7BCu; }
        if (ctx->pc != 0x2CB7BCu) { return; }
    }
    ctx->pc = 0x2CB7BCu;
label_2cb7bc:
    // 0x2cb7bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cb7bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb7c0:
    // 0x2cb7c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb7c4:
    // 0x2cb7c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb7c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb7c8:
    // 0x2cb7c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb7cc:
    // 0x2cb7cc: 0x3e00008  jr          $ra
label_2cb7d0:
    if (ctx->pc == 0x2CB7D0u) {
        ctx->pc = 0x2CB7D0u;
            // 0x2cb7d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CB7D4u;
        goto label_2cb7d4;
    }
    ctx->pc = 0x2CB7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7CCu;
            // 0x2cb7d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB7D4u;
label_2cb7d4:
    // 0x2cb7d4: 0x0  nop
    ctx->pc = 0x2cb7d4u;
    // NOP
label_2cb7d8:
    // 0x2cb7d8: 0x0  nop
    ctx->pc = 0x2cb7d8u;
    // NOP
label_2cb7dc:
    // 0x2cb7dc: 0x0  nop
    ctx->pc = 0x2cb7dcu;
    // NOP
}
