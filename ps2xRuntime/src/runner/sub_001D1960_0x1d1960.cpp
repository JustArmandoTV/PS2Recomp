#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1960
// Address: 0x1d1960 - 0x1d19e0
void sub_001D1960_0x1d1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1960_0x1d1960");
#endif

    switch (ctx->pc) {
        case 0x1d1998u: goto label_1d1998;
        case 0x1d19a0u: goto label_1d19a0;
        default: break;
    }

    ctx->pc = 0x1d1960u;

    // 0x1d1960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d1960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d1964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d1964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d1968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d1968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d196c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1978: 0x808301b5  lb          $v1, 0x1B5($a0)
    ctx->pc = 0x1d1978u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 437)));
    // 0x1d197c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d197cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1980: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x1d1980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d1984: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x1d1984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d1988: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1988u;
    {
        const bool branch_taken_0x1d1988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1988u;
            // 0x1d198c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1988) {
            ctx->pc = 0x1D19B8u;
            goto label_1d19b8;
        }
    }
    ctx->pc = 0x1D1990u;
    // 0x1d1990: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1d1990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1d1994: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x1d1994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d1998:
    // 0x1d1998: 0xc0726e8  jal         func_1C9BA0
    ctx->pc = 0x1D1998u;
    SET_GPR_U32(ctx, 31, 0x1D19A0u);
    ctx->pc = 0x1D199Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1998u;
            // 0x1d199c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9BA0u;
    if (runtime->hasFunction(0x1C9BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1C9BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19A0u; }
        if (ctx->pc != 0x1D19A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9BA0_0x1c9ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19A0u; }
        if (ctx->pc != 0x1D19A0u) { return; }
    }
    ctx->pc = 0x1D19A0u;
label_1d19a0:
    // 0x1d19a0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1d19a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1d19a4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1d19a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d19a8: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x1d19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    // 0x1d19ac: 0x270082a  slt         $at, $s3, $s0
    ctx->pc = 0x1d19acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d19b0: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D19B0u;
    {
        const bool branch_taken_0x1d19b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19B0u;
            // 0x1d19b4: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19b0) {
            ctx->pc = 0x1D1998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1998;
        }
    }
    ctx->pc = 0x1D19B8u;
label_1d19b8:
    // 0x1d19b8: 0xa23001b5  sb          $s0, 0x1B5($s1)
    ctx->pc = 0x1d19b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 437), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d19bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d19bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d19c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d19c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d19c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d19c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d19c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d19c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d19cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d19ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D19D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19D0u;
            // 0x1d19d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D19D8u;
    // 0x1d19d8: 0x0  nop
    ctx->pc = 0x1d19d8u;
    // NOP
    // 0x1d19dc: 0x0  nop
    ctx->pc = 0x1d19dcu;
    // NOP
}
