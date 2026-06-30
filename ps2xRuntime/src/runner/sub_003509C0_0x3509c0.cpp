#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003509C0
// Address: 0x3509c0 - 0x350a30
void sub_003509C0_0x3509c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003509C0_0x3509c0");
#endif

    switch (ctx->pc) {
        case 0x3509e0u: goto label_3509e0;
        default: break;
    }

    ctx->pc = 0x3509c0u;

    // 0x3509c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3509c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3509c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3509c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3509c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3509c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3509cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3509ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3509d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3509d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3509d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3509d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3509d8: 0xc0b9404  jal         func_2E5010
    ctx->pc = 0x3509D8u;
    SET_GPR_U32(ctx, 31, 0x3509E0u);
    ctx->pc = 0x3509DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3509D8u;
            // 0x3509dc: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3509E0u; }
        if (ctx->pc != 0x3509E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3509E0u; }
        if (ctx->pc != 0x3509E0u) { return; }
    }
    ctx->pc = 0x3509E0u;
label_3509e0:
    // 0x3509e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3509e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3509e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3509e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3509e8: 0x24634160  addiu       $v1, $v1, 0x4160
    ctx->pc = 0x3509e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16736));
    // 0x3509ec: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x3509ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x3509f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3509f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3509f4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3509f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3509f8: 0x90843db0  lbu         $a0, 0x3DB0($a0)
    ctx->pc = 0x3509f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15792)));
    // 0x3509fc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3509fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x350a00: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x350a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x350a04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x350a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350a08: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x350a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x350a0c: 0xa0643db0  sb          $a0, 0x3DB0($v1)
    ctx->pc = 0x350a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 15792), (uint8_t)GPR_U32(ctx, 4));
    // 0x350a10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x350A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350A1Cu;
            // 0x350a20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350A24u;
    // 0x350a24: 0x0  nop
    ctx->pc = 0x350a24u;
    // NOP
    // 0x350a28: 0x0  nop
    ctx->pc = 0x350a28u;
    // NOP
    // 0x350a2c: 0x0  nop
    ctx->pc = 0x350a2cu;
    // NOP
}
