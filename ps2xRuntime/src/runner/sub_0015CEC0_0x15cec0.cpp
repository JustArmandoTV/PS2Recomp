#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CEC0
// Address: 0x15cec0 - 0x15cf00
void sub_0015CEC0_0x15cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CEC0_0x15cec0");
#endif

    switch (ctx->pc) {
        case 0x15ceecu: goto label_15ceec;
        default: break;
    }

    ctx->pc = 0x15cec0u;

    // 0x15cec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15cec4: 0x28c1001d  slti        $at, $a2, 0x1D
    ctx->pc = 0x15cec4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x15cec8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15CEC8u;
    {
        const bool branch_taken_0x15cec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEC8u;
            // 0x15cecc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cec8) {
            ctx->pc = 0x15CEECu;
            goto label_15ceec;
        }
    }
    ctx->pc = 0x15CED0u;
    // 0x15ced0: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x15ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x15ced4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15ced8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15ced8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cedc: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x15cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x15cee0: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15cee4: 0xc056dd0  jal         func_15B740
    ctx->pc = 0x15CEE4u;
    SET_GPR_U32(ctx, 31, 0x15CEECu);
    ctx->pc = 0x15CEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEE4u;
            // 0x15cee8: 0x23902  srl         $a3, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B740u;
    if (runtime->hasFunction(0x15B740u)) {
        auto targetFn = runtime->lookupFunction(0x15B740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CEECu; }
        if (ctx->pc != 0x15CEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B740_0x15b740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CEECu; }
        if (ctx->pc != 0x15CEECu) { return; }
    }
    ctx->pc = 0x15CEECu;
label_15ceec:
    // 0x15ceec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ceecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cef0: 0x3e00008  jr          $ra
    ctx->pc = 0x15CEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEF0u;
            // 0x15cef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CEF8u;
    // 0x15cef8: 0x0  nop
    ctx->pc = 0x15cef8u;
    // NOP
    // 0x15cefc: 0x0  nop
    ctx->pc = 0x15cefcu;
    // NOP
}
