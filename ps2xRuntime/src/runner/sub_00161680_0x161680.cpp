#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161680
// Address: 0x161680 - 0x161730
void sub_00161680_0x161680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161680_0x161680");
#endif

    switch (ctx->pc) {
        case 0x1616c4u: goto label_1616c4;
        case 0x1616d8u: goto label_1616d8;
        case 0x1616f4u: goto label_1616f4;
        case 0x1616fcu: goto label_1616fc;
        default: break;
    }

    ctx->pc = 0x161680u;

    // 0x161680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x161684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x161688: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x161688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16168c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x161690: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x161690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x161694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161698: 0x2a421800  slti        $v0, $s2, 0x1800
    ctx->pc = 0x161698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6144) ? 1 : 0);
    // 0x16169c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16169Cu;
    {
        const bool branch_taken_0x16169c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1616A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16169Cu;
            // 0x1616a0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16169c) {
            ctx->pc = 0x1616B0u;
            goto label_1616b0;
        }
    }
    ctx->pc = 0x1616A4u;
    // 0x1616a4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1616a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1616a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1616A8u;
    {
        const bool branch_taken_0x1616a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1616A8u;
            // 0x1616ac: 0x24842690  addiu       $a0, $a0, 0x2690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616a8) {
            ctx->pc = 0x1616BCu;
            goto label_1616bc;
        }
    }
    ctx->pc = 0x1616B0u;
label_1616b0:
    // 0x1616b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1616B0u;
    {
        const bool branch_taken_0x1616b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1616B0u;
            // 0x1616b4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616b0) {
            ctx->pc = 0x1616D0u;
            goto label_1616d0;
        }
    }
    ctx->pc = 0x1616B8u;
    // 0x1616b8: 0x248426b8  addiu       $a0, $a0, 0x26B8
    ctx->pc = 0x1616b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9912));
label_1616bc:
    // 0x1616bc: 0xc05856c  jal         func_1615B0
    ctx->pc = 0x1616BCu;
    SET_GPR_U32(ctx, 31, 0x1616C4u);
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616C4u; }
        if (ctx->pc != 0x1616C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001615B0_0x1615b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616C4u; }
        if (ctx->pc != 0x1616C4u) { return; }
    }
    ctx->pc = 0x1616C4u;
label_1616c4:
    // 0x1616c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1616C4u;
    {
        const bool branch_taken_0x1616c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1616C4u;
            // 0x1616c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616c4) {
            ctx->pc = 0x161718u;
            goto label_161718;
        }
    }
    ctx->pc = 0x1616CCu;
    // 0x1616cc: 0x0  nop
    ctx->pc = 0x1616ccu;
    // NOP
label_1616d0:
    // 0x1616d0: 0xc0585cc  jal         func_161730
    ctx->pc = 0x1616D0u;
    SET_GPR_U32(ctx, 31, 0x1616D8u);
    ctx->pc = 0x161730u;
    if (runtime->hasFunction(0x161730u)) {
        auto targetFn = runtime->lookupFunction(0x161730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616D8u; }
        if (ctx->pc != 0x1616D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161730_0x161730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616D8u; }
        if (ctx->pc != 0x1616D8u) { return; }
    }
    ctx->pc = 0x1616D8u;
label_1616d8:
    // 0x1616d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1616d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1616dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616e0: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1616e4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1616E4u;
    {
        const bool branch_taken_0x1616e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1616E4u;
            // 0x1616e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616e4) {
            ctx->pc = 0x161714u;
            goto label_161714;
        }
    }
    ctx->pc = 0x1616ECu;
    // 0x1616ec: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1616ECu;
    SET_GPR_U32(ctx, 31, 0x1616F4u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616F4u; }
        if (ctx->pc != 0x1616F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616F4u; }
        if (ctx->pc != 0x1616F4u) { return; }
    }
    ctx->pc = 0x1616F4u;
label_1616f4:
    // 0x1616f4: 0xc0585e2  jal         func_161788
    ctx->pc = 0x1616F4u;
    SET_GPR_U32(ctx, 31, 0x1616FCu);
    ctx->pc = 0x1616F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1616F4u;
            // 0x1616f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161788u;
    if (runtime->hasFunction(0x161788u)) {
        auto targetFn = runtime->lookupFunction(0x161788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616FCu; }
        if (ctx->pc != 0x1616FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161788_0x161788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616FCu; }
        if (ctx->pc != 0x1616FCu) { return; }
    }
    ctx->pc = 0x1616FCu;
label_1616fc:
    // 0x1616fc: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1616fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x161700: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161708: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x161708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x16170c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x16170cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x161710: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x161710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_161714:
    // 0x161714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161718:
    // 0x161718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16171c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16171cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161720: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x161720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161724: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x161724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161728: 0x3e00008  jr          $ra
    ctx->pc = 0x161728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161728u;
            // 0x16172c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161730u;
}
