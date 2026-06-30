#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184E48
// Address: 0x184e48 - 0x184ed8
void sub_00184E48_0x184e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184E48_0x184e48");
#endif

    switch (ctx->pc) {
        case 0x184ebcu: goto label_184ebc;
        case 0x184ec4u: goto label_184ec4;
        default: break;
    }

    ctx->pc = 0x184e48u;

    // 0x184e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184e4c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184E4Cu;
    {
        const bool branch_taken_0x184e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x184E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E4Cu;
            // 0x184e50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e4c) {
            ctx->pc = 0x184E70u;
            goto label_184e70;
        }
    }
    ctx->pc = 0x184E54u;
    // 0x184e54: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x184e58: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x184e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x184e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184e60: 0x248479f8  addiu       $a0, $a0, 0x79F8
    ctx->pc = 0x184e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31224));
    // 0x184e64: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x184e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
    // 0x184e68: 0x8061296  j           func_184A58
    ctx->pc = 0x184E68u;
    ctx->pc = 0x184E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184E68u;
            // 0x184e6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184E70u;
label_184e70:
    // 0x184e70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x184e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x184e74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184E74u;
    {
        const bool branch_taken_0x184e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E74u;
            // 0x184e78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e74) {
            ctx->pc = 0x184E98u;
            goto label_184e98;
        }
    }
    ctx->pc = 0x184E7Cu;
    // 0x184e7c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x184e80: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x184e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x184e84: 0x24847a08  addiu       $a0, $a0, 0x7A08
    ctx->pc = 0x184e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31240));
    // 0x184e88: 0x24a579b8  addiu       $a1, $a1, 0x79B8
    ctx->pc = 0x184e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31160));
    // 0x184e8c: 0x8061296  j           func_184A58
    ctx->pc = 0x184E8Cu;
    ctx->pc = 0x184E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184E8Cu;
            // 0x184e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184E94u;
    // 0x184e94: 0x0  nop
    ctx->pc = 0x184e94u;
    // NOP
label_184e98:
    // 0x184e98: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x184e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x184e9c: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x184e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x184ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x184EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EA0u;
            // 0x184ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184EA8u;
    // 0x184ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184eb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x184eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x184eb4: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x184EB4u;
    SET_GPR_U32(ctx, 31, 0x184EBCu);
    ctx->pc = 0x184EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184EB4u;
            // 0x184eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184EBCu; }
        if (ctx->pc != 0x184EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184EBCu; }
        if (ctx->pc != 0x184EBCu) { return; }
    }
    ctx->pc = 0x184EBCu;
label_184ebc:
    // 0x184ebc: 0xc0613b6  jal         func_184ED8
    ctx->pc = 0x184EBCu;
    SET_GPR_U32(ctx, 31, 0x184EC4u);
    ctx->pc = 0x184EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184EBCu;
            // 0x184ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED8u;
    if (runtime->hasFunction(0x184ED8u)) {
        auto targetFn = runtime->lookupFunction(0x184ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184EC4u; }
        if (ctx->pc != 0x184EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184ED8_0x184ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184EC4u; }
        if (ctx->pc != 0x184EC4u) { return; }
    }
    ctx->pc = 0x184EC4u;
label_184ec4:
    // 0x184ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184ec8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x184ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184ecc: 0x8061282  j           func_184A08
    ctx->pc = 0x184ECCu;
    ctx->pc = 0x184ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184ECCu;
            // 0x184ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184ED4u;
    // 0x184ed4: 0x0  nop
    ctx->pc = 0x184ed4u;
    // NOP
}
