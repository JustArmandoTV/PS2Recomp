#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003989D0
// Address: 0x3989d0 - 0x398a80
void sub_003989D0_0x3989d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003989D0_0x3989d0");
#endif

    switch (ctx->pc) {
        case 0x3989f8u: goto label_3989f8;
        case 0x398a00u: goto label_398a00;
        case 0x398a10u: goto label_398a10;
        case 0x398a1cu: goto label_398a1c;
        case 0x398a3cu: goto label_398a3c;
        default: break;
    }

    ctx->pc = 0x3989d0u;

    // 0x3989d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3989d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3989d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3989d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3989d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3989d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3989dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3989dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3989e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3989e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3989e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3989e8: 0x26510070  addiu       $s1, $s2, 0x70
    ctx->pc = 0x3989e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x3989ec: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x3989ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x3989f0: 0xc0e6300  jal         func_398C00
    ctx->pc = 0x3989F0u;
    SET_GPR_U32(ctx, 31, 0x3989F8u);
    ctx->pc = 0x3989F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3989F0u;
            // 0x3989f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398C00u;
    if (runtime->hasFunction(0x398C00u)) {
        auto targetFn = runtime->lookupFunction(0x398C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3989F8u; }
        if (ctx->pc != 0x3989F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398C00_0x398c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3989F8u; }
        if (ctx->pc != 0x3989F8u) { return; }
    }
    ctx->pc = 0x3989F8u;
label_3989f8:
    // 0x3989f8: 0xc0e62ec  jal         func_398BB0
    ctx->pc = 0x3989F8u;
    SET_GPR_U32(ctx, 31, 0x398A00u);
    ctx->pc = 0x3989FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3989F8u;
            // 0x3989fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398BB0u;
    if (runtime->hasFunction(0x398BB0u)) {
        auto targetFn = runtime->lookupFunction(0x398BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398A00u; }
        if (ctx->pc != 0x398A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398BB0_0x398bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398A00u; }
        if (ctx->pc != 0x398A00u) { return; }
    }
    ctx->pc = 0x398A00u;
label_398a00:
    // 0x398a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a04: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x398a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x398a08: 0xc04cc04  jal         func_133010
    ctx->pc = 0x398A08u;
    SET_GPR_U32(ctx, 31, 0x398A10u);
    ctx->pc = 0x398A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398A08u;
            // 0x398a0c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398A10u; }
        if (ctx->pc != 0x398A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398A10u; }
        if (ctx->pc != 0x398A10u) { return; }
    }
    ctx->pc = 0x398A10u;
label_398a10:
    // 0x398a10: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x398a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x398a14: 0xc04c720  jal         func_131C80
    ctx->pc = 0x398A14u;
    SET_GPR_U32(ctx, 31, 0x398A1Cu);
    ctx->pc = 0x398A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398A14u;
            // 0x398a18: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398A1Cu; }
        if (ctx->pc != 0x398A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398A1Cu; }
        if (ctx->pc != 0x398A1Cu) { return; }
    }
    ctx->pc = 0x398A1Cu;
label_398a1c:
    // 0x398a1c: 0xae1201c8  sw          $s2, 0x1C8($s0)
    ctx->pc = 0x398a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 18));
    // 0x398a20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x398a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398a24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x398a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x398a28: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x398a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x398a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x398a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a34: 0xc0e62f8  jal         func_398BE0
    ctx->pc = 0x398A34u;
    SET_GPR_U32(ctx, 31, 0x398A3Cu);
    ctx->pc = 0x398A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398A34u;
            // 0x398a38: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398BE0u;
    if (runtime->hasFunction(0x398BE0u)) {
        auto targetFn = runtime->lookupFunction(0x398BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398A3Cu; }
        if (ctx->pc != 0x398A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398BE0_0x398be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398A3Cu; }
        if (ctx->pc != 0x398A3Cu) { return; }
    }
    ctx->pc = 0x398A3Cu;
label_398a3c:
    // 0x398a3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x398a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398a40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x398a40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398a44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x398a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x398A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398A4Cu;
            // 0x398a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x398A54u;
    // 0x398a54: 0x0  nop
    ctx->pc = 0x398a54u;
    // NOP
    // 0x398a58: 0x0  nop
    ctx->pc = 0x398a58u;
    // NOP
    // 0x398a5c: 0x0  nop
    ctx->pc = 0x398a5cu;
    // NOP
    // 0x398a60: 0x8ca30db0  lw          $v1, 0xDB0($a1)
    ctx->pc = 0x398a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
    // 0x398a64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x398A64u;
    {
        const bool branch_taken_0x398a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x398a64) {
            ctx->pc = 0x398A74u;
            goto label_398a74;
        }
    }
    ctx->pc = 0x398A6Cu;
    // 0x398a6c: 0x8ca30d60  lw          $v1, 0xD60($a1)
    ctx->pc = 0x398a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
    // 0x398a70: 0xa060001c  sb          $zero, 0x1C($v1)
    ctx->pc = 0x398a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 0));
label_398a74:
    // 0x398a74: 0x3e00008  jr          $ra
    ctx->pc = 0x398A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x398A7Cu;
    // 0x398a7c: 0x0  nop
    ctx->pc = 0x398a7cu;
    // NOP
}
