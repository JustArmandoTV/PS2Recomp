#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035D910
// Address: 0x35d910 - 0x35d990
void sub_0035D910_0x35d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D910_0x35d910");
#endif

    switch (ctx->pc) {
        case 0x35d954u: goto label_35d954;
        case 0x35d970u: goto label_35d970;
        default: break;
    }

    ctx->pc = 0x35d910u;

    // 0x35d910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35d914: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35d914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d918: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35d91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d924: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35d924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d928: 0x8ca30e38  lw          $v1, 0xE38($a1)
    ctx->pc = 0x35d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3640)));
    // 0x35d92c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35D92Cu;
    {
        const bool branch_taken_0x35d92c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x35D930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D92Cu;
            // 0x35d930: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d92c) {
            ctx->pc = 0x35D944u;
            goto label_35d944;
        }
    }
    ctx->pc = 0x35D934u;
    // 0x35d934: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x35d934u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35d938: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x35D938u;
    {
        const bool branch_taken_0x35d938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d938) {
            ctx->pc = 0x35D944u;
            goto label_35d944;
        }
    }
    ctx->pc = 0x35D940u;
    // 0x35d940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35d944:
    // 0x35d944: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D944u;
    {
        const bool branch_taken_0x35d944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d944) {
            ctx->pc = 0x35D960u;
            goto label_35d960;
        }
    }
    ctx->pc = 0x35D94Cu;
    // 0x35d94c: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x35D94Cu;
    SET_GPR_U32(ctx, 31, 0x35D954u);
    ctx->pc = 0x35D950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D94Cu;
            // 0x35d950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D954u; }
        if (ctx->pc != 0x35D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D954u; }
        if (ctx->pc != 0x35D954u) { return; }
    }
    ctx->pc = 0x35D954u;
label_35d954:
    // 0x35d954: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35D954u;
    {
        const bool branch_taken_0x35d954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d954) {
            ctx->pc = 0x35D960u;
            goto label_35d960;
        }
    }
    ctx->pc = 0x35D95Cu;
    // 0x35d95c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35d95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d960:
    // 0x35d960: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D960u;
    {
        const bool branch_taken_0x35d960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d960) {
            ctx->pc = 0x35D964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35D960u;
            // 0x35d964: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35D974u;
            goto label_35d974;
        }
    }
    ctx->pc = 0x35D968u;
    // 0x35d968: 0xc072a56  jal         func_1CA958
    ctx->pc = 0x35D968u;
    SET_GPR_U32(ctx, 31, 0x35D970u);
    ctx->pc = 0x35D96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D968u;
            // 0x35d96c: 0x9224005c  lbu         $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D970u; }
        if (ctx->pc != 0x35D970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D970u; }
        if (ctx->pc != 0x35D970u) { return; }
    }
    ctx->pc = 0x35D970u;
label_35d970:
    // 0x35d970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35d970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35d974:
    // 0x35d974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d97c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D97Cu;
            // 0x35d980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35D984u;
    // 0x35d984: 0x0  nop
    ctx->pc = 0x35d984u;
    // NOP
    // 0x35d988: 0x0  nop
    ctx->pc = 0x35d988u;
    // NOP
    // 0x35d98c: 0x0  nop
    ctx->pc = 0x35d98cu;
    // NOP
}
