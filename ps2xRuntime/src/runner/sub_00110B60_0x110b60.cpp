#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00110B60
// Address: 0x110b60 - 0x110bd0
void sub_00110B60_0x110b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110B60_0x110b60");
#endif

    switch (ctx->pc) {
        case 0x110ba0u: goto label_110ba0;
        case 0x110bb8u: goto label_110bb8;
        default: break;
    }

    ctx->pc = 0x110b60u;

    // 0x110b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x110b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x110b64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x110b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x110b68: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x110b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x110b6c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x110b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x110b70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x110b74: 0x8e02e448  lw          $v0, -0x1BB8($s0)
    ctx->pc = 0x110b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960200)));
    // 0x110b78: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x110B78u;
    {
        const bool branch_taken_0x110b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x110B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110B78u;
            // 0x110b7c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b78) {
            ctx->pc = 0x110BC4u;
            goto label_110bc4;
        }
    }
    ctx->pc = 0x110B80u;
    // 0x110b80: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x110b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x110b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x110b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110b88: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x110b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x110b8c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x110b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x110b90: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x110b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x110b94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x110b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b98: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x110B98u;
    SET_GPR_U32(ctx, 31, 0x110BA0u);
    ctx->pc = 0x110B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110B98u;
            // 0x110b9c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110BA0u; }
        if (ctx->pc != 0x110BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110BA0u; }
        if (ctx->pc != 0x110BA0u) { return; }
    }
    ctx->pc = 0x110BA0u;
label_110ba0:
    // 0x110ba0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x110ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x110ba4: 0xae02e448  sw          $v0, -0x1BB8($s0)
    ctx->pc = 0x110ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960200), GPR_U32(ctx, 2));
    // 0x110ba8: 0x2463eed0  addiu       $v1, $v1, -0x1130
    ctx->pc = 0x110ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962896));
    // 0x110bac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x110bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bb0: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x110BB0u;
    SET_GPR_U32(ctx, 31, 0x110BB8u);
    ctx->pc = 0x110BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110BB0u;
            // 0x110bb4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110BB8u; }
        if (ctx->pc != 0x110BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110BB8u; }
        if (ctx->pc != 0x110BB8u) { return; }
    }
    ctx->pc = 0x110BB8u;
label_110bb8:
    // 0x110bb8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x110bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x110bbc: 0xac62e44c  sw          $v0, -0x1BB4($v1)
    ctx->pc = 0x110bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960204), GPR_U32(ctx, 2));
    // 0x110bc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x110bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_110bc4:
    // 0x110bc4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x110bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x110BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110BC8u;
            // 0x110bcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110BD0u;
}
