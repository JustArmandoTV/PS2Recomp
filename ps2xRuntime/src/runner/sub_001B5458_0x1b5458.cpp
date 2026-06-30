#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5458
// Address: 0x1b5458 - 0x1b54d8
void sub_001B5458_0x1b5458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5458_0x1b5458");
#endif

    switch (ctx->pc) {
        case 0x1b5480u: goto label_1b5480;
        case 0x1b5494u: goto label_1b5494;
        default: break;
    }

    ctx->pc = 0x1b5458u;

    // 0x1b5458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b545c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5460: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b5460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5464: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b546c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b546cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5470: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b5470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5474: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b5478: 0xc06e388  jal         func_1B8E20
    ctx->pc = 0x1B5478u;
    SET_GPR_U32(ctx, 31, 0x1B5480u);
    ctx->pc = 0x1B547Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5478u;
            // 0x1b547c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E20u;
    if (runtime->hasFunction(0x1B8E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5480u; }
        if (ctx->pc != 0x1B5480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E20_0x1b8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5480u; }
        if (ctx->pc != 0x1B5480u) { return; }
    }
    ctx->pc = 0x1B5480u;
label_1b5480:
    // 0x1b5480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5484: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5484u;
    {
        const bool branch_taken_0x1b5484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5484u;
            // 0x1b5488: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5484) {
            ctx->pc = 0x1B54B8u;
            goto label_1b54b8;
        }
    }
    ctx->pc = 0x1B548Cu;
    // 0x1b548c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B548Cu;
    SET_GPR_U32(ctx, 31, 0x1B5494u);
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5494u; }
        if (ctx->pc != 0x1B5494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5494u; }
        if (ctx->pc != 0x1B5494u) { return; }
    }
    ctx->pc = 0x1B5494u;
label_1b5494:
    // 0x1b5494: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b5494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b549c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B549Cu;
    {
        const bool branch_taken_0x1b549c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b549c) {
            ctx->pc = 0x1B54A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B549Cu;
            // 0x1b54a0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B54BCu;
            goto label_1b54bc;
        }
    }
    ctx->pc = 0x1B54A4u;
    // 0x1b54a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1b54a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b54ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B54ACu;
    {
        const bool branch_taken_0x1b54ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B54B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54ACu;
            // 0x1b54b0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54ac) {
            ctx->pc = 0x1B54C0u;
            goto label_1b54c0;
        }
    }
    ctx->pc = 0x1B54B4u;
    // 0x1b54b4: 0x0  nop
    ctx->pc = 0x1b54b4u;
    // NOP
label_1b54b8:
    // 0x1b54b8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1b54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1b54bc:
    // 0x1b54bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b54bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b54c0:
    // 0x1b54c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b54c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b54c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b54c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b54c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b54c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b54cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b54ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b54d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B54D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B54D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54D0u;
            // 0x1b54d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B54D8u;
}
