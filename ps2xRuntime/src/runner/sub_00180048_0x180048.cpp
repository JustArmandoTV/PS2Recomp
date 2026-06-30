#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180048
// Address: 0x180048 - 0x180098
void sub_00180048_0x180048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180048_0x180048");
#endif

    switch (ctx->pc) {
        case 0x180064u: goto label_180064;
        default: break;
    }

    ctx->pc = 0x180048u;

    // 0x180048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18004c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180054: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x180054u;
    {
        const bool branch_taken_0x180054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x180058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180054u;
            // 0x180058: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180054) {
            ctx->pc = 0x180088u;
            goto label_180088;
        }
    }
    ctx->pc = 0x18005Cu;
    // 0x18005c: 0xc06011a  jal         func_180468
    ctx->pc = 0x18005Cu;
    SET_GPR_U32(ctx, 31, 0x180064u);
    ctx->pc = 0x180468u;
    if (runtime->hasFunction(0x180468u)) {
        auto targetFn = runtime->lookupFunction(0x180468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180064u; }
        if (ctx->pc != 0x180064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180468_0x180468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180064u; }
        if (ctx->pc != 0x180064u) { return; }
    }
    ctx->pc = 0x180064u;
label_180064:
    // 0x180064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180068: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x180068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18006c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x180070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180074: 0x24060238  addiu       $a2, $zero, 0x238
    ctx->pc = 0x180074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    // 0x180078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18007c: 0x804a576  j           func_1295D8
    ctx->pc = 0x18007Cu;
    ctx->pc = 0x180080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18007Cu;
            // 0x180080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180084u;
    // 0x180084: 0x0  nop
    ctx->pc = 0x180084u;
    // NOP
label_180088:
    // 0x180088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18008c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18008cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180090: 0x3e00008  jr          $ra
    ctx->pc = 0x180090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180090u;
            // 0x180094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180098u;
}
