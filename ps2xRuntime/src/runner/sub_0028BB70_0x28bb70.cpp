#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028BB70
// Address: 0x28bb70 - 0x28bbf0
void sub_0028BB70_0x28bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BB70_0x28bb70");
#endif

    switch (ctx->pc) {
        case 0x28bbccu: goto label_28bbcc;
        default: break;
    }

    ctx->pc = 0x28bb70u;

    // 0x28bb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28bb74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28bb78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28bb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28bb7c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x28bb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x28bb80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28bb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28bb84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28bb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb88: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x28bb8c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x28bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x28bb90: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x28bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x28bb94: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x28bb94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x28bb98: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x28bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x28bb9c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x28bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x28bba0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x28bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28bba4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28bba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x28bba8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x28bba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x28bbac: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BBACu;
    {
        const bool branch_taken_0x28bbac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x28bbac) {
            ctx->pc = 0x28BBD0u;
            goto label_28bbd0;
        }
    }
    ctx->pc = 0x28BBB4u;
    // 0x28bbb4: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x28bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x28bbb8: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x28bbb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28bbbc: 0x1280a  movz        $a1, $zero, $at
    ctx->pc = 0x28bbbcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x28bbc0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x28bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x28bbc4: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x28BBC4u;
    SET_GPR_U32(ctx, 31, 0x28BBCCu);
    ctx->pc = 0x28BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBC4u;
            // 0x28bbc8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BBCCu; }
        if (ctx->pc != 0x28BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BBCCu; }
        if (ctx->pc != 0x28BBCCu) { return; }
    }
    ctx->pc = 0x28BBCCu;
label_28bbcc:
    // 0x28bbcc: 0x0  nop
    ctx->pc = 0x28bbccu;
    // NOP
label_28bbd0:
    // 0x28bbd0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x28bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x28bbd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28bbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28bbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bbdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x28BBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBE0u;
            // 0x28bbe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BBE8u;
    // 0x28bbe8: 0x0  nop
    ctx->pc = 0x28bbe8u;
    // NOP
    // 0x28bbec: 0x0  nop
    ctx->pc = 0x28bbecu;
    // NOP
}
