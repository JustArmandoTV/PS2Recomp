#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001754E8
// Address: 0x1754e8 - 0x175530
void sub_001754E8_0x1754e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001754E8_0x1754e8");
#endif

    switch (ctx->pc) {
        case 0x175504u: goto label_175504;
        case 0x175510u: goto label_175510;
        case 0x175518u: goto label_175518;
        default: break;
    }

    ctx->pc = 0x1754e8u;

    // 0x1754e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1754e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1754ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1754ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1754f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1754f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1754f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1754f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1754f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1754fc: 0xc0599de  jal         func_166778
    ctx->pc = 0x1754FCu;
    SET_GPR_U32(ctx, 31, 0x175504u);
    ctx->pc = 0x175500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1754FCu;
            // 0x175500: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175504u; }
        if (ctx->pc != 0x175504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175504u; }
        if (ctx->pc != 0x175504u) { return; }
    }
    ctx->pc = 0x175504u;
label_175504:
    // 0x175504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175508: 0xc05d54c  jal         func_175530
    ctx->pc = 0x175508u;
    SET_GPR_U32(ctx, 31, 0x175510u);
    ctx->pc = 0x17550Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175508u;
            // 0x17550c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175530u;
    if (runtime->hasFunction(0x175530u)) {
        auto targetFn = runtime->lookupFunction(0x175530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175510u; }
        if (ctx->pc != 0x175510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175530_0x175530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175510u; }
        if (ctx->pc != 0x175510u) { return; }
    }
    ctx->pc = 0x175510u;
label_175510:
    // 0x175510: 0xc0599e0  jal         func_166780
    ctx->pc = 0x175510u;
    SET_GPR_U32(ctx, 31, 0x175518u);
    ctx->pc = 0x175514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175510u;
            // 0x175514: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175518u; }
        if (ctx->pc != 0x175518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175518u; }
        if (ctx->pc != 0x175518u) { return; }
    }
    ctx->pc = 0x175518u;
label_175518:
    // 0x175518: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17551c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17551cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175528: 0x3e00008  jr          $ra
    ctx->pc = 0x175528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175528u;
            // 0x17552c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175530u;
}
