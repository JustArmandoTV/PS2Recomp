#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016FB88
// Address: 0x16fb88 - 0x16fc30
void sub_0016FB88_0x16fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FB88_0x16fb88");
#endif

    switch (ctx->pc) {
        case 0x16fbacu: goto label_16fbac;
        case 0x16fbb4u: goto label_16fbb4;
        case 0x16fbbcu: goto label_16fbbc;
        case 0x16fbd4u: goto label_16fbd4;
        case 0x16fbf0u: goto label_16fbf0;
        case 0x16fc04u: goto label_16fc04;
        case 0x16fc0cu: goto label_16fc0c;
        default: break;
    }

    ctx->pc = 0x16fb88u;

    // 0x16fb88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16fb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fb8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fb90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16fb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16fb98: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x16fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x16fb9c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16FB9Cu;
    {
        const bool branch_taken_0x16fb9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16fb9c) {
            ctx->pc = 0x16FBA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB9Cu;
            // 0x16fba0: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FBC0u;
            goto label_16fbc0;
        }
    }
    ctx->pc = 0x16FBA4u;
    // 0x16fba4: 0xc0599d2  jal         func_166748
    ctx->pc = 0x16FBA4u;
    SET_GPR_U32(ctx, 31, 0x16FBACu);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBACu; }
        if (ctx->pc != 0x16FBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBACu; }
        if (ctx->pc != 0x16FBACu) { return; }
    }
    ctx->pc = 0x16FBACu;
label_16fbac:
    // 0x16fbac: 0xc05bf0c  jal         func_16FC30
    ctx->pc = 0x16FBACu;
    SET_GPR_U32(ctx, 31, 0x16FBB4u);
    ctx->pc = 0x16FBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBACu;
            // 0x16fbb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FC30u;
    if (runtime->hasFunction(0x16FC30u)) {
        auto targetFn = runtime->lookupFunction(0x16FC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBB4u; }
        if (ctx->pc != 0x16FBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FC30_0x16fc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBB4u; }
        if (ctx->pc != 0x16FBB4u) { return; }
    }
    ctx->pc = 0x16FBB4u;
label_16fbb4:
    // 0x16fbb4: 0xc0599d8  jal         func_166760
    ctx->pc = 0x16FBB4u;
    SET_GPR_U32(ctx, 31, 0x16FBBCu);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBBCu; }
        if (ctx->pc != 0x16FBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBBCu; }
        if (ctx->pc != 0x16FBBCu) { return; }
    }
    ctx->pc = 0x16FBBCu;
label_16fbbc:
    // 0x16fbbc: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x16fbbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_16fbc0:
    // 0x16fbc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fbc4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16FBC4u;
    {
        const bool branch_taken_0x16fbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16fbc4) {
            ctx->pc = 0x16FBC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBC4u;
            // 0x16fbc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FBE0u;
            goto label_16fbe0;
        }
    }
    ctx->pc = 0x16FBCCu;
    // 0x16fbcc: 0xc05beb6  jal         func_16FAD8
    ctx->pc = 0x16FBCCu;
    SET_GPR_U32(ctx, 31, 0x16FBD4u);
    ctx->pc = 0x16FBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBCCu;
            // 0x16fbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FAD8u;
    if (runtime->hasFunction(0x16FAD8u)) {
        auto targetFn = runtime->lookupFunction(0x16FAD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBD4u; }
        if (ctx->pc != 0x16FBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FAD8_0x16fad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBD4u; }
        if (ctx->pc != 0x16FBD4u) { return; }
    }
    ctx->pc = 0x16FBD4u;
label_16fbd4:
    // 0x16fbd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16FBD4u;
    {
        const bool branch_taken_0x16fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBD4u;
            // 0x16fbd8: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbd4) {
            ctx->pc = 0x16FBF4u;
            goto label_16fbf4;
        }
    }
    ctx->pc = 0x16FBDCu;
    // 0x16fbdc: 0x0  nop
    ctx->pc = 0x16fbdcu;
    // NOP
label_16fbe0:
    // 0x16fbe0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FBE0u;
    {
        const bool branch_taken_0x16fbe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16fbe0) {
            ctx->pc = 0x16FBE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBE0u;
            // 0x16fbe4: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FBF4u;
            goto label_16fbf4;
        }
    }
    ctx->pc = 0x16FBE8u;
    // 0x16fbe8: 0xc05bc1a  jal         func_16F068
    ctx->pc = 0x16FBE8u;
    SET_GPR_U32(ctx, 31, 0x16FBF0u);
    ctx->pc = 0x16FBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBE8u;
            // 0x16fbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F068u;
    if (runtime->hasFunction(0x16F068u)) {
        auto targetFn = runtime->lookupFunction(0x16F068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBF0u; }
        if (ctx->pc != 0x16FBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F068_0x16f068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBF0u; }
        if (ctx->pc != 0x16FBF0u) { return; }
    }
    ctx->pc = 0x16FBF0u;
label_16fbf0:
    // 0x16fbf0: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x16fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_16fbf4:
    // 0x16fbf4: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16FBF4u;
    {
        const bool branch_taken_0x16fbf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16fbf4) {
            ctx->pc = 0x16FBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBF4u;
            // 0x16fbf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FC20u;
            goto label_16fc20;
        }
    }
    ctx->pc = 0x16FBFCu;
    // 0x16fbfc: 0xc0599d2  jal         func_166748
    ctx->pc = 0x16FBFCu;
    SET_GPR_U32(ctx, 31, 0x16FC04u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC04u; }
        if (ctx->pc != 0x16FC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC04u; }
        if (ctx->pc != 0x16FC04u) { return; }
    }
    ctx->pc = 0x16FC04u;
label_16fc04:
    // 0x16fc04: 0xc05bf60  jal         func_16FD80
    ctx->pc = 0x16FC04u;
    SET_GPR_U32(ctx, 31, 0x16FC0Cu);
    ctx->pc = 0x16FC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC04u;
            // 0x16fc08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FD80u;
    if (runtime->hasFunction(0x16FD80u)) {
        auto targetFn = runtime->lookupFunction(0x16FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC0Cu; }
        if (ctx->pc != 0x16FC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FD80_0x16fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC0Cu; }
        if (ctx->pc != 0x16FC0Cu) { return; }
    }
    ctx->pc = 0x16FC0Cu;
label_16fc0c:
    // 0x16fc0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fc0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fc10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16fc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fc14: 0x80599d8  j           func_166760
    ctx->pc = 0x16FC14u;
    ctx->pc = 0x16FC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC14u;
            // 0x16fc18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16FC1Cu;
    // 0x16fc1c: 0x0  nop
    ctx->pc = 0x16fc1cu;
    // NOP
label_16fc20:
    // 0x16fc20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16fc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fc24: 0x3e00008  jr          $ra
    ctx->pc = 0x16FC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC24u;
            // 0x16fc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FC2Cu;
    // 0x16fc2c: 0x0  nop
    ctx->pc = 0x16fc2cu;
    // NOP
}
