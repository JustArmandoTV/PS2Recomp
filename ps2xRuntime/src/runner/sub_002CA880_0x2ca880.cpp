#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA880
// Address: 0x2ca880 - 0x2ca960
void sub_002CA880_0x2ca880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA880_0x2ca880");
#endif

    switch (ctx->pc) {
        case 0x2ca8c0u: goto label_2ca8c0;
        case 0x2ca8d8u: goto label_2ca8d8;
        case 0x2ca94cu: goto label_2ca94c;
        default: break;
    }

    ctx->pc = 0x2ca880u;

    // 0x2ca880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ca888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca894: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CA894u;
    {
        const bool branch_taken_0x2ca894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA894u;
            // 0x2ca898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca894) {
            ctx->pc = 0x2CA8D8u;
            goto label_2ca8d8;
        }
    }
    ctx->pc = 0x2CA89Cu;
    // 0x2ca89c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA89Cu;
    {
        const bool branch_taken_0x2ca89c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca89c) {
            ctx->pc = 0x2CA8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA89Cu;
            // 0x2ca8a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA8C4u;
            goto label_2ca8c4;
        }
    }
    ctx->pc = 0x2CA8A4u;
    // 0x2ca8a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA8A4u;
    {
        const bool branch_taken_0x2ca8a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8a4) {
            ctx->pc = 0x2CA8C0u;
            goto label_2ca8c0;
        }
    }
    ctx->pc = 0x2CA8ACu;
    // 0x2ca8ac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2ca8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ca8b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA8B0u;
    {
        const bool branch_taken_0x2ca8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8b0) {
            ctx->pc = 0x2CA8C0u;
            goto label_2ca8c0;
        }
    }
    ctx->pc = 0x2CA8B8u;
    // 0x2ca8b8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CA8B8u;
    SET_GPR_U32(ctx, 31, 0x2CA8C0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA8C0u; }
        if (ctx->pc != 0x2CA8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA8C0u; }
        if (ctx->pc != 0x2CA8C0u) { return; }
    }
    ctx->pc = 0x2CA8C0u;
label_2ca8c0:
    // 0x2ca8c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ca8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ca8c4:
    // 0x2ca8c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ca8c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ca8c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA8C8u;
    {
        const bool branch_taken_0x2ca8c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca8c8) {
            ctx->pc = 0x2CA8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA8C8u;
            // 0x2ca8cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA8DCu;
            goto label_2ca8dc;
        }
    }
    ctx->pc = 0x2CA8D0u;
    // 0x2ca8d0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CA8D0u;
    SET_GPR_U32(ctx, 31, 0x2CA8D8u);
    ctx->pc = 0x2CA8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA8D0u;
            // 0x2ca8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA8D8u; }
        if (ctx->pc != 0x2CA8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA8D8u; }
        if (ctx->pc != 0x2CA8D8u) { return; }
    }
    ctx->pc = 0x2CA8D8u;
label_2ca8d8:
    // 0x2ca8d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ca8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca8dc:
    // 0x2ca8dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca8e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca8e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA8E8u;
            // 0x2ca8ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA8F0u;
    // 0x2ca8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca8f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca900: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CA900u;
    {
        const bool branch_taken_0x2ca900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca900) {
            ctx->pc = 0x2CA904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA900u;
            // 0x2ca904: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA950u;
            goto label_2ca950;
        }
    }
    ctx->pc = 0x2CA908u;
    // 0x2ca908: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca90c: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x2ca90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x2ca910: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA910u;
    {
        const bool branch_taken_0x2ca910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA910u;
            // 0x2ca914: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca910) {
            ctx->pc = 0x2CA934u;
            goto label_2ca934;
        }
    }
    ctx->pc = 0x2CA918u;
    // 0x2ca918: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca91c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2ca91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
    // 0x2ca920: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA920u;
    {
        const bool branch_taken_0x2ca920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA920u;
            // 0x2ca924: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca920) {
            ctx->pc = 0x2CA934u;
            goto label_2ca934;
        }
    }
    ctx->pc = 0x2CA928u;
    // 0x2ca928: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca92c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ca92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2ca930: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ca930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2ca934:
    // 0x2ca934: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2ca934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ca938: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ca938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ca93c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA93Cu;
    {
        const bool branch_taken_0x2ca93c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca93c) {
            ctx->pc = 0x2CA94Cu;
            goto label_2ca94c;
        }
    }
    ctx->pc = 0x2CA944u;
    // 0x2ca944: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CA944u;
    SET_GPR_U32(ctx, 31, 0x2CA94Cu);
    ctx->pc = 0x2CA948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA944u;
            // 0x2ca948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA94Cu; }
        if (ctx->pc != 0x2CA94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA94Cu; }
        if (ctx->pc != 0x2CA94Cu) { return; }
    }
    ctx->pc = 0x2CA94Cu;
label_2ca94c:
    // 0x2ca94c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ca94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca950:
    // 0x2ca950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca958: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA958u;
            // 0x2ca95c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA960u;
}
