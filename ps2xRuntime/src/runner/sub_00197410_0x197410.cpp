#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197410
// Address: 0x197410 - 0x197498
void sub_00197410_0x197410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197410_0x197410");
#endif

    switch (ctx->pc) {
        case 0x197420u: goto label_197420;
        default: break;
    }

    ctx->pc = 0x197410u;

    // 0x197410: 0x2489000a  addiu       $t1, $a0, 0xA
    ctx->pc = 0x197410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x197414: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x197414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19741c: 0x0  nop
    ctx->pc = 0x19741cu;
    // NOP
label_197420:
    // 0x197420: 0x24e50010  addiu       $a1, $a3, 0x10
    ctx->pc = 0x197420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x197424: 0x24e4002f  addiu       $a0, $a3, 0x2F
    ctx->pc = 0x197424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 47));
    // 0x197428: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x197428u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19742c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19742cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197430: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x197430u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x197434: 0x28e40000  slti        $a0, $a3, 0x0
    ctx->pc = 0x197434u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x197438: 0x24e6001f  addiu       $a2, $a3, 0x1F
    ctx->pc = 0x197438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x19743c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x19743cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197440: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x197440u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x197444: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x197444u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x197448: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x197448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19744c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x19744cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x197450: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x197450u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x197454: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x197458: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x197458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19745c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x19745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x197460: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x197460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x197464: 0x94650040  lhu         $a1, 0x40($v1)
    ctx->pc = 0x197464u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x197468: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x197468u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x19746c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19746cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x197470: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x197470u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x197474: 0x28e60400  slti        $a2, $a3, 0x400
    ctx->pc = 0x197474u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x197478: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x197478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x19747c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x19747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x197480: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x197480u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x197484: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x197484u;
    {
        const bool branch_taken_0x197484 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x197488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197484u;
            // 0x197488: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197484) {
            ctx->pc = 0x197420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197420;
        }
    }
    ctx->pc = 0x19748Cu;
    // 0x19748c: 0x3e00008  jr          $ra
    ctx->pc = 0x19748Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197494u;
    // 0x197494: 0x0  nop
    ctx->pc = 0x197494u;
    // NOP
}
