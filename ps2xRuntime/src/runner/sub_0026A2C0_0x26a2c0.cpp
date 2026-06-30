#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A2C0
// Address: 0x26a2c0 - 0x26a340
void sub_0026A2C0_0x26a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A2C0_0x26a2c0");
#endif

    switch (ctx->pc) {
        case 0x26a2ecu: goto label_26a2ec;
        case 0x26a300u: goto label_26a300;
        case 0x26a31cu: goto label_26a31c;
        default: break;
    }

    ctx->pc = 0x26a2c0u;

    // 0x26a2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a2c4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a2c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a2cc: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x26a2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x26a2d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a2d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a2d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x26a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26a2e0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26a2e4: 0xc0a7a34  jal         func_29E8D0
    ctx->pc = 0x26A2E4u;
    SET_GPR_U32(ctx, 31, 0x26A2ECu);
    ctx->pc = 0x26A2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2E4u;
            // 0x26a2e8: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E8D0u;
    if (runtime->hasFunction(0x29E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x29E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2ECu; }
        if (ctx->pc != 0x26A2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E8D0_0x29e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2ECu; }
        if (ctx->pc != 0x26A2ECu) { return; }
    }
    ctx->pc = 0x26A2ECu;
label_26a2ec:
    // 0x26a2ec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x26a2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26a2f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2f4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x26a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26a2f8: 0xc0a8448  jal         func_2A1120
    ctx->pc = 0x26A2F8u;
    SET_GPR_U32(ctx, 31, 0x26A300u);
    ctx->pc = 0x26A2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2F8u;
            // 0x26a2fc: 0x462021  addu        $a0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A300u; }
        if (ctx->pc != 0x26A300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A300u; }
        if (ctx->pc != 0x26A300u) { return; }
    }
    ctx->pc = 0x26A300u;
label_26a300:
    // 0x26a300: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x26a300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26a304: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a308: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26a308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26a30c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x26a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x26a310: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x26a310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26a314: 0xc0a7a48  jal         func_29E920
    ctx->pc = 0x26A314u;
    SET_GPR_U32(ctx, 31, 0x26A31Cu);
    ctx->pc = 0x26A318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A314u;
            // 0x26a318: 0x8c24ea40  lw          $a0, -0x15C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A31Cu; }
        if (ctx->pc != 0x26A31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A31Cu; }
        if (ctx->pc != 0x26A31Cu) { return; }
    }
    ctx->pc = 0x26A31Cu;
label_26a31c:
    // 0x26a31c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x26a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x26a320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a32c: 0x3e00008  jr          $ra
    ctx->pc = 0x26A32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A32Cu;
            // 0x26a330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A334u;
    // 0x26a334: 0x0  nop
    ctx->pc = 0x26a334u;
    // NOP
    // 0x26a338: 0x0  nop
    ctx->pc = 0x26a338u;
    // NOP
    // 0x26a33c: 0x0  nop
    ctx->pc = 0x26a33cu;
    // NOP
}
