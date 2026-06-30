#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1460
// Address: 0x1b1460 - 0x1b14b0
void sub_001B1460_0x1b1460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1460_0x1b1460");
#endif

    switch (ctx->pc) {
        case 0x1b1478u: goto label_1b1478;
        default: break;
    }

    ctx->pc = 0x1b1460u;

    // 0x1b1460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b146c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1470: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1B1470u;
    SET_GPR_U32(ctx, 31, 0x1B1478u);
    ctx->pc = 0x1B1474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1470u;
            // 0x1b1474: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1478u; }
        if (ctx->pc != 0x1B1478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1478u; }
        if (ctx->pc != 0x1B1478u) { return; }
    }
    ctx->pc = 0x1B1478u;
label_1b1478:
    // 0x1b1478: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b1478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b147c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1b147cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1b1480: 0x24620803  addiu       $v0, $v1, 0x803
    ctx->pc = 0x1b1480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2051));
    // 0x1b1484: 0x24631002  addiu       $v1, $v1, 0x1002
    ctx->pc = 0x1b1484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4098));
    // 0x1b1488: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x1b1488u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b148c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b148cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1490: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x1b1490u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1b1494: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1b1494u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1b1498: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1b1498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1b149c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1b149cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1b14a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b14a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b14a4: 0x80430e0  j           func_10C380
    ctx->pc = 0x1B14A4u;
    ctx->pc = 0x1B14A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14A4u;
            // 0x1b14a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C380_0x10c380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B14ACu;
    // 0x1b14ac: 0x0  nop
    ctx->pc = 0x1b14acu;
    // NOP
}
