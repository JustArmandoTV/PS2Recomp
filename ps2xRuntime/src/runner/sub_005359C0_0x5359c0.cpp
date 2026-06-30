#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005359C0
// Address: 0x5359c0 - 0x535a30
void sub_005359C0_0x5359c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005359C0_0x5359c0");
#endif

    switch (ctx->pc) {
        case 0x5359f0u: goto label_5359f0;
        case 0x535a0cu: goto label_535a0c;
        default: break;
    }

    ctx->pc = 0x5359c0u;

    // 0x5359c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5359c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5359c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5359c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5359c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5359c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5359cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5359ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5359d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5359d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5359d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x5359d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5359d8: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x5359d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x5359dc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x5359dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x5359e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x5359e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x5359e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5359e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5359e8: 0xc04a508  jal         func_129420
    ctx->pc = 0x5359E8u;
    SET_GPR_U32(ctx, 31, 0x5359F0u);
    ctx->pc = 0x5359ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5359E8u;
            // 0x5359ec: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5359F0u; }
        if (ctx->pc != 0x5359F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5359F0u; }
        if (ctx->pc != 0x5359F0u) { return; }
    }
    ctx->pc = 0x5359F0u;
label_5359f0:
    // 0x5359f0: 0xa2300064  sb          $s0, 0x64($s1)
    ctx->pc = 0x5359f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 16));
    // 0x5359f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5359f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5359f8: 0x92250064  lbu         $a1, 0x64($s1)
    ctx->pc = 0x5359f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x5359fc: 0x26260068  addiu       $a2, $s1, 0x68
    ctx->pc = 0x5359fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x535a00: 0x26270338  addiu       $a3, $s1, 0x338
    ctx->pc = 0x535a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
    // 0x535a04: 0xc14d4e0  jal         func_535380
    ctx->pc = 0x535A04u;
    SET_GPR_U32(ctx, 31, 0x535A0Cu);
    ctx->pc = 0x535A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535A04u;
            // 0x535a08: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535380u;
    if (runtime->hasFunction(0x535380u)) {
        auto targetFn = runtime->lookupFunction(0x535380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535A0Cu; }
        if (ctx->pc != 0x535A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535380_0x535380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535A0Cu; }
        if (ctx->pc != 0x535A0Cu) { return; }
    }
    ctx->pc = 0x535A0Cu;
label_535a0c:
    // 0x535a0c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x535a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x535a10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x535a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x535a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x535a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x535a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x535a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x535a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x535A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x535A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535A1Cu;
            // 0x535a20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535A24u;
    // 0x535a24: 0x0  nop
    ctx->pc = 0x535a24u;
    // NOP
    // 0x535a28: 0x0  nop
    ctx->pc = 0x535a28u;
    // NOP
    // 0x535a2c: 0x0  nop
    ctx->pc = 0x535a2cu;
    // NOP
}
