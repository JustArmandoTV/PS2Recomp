#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A6F30
// Address: 0x3a6f30 - 0x3a6f80
void sub_003A6F30_0x3a6f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6F30_0x3a6f30");
#endif

    switch (ctx->pc) {
        case 0x3a6f68u: goto label_3a6f68;
        default: break;
    }

    ctx->pc = 0x3a6f30u;

    // 0x3a6f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a6f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a6f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a6f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a6f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f40: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3A6F40u;
    {
        const bool branch_taken_0x3a6f40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6f40) {
            ctx->pc = 0x3A6F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6F40u;
            // 0x3a6f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6F6Cu;
            goto label_3a6f6c;
        }
    }
    ctx->pc = 0x3A6F48u;
    // 0x3a6f48: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3a6f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3a6f4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3a6f50: 0x246388b0  addiu       $v1, $v1, -0x7750
    ctx->pc = 0x3a6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936752));
    // 0x3a6f54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a6f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a6f58: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6F58u;
    {
        const bool branch_taken_0x3a6f58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A6F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6F58u;
            // 0x3a6f5c: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f58) {
            ctx->pc = 0x3A6F68u;
            goto label_3a6f68;
        }
    }
    ctx->pc = 0x3A6F60u;
    // 0x3a6f60: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3A6F60u;
    SET_GPR_U32(ctx, 31, 0x3A6F68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6F68u; }
        if (ctx->pc != 0x3A6F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6F68u; }
        if (ctx->pc != 0x3A6F68u) { return; }
    }
    ctx->pc = 0x3A6F68u;
label_3a6f68:
    // 0x3a6f68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a6f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a6f6c:
    // 0x3a6f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a6f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a6f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6f74: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6F74u;
            // 0x3a6f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A6F7Cu;
    // 0x3a6f7c: 0x0  nop
    ctx->pc = 0x3a6f7cu;
    // NOP
}
