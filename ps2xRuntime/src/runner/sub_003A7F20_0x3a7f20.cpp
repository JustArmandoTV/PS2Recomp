#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A7F20
// Address: 0x3a7f20 - 0x3a7f70
void sub_003A7F20_0x3a7f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7F20_0x3a7f20");
#endif

    switch (ctx->pc) {
        case 0x3a7f58u: goto label_3a7f58;
        default: break;
    }

    ctx->pc = 0x3a7f20u;

    // 0x3a7f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a7f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a7f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a7f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a7f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a7f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7f30: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3A7F30u;
    {
        const bool branch_taken_0x3a7f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7f30) {
            ctx->pc = 0x3A7F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7F30u;
            // 0x3a7f34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A7F5Cu;
            goto label_3a7f5c;
        }
    }
    ctx->pc = 0x3A7F38u;
    // 0x3a7f38: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3a7f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3a7f3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3a7f40: 0x246388d0  addiu       $v1, $v1, -0x7730
    ctx->pc = 0x3a7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x3a7f44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a7f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a7f48: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7F48u;
    {
        const bool branch_taken_0x3a7f48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A7F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7F48u;
            // 0x3a7f4c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f48) {
            ctx->pc = 0x3A7F58u;
            goto label_3a7f58;
        }
    }
    ctx->pc = 0x3A7F50u;
    // 0x3a7f50: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3A7F50u;
    SET_GPR_U32(ctx, 31, 0x3A7F58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7F58u; }
        if (ctx->pc != 0x3A7F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7F58u; }
        if (ctx->pc != 0x3A7F58u) { return; }
    }
    ctx->pc = 0x3A7F58u;
label_3a7f58:
    // 0x3a7f58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a7f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7f5c:
    // 0x3a7f5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a7f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7f60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a7f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7f64: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7F64u;
            // 0x3a7f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A7F6Cu;
    // 0x3a7f6c: 0x0  nop
    ctx->pc = 0x3a7f6cu;
    // NOP
}
