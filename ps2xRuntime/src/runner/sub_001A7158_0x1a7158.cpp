#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7158
// Address: 0x1a7158 - 0x1a71a8
void sub_001A7158_0x1a7158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7158_0x1a7158");
#endif

    switch (ctx->pc) {
        case 0x1a7188u: goto label_1a7188;
        default: break;
    }

    ctx->pc = 0x1a7158u;

    // 0x1a7158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a715c: 0x28a20801  slti        $v0, $a1, 0x801
    ctx->pc = 0x1a715cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x1a7160: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7164: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x1a7164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1a7168: 0xa2800b  movn        $s0, $a1, $v0
    ctx->pc = 0x1a7168u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x1a716c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a716cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7170: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7174: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a7174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7178: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x1a7178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x1a717c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a717cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7180: 0xc064080  jal         func_190200
    ctx->pc = 0x1A7180u;
    SET_GPR_U32(ctx, 31, 0x1A7188u);
    ctx->pc = 0x1A7184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7180u;
            // 0x1a7184: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7188u; }
        if (ctx->pc != 0x1A7188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7188u; }
        if (ctx->pc != 0x1A7188u) { return; }
    }
    ctx->pc = 0x1A7188u;
label_1a7188:
    // 0x1a7188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a718c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a718cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7190: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x1a7190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x1a7194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a719c: 0x8069f74  j           func_1A7DD0
    ctx->pc = 0x1A719Cu;
    ctx->pc = 0x1A71A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A719Cu;
            // 0x1a71a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7DD0u;
    if (runtime->hasFunction(0x1A7DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A7DD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A7DD0_0x1a7dd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A71A4u;
    // 0x1a71a4: 0x0  nop
    ctx->pc = 0x1a71a4u;
    // NOP
}
