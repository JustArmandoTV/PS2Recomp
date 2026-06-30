#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CF4D0
// Address: 0x4cf4d0 - 0x4cf540
void sub_004CF4D0_0x4cf4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF4D0_0x4cf4d0");
#endif

    switch (ctx->pc) {
        case 0x4cf510u: goto label_4cf510;
        case 0x4cf528u: goto label_4cf528;
        default: break;
    }

    ctx->pc = 0x4cf4d0u;

    // 0x4cf4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cf4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cf4d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cf4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4cf4d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cf4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cf4dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cf4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cf4e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cf4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf4e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4CF4E4u;
    {
        const bool branch_taken_0x4cf4e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF4E4u;
            // 0x4cf4e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf4e4) {
            ctx->pc = 0x4CF528u;
            goto label_4cf528;
        }
    }
    ctx->pc = 0x4CF4ECu;
    // 0x4cf4ec: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CF4ECu;
    {
        const bool branch_taken_0x4cf4ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf4ec) {
            ctx->pc = 0x4CF4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF4ECu;
            // 0x4cf4f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF514u;
            goto label_4cf514;
        }
    }
    ctx->pc = 0x4CF4F4u;
    // 0x4cf4f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CF4F4u;
    {
        const bool branch_taken_0x4cf4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf4f4) {
            ctx->pc = 0x4CF510u;
            goto label_4cf510;
        }
    }
    ctx->pc = 0x4CF4FCu;
    // 0x4cf4fc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4cf4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4cf500: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CF500u;
    {
        const bool branch_taken_0x4cf500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf500) {
            ctx->pc = 0x4CF510u;
            goto label_4cf510;
        }
    }
    ctx->pc = 0x4CF508u;
    // 0x4cf508: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4CF508u;
    SET_GPR_U32(ctx, 31, 0x4CF510u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF510u; }
        if (ctx->pc != 0x4CF510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF510u; }
        if (ctx->pc != 0x4CF510u) { return; }
    }
    ctx->pc = 0x4CF510u;
label_4cf510:
    // 0x4cf510: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4cf510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4cf514:
    // 0x4cf514: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cf514u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4cf518: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CF518u;
    {
        const bool branch_taken_0x4cf518 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cf518) {
            ctx->pc = 0x4CF51Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF518u;
            // 0x4cf51c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF52Cu;
            goto label_4cf52c;
        }
    }
    ctx->pc = 0x4CF520u;
    // 0x4cf520: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4CF520u;
    SET_GPR_U32(ctx, 31, 0x4CF528u);
    ctx->pc = 0x4CF524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF520u;
            // 0x4cf524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF528u; }
        if (ctx->pc != 0x4CF528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF528u; }
        if (ctx->pc != 0x4CF528u) { return; }
    }
    ctx->pc = 0x4CF528u;
label_4cf528:
    // 0x4cf528: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cf528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cf52c:
    // 0x4cf52c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cf52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cf530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cf530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cf534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cf534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf538: 0x3e00008  jr          $ra
    ctx->pc = 0x4CF538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF538u;
            // 0x4cf53c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF540u;
}
