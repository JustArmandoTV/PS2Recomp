#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170CF0
// Address: 0x170cf0 - 0x170d30
void sub_00170CF0_0x170cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170CF0_0x170cf0");
#endif

    switch (ctx->pc) {
        case 0x170d04u: goto label_170d04;
        case 0x170d0cu: goto label_170d0c;
        case 0x170d1cu: goto label_170d1c;
        default: break;
    }

    ctx->pc = 0x170cf0u;

    // 0x170cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170cf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170cfc: 0xc05c834  jal         func_1720D0
    ctx->pc = 0x170CFCu;
    SET_GPR_U32(ctx, 31, 0x170D04u);
    ctx->pc = 0x170D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170CFCu;
            // 0x170d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D04u; }
        if (ctx->pc != 0x170D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D04u; }
        if (ctx->pc != 0x170D04u) { return; }
    }
    ctx->pc = 0x170D04u;
label_170d04:
    // 0x170d04: 0xc05c320  jal         func_170C80
    ctx->pc = 0x170D04u;
    SET_GPR_U32(ctx, 31, 0x170D0Cu);
    ctx->pc = 0x170D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D04u;
            // 0x170d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C80u;
    if (runtime->hasFunction(0x170C80u)) {
        auto targetFn = runtime->lookupFunction(0x170C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D0Cu; }
        if (ctx->pc != 0x170D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C80_0x170c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D0Cu; }
        if (ctx->pc != 0x170D0Cu) { return; }
    }
    ctx->pc = 0x170D0Cu;
label_170d0c:
    // 0x170d0c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x170d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x170d10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x170d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x170d14: 0xc05c83a  jal         func_1720E8
    ctx->pc = 0x170D14u;
    SET_GPR_U32(ctx, 31, 0x170D1Cu);
    ctx->pc = 0x170D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D14u;
            // 0x170d18: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D1Cu; }
        if (ctx->pc != 0x170D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D1Cu; }
        if (ctx->pc != 0x170D1Cu) { return; }
    }
    ctx->pc = 0x170D1Cu;
label_170d1c:
    // 0x170d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170d24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170d28: 0x3e00008  jr          $ra
    ctx->pc = 0x170D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170D28u;
            // 0x170d2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170D30u;
}
