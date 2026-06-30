#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C44E0
// Address: 0x4c44e0 - 0x4c4550
void sub_004C44E0_0x4c44e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C44E0_0x4c44e0");
#endif

    switch (ctx->pc) {
        case 0x4c4520u: goto label_4c4520;
        case 0x4c4538u: goto label_4c4538;
        default: break;
    }

    ctx->pc = 0x4c44e0u;

    // 0x4c44e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c44e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c44e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c44e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c44e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c44e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c44ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c44ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c44f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c44f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c44f4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C44F4u;
    {
        const bool branch_taken_0x4c44f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C44F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C44F4u;
            // 0x4c44f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c44f4) {
            ctx->pc = 0x4C4538u;
            goto label_4c4538;
        }
    }
    ctx->pc = 0x4C44FCu;
    // 0x4c44fc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C44FCu;
    {
        const bool branch_taken_0x4c44fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c44fc) {
            ctx->pc = 0x4C4500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C44FCu;
            // 0x4c4500: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4524u;
            goto label_4c4524;
        }
    }
    ctx->pc = 0x4C4504u;
    // 0x4c4504: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C4504u;
    {
        const bool branch_taken_0x4c4504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4504) {
            ctx->pc = 0x4C4520u;
            goto label_4c4520;
        }
    }
    ctx->pc = 0x4C450Cu;
    // 0x4c450c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4c450cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4c4510: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C4510u;
    {
        const bool branch_taken_0x4c4510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4510) {
            ctx->pc = 0x4C4520u;
            goto label_4c4520;
        }
    }
    ctx->pc = 0x4C4518u;
    // 0x4c4518: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C4518u;
    SET_GPR_U32(ctx, 31, 0x4C4520u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4520u; }
        if (ctx->pc != 0x4C4520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4520u; }
        if (ctx->pc != 0x4C4520u) { return; }
    }
    ctx->pc = 0x4C4520u;
label_4c4520:
    // 0x4c4520: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c4520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4c4524:
    // 0x4c4524: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c4524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c4528: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C4528u;
    {
        const bool branch_taken_0x4c4528 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c4528) {
            ctx->pc = 0x4C452Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4528u;
            // 0x4c452c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C453Cu;
            goto label_4c453c;
        }
    }
    ctx->pc = 0x4C4530u;
    // 0x4c4530: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C4530u;
    SET_GPR_U32(ctx, 31, 0x4C4538u);
    ctx->pc = 0x4C4534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4530u;
            // 0x4c4534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4538u; }
        if (ctx->pc != 0x4C4538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4538u; }
        if (ctx->pc != 0x4C4538u) { return; }
    }
    ctx->pc = 0x4C4538u;
label_4c4538:
    // 0x4c4538: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c4538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c453c:
    // 0x4c453c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c453cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c4540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c4540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c4544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4548: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C454Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4548u;
            // 0x4c454c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C4550u;
}
