#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192D38
// Address: 0x192d38 - 0x192d88
void sub_00192D38_0x192d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192D38_0x192d38");
#endif

    switch (ctx->pc) {
        case 0x192d4cu: goto label_192d4c;
        default: break;
    }

    ctx->pc = 0x192d38u;

    // 0x192d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192d40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x192d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x192d44: 0xc064adc  jal         func_192B70
    ctx->pc = 0x192D44u;
    SET_GPR_U32(ctx, 31, 0x192D4Cu);
    ctx->pc = 0x192D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192D44u;
            // 0x192d48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D4Cu; }
        if (ctx->pc != 0x192D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D4Cu; }
        if (ctx->pc != 0x192D4Cu) { return; }
    }
    ctx->pc = 0x192D4Cu;
label_192d4c:
    // 0x192d4c: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x192d50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192D54u;
    {
        const bool branch_taken_0x192d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D54u;
            // 0x192d58: 0x34a50103  ori         $a1, $a1, 0x103 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)259);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d54) {
            ctx->pc = 0x192D70u;
            goto label_192d70;
        }
    }
    ctx->pc = 0x192D5Cu;
    // 0x192d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192d60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x192d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192d64: 0x8064a68  j           func_1929A0
    ctx->pc = 0x192D64u;
    ctx->pc = 0x192D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192D64u;
            // 0x192d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1929A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1929A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x192D6Cu;
    // 0x192d6c: 0x0  nop
    ctx->pc = 0x192d6cu;
    // NOP
label_192d70:
    // 0x192d70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192d74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x192d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192d78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x192d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x192d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192d80: 0x3e00008  jr          $ra
    ctx->pc = 0x192D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D80u;
            // 0x192d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192D88u;
}
