#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188BD8
// Address: 0x188bd8 - 0x188c48
void sub_00188BD8_0x188bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188BD8_0x188bd8");
#endif

    switch (ctx->pc) {
        case 0x188c00u: goto label_188c00;
        case 0x188c20u: goto label_188c20;
        case 0x188c30u: goto label_188c30;
        default: break;
    }

    ctx->pc = 0x188bd8u;

    // 0x188bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x188BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188BE0u;
    // 0x188be0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x188be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x188be4: 0x3e00008  jr          $ra
    ctx->pc = 0x188BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BE4u;
            // 0x188be8: 0xac4469d8  sw          $a0, 0x69D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188BECu;
    // 0x188bec: 0x0  nop
    ctx->pc = 0x188becu;
    // NOP
    // 0x188bf0: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x188bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x188bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x188BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BF4u;
            // 0x188bf8: 0x8c6269d8  lw          $v0, 0x69D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27096)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188BFCu;
    // 0x188bfc: 0x0  nop
    ctx->pc = 0x188bfcu;
    // NOP
label_188c00:
    // 0x188c00: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x188c04: 0x3e00008  jr          $ra
    ctx->pc = 0x188C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C04u;
            // 0x188c08: 0xac4469dc  sw          $a0, 0x69DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188C0Cu;
    // 0x188c0c: 0x0  nop
    ctx->pc = 0x188c0cu;
    // NOP
    // 0x188c10: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x188c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x188c14: 0x3e00008  jr          $ra
    ctx->pc = 0x188C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C14u;
            // 0x188c18: 0x8c6269dc  lw          $v0, 0x69DC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188C1Cu;
    // 0x188c1c: 0x0  nop
    ctx->pc = 0x188c1cu;
    // NOP
label_188c20:
    // 0x188c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188c28: 0xc062312  jal         func_188C48
    ctx->pc = 0x188C28u;
    SET_GPR_U32(ctx, 31, 0x188C30u);
    ctx->pc = 0x188C48u;
    if (runtime->hasFunction(0x188C48u)) {
        auto targetFn = runtime->lookupFunction(0x188C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C30u; }
        if (ctx->pc != 0x188C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188C48_0x188c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C30u; }
        if (ctx->pc != 0x188C30u) { return; }
    }
    ctx->pc = 0x188C30u;
label_188c30:
    // 0x188c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188c34: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x188c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x188c38: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x188c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x188c3c: 0x8062316  j           func_188C58
    ctx->pc = 0x188C3Cu;
    ctx->pc = 0x188C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C3Cu;
            // 0x188c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188C58u;
    if (runtime->hasFunction(0x188C58u)) {
        auto targetFn = runtime->lookupFunction(0x188C58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188C58_0x188c58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x188C44u;
    // 0x188c44: 0x0  nop
    ctx->pc = 0x188c44u;
    // NOP
}
