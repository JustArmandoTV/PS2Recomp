#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3088
// Address: 0x1b3088 - 0x1b3140
void sub_001B3088_0x1b3088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3088_0x1b3088");
#endif

    switch (ctx->pc) {
        case 0x1b3088u: goto label_1b3088;
        case 0x1b308cu: goto label_1b308c;
        case 0x1b3090u: goto label_1b3090;
        case 0x1b3094u: goto label_1b3094;
        case 0x1b3098u: goto label_1b3098;
        case 0x1b309cu: goto label_1b309c;
        case 0x1b30a0u: goto label_1b30a0;
        case 0x1b30a4u: goto label_1b30a4;
        case 0x1b30a8u: goto label_1b30a8;
        case 0x1b30acu: goto label_1b30ac;
        case 0x1b30b0u: goto label_1b30b0;
        case 0x1b30b4u: goto label_1b30b4;
        case 0x1b30b8u: goto label_1b30b8;
        case 0x1b30bcu: goto label_1b30bc;
        case 0x1b30c0u: goto label_1b30c0;
        case 0x1b30c4u: goto label_1b30c4;
        case 0x1b30c8u: goto label_1b30c8;
        case 0x1b30ccu: goto label_1b30cc;
        case 0x1b30d0u: goto label_1b30d0;
        case 0x1b30d4u: goto label_1b30d4;
        case 0x1b30d8u: goto label_1b30d8;
        case 0x1b30dcu: goto label_1b30dc;
        case 0x1b30e0u: goto label_1b30e0;
        case 0x1b30e4u: goto label_1b30e4;
        case 0x1b30e8u: goto label_1b30e8;
        case 0x1b30ecu: goto label_1b30ec;
        case 0x1b30f0u: goto label_1b30f0;
        case 0x1b30f4u: goto label_1b30f4;
        case 0x1b30f8u: goto label_1b30f8;
        case 0x1b30fcu: goto label_1b30fc;
        case 0x1b3100u: goto label_1b3100;
        case 0x1b3104u: goto label_1b3104;
        case 0x1b3108u: goto label_1b3108;
        case 0x1b310cu: goto label_1b310c;
        case 0x1b3110u: goto label_1b3110;
        case 0x1b3114u: goto label_1b3114;
        case 0x1b3118u: goto label_1b3118;
        case 0x1b311cu: goto label_1b311c;
        case 0x1b3120u: goto label_1b3120;
        case 0x1b3124u: goto label_1b3124;
        case 0x1b3128u: goto label_1b3128;
        case 0x1b312cu: goto label_1b312c;
        case 0x1b3130u: goto label_1b3130;
        case 0x1b3134u: goto label_1b3134;
        case 0x1b3138u: goto label_1b3138;
        case 0x1b313cu: goto label_1b313c;
        default: break;
    }

    ctx->pc = 0x1b3088u;

label_1b3088:
    // 0x1b3088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b308c:
    // 0x1b308c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b3090:
    // 0x1b3090: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b3090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b3094:
    // 0x1b3094: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b3098:
    // 0x1b3098: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b3098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b309c:
    // 0x1b309c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b309cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b30a0:
    // 0x1b30a0: 0x8e222038  lw          $v0, 0x2038($s1)
    ctx->pc = 0x1b30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8248)));
label_1b30a4:
    // 0x1b30a4: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x1b30a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1b30a8:
    // 0x1b30a8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1b30a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b30ac:
    // 0x1b30ac: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1b30acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1b30b0:
    // 0x1b30b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b30b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b30b4:
    // 0x1b30b4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1b30b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1b30b8:
    // 0x1b30b8: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1b30b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1b30bc:
    // 0x1b30bc: 0x26101390  addiu       $s0, $s0, 0x1390
    ctx->pc = 0x1b30bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5008));
label_1b30c0:
    // 0x1b30c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b30c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b30c4:
    // 0x1b30c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b30c8:
    // 0x1b30c8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1b30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1b30cc:
    // 0x1b30cc: 0x40f809  jalr        $v0
label_1b30d0:
    if (ctx->pc == 0x1B30D0u) {
        ctx->pc = 0x1B30D0u;
            // 0x1b30d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B30D4u;
        goto label_1b30d4;
    }
    ctx->pc = 0x1B30CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B30D4u);
        ctx->pc = 0x1B30D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30CCu;
            // 0x1b30d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B30D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B30D4u; }
            if (ctx->pc != 0x1B30D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B30D4u;
label_1b30d4:
    // 0x1b30d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b30d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b30d8:
    // 0x1b30d8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b30d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b30dc:
    // 0x1b30dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b30dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b30e0:
    // 0x1b30e0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1b30e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1b30e4:
    // 0x1b30e4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b30e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1b30e8:
    // 0x1b30e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b30ec:
    // 0x1b30ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1b30f0:
    if (ctx->pc == 0x1B30F0u) {
        ctx->pc = 0x1B30F0u;
            // 0x1b30f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1B30F4u;
        goto label_1b30f4;
    }
    ctx->pc = 0x1B30ECu;
    {
        const bool branch_taken_0x1b30ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b30ec) {
            ctx->pc = 0x1B30F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30ECu;
            // 0x1b30f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B30F4u;
            goto label_1b30f4;
        }
    }
    ctx->pc = 0x1B30F4u;
label_1b30f4:
    // 0x1b30f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1b30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b30f8:
    // 0x1b30f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1b30fc:
    // 0x1b30fc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b30fcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b3100:
    // 0x1b3100: 0x1012  mflo        $v0
    ctx->pc = 0x1b3100u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b3104:
    // 0x1b3104: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b3104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b3108:
    // 0x1b3108: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1b310c:
    if (ctx->pc == 0x1B310Cu) {
        ctx->pc = 0x1B310Cu;
            // 0x1b310c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B3110u;
        goto label_1b3110;
    }
    ctx->pc = 0x1B3108u;
    {
        const bool branch_taken_0x1b3108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3108) {
            ctx->pc = 0x1B310Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3108u;
            // 0x1b310c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3128u;
            goto label_1b3128;
        }
    }
    ctx->pc = 0x1B3110u;
label_1b3110:
    // 0x1b3110: 0xc06d81c  jal         func_1B6070
label_1b3114:
    if (ctx->pc == 0x1B3114u) {
        ctx->pc = 0x1B3118u;
        goto label_1b3118;
    }
    ctx->pc = 0x1B3110u;
    SET_GPR_U32(ctx, 31, 0x1B3118u);
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3118u; }
        if (ctx->pc != 0x1B3118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3118u; }
        if (ctx->pc != 0x1B3118u) { return; }
    }
    ctx->pc = 0x1B3118u;
label_1b3118:
    // 0x1b3118: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x1b3118u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b311c:
    // 0x1b311c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1b3120:
    if (ctx->pc == 0x1B3120u) {
        ctx->pc = 0x1B3120u;
            // 0x1b3120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3124u;
        goto label_1b3124;
    }
    ctx->pc = 0x1B311Cu;
    {
        const bool branch_taken_0x1b311c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B311Cu;
            // 0x1b3120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b311c) {
            ctx->pc = 0x1B3128u;
            goto label_1b3128;
        }
    }
    ctx->pc = 0x1B3124u;
label_1b3124:
    // 0x1b3124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b3128:
    // 0x1b3128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b312c:
    // 0x1b312c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b312cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b3130:
    // 0x1b3130: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b3134:
    // 0x1b3134: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b3134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b3138:
    // 0x1b3138: 0x3e00008  jr          $ra
label_1b313c:
    if (ctx->pc == 0x1B313Cu) {
        ctx->pc = 0x1B313Cu;
            // 0x1b313c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B3140u;
        goto label_fallthrough_0x1b3138;
    }
    ctx->pc = 0x1B3138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3138u;
            // 0x1b313c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b3138:
    ctx->pc = 0x1B3140u;
}
