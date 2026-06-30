#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245FA0
// Address: 0x245fa0 - 0x2460c0
void sub_00245FA0_0x245fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245FA0_0x245fa0");
#endif

    switch (ctx->pc) {
        case 0x245ff0u: goto label_245ff0;
        case 0x246010u: goto label_246010;
        case 0x246070u: goto label_246070;
        default: break;
    }

    ctx->pc = 0x245fa0u;

    // 0x245fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x245fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x245fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x245fac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x245facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x245fb0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x245fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x245fb4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x245fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x245fb8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x245fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x245fbc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x245fbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x245fc0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x245FC0u;
    {
        const bool branch_taken_0x245fc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245FC0u;
            // 0x245fc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fc0) {
            ctx->pc = 0x245FF0u;
            goto label_245ff0;
        }
    }
    ctx->pc = 0x245FC8u;
    // 0x245fc8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x245fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x245fcc: 0x28a10005  slti        $at, $a1, 0x5
    ctx->pc = 0x245fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x245fd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x245FD0u;
    {
        const bool branch_taken_0x245fd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x245fd0) {
            ctx->pc = 0x245FE0u;
            goto label_245fe0;
        }
    }
    ctx->pc = 0x245FD8u;
    // 0x245fd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x245FD8u;
    {
        const bool branch_taken_0x245fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245FD8u;
            // 0x245fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fd8) {
            ctx->pc = 0x245FE8u;
            goto label_245fe8;
        }
    }
    ctx->pc = 0x245FE0u;
label_245fe0:
    // 0x245fe0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x245fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x245fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245fe8:
    // 0x245fe8: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x245FE8u;
    SET_GPR_U32(ctx, 31, 0x245FF0u);
    ctx->pc = 0x245FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245FE8u;
            // 0x245fec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245FF0u; }
        if (ctx->pc != 0x245FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245FF0u; }
        if (ctx->pc != 0x245FF0u) { return; }
    }
    ctx->pc = 0x245FF0u;
label_245ff0:
    // 0x245ff0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x245ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x245ff4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x245ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x245ff8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x245ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x245ffc: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x245ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x246000: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x246000u;
    {
        const bool branch_taken_0x246000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x246004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246000u;
            // 0x246004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246000) {
            ctx->pc = 0x246010u;
            goto label_246010;
        }
    }
    ctx->pc = 0x246008u;
    // 0x246008: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x246008u;
    SET_GPR_U32(ctx, 31, 0x246010u);
    ctx->pc = 0x24600Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246008u;
            // 0x24600c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246010u; }
        if (ctx->pc != 0x246010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246010u; }
        if (ctx->pc != 0x246010u) { return; }
    }
    ctx->pc = 0x246010u;
label_246010:
    // 0x246010: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x246010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x246014: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x246014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x246018: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24601c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x24601cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x246020: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x246020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x246024: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x246024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x246028: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x246028u;
    {
        const bool branch_taken_0x246028 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24602Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246028u;
            // 0x24602c: 0x24850084  addiu       $a1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246028) {
            ctx->pc = 0x246050u;
            goto label_246050;
        }
    }
    ctx->pc = 0x246030u;
    // 0x246030: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x246030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x246034: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x246034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x246038: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x246038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x24603c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x246040: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x246040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x246044: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x246044u;
    {
        const bool branch_taken_0x246044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246044u;
            // 0x246048: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246044) {
            ctx->pc = 0x246058u;
            goto label_246058;
        }
    }
    ctx->pc = 0x24604Cu;
    // 0x24604c: 0x0  nop
    ctx->pc = 0x24604cu;
    // NOP
label_246050:
    // 0x246050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x246050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246054: 0x0  nop
    ctx->pc = 0x246054u;
    // NOP
label_246058:
    // 0x246058: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x246058u;
    {
        const bool branch_taken_0x246058 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24605Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246058u;
            // 0x24605c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246058) {
            ctx->pc = 0x246068u;
            goto label_246068;
        }
    }
    ctx->pc = 0x246060u;
    // 0x246060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x246060u;
    {
        const bool branch_taken_0x246060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246060) {
            ctx->pc = 0x246074u;
            goto label_246074;
        }
    }
    ctx->pc = 0x246068u;
label_246068:
    // 0x246068: 0xc0a79c0  jal         func_29E700
    ctx->pc = 0x246068u;
    SET_GPR_U32(ctx, 31, 0x246070u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246070u; }
        if (ctx->pc != 0x246070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246070u; }
        if (ctx->pc != 0x246070u) { return; }
    }
    ctx->pc = 0x246070u;
label_246070:
    // 0x246070: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x246070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246074:
    // 0x246074: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x246074u;
    {
        const bool branch_taken_0x246074 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x246074) {
            ctx->pc = 0x246080u;
            goto label_246080;
        }
    }
    ctx->pc = 0x24607Cu;
    // 0x24607c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x24607cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_246080:
    // 0x246080: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x246080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246084: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x246084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x246088: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x246088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24608c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24608cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x246090: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x246090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x246094: 0xa0e50013  sb          $a1, 0x13($a3)
    ctx->pc = 0x246094u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x246098: 0xa0e40010  sb          $a0, 0x10($a3)
    ctx->pc = 0x246098u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x24609c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x24609cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x2460a0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2460a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x2460a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2460a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2460a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2460a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2460ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2460ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2460B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2460ACu;
            // 0x2460b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2460B4u;
    // 0x2460b4: 0x0  nop
    ctx->pc = 0x2460b4u;
    // NOP
    // 0x2460b8: 0x0  nop
    ctx->pc = 0x2460b8u;
    // NOP
    // 0x2460bc: 0x0  nop
    ctx->pc = 0x2460bcu;
    // NOP
}
