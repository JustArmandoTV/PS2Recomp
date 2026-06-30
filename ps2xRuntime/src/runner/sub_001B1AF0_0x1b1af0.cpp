#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1AF0
// Address: 0x1b1af0 - 0x1b1b50
void sub_001B1AF0_0x1b1af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1AF0_0x1b1af0");
#endif

    switch (ctx->pc) {
        case 0x1b1b0cu: goto label_1b1b0c;
        default: break;
    }

    ctx->pc = 0x1b1af0u;

    // 0x1b1af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1af8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b1af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1b04: 0xc06c530  jal         func_1B14C0
    ctx->pc = 0x1B1B04u;
    SET_GPR_U32(ctx, 31, 0x1B1B0Cu);
    ctx->pc = 0x1B1B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B04u;
            // 0x1b1b08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14C0u;
    if (runtime->hasFunction(0x1B14C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B0Cu; }
        if (ctx->pc != 0x1B1B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14C0_0x1b14c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B0Cu; }
        if (ctx->pc != 0x1B1B0Cu) { return; }
    }
    ctx->pc = 0x1B1B0Cu;
label_1b1b0c:
    // 0x1b1b0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1B0Cu;
    {
        const bool branch_taken_0x1b1b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B0Cu;
            // 0x1b1b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b0c) {
            ctx->pc = 0x1B1B30u;
            goto label_1b1b30;
        }
    }
    ctx->pc = 0x1B1B14u;
    // 0x1b1b14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1b1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B24u;
            // 0x1b1b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1B2Cu;
    // 0x1b1b2c: 0x0  nop
    ctx->pc = 0x1b1b2cu;
    // NOP
label_1b1b30:
    // 0x1b1b30: 0x8e242030  lw          $a0, 0x2030($s1)
    ctx->pc = 0x1b1b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8240)));
    // 0x1b1b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1b38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1b3c: 0x24841198  addiu       $a0, $a0, 0x1198
    ctx->pc = 0x1b1b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    // 0x1b1b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1b44: 0x806c35c  j           func_1B0D70
    ctx->pc = 0x1B1B44u;
    ctx->pc = 0x1B1B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B44u;
            // 0x1b1b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0D70u;
    {
        auto targetFn = runtime->lookupFunction(0x1B0D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B1B4Cu;
    // 0x1b1b4c: 0x0  nop
    ctx->pc = 0x1b1b4cu;
    // NOP
}
