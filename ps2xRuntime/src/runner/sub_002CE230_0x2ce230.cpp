#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE230
// Address: 0x2ce230 - 0x2ce270
void sub_002CE230_0x2ce230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE230_0x2ce230");
#endif

    switch (ctx->pc) {
        case 0x2ce248u: goto label_2ce248;
        case 0x2ce254u: goto label_2ce254;
        case 0x2ce25cu: goto label_2ce25c;
        default: break;
    }

    ctx->pc = 0x2ce230u;

    // 0x2ce230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce23c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce240: 0xc0b3974  jal         func_2CE5D0
    ctx->pc = 0x2CE240u;
    SET_GPR_U32(ctx, 31, 0x2CE248u);
    ctx->pc = 0x2CE244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE240u;
            // 0x2ce244: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE5D0u;
    if (runtime->hasFunction(0x2CE5D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE248u; }
        if (ctx->pc != 0x2CE248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE5D0_0x2ce5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE248u; }
        if (ctx->pc != 0x2CE248u) { return; }
    }
    ctx->pc = 0x2CE248u;
label_2ce248:
    // 0x2ce248: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce24c: 0xc0b38a0  jal         func_2CE280
    ctx->pc = 0x2CE24Cu;
    SET_GPR_U32(ctx, 31, 0x2CE254u);
    ctx->pc = 0x2CE250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE24Cu;
            // 0x2ce250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE280u;
    if (runtime->hasFunction(0x2CE280u)) {
        auto targetFn = runtime->lookupFunction(0x2CE280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE254u; }
        if (ctx->pc != 0x2CE254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE280_0x2ce280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE254u; }
        if (ctx->pc != 0x2CE254u) { return; }
    }
    ctx->pc = 0x2CE254u;
label_2ce254:
    // 0x2ce254: 0xc0b389c  jal         func_2CE270
    ctx->pc = 0x2CE254u;
    SET_GPR_U32(ctx, 31, 0x2CE25Cu);
    ctx->pc = 0x2CE258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE254u;
            // 0x2ce258: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE270u;
    if (runtime->hasFunction(0x2CE270u)) {
        auto targetFn = runtime->lookupFunction(0x2CE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE25Cu; }
        if (ctx->pc != 0x2CE25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE270_0x2ce270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE25Cu; }
        if (ctx->pc != 0x2CE25Cu) { return; }
    }
    ctx->pc = 0x2CE25Cu;
label_2ce25c:
    // 0x2ce25c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ce25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce268: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE268u;
            // 0x2ce26c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE270u;
}
