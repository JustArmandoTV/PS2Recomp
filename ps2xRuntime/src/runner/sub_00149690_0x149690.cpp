#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149690
// Address: 0x149690 - 0x1496d0
void sub_00149690_0x149690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149690_0x149690");
#endif

    switch (ctx->pc) {
        case 0x1496acu: goto label_1496ac;
        case 0x1496bcu: goto label_1496bc;
        default: break;
    }

    ctx->pc = 0x149690u;

    // 0x149690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149694: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x149694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x149698: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x149698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x14969c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14969Cu;
    {
        const bool branch_taken_0x14969c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14969Cu;
            // 0x1496a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14969c) {
            ctx->pc = 0x1496B4u;
            goto label_1496b4;
        }
    }
    ctx->pc = 0x1496A4u;
    // 0x1496a4: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x1496A4u;
    SET_GPR_U32(ctx, 31, 0x1496ACu);
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496ACu; }
        if (ctx->pc != 0x1496ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496ACu; }
        if (ctx->pc != 0x1496ACu) { return; }
    }
    ctx->pc = 0x1496ACu;
label_1496ac:
    // 0x1496ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1496ACu;
    {
        const bool branch_taken_0x1496ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1496ACu;
            // 0x1496b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496ac) {
            ctx->pc = 0x1496C0u;
            goto label_1496c0;
        }
    }
    ctx->pc = 0x1496B4u;
label_1496b4:
    // 0x1496b4: 0xc050044  jal         func_140110
    ctx->pc = 0x1496B4u;
    SET_GPR_U32(ctx, 31, 0x1496BCu);
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496BCu; }
        if (ctx->pc != 0x1496BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496BCu; }
        if (ctx->pc != 0x1496BCu) { return; }
    }
    ctx->pc = 0x1496BCu;
label_1496bc:
    // 0x1496bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1496bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1496c0:
    // 0x1496c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1496C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1496C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1496C0u;
            // 0x1496c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1496C8u;
    // 0x1496c8: 0x0  nop
    ctx->pc = 0x1496c8u;
    // NOP
    // 0x1496cc: 0x0  nop
    ctx->pc = 0x1496ccu;
    // NOP
}
