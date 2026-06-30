#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046D9D0
// Address: 0x46d9d0 - 0x46da80
void sub_0046D9D0_0x46d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D9D0_0x46d9d0");
#endif

    switch (ctx->pc) {
        case 0x46da00u: goto label_46da00;
        case 0x46da28u: goto label_46da28;
        case 0x46da50u: goto label_46da50;
        default: break;
    }

    ctx->pc = 0x46d9d0u;

    // 0x46d9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46d9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46d9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46d9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46d9dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x46d9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d9e0: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x46d9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x46d9e4: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x46D9E4u;
    {
        const bool branch_taken_0x46d9e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d9e4) {
            ctx->pc = 0x46D9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46D9E4u;
            // 0x46d9e8: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46DA08u;
            goto label_46da08;
        }
    }
    ctx->pc = 0x46D9ECu;
    // 0x46d9ec: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x46D9ECu;
    {
        const bool branch_taken_0x46d9ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d9ec) {
            ctx->pc = 0x46DA04u;
            goto label_46da04;
        }
    }
    ctx->pc = 0x46D9F4u;
    // 0x46d9f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x46d9f8: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x46D9F8u;
    SET_GPR_U32(ctx, 31, 0x46DA00u);
    ctx->pc = 0x46D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46D9F8u;
            // 0x46d9fc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DA00u; }
        if (ctx->pc != 0x46DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DA00u; }
        if (ctx->pc != 0x46DA00u) { return; }
    }
    ctx->pc = 0x46DA00u;
label_46da00:
    // 0x46da00: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x46da00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_46da04:
    // 0x46da04: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x46da04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_46da08:
    // 0x46da08: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x46da08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x46da0c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x46DA0Cu;
    {
        const bool branch_taken_0x46da0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46da0c) {
            ctx->pc = 0x46DA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46DA0Cu;
            // 0x46da10: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46DA30u;
            goto label_46da30;
        }
    }
    ctx->pc = 0x46DA14u;
    // 0x46da14: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x46DA14u;
    {
        const bool branch_taken_0x46da14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46da14) {
            ctx->pc = 0x46DA2Cu;
            goto label_46da2c;
        }
    }
    ctx->pc = 0x46DA1Cu;
    // 0x46da1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x46da20: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x46DA20u;
    SET_GPR_U32(ctx, 31, 0x46DA28u);
    ctx->pc = 0x46DA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DA20u;
            // 0x46da24: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DA28u; }
        if (ctx->pc != 0x46DA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DA28u; }
        if (ctx->pc != 0x46DA28u) { return; }
    }
    ctx->pc = 0x46DA28u;
label_46da28:
    // 0x46da28: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x46da28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_46da2c:
    // 0x46da2c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x46da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_46da30:
    // 0x46da30: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x46da30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x46da34: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x46DA34u;
    {
        const bool branch_taken_0x46da34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46da34) {
            ctx->pc = 0x46DA38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46DA34u;
            // 0x46da38: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46DA58u;
            goto label_46da58;
        }
    }
    ctx->pc = 0x46DA3Cu;
    // 0x46da3c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x46DA3Cu;
    {
        const bool branch_taken_0x46da3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46da3c) {
            ctx->pc = 0x46DA54u;
            goto label_46da54;
        }
    }
    ctx->pc = 0x46DA44u;
    // 0x46da44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46da44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x46da48: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x46DA48u;
    SET_GPR_U32(ctx, 31, 0x46DA50u);
    ctx->pc = 0x46DA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DA48u;
            // 0x46da4c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DA50u; }
        if (ctx->pc != 0x46DA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DA50u; }
        if (ctx->pc != 0x46DA50u) { return; }
    }
    ctx->pc = 0x46DA50u;
label_46da50:
    // 0x46da50: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x46da50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_46da54:
    // 0x46da54: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x46da54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_46da58:
    // 0x46da58: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x46da58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x46da5c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x46da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x46da60: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x46da60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x46da64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46da64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46da68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46da68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46da6c: 0x3e00008  jr          $ra
    ctx->pc = 0x46DA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46DA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DA6Cu;
            // 0x46da70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46DA74u;
    // 0x46da74: 0x0  nop
    ctx->pc = 0x46da74u;
    // NOP
    // 0x46da78: 0x0  nop
    ctx->pc = 0x46da78u;
    // NOP
    // 0x46da7c: 0x0  nop
    ctx->pc = 0x46da7cu;
    // NOP
}
