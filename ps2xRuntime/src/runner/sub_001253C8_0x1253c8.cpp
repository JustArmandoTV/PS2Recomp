#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001253C8
// Address: 0x1253c8 - 0x125420
void sub_001253C8_0x1253c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001253C8_0x1253c8");
#endif

    ctx->pc = 0x1253c8u;

    // 0x1253c8: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1253c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1253cc: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x1253ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x1253d0: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x1253d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x1253d4: 0xf75c2  srl         $t6, $t7, 23
    ctx->pc = 0x1253d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 15), 23));
    // 0x1253d8: 0xf67c2  srl         $t4, $t7, 31
    ctx->pc = 0x1253d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x1253dc: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x1253dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x1253e0: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x1253e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x1253e4: 0xacac0004  sw          $t4, 0x4($a1)
    ctx->pc = 0x1253e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 12));
    // 0x1253e8: 0xf79c0  sll         $t7, $t7, 7
    ctx->pc = 0x1253e8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 7));
    // 0x1253ec: 0x15c00004  bnez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1253ECu;
    {
        const bool branch_taken_0x1253ec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1253F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253ECu;
            // 0x1253f0: 0x25ccff81  addiu       $t4, $t6, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253ec) {
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x1253F4u;
    // 0x1253f4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1253f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1253f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1253F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1253FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253F8u;
            // 0x1253fc: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125400u;
label_125400:
    // 0x125400: 0x3c0e4000  lui         $t6, 0x4000
    ctx->pc = 0x125400u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16384 << 16));
    // 0x125404: 0xacac0008  sw          $t4, 0x8($a1)
    ctx->pc = 0x125404u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 12));
    // 0x125408: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x125408u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12540c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x12540cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125410: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x125410u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x125414: 0x3e00008  jr          $ra
    ctx->pc = 0x125414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125414u;
            // 0x125418: 0xacae000c  sw          $t6, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12541Cu;
    // 0x12541c: 0x0  nop
    ctx->pc = 0x12541cu;
    // NOP
}
