#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002718E0
// Address: 0x2718e0 - 0x271950
void sub_002718E0_0x2718e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002718E0_0x2718e0");
#endif

    switch (ctx->pc) {
        case 0x2718e0u: goto label_2718e0;
        case 0x2718e4u: goto label_2718e4;
        case 0x2718e8u: goto label_2718e8;
        case 0x2718ecu: goto label_2718ec;
        case 0x2718f0u: goto label_2718f0;
        case 0x2718f4u: goto label_2718f4;
        case 0x2718f8u: goto label_2718f8;
        case 0x2718fcu: goto label_2718fc;
        case 0x271900u: goto label_271900;
        case 0x271904u: goto label_271904;
        case 0x271908u: goto label_271908;
        case 0x27190cu: goto label_27190c;
        case 0x271910u: goto label_271910;
        case 0x271914u: goto label_271914;
        case 0x271918u: goto label_271918;
        case 0x27191cu: goto label_27191c;
        case 0x271920u: goto label_271920;
        case 0x271924u: goto label_271924;
        case 0x271928u: goto label_271928;
        case 0x27192cu: goto label_27192c;
        case 0x271930u: goto label_271930;
        case 0x271934u: goto label_271934;
        case 0x271938u: goto label_271938;
        case 0x27193cu: goto label_27193c;
        case 0x271940u: goto label_271940;
        case 0x271944u: goto label_271944;
        case 0x271948u: goto label_271948;
        case 0x27194cu: goto label_27194c;
        default: break;
    }

    ctx->pc = 0x2718e0u;

label_2718e0:
    // 0x2718e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2718e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2718e4:
    // 0x2718e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2718e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2718e8:
    // 0x2718e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2718e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2718ec:
    // 0x2718ec: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x2718ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2718f0:
    // 0x2718f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2718f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2718f4:
    // 0x2718f4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2718f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2718f8:
    // 0x2718f8: 0x320f809  jalr        $t9
label_2718fc:
    if (ctx->pc == 0x2718FCu) {
        ctx->pc = 0x2718FCu;
            // 0x2718fc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271900u;
        goto label_271900;
    }
    ctx->pc = 0x2718F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271900u);
        ctx->pc = 0x2718FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2718F8u;
            // 0x2718fc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x271900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271900u; }
            if (ctx->pc != 0x271900u) { return; }
        }
        }
    }
    ctx->pc = 0x271900u;
label_271900:
    // 0x271900: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x271900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_271904:
    // 0x271904: 0x8203001c  lb          $v1, 0x1C($s0)
    ctx->pc = 0x271904u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_271908:
    // 0x271908: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_27190c:
    if (ctx->pc == 0x27190Cu) {
        ctx->pc = 0x27190Cu;
            // 0x27190c: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x271910u;
        goto label_271910;
    }
    ctx->pc = 0x271908u;
    {
        const bool branch_taken_0x271908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271908u;
            // 0x27190c: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271908) {
            ctx->pc = 0x271918u;
            goto label_271918;
        }
    }
    ctx->pc = 0x271910u;
label_271910:
    // 0x271910: 0x10000002  b           . + 4 + (0x2 << 2)
label_271914:
    if (ctx->pc == 0x271914u) {
        ctx->pc = 0x271914u;
            // 0x271914: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x271918u;
        goto label_271918;
    }
    ctx->pc = 0x271910u;
    {
        const bool branch_taken_0x271910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271910u;
            // 0x271914: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271910) {
            ctx->pc = 0x27191Cu;
            goto label_27191c;
        }
    }
    ctx->pc = 0x271918u;
label_271918:
    // 0x271918: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x271918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27191c:
    // 0x27191c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27191cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_271920:
    // 0x271920: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x271920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_271924:
    // 0x271924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_271928:
    // 0x271928: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x271928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27192c:
    // 0x27192c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27192cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_271930:
    // 0x271930: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x271930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_271934:
    // 0x271934: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x271934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_271938:
    // 0x271938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27193c:
    // 0x27193c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_271940:
    // 0x271940: 0x3e00008  jr          $ra
label_271944:
    if (ctx->pc == 0x271944u) {
        ctx->pc = 0x271944u;
            // 0x271944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x271948u;
        goto label_271948;
    }
    ctx->pc = 0x271940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271940u;
            // 0x271944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271948u;
label_271948:
    // 0x271948: 0x0  nop
    ctx->pc = 0x271948u;
    // NOP
label_27194c:
    // 0x27194c: 0x0  nop
    ctx->pc = 0x27194cu;
    // NOP
}
