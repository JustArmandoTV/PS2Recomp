#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0930
// Address: 0x1b0930 - 0x1b0980
void sub_001B0930_0x1b0930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0930_0x1b0930");
#endif

    ctx->pc = 0x1b0930u;

    // 0x1b0930: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b0930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0934: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1b0934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1b0938: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1b0938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b093c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b093cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b0940: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1b0940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1b0944: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1b0944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b0948: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1b0948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1b094c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1b094cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1b0950: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b0950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b0954: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0954u;
    {
        const bool branch_taken_0x1b0954 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B0958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0954u;
            // 0x1b0958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0954) {
            ctx->pc = 0x1B0974u;
            goto label_1b0974;
        }
    }
    ctx->pc = 0x1B095Cu;
    // 0x1b095c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1b095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b0960: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1b0960u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b0964: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x1b0964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1b0968: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b0968u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b096c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b096cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1b0970: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1b0970u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1b0974:
    // 0x1b0974: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B097Cu;
    // 0x1b097c: 0x0  nop
    ctx->pc = 0x1b097cu;
    // NOP
}
