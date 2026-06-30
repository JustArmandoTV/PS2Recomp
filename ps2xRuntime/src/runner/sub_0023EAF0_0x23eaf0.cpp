#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023EAF0
// Address: 0x23eaf0 - 0x23ebc0
void sub_0023EAF0_0x23eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EAF0_0x23eaf0");
#endif

    switch (ctx->pc) {
        case 0x23eba8u: goto label_23eba8;
        default: break;
    }

    ctx->pc = 0x23eaf0u;

    // 0x23eaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23eaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23eaf8: 0x90a20028  lbu         $v0, 0x28($a1)
    ctx->pc = 0x23eaf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x23eafc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23eafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23eb00: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x23EB00u;
    {
        const bool branch_taken_0x23eb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eb00) {
            ctx->pc = 0x23EB04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23EB00u;
            // 0x23eb04: 0x8c83002c  lw          $v1, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23EB58u;
            goto label_23eb58;
        }
    }
    ctx->pc = 0x23EB08u;
    // 0x23eb08: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x23eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x23eb0c: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x23eb0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x23eb10: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x23eb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x23eb14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23eb18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23eb1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23eb20: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x23eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23eb24: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x23eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23eb28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eb2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23eb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23eb30: 0x94a60020  lhu         $a2, 0x20($a1)
    ctx->pc = 0x23eb30u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x23eb34: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x23eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x23eb38: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x23eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23eb3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23eb40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23eb44: 0xa4460020  sh          $a2, 0x20($v0)
    ctx->pc = 0x23eb44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x23eb48: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x23eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x23eb4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23eb50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23EB50u;
    {
        const bool branch_taken_0x23eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EB50u;
            // 0x23eb54: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb50) {
            ctx->pc = 0x23EBA0u;
            goto label_23eba0;
        }
    }
    ctx->pc = 0x23EB58u;
label_23eb58:
    // 0x23eb58: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x23eb58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x23eb5c: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x23eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x23eb60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23eb64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23eb68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23eb6c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x23eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23eb70: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x23eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23eb74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eb78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23eb7c: 0x94a60020  lhu         $a2, 0x20($a1)
    ctx->pc = 0x23eb7cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x23eb80: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x23eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x23eb84: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x23eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23eb88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23eb8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23eb90: 0xa4460020  sh          $a2, 0x20($v0)
    ctx->pc = 0x23eb90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x23eb94: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x23eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x23eb98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23eb9c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x23eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_23eba0:
    // 0x23eba0: 0xc090728  jal         func_241CA0
    ctx->pc = 0x23EBA0u;
    SET_GPR_U32(ctx, 31, 0x23EBA8u);
    ctx->pc = 0x241CA0u;
    if (runtime->hasFunction(0x241CA0u)) {
        auto targetFn = runtime->lookupFunction(0x241CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EBA8u; }
        if (ctx->pc != 0x23EBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241CA0_0x241ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EBA8u; }
        if (ctx->pc != 0x23EBA8u) { return; }
    }
    ctx->pc = 0x23EBA8u;
label_23eba8:
    // 0x23eba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23eba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ebac: 0x3e00008  jr          $ra
    ctx->pc = 0x23EBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EBACu;
            // 0x23ebb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EBB4u;
    // 0x23ebb4: 0x0  nop
    ctx->pc = 0x23ebb4u;
    // NOP
    // 0x23ebb8: 0x0  nop
    ctx->pc = 0x23ebb8u;
    // NOP
    // 0x23ebbc: 0x0  nop
    ctx->pc = 0x23ebbcu;
    // NOP
}
