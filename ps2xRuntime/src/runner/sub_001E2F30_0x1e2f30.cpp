#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2F30
// Address: 0x1e2f30 - 0x1e2f80
void sub_001E2F30_0x1e2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2F30_0x1e2f30");
#endif

    switch (ctx->pc) {
        case 0x1e2f68u: goto label_1e2f68;
        default: break;
    }

    ctx->pc = 0x1e2f30u;

    // 0x1e2f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f40: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2F40u;
    {
        const bool branch_taken_0x1e2f40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2f40) {
            ctx->pc = 0x1E2F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F40u;
            // 0x1e2f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2F6Cu;
            goto label_1e2f6c;
        }
    }
    ctx->pc = 0x1E2F48u;
    // 0x1e2f48: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e2f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e2f4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e2f50: 0x2463d3e0  addiu       $v1, $v1, -0x2C20
    ctx->pc = 0x1e2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956000));
    // 0x1e2f54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e2f58: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2F58u;
    {
        const bool branch_taken_0x1e2f58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E2F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F58u;
            // 0x1e2f5c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f58) {
            ctx->pc = 0x1E2F68u;
            goto label_1e2f68;
        }
    }
    ctx->pc = 0x1E2F60u;
    // 0x1e2f60: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1E2F60u;
    SET_GPR_U32(ctx, 31, 0x1E2F68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F68u; }
        if (ctx->pc != 0x1E2F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F68u; }
        if (ctx->pc != 0x1E2F68u) { return; }
    }
    ctx->pc = 0x1E2F68u;
label_1e2f68:
    // 0x1e2f68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f6c:
    // 0x1e2f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2f74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F74u;
            // 0x1e2f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2F7Cu;
    // 0x1e2f7c: 0x0  nop
    ctx->pc = 0x1e2f7cu;
    // NOP
}
