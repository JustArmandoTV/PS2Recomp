#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047CA50
// Address: 0x47ca50 - 0x47cb00
void sub_0047CA50_0x47ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CA50_0x47ca50");
#endif

    switch (ctx->pc) {
        case 0x47ca7cu: goto label_47ca7c;
        case 0x47cabcu: goto label_47cabc;
        case 0x47cae4u: goto label_47cae4;
        default: break;
    }

    ctx->pc = 0x47ca50u;

    // 0x47ca50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47ca54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47ca54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ca58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47ca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47ca5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47ca5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47ca60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ca60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47ca64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47ca64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ca68: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x47ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x47ca6c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x47CA6Cu;
    {
        const bool branch_taken_0x47ca6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CA6Cu;
            // 0x47ca70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ca6c) {
            ctx->pc = 0x47CAD8u;
            goto label_47cad8;
        }
    }
    ctx->pc = 0x47CA74u;
    // 0x47ca74: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x47ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x47ca78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x47ca78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47ca7c:
    // 0x47ca7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x47ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x47ca80: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x47CA80u;
    {
        const bool branch_taken_0x47ca80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x47ca80) {
            ctx->pc = 0x47CA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47CA80u;
            // 0x47ca84: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47CACCu;
            goto label_47cacc;
        }
    }
    ctx->pc = 0x47CA88u;
    // 0x47ca88: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x47ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x47ca8c: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x47ca8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47ca90: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x47CA90u;
    {
        const bool branch_taken_0x47ca90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ca90) {
            ctx->pc = 0x47CA94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47CA90u;
            // 0x47ca94: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47CAC0u;
            goto label_47cac0;
        }
    }
    ctx->pc = 0x47CA98u;
    // 0x47ca98: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x47ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x47ca9c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x47ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x47caa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x47caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x47caa4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x47caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x47caa8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x47caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x47caac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47caacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x47cab0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x47cab0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x47cab4: 0xc04a508  jal         func_129420
    ctx->pc = 0x47CAB4u;
    SET_GPR_U32(ctx, 31, 0x47CABCu);
    ctx->pc = 0x47CAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CAB4u;
            // 0x47cab8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CABCu; }
        if (ctx->pc != 0x47CABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CABCu; }
        if (ctx->pc != 0x47CABCu) { return; }
    }
    ctx->pc = 0x47CABCu;
label_47cabc:
    // 0x47cabc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x47cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_47cac0:
    // 0x47cac0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x47cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x47cac4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47CAC4u;
    {
        const bool branch_taken_0x47cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CAC4u;
            // 0x47cac8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cac4) {
            ctx->pc = 0x47CAD8u;
            goto label_47cad8;
        }
    }
    ctx->pc = 0x47CACCu;
label_47cacc:
    // 0x47cacc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x47caccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x47cad0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x47CAD0u;
    {
        const bool branch_taken_0x47cad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47CAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CAD0u;
            // 0x47cad4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cad0) {
            ctx->pc = 0x47CA7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47ca7c;
        }
    }
    ctx->pc = 0x47CAD8u;
label_47cad8:
    // 0x47cad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47cad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cadc: 0xc11f358  jal         func_47CD60
    ctx->pc = 0x47CADCu;
    SET_GPR_U32(ctx, 31, 0x47CAE4u);
    ctx->pc = 0x47CAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CADCu;
            // 0x47cae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CD60u;
    if (runtime->hasFunction(0x47CD60u)) {
        auto targetFn = runtime->lookupFunction(0x47CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CAE4u; }
        if (ctx->pc != 0x47CAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CD60_0x47cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CAE4u; }
        if (ctx->pc != 0x47CAE4u) { return; }
    }
    ctx->pc = 0x47CAE4u;
label_47cae4:
    // 0x47cae4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47cae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47cae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47cae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47caec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47caecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47caf0: 0x3e00008  jr          $ra
    ctx->pc = 0x47CAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CAF0u;
            // 0x47caf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47CAF8u;
    // 0x47caf8: 0x0  nop
    ctx->pc = 0x47caf8u;
    // NOP
    // 0x47cafc: 0x0  nop
    ctx->pc = 0x47cafcu;
    // NOP
}
