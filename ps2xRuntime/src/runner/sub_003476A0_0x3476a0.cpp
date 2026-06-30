#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003476A0
// Address: 0x3476a0 - 0x347700
void sub_003476A0_0x3476a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003476A0_0x3476a0");
#endif

    switch (ctx->pc) {
        case 0x3476d0u: goto label_3476d0;
        case 0x3476e4u: goto label_3476e4;
        default: break;
    }

    ctx->pc = 0x3476a0u;

    // 0x3476a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3476a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3476a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3476a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3476a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3476a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3476ac: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x3476acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
    // 0x3476b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3476b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3476b4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3476b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3476b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3476b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3476bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3476bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3476c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3476c4: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x3476c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x3476c8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3476C8u;
    SET_GPR_U32(ctx, 31, 0x3476D0u);
    ctx->pc = 0x3476CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3476C8u;
            // 0x3476cc: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3476D0u; }
        if (ctx->pc != 0x3476D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3476D0u; }
        if (ctx->pc != 0x3476D0u) { return; }
    }
    ctx->pc = 0x3476D0u;
label_3476d0:
    // 0x3476d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3476d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3476d4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x3476d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3476d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3476d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476dc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3476DCu;
    SET_GPR_U32(ctx, 31, 0x3476E4u);
    ctx->pc = 0x3476E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3476DCu;
            // 0x3476e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3476E4u; }
        if (ctx->pc != 0x3476E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3476E4u; }
        if (ctx->pc != 0x3476E4u) { return; }
    }
    ctx->pc = 0x3476E4u;
label_3476e4:
    // 0x3476e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3476e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3476e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3476ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3476ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3476f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3476F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3476F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3476F0u;
            // 0x3476f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3476F8u;
    // 0x3476f8: 0x0  nop
    ctx->pc = 0x3476f8u;
    // NOP
    // 0x3476fc: 0x0  nop
    ctx->pc = 0x3476fcu;
    // NOP
}
