#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004079B0
// Address: 0x4079b0 - 0x407a80
void sub_004079B0_0x4079b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004079B0_0x4079b0");
#endif

    switch (ctx->pc) {
        case 0x407a28u: goto label_407a28;
        case 0x407a44u: goto label_407a44;
        default: break;
    }

    ctx->pc = 0x4079b0u;

    // 0x4079b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4079b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4079b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4079b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4079b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4079b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4079bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4079bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4079c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4079c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4079c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4079c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4079c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4079c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4079cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4079ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4079d0: 0x9083005c  lbu         $v1, 0x5C($a0)
    ctx->pc = 0x4079d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x4079d4: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x4079D4u;
    {
        const bool branch_taken_0x4079d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4079d4) {
            ctx->pc = 0x4079D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4079D4u;
            // 0x4079d8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407A54u;
            goto label_407a54;
        }
    }
    ctx->pc = 0x4079DCu;
    // 0x4079dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4079dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4079e0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4079e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4079e4: 0x8c4672a0  lw          $a2, 0x72A0($v0)
    ctx->pc = 0x4079e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29344)));
    // 0x4079e8: 0x8c940050  lw          $s4, 0x50($a0)
    ctx->pc = 0x4079e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x4079ec: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4079ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4079f0: 0x8c930058  lw          $s3, 0x58($a0)
    ctx->pc = 0x4079f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4079f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4079f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4079f8: 0x24d20084  addiu       $s2, $a2, 0x84
    ctx->pc = 0x4079f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 132));
    // 0x4079fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4079fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x407a00: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x407a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x407a04: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x407a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x407a08: 0x8c71e378  lw          $s1, -0x1C88($v1)
    ctx->pc = 0x407a08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x407a0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x407a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x407a10: 0x8c50e370  lw          $s0, -0x1C90($v0)
    ctx->pc = 0x407a10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x407a14: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x407a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x407a18: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x407a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x407a1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x407a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x407a20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x407a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x407a24: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x407a24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_407a28:
    // 0x407a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x407a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407a2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x407a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407a30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x407a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407a34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x407a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407a38: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x407a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407a3c: 0xc102148  jal         func_408520
    ctx->pc = 0x407A3Cu;
    SET_GPR_U32(ctx, 31, 0x407A44u);
    ctx->pc = 0x407A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407A3Cu;
            // 0x407a40: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x408520u;
    if (runtime->hasFunction(0x408520u)) {
        auto targetFn = runtime->lookupFunction(0x408520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407A44u; }
        if (ctx->pc != 0x407A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00408520_0x408520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407A44u; }
        if (ctx->pc != 0x407A44u) { return; }
    }
    ctx->pc = 0x407A44u;
label_407a44:
    // 0x407a44: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x407a44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x407a48: 0x1e60fff7  bgtz        $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x407A48u;
    {
        const bool branch_taken_0x407a48 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x407A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407A48u;
            // 0x407a4c: 0x26940170  addiu       $s4, $s4, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407a48) {
            ctx->pc = 0x407A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_407a28;
        }
    }
    ctx->pc = 0x407A50u;
    // 0x407a50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x407a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_407a54:
    // 0x407a54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x407a54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x407a58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x407a58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x407a5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x407a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x407a60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x407a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x407a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x407a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x407a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x407a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x407A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407A6Cu;
            // 0x407a70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407A74u;
    // 0x407a74: 0x0  nop
    ctx->pc = 0x407a74u;
    // NOP
    // 0x407a78: 0x0  nop
    ctx->pc = 0x407a78u;
    // NOP
    // 0x407a7c: 0x0  nop
    ctx->pc = 0x407a7cu;
    // NOP
}
