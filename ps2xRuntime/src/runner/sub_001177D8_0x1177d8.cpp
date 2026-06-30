#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001177D8
// Address: 0x1177d8 - 0x117848
void sub_001177D8_0x1177d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001177D8_0x1177d8");
#endif

    ctx->pc = 0x1177d8u;

    // 0x1177d8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1177d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1177dc: 0x2447fa48  addiu       $a3, $v0, -0x5B8
    ctx->pc = 0x1177dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965832));
    // 0x1177e0: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x1177e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1177e4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1177E4u;
    {
        const bool branch_taken_0x1177e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1177e4) {
            ctx->pc = 0x1177F8u;
            goto label_1177f8;
        }
    }
    ctx->pc = 0x1177ECu;
    // 0x1177ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1177ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1177f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1177F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1177F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1177F0u;
            // 0x1177f4: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1177F8u;
label_1177f8:
    // 0x1177f8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1177f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1177fc: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1177fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x117800: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x117800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x117804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x117808: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x117808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x11780c: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x11780cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x117810: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x117810u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x117814: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x117814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x117818: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x117818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x11781c: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x11781cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x117820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x117820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x117824: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x117824u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x117828: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x117828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x11782c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11782cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x117830: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x117830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x117834: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x117834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x117838: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x117838u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x11783c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x117840: 0x3e00008  jr          $ra
    ctx->pc = 0x117840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117840u;
            // 0x117844: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117848u;
}
