#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051D930
// Address: 0x51d930 - 0x51d9c0
void sub_0051D930_0x51d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051D930_0x51d930");
#endif

    switch (ctx->pc) {
        case 0x51d97cu: goto label_51d97c;
        case 0x51d9a4u: goto label_51d9a4;
        default: break;
    }

    ctx->pc = 0x51d930u;

    // 0x51d930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x51d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x51d934: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x51d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x51d938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51d93c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51d940: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x51d940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51d944: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51d944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51d948: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x51d948u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x51d94c: 0x8ca30e38  lw          $v1, 0xE38($a1)
    ctx->pc = 0x51d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3640)));
    // 0x51d950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51d950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51d954: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x51D954u;
    {
        const bool branch_taken_0x51d954 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x51D958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D954u;
            // 0x51d958: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d954) {
            ctx->pc = 0x51D96Cu;
            goto label_51d96c;
        }
    }
    ctx->pc = 0x51D95Cu;
    // 0x51d95c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x51d95cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x51d960: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x51D960u;
    {
        const bool branch_taken_0x51d960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d960) {
            ctx->pc = 0x51D96Cu;
            goto label_51d96c;
        }
    }
    ctx->pc = 0x51D968u;
    // 0x51d968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51d96c:
    // 0x51d96c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x51D96Cu;
    {
        const bool branch_taken_0x51d96c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x51d96c) {
            ctx->pc = 0x51D988u;
            goto label_51d988;
        }
    }
    ctx->pc = 0x51D974u;
    // 0x51d974: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x51D974u;
    SET_GPR_U32(ctx, 31, 0x51D97Cu);
    ctx->pc = 0x51D978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D974u;
            // 0x51d978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D97Cu; }
        if (ctx->pc != 0x51D97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D97Cu; }
        if (ctx->pc != 0x51D97Cu) { return; }
    }
    ctx->pc = 0x51D97Cu;
label_51d97c:
    // 0x51d97c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x51D97Cu;
    {
        const bool branch_taken_0x51d97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51d97c) {
            ctx->pc = 0x51D988u;
            goto label_51d988;
        }
    }
    ctx->pc = 0x51D984u;
    // 0x51d984: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x51d984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51d988:
    // 0x51d988: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x51D988u;
    {
        const bool branch_taken_0x51d988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d988) {
            ctx->pc = 0x51D98Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D988u;
            // 0x51d98c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D9A8u;
            goto label_51d9a8;
        }
    }
    ctx->pc = 0x51D990u;
    // 0x51d990: 0x824211aa  lb          $v0, 0x11AA($s2)
    ctx->pc = 0x51d990u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
    // 0x51d994: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x51d994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x51d998: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x51d998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x51d99c: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x51D99Cu;
    SET_GPR_U32(ctx, 31, 0x51D9A4u);
    ctx->pc = 0x51D9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D99Cu;
            // 0x51d9a0: 0x904400c0  lbu         $a0, 0xC0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D9A4u; }
        if (ctx->pc != 0x51D9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D9A4u; }
        if (ctx->pc != 0x51D9A4u) { return; }
    }
    ctx->pc = 0x51D9A4u;
label_51d9a4:
    // 0x51d9a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x51d9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_51d9a8:
    // 0x51d9a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51d9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51d9ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51d9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51d9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51d9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51d9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x51D9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51D9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D9B4u;
            // 0x51d9b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51D9BCu;
    // 0x51d9bc: 0x0  nop
    ctx->pc = 0x51d9bcu;
    // NOP
}
