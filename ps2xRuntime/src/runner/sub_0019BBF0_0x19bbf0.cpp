#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BBF0
// Address: 0x19bbf0 - 0x19bc30
void sub_0019BBF0_0x19bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BBF0_0x19bbf0");
#endif

    switch (ctx->pc) {
        case 0x19bc00u: goto label_19bc00;
        case 0x19bc10u: goto label_19bc10;
        case 0x19bc1cu: goto label_19bc1c;
        default: break;
    }

    ctx->pc = 0x19bbf0u;

    // 0x19bbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bbf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bbf8: 0xc06c8b4  jal         func_1B22D0
    ctx->pc = 0x19BBF8u;
    SET_GPR_U32(ctx, 31, 0x19BC00u);
    ctx->pc = 0x19BBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBF8u;
            // 0x19bbfc: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B22D0u;
    if (runtime->hasFunction(0x1B22D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC00u; }
        if (ctx->pc != 0x19BC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B22D0_0x1b22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC00u; }
        if (ctx->pc != 0x19BC00u) { return; }
    }
    ctx->pc = 0x19BC00u;
label_19bc00:
    // 0x19bc00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BC00u;
    {
        const bool branch_taken_0x19bc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC00u;
            // 0x19bc04: 0x2404fec9  addiu       $a0, $zero, -0x137 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966985));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc00) {
            ctx->pc = 0x19BC20u;
            goto label_19bc20;
        }
    }
    ctx->pc = 0x19BC08u;
    // 0x19bc08: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x19BC08u;
    SET_GPR_U32(ctx, 31, 0x19BC10u);
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC10u; }
        if (ctx->pc != 0x19BC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC10u; }
        if (ctx->pc != 0x19BC10u) { return; }
    }
    ctx->pc = 0x19BC10u;
label_19bc10:
    // 0x19bc10: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19bc14: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19BC14u;
    SET_GPR_U32(ctx, 31, 0x19BC1Cu);
    ctx->pc = 0x19BC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC14u;
            // 0x19bc18: 0x24849330  addiu       $a0, $a0, -0x6CD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC1Cu; }
        if (ctx->pc != 0x19BC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC1Cu; }
        if (ctx->pc != 0x19BC1Cu) { return; }
    }
    ctx->pc = 0x19BC1Cu;
label_19bc1c:
    // 0x19bc1c: 0x2402fec9  addiu       $v0, $zero, -0x137
    ctx->pc = 0x19bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966985));
label_19bc20:
    // 0x19bc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bc24: 0x3e00008  jr          $ra
    ctx->pc = 0x19BC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC24u;
            // 0x19bc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BC2Cu;
    // 0x19bc2c: 0x0  nop
    ctx->pc = 0x19bc2cu;
    // NOP
}
