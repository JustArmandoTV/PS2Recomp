#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0468
// Address: 0x1c0468 - 0x1c04d8
void sub_001C0468_0x1c0468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0468_0x1c0468");
#endif

    ctx->pc = 0x1c0468u;

    // 0x1c0468: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c0468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c046c: 0x2464a4c0  addiu       $a0, $v1, -0x5B40
    ctx->pc = 0x1c046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x1c0470: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c0470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0474: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c0474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0478: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c047c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1c047cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1c0480: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c0480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0484: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C0484u;
    {
        const bool branch_taken_0x1c0484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0484u;
            // 0x1c0488: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0484) {
            ctx->pc = 0x1C04C4u;
            goto label_1c04c4;
        }
    }
    ctx->pc = 0x1C048Cu;
    // 0x1c048c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0490: 0x8c45a4c4  lw          $a1, -0x5B3C($v0)
    ctx->pc = 0x1c0490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943940)));
    // 0x1c0494: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0494u;
    {
        const bool branch_taken_0x1c0494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0494u;
            // 0x1c0498: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0494) {
            ctx->pc = 0x1C04C4u;
            goto label_1c04c4;
        }
    }
    ctx->pc = 0x1C049Cu;
    // 0x1c049c: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x1c049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1c04a0: 0x8c43a4c8  lw          $v1, -0x5B38($v0)
    ctx->pc = 0x1c04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943944)));
    // 0x1c04a4: 0x38660c00  xori        $a2, $v1, 0xC00
    ctx->pc = 0x1c04a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3072);
    // 0x1c04a8: 0x306300c7  andi        $v1, $v1, 0xC7
    ctx->pc = 0x1c04a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)199);
    // 0x1c04ac: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C04ACu;
    {
        const bool branch_taken_0x1c04ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C04B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04ACu;
            // 0x1c04b0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04ac) {
            ctx->pc = 0x1C04C4u;
            goto label_1c04c4;
        }
    }
    ctx->pc = 0x1C04B4u;
    // 0x1c04b4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1c04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1c04b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c04bc: 0x8c63b800  lw          $v1, -0x4800($v1)
    ctx->pc = 0x1c04bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948864)));
    // 0x1c04c0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1c04c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1c04c4:
    // 0x1c04c4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1c04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c04c8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C04C8u;
    {
        const bool branch_taken_0x1c04c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c04c8) {
            ctx->pc = 0x1C04CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04C8u;
            // 0x1c04cc: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C04D0u;
            goto label_1c04d0;
        }
    }
    ctx->pc = 0x1C04D0u;
label_1c04d0:
    // 0x1c04d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C04D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C04D8u;
}
