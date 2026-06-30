#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051D9C0
// Address: 0x51d9c0 - 0x51da50
void sub_0051D9C0_0x51d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051D9C0_0x51d9c0");
#endif

    switch (ctx->pc) {
        case 0x51da0cu: goto label_51da0c;
        case 0x51da34u: goto label_51da34;
        default: break;
    }

    ctx->pc = 0x51d9c0u;

    // 0x51d9c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x51d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x51d9c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x51d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x51d9c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51d9cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51d9d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x51d9d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51d9d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51d9d8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x51d9d8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x51d9dc: 0x8ca30e38  lw          $v1, 0xE38($a1)
    ctx->pc = 0x51d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3640)));
    // 0x51d9e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51d9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51d9e4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x51D9E4u;
    {
        const bool branch_taken_0x51d9e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x51D9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D9E4u;
            // 0x51d9e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d9e4) {
            ctx->pc = 0x51D9FCu;
            goto label_51d9fc;
        }
    }
    ctx->pc = 0x51D9ECu;
    // 0x51d9ec: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x51d9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x51d9f0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x51D9F0u;
    {
        const bool branch_taken_0x51d9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d9f0) {
            ctx->pc = 0x51D9FCu;
            goto label_51d9fc;
        }
    }
    ctx->pc = 0x51D9F8u;
    // 0x51d9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51d9fc:
    // 0x51d9fc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x51D9FCu;
    {
        const bool branch_taken_0x51d9fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x51d9fc) {
            ctx->pc = 0x51DA18u;
            goto label_51da18;
        }
    }
    ctx->pc = 0x51DA04u;
    // 0x51da04: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x51DA04u;
    SET_GPR_U32(ctx, 31, 0x51DA0Cu);
    ctx->pc = 0x51DA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DA04u;
            // 0x51da08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DA0Cu; }
        if (ctx->pc != 0x51DA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DA0Cu; }
        if (ctx->pc != 0x51DA0Cu) { return; }
    }
    ctx->pc = 0x51DA0Cu;
label_51da0c:
    // 0x51da0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x51DA0Cu;
    {
        const bool branch_taken_0x51da0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51da0c) {
            ctx->pc = 0x51DA18u;
            goto label_51da18;
        }
    }
    ctx->pc = 0x51DA14u;
    // 0x51da14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x51da14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51da18:
    // 0x51da18: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x51DA18u;
    {
        const bool branch_taken_0x51da18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x51da18) {
            ctx->pc = 0x51DA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51DA18u;
            // 0x51da1c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51DA38u;
            goto label_51da38;
        }
    }
    ctx->pc = 0x51DA20u;
    // 0x51da20: 0x824211aa  lb          $v0, 0x11AA($s2)
    ctx->pc = 0x51da20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
    // 0x51da24: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x51da24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x51da28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x51da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x51da2c: 0xc072a56  jal         func_1CA958
    ctx->pc = 0x51DA2Cu;
    SET_GPR_U32(ctx, 31, 0x51DA34u);
    ctx->pc = 0x51DA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DA2Cu;
            // 0x51da30: 0x904400c0  lbu         $a0, 0xC0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DA34u; }
        if (ctx->pc != 0x51DA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DA34u; }
        if (ctx->pc != 0x51DA34u) { return; }
    }
    ctx->pc = 0x51DA34u;
label_51da34:
    // 0x51da34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x51da34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_51da38:
    // 0x51da38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51da38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51da3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51da3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51da40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51da40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51da44: 0x3e00008  jr          $ra
    ctx->pc = 0x51DA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51DA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DA44u;
            // 0x51da48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51DA4Cu;
    // 0x51da4c: 0x0  nop
    ctx->pc = 0x51da4cu;
    // NOP
}
